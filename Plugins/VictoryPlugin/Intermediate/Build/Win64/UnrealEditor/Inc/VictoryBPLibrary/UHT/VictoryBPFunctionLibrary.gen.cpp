// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VictoryBPLibrary/Public/VictoryBPFunctionLibrary.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchCase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ESearchDir();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister();
	VICTORYBPLIBRARY_API UEnum* Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats();
// End Cross Module References
	DEFINE_FUNCTION(URamaVictoryPluginCreateProcessPipe::execPipeIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PipeIsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaVictoryPluginCreateProcessPipe::execReadFromPipe)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PipeContents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadFromPipe(Z_Param_Out_PipeContents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaVictoryPluginCreateProcessPipe::execClosePipe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePipe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URamaVictoryPluginCreateProcessPipe::execCreatePipe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreatePipe();
		P_NATIVE_END;
	}
	void URamaVictoryPluginCreateProcessPipe::StaticRegisterNativesURamaVictoryPluginCreateProcessPipe()
	{
		UClass* Class = URamaVictoryPluginCreateProcessPipe::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePipe", &URamaVictoryPluginCreateProcessPipe::execClosePipe },
			{ "CreatePipe", &URamaVictoryPluginCreateProcessPipe::execCreatePipe },
			{ "PipeIsValid", &URamaVictoryPluginCreateProcessPipe::execPipeIsValid },
			{ "ReadFromPipe", &URamaVictoryPluginCreateProcessPipe::execReadFromPipe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Flow" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe, nullptr, "ClosePipe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics
	{
		struct RamaVictoryPluginCreateProcessPipe_eventCreatePipe_Parms
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
	void Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaVictoryPluginCreateProcessPipe_eventCreatePipe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaVictoryPluginCreateProcessPipe_eventCreatePipe_Parms), &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Flow" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe, nullptr, "CreatePipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::RamaVictoryPluginCreateProcessPipe_eventCreatePipe_Parms), Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics
	{
		struct RamaVictoryPluginCreateProcessPipe_eventPipeIsValid_Parms
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
	void Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaVictoryPluginCreateProcessPipe_eventPipeIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaVictoryPluginCreateProcessPipe_eventPipeIsValid_Parms), &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Flow" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe, nullptr, "PipeIsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::RamaVictoryPluginCreateProcessPipe_eventPipeIsValid_Parms), Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics
	{
		struct RamaVictoryPluginCreateProcessPipe_eventReadFromPipe_Parms
		{
			FString PipeContents;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PipeContents;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_PipeContents = { "PipeContents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RamaVictoryPluginCreateProcessPipe_eventReadFromPipe_Parms, PipeContents), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RamaVictoryPluginCreateProcessPipe_eventReadFromPipe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RamaVictoryPluginCreateProcessPipe_eventReadFromPipe_Parms), &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_PipeContents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Joy Flow" },
		{ "Comment", "/** \n\x09\x09This has exec pins because it is an expensive action and the output is saved/cached on the output pin, whereas a Pure node would repeat the action many times, each time node is accessed.\n\x09\x09\n\x09\x09@Return false if the pipes were not created yet\n\x09\x09\n\x09\x09\xe2\x99\xa5 Rama \n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "This has exec pins because it is an expensive action and the output is saved/cached on the output pin, whereas a Pure node would repeat the action many times, each time node is accessed.\n\n@Return false if the pipes were not created yet\n\n\xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe, nullptr, "ReadFromPipe", nullptr, nullptr, sizeof(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::RamaVictoryPluginCreateProcessPipe_eventReadFromPipe_Parms), Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URamaVictoryPluginCreateProcessPipe);
	UClass* Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister()
	{
		return URamaVictoryPluginCreateProcessPipe::StaticClass();
	}
	struct Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ClosePipe, "ClosePipe" }, // 3387065623
		{ &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_CreatePipe, "CreatePipe" }, // 297536459
		{ &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_PipeIsValid, "PipeIsValid" }, // 4027194983
		{ &Z_Construct_UFunction_URamaVictoryPluginCreateProcessPipe_ReadFromPipe, "ReadFromPipe" }, // 31237209
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09Made With Love By Rama for Use with @VictoryCreateProc\n\x09So that you can receive feedback from your processes.\n\x09\n\x09\xe2\x99\xa5\n\x09\n\x09Rama\n*/" },
		{ "IncludePath", "VictoryBPFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Made With Love By Rama for Use with @VictoryCreateProc\nSo that you can receive feedback from your processes.\n\n\xe2\x99\xa5\n\nRama" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URamaVictoryPluginCreateProcessPipe>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::ClassParams = {
		&URamaVictoryPluginCreateProcessPipe::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe()
	{
		if (!Z_Registration_Info_UClass_URamaVictoryPluginCreateProcessPipe.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URamaVictoryPluginCreateProcessPipe.OuterSingleton, Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URamaVictoryPluginCreateProcessPipe.OuterSingleton;
	}
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<URamaVictoryPluginCreateProcessPipe>()
	{
		return URamaVictoryPluginCreateProcessPipe::StaticClass();
	}
	URamaVictoryPluginCreateProcessPipe::URamaVictoryPluginCreateProcessPipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URamaVictoryPluginCreateProcessPipe);
	URamaVictoryPluginCreateProcessPipe::~URamaVictoryPluginCreateProcessPipe() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJoyImageFormats;
	static UEnum* EJoyImageFormats_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJoyImageFormats.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJoyImageFormats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats, (UObject*)Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("EJoyImageFormats"));
		}
		return Z_Registration_Info_UEnum_EJoyImageFormats.OuterSingleton;
	}
	template<> VICTORYBPLIBRARY_API UEnum* StaticEnum<EJoyImageFormats>()
	{
		return EJoyImageFormats_StaticEnum();
	}
	struct Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enumerators[] = {
		{ "JPG", (int64)JPG },
		{ "PNG", (int64)PNG },
		{ "BMP", (int64)BMP },
		{ "ICO", (int64)ICO },
		{ "EXR", (int64)EXR },
		{ "ICNS", (int64)ICNS },
		{ "JoyImageFormats_Max", (int64)JoyImageFormats_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BMP.DisplayName", "BMP        " },
		{ "BMP.Name", "BMP" },
		{ "EXR.DisplayName", "EXR        " },
		{ "EXR.Name", "EXR" },
		{ "ICNS.DisplayName", "ICNS        " },
		{ "ICNS.Name", "ICNS" },
		{ "ICO.DisplayName", "ICO        " },
		{ "ICO.Name", "ICO" },
		{ "JoyImageFormats_Max.Hidden", "" },
		{ "JoyImageFormats_Max.Name", "JoyImageFormats_Max" },
		{ "JPG.Comment", "/**\n\x09 * Example of a comment inside a custom enum <3 Rama\n\x09 * @see FWalkableSlopeOverride::WalkableSlopeAngle\n\x09 */" },
		{ "JPG.DisplayName", "JPG        " },
		{ "JPG.Name", "JPG" },
		{ "JPG.ToolTip", "Example of a comment inside a custom enum <3 Rama\n@see FWalkableSlopeOverride::WalkableSlopeAngle" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "PNG.DisplayName", "PNG        " },
		{ "PNG.Name", "PNG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
		nullptr,
		"EJoyImageFormats",
		"EJoyImageFormats",
		Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats()
	{
		if (!Z_Registration_Info_UEnum_EJoyImageFormats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJoyImageFormats.InnerSingleton, Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJoyImageFormats.InnerSingleton;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execClosestPointsOnTwoLines)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_closestPointLine2);
		P_GET_STRUCT(FVector,Z_Param_linePoint1);
		P_GET_STRUCT(FVector,Z_Param_lineVec1);
		P_GET_STRUCT(FVector,Z_Param_linePoint2);
		P_GET_STRUCT(FVector,Z_Param_lineVec2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ClosestPointsOnTwoLines(Z_Param_Out_closestPointLine1,Z_Param_Out_closestPointLine2,Z_Param_linePoint1,Z_Param_lineVec1,Z_Param_linePoint2,Z_Param_lineVec2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execClosestPointsOfLineSegments)
	{
		P_GET_STRUCT(FVector,Z_Param_Line1Start);
		P_GET_STRUCT(FVector,Z_Param_Line1End);
		P_GET_STRUCT(FVector,Z_Param_Line2Start);
		P_GET_STRUCT(FVector,Z_Param_Line2End);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint1);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinePoint2);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::ClosestPointsOfLineSegments(Z_Param_Line1Start,Z_Param_Line1End,Z_Param_Line2Start,Z_Param_Line2End,Z_Param_Out_LinePoint1,Z_Param_Out_LinePoint2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Color)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Rotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_STRUCT(FRotator,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Vector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Float)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Int)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Bool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Vector2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Vector2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_String)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Color)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Rotator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Vector)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Float)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Int)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Bool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariableName);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execFlashGameOnTaskBar)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_UBOOL(Z_Param_FlashContinuous);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxFlashCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_FlashFrequencyMilliseconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::FlashGameOnTaskBar(Z_Param_PC,Z_Param_FlashContinuous,Z_Param_MaxFlashCount,Z_Param_FlashFrequencyMilliseconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_OBJECT(AActor,Z_Param_ActorCenter);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfActor(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_ActorCenter,Z_Param_Radius,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UVictoryBPFunctionLibrary::GetClosestActorOfClassInRadiusOfLocation(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Center,Z_Param_Radius,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execClientWindow__GameWindowIsForeGroundInOS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ClientWindow__GameWindowIsForeGroundInOS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_SaveStringToOSClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ToClipboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_SaveStringToOSClipboard(Z_Param_ToClipboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetStringFromOSClipboard)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FromClipboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_GetStringFromOSClipboard(Z_Param_Out_FromClipboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execIsAlphaNumeric)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsAlphaNumeric(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execString__CombineStrings_Multi)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings_Multi(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execString__CombineStrings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StringFirst);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringSecond);
		P_GET_PROPERTY(FStrProperty,Z_Param_Separator);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringFirstLabel);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringSecondLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::String__CombineStrings(Z_Param_StringFirst,Z_Param_StringSecond,Z_Param_Separator,Z_Param_StringFirstLabel,Z_Param_StringSecondLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execHasSubstring)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchIn);
		P_GET_PROPERTY(FStrProperty,Z_Param_Substring);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchCase);
		P_GET_PROPERTY(FByteProperty,Z_Param_SearchDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::HasSubstring(Z_Param_SearchIn,Z_Param_Substring,ESearchCase::Type(Z_Param_SearchCase),ESearchDir::Type(Z_Param_SearchDir));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execLoadStringFromFile)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Result);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringFromFile(Z_Param_Out_Result,Z_Param_FullFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execLoadStringArrayFromFile)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ArraySize);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_UBOOL(Z_Param_ExcludeEmptyLines);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::LoadStringArrayFromFile(Z_Param_Out_StringArray,Z_Param_Out_ArraySize,Z_Param_FullFilePath,Z_Param_ExcludeEmptyLines);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execFileIO__SaveStringArrayToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_JoyfulFileName);
		P_GET_TARRAY(FString,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverWriting);
		P_GET_UBOOL(Z_Param_AllowAppend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringArrayToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting,Z_Param_AllowAppend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execFileIO__SaveStringTextToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveDirectory);
		P_GET_PROPERTY(FStrProperty,Z_Param_JoyfulFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveText);
		P_GET_UBOOL(Z_Param_AllowOverWriting);
		P_GET_UBOOL(Z_Param_AllowAppend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::FileIO__SaveStringTextToFile(Z_Param_SaveDirectory,Z_Param_JoyfulFileName,Z_Param_SaveText,Z_Param_AllowOverWriting,Z_Param_AllowAppend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetNamesOfLoadedLevels)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_NamesOfLoadedLevels);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::GetNamesOfLoadedLevels(Z_Param_WorldContextObject,Z_Param_Out_NamesOfLoadedLevels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execViewport__GetCenterOfViewport)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ThePC);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetCenterOfViewport(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execViewport__GetMousePosition)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ThePC);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__GetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execViewport__SetMousePosition)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ThePC);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Viewport__SetMousePosition(Z_Param_ThePC,Z_Param_Out_PosX,Z_Param_Out_PosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetPixelsArrayFromT2D)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_T2D);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TextureWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TextureHeight);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_PixelArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelsArrayFromT2D(Z_Param_T2D,Z_Param_Out_TextureWidth,Z_Param_Out_TextureHeight,Z_Param_Out_PixelArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetPixelFromT2D)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_T2D);
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_PixelColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetPixelFromT2D(Z_Param_T2D,Z_Param_X,Z_Param_Y,Z_Param_Out_PixelColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_SavePixels)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ImagePixels);
		P_GET_UBOOL(Z_Param_SaveAsBMP);
		P_GET_UBOOL(Z_Param_sRGB);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_SavePixels(Z_Param_FullFilePath,Z_Param_Width,Z_Param_Height,Z_Param_Out_ImagePixels,Z_Param_SaveAsBMP,Z_Param_sRGB,Z_Param_Out_ErrorString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_Get_Pixel)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Pixels);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImageHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_FoundColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_Get_Pixel(Z_Param_Out_Pixels,Z_Param_ImageHeight,Z_Param_x,Z_Param_y,Z_Param_Out_FoundColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile_Pixels)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_PROPERTY(FByteProperty,Z_Param_ImageFormat);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutPixels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile_Pixels(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_Out_OutPixels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execUTCToLocal)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_LocalTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::UTCToLocal(Z_Param_Out_UTCTime,Z_Param_Out_LocalTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetUTCFromUnixTimeStamp)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_UnixTimeStamp);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::GetUTCFromUnixTimeStamp(Z_Param_UnixTimeStamp,Z_Param_Out_UTCTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetUnixTimeStamp)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UTCTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UVictoryBPFunctionLibrary::GetUnixTimeStamp(Z_Param_Out_UTCTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryIsApplicationRunning)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryIsApplicationRunning(Z_Param_ProcessId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryGetApplicationName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ProcessId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVictoryBPFunctionLibrary::VictoryGetApplicationName(Z_Param_ProcessId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryCreateProc)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ProcessId);
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPathOfProgramToRun);
		P_GET_TARRAY(FString,Z_Param_CommandlineArgs);
		P_GET_UBOOL(Z_Param_Detach);
		P_GET_UBOOL(Z_Param_Hidden);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_GET_PROPERTY(FStrProperty,Z_Param_OptionalWorkingDirectory);
		P_GET_OBJECT(URamaVictoryPluginCreateProcessPipe,Z_Param_ReadPipeObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryCreateProc(Z_Param_Out_ProcessId,Z_Param_FullPathOfProgramToRun,Z_Param_CommandlineArgs,Z_Param_Detach,Z_Param_Hidden,Z_Param_Priority,Z_Param_OptionalWorkingDirectory,Z_Param_ReadPipeObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFilesInRootAndAllSubFolders)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_RootFolderFullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFilesInRootAndAllSubFolders(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFiles)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
		P_GET_PROPERTY(FStrProperty,Z_Param_RootFolderFullPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFiles(Z_Param_Out_Files,Z_Param_RootFolderFullPath,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_SetTimeStamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_TimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::Victory_SetTimeStamp(Z_Param_File,Z_Param_Out_TimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_GetFileTimeStamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_GetFileTimeStamp(Z_Param_File);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGenerateUniqueContentRelativeFileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentRelativeFilePath);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ContentRelativeNewFileName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AbsolutePath);
		P_GET_UBOOL(Z_Param_CreateFolderTree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GenerateUniqueContentRelativeFileName(Z_Param_ContentRelativeFilePath,Z_Param_Out_ContentRelativeNewFileName,Z_Param_Out_AbsolutePath,Z_Param_CreateFolderTree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execText_ToInt)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_UBOOL(Z_Param_UseDotForThousands);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToInt(Z_Param_Out_Text,Z_Param_UseDotForThousands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execText_ToFloat)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_GET_UBOOL(Z_Param_UseDotForThousands);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVictoryBPFunctionLibrary::Text_ToFloat(Z_Param_Out_Text,Z_Param_UseDotForThousands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execAccessor__GetPlayerController)
	{
		P_GET_OBJECT(AActor,Z_Param_TheCharacter);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=UVictoryBPFunctionLibrary::Accessor__GetPlayerController(Z_Param_TheCharacter,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execAnimation__GetAimOffsetsFromRotation)
	{
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TheRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Pitch);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsetsFromRotation(Z_Param_AnimBPOwner,Z_Param_Out_TheRotation,Z_Param_Out_Pitch,Z_Param_Out_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execAnimation__GetAimOffsets)
	{
		P_GET_OBJECT(AActor,Z_Param_AnimBPOwner);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Pitch);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Animation__GetAimOffsets(Z_Param_AnimBPOwner,Z_Param_Out_Pitch,Z_Param_Out_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execViewportPositionDeproject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::ViewportPositionDeproject(Z_Param_WorldContextObject,Z_Param_Out_ViewportPosition,Z_Param_Out_OutWorldOrigin,Z_Param_Out_OutWorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetAllBoneNamesBelowBone)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkeletalMeshComp);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartingBoneName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVictoryBPFunctionLibrary::GetAllBoneNamesBelowBone(Z_Param_SkeletalMeshComp,Z_Param_StartingBoneName,Z_Param_Out_BoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execServerTravel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_UBOOL(Z_Param_bSkipNotifyPlayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::ServerTravel(Z_Param_WorldContextObject,Z_Param_MapName,Z_Param_bSkipNotifyPlayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWorldType__InGameInstanceWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InGameInstanceWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWorldType__InPIEWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InPIEWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWorldType__InEditorWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::WorldType__InEditorWorld(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCapture2D_SaveImage)
	{
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCaptureComponent2D_SaveImage)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColour);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_SaveImage(Z_Param_Target,Z_Param_ImagePath,Z_Param_ClearColour);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCapture2D_Project)
	{
		P_GET_OBJECT(ASceneCapture2D,Z_Param_Target);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::Capture2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCaptureComponent2D_Project)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_Target);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutPixelLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::CaptureComponent2D_Project(Z_Param_Target,Z_Param_Location,Z_Param_Out_OutPixelLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFile(Z_Param_FullFilePath,Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFileByExtension)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullFilePath);
		P_GET_PROPERTY(FByteProperty,Z_Param_ImageFormat);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UVictoryBPFunctionLibrary::Victory_LoadTexture2D_FromFileByExtension(Z_Param_FullFilePath,EJoyImageFormats(Z_Param_ImageFormat),Z_Param_Out_IsValid,Z_Param_Out_Width,Z_Param_Out_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySimulateKeyPress)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ThePC);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySimulateKeyPress(Z_Param_ThePC,Z_Param_Key,EInputEvent(Z_Param_EventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySimulateMouseWheel)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySimulateMouseWheel(Z_Param_Out_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execRemoveAllWidgetsOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::RemoveAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execIsWidgetOfClassInViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::IsWidgetOfClassInViewport(Z_Param_WorldContextObject,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetWidgetFromName)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_ParentUserWidget);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetWidgetFromName(Z_Param_ParentUserWidget,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWidgetGetParentOfClass)
	{
		P_GET_OBJECT(UWidget,Z_Param_ChildWidget);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::WidgetGetParentOfClass(Z_Param_ChildWidget,Z_Param_WidgetClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execWidgetGetChildrenOfClass)
	{
		P_GET_OBJECT(UWidget,Z_Param_ParentWidget);
		P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_ChildWidgets);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_UBOOL(Z_Param_bImmediateOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::WidgetGetChildrenOfClass(Z_Param_ParentWidget,Z_Param_Out_ChildWidgets,Z_Param_WidgetClass,Z_Param_bImmediateOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetFirstWidgetOfClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_WidgetClass);
		P_GET_UBOOL(Z_Param_TopLevelOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=UVictoryBPFunctionLibrary::GetFirstWidgetOfClass(Z_Param_WorldContextObject,Z_Param_WidgetClass,Z_Param_TopLevelOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortStringArray)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArray);
		P_GET_TARRAY_REF(FString,Z_Param_Out_StringArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortStringArray(Z_Param_Out_StringArray,Z_Param_Out_StringArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortFloatArray)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArray);
		P_GET_TARRAY_REF(float,Z_Param_Out_FloatArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortFloatArray(Z_Param_Out_FloatArray,Z_Param_Out_FloatArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictorySortIntArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArray);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IntArrayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictorySortIntArray(Z_Param_Out_IntArray,Z_Param_Out_IntArrayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryFloatMinusEquals)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sub);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryFloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryFloatPlusEquals)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Float);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Add);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryFloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryIntMinusEquals)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Int);
		P_GET_PROPERTY(FIntProperty,Z_Param_Sub);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryIntMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execVictoryIntPlusEquals)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Int);
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVictoryBPFunctionLibrary::VictoryIntPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetObjectPath)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UVictoryBPFunctionLibrary::GetObjectPath(Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execLoadObjectFromAssetPath)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_Path);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UVictoryBPFunctionLibrary::LoadObjectFromAssetPath(Z_Param_ObjectClass,Z_Param_Path,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execGetStaticMeshVertexLocations)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Comp);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexPositions);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVictoryBPFunctionLibrary::GetStaticMeshVertexLocations(Z_Param_Comp,Z_Param_Out_VertexPositions,Z_Param_LodIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVictoryBPFunctionLibrary::execCreateStaticMeshAssetFromDynamicMesh)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ContentFolderPath);
		P_GET_OBJECT(UDynamicMeshComponent,Z_Param_DynamicMeshComp);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Status);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_NewAssetFilePath);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UVictoryBPFunctionLibrary::CreateStaticMeshAssetFromDynamicMesh(Z_Param_ContentFolderPath,Z_Param_DynamicMeshComp,Z_Param_Out_Status,Z_Param_Out_NewAssetFilePath,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	void UVictoryBPFunctionLibrary::StaticRegisterNativesUVictoryBPFunctionLibrary()
	{
		UClass* Class = UVictoryBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Accessor__GetPlayerController", &UVictoryBPFunctionLibrary::execAccessor__GetPlayerController },
			{ "Animation__GetAimOffsets", &UVictoryBPFunctionLibrary::execAnimation__GetAimOffsets },
			{ "Animation__GetAimOffsetsFromRotation", &UVictoryBPFunctionLibrary::execAnimation__GetAimOffsetsFromRotation },
			{ "Capture2D_Project", &UVictoryBPFunctionLibrary::execCapture2D_Project },
			{ "Capture2D_SaveImage", &UVictoryBPFunctionLibrary::execCapture2D_SaveImage },
			{ "CaptureComponent2D_Project", &UVictoryBPFunctionLibrary::execCaptureComponent2D_Project },
			{ "CaptureComponent2D_SaveImage", &UVictoryBPFunctionLibrary::execCaptureComponent2D_SaveImage },
			{ "ClientWindow__GameWindowIsForeGroundInOS", &UVictoryBPFunctionLibrary::execClientWindow__GameWindowIsForeGroundInOS },
			{ "ClosestPointsOfLineSegments", &UVictoryBPFunctionLibrary::execClosestPointsOfLineSegments },
			{ "ClosestPointsOnTwoLines", &UVictoryBPFunctionLibrary::execClosestPointsOnTwoLines },
			{ "CreateStaticMeshAssetFromDynamicMesh", &UVictoryBPFunctionLibrary::execCreateStaticMeshAssetFromDynamicMesh },
			{ "FileIO__SaveStringArrayToFile", &UVictoryBPFunctionLibrary::execFileIO__SaveStringArrayToFile },
			{ "FileIO__SaveStringTextToFile", &UVictoryBPFunctionLibrary::execFileIO__SaveStringTextToFile },
			{ "FlashGameOnTaskBar", &UVictoryBPFunctionLibrary::execFlashGameOnTaskBar },
			{ "GenerateUniqueContentRelativeFileName", &UVictoryBPFunctionLibrary::execGenerateUniqueContentRelativeFileName },
			{ "GetAllBoneNamesBelowBone", &UVictoryBPFunctionLibrary::execGetAllBoneNamesBelowBone },
			{ "GetClosestActorOfClassInRadiusOfActor", &UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfActor },
			{ "GetClosestActorOfClassInRadiusOfLocation", &UVictoryBPFunctionLibrary::execGetClosestActorOfClassInRadiusOfLocation },
			{ "GetFirstWidgetOfClass", &UVictoryBPFunctionLibrary::execGetFirstWidgetOfClass },
			{ "GetNamesOfLoadedLevels", &UVictoryBPFunctionLibrary::execGetNamesOfLoadedLevels },
			{ "GetObjectPath", &UVictoryBPFunctionLibrary::execGetObjectPath },
			{ "GetStaticMeshVertexLocations", &UVictoryBPFunctionLibrary::execGetStaticMeshVertexLocations },
			{ "GetUnixTimeStamp", &UVictoryBPFunctionLibrary::execGetUnixTimeStamp },
			{ "GetUTCFromUnixTimeStamp", &UVictoryBPFunctionLibrary::execGetUTCFromUnixTimeStamp },
			{ "GetWidgetFromName", &UVictoryBPFunctionLibrary::execGetWidgetFromName },
			{ "HasSubstring", &UVictoryBPFunctionLibrary::execHasSubstring },
			{ "IsAlphaNumeric", &UVictoryBPFunctionLibrary::execIsAlphaNumeric },
			{ "IsWidgetOfClassInViewport", &UVictoryBPFunctionLibrary::execIsWidgetOfClassInViewport },
			{ "LoadObjectFromAssetPath", &UVictoryBPFunctionLibrary::execLoadObjectFromAssetPath },
			{ "LoadStringArrayFromFile", &UVictoryBPFunctionLibrary::execLoadStringArrayFromFile },
			{ "LoadStringFromFile", &UVictoryBPFunctionLibrary::execLoadStringFromFile },
			{ "RemoveAllWidgetsOfClass", &UVictoryBPFunctionLibrary::execRemoveAllWidgetsOfClass },
			{ "ServerTravel", &UVictoryBPFunctionLibrary::execServerTravel },
			{ "String__CombineStrings", &UVictoryBPFunctionLibrary::execString__CombineStrings },
			{ "String__CombineStrings_Multi", &UVictoryBPFunctionLibrary::execString__CombineStrings_Multi },
			{ "Text_ToFloat", &UVictoryBPFunctionLibrary::execText_ToFloat },
			{ "Text_ToInt", &UVictoryBPFunctionLibrary::execText_ToInt },
			{ "UTCToLocal", &UVictoryBPFunctionLibrary::execUTCToLocal },
			{ "Victory_Get_Pixel", &UVictoryBPFunctionLibrary::execVictory_Get_Pixel },
			{ "Victory_GetFiles", &UVictoryBPFunctionLibrary::execVictory_GetFiles },
			{ "Victory_GetFilesInRootAndAllSubFolders", &UVictoryBPFunctionLibrary::execVictory_GetFilesInRootAndAllSubFolders },
			{ "Victory_GetFileTimeStamp", &UVictoryBPFunctionLibrary::execVictory_GetFileTimeStamp },
			{ "Victory_GetPixelFromT2D", &UVictoryBPFunctionLibrary::execVictory_GetPixelFromT2D },
			{ "Victory_GetPixelsArrayFromT2D", &UVictoryBPFunctionLibrary::execVictory_GetPixelsArrayFromT2D },
			{ "Victory_GetStringFromOSClipboard", &UVictoryBPFunctionLibrary::execVictory_GetStringFromOSClipboard },
			{ "Victory_LoadTexture2D_FromFile", &UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile },
			{ "Victory_LoadTexture2D_FromFile_Pixels", &UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFile_Pixels },
			{ "Victory_LoadTexture2D_FromFileByExtension", &UVictoryBPFunctionLibrary::execVictory_LoadTexture2D_FromFileByExtension },
			{ "Victory_SavePixels", &UVictoryBPFunctionLibrary::execVictory_SavePixels },
			{ "Victory_SaveStringToOSClipboard", &UVictoryBPFunctionLibrary::execVictory_SaveStringToOSClipboard },
			{ "Victory_SetTimeStamp", &UVictoryBPFunctionLibrary::execVictory_SetTimeStamp },
			{ "VictoryCreateProc", &UVictoryBPFunctionLibrary::execVictoryCreateProc },
			{ "VictoryFloatMinusEquals", &UVictoryBPFunctionLibrary::execVictoryFloatMinusEquals },
			{ "VictoryFloatPlusEquals", &UVictoryBPFunctionLibrary::execVictoryFloatPlusEquals },
			{ "VictoryGetApplicationName", &UVictoryBPFunctionLibrary::execVictoryGetApplicationName },
			{ "VictoryGetCustomConfigVar_Bool", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Bool },
			{ "VictoryGetCustomConfigVar_Color", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Color },
			{ "VictoryGetCustomConfigVar_Float", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Float },
			{ "VictoryGetCustomConfigVar_Int", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Int },
			{ "VictoryGetCustomConfigVar_Rotator", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Rotator },
			{ "VictoryGetCustomConfigVar_String", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_String },
			{ "VictoryGetCustomConfigVar_Vector", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Vector },
			{ "VictoryGetCustomConfigVar_Vector2D", &UVictoryBPFunctionLibrary::execVictoryGetCustomConfigVar_Vector2D },
			{ "VictoryIntMinusEquals", &UVictoryBPFunctionLibrary::execVictoryIntMinusEquals },
			{ "VictoryIntPlusEquals", &UVictoryBPFunctionLibrary::execVictoryIntPlusEquals },
			{ "VictoryIsApplicationRunning", &UVictoryBPFunctionLibrary::execVictoryIsApplicationRunning },
			{ "VictorySetCustomConfigVar_Bool", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Bool },
			{ "VictorySetCustomConfigVar_Color", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Color },
			{ "VictorySetCustomConfigVar_Float", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Float },
			{ "VictorySetCustomConfigVar_Int", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Int },
			{ "VictorySetCustomConfigVar_Rotator", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Rotator },
			{ "VictorySetCustomConfigVar_String", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_String },
			{ "VictorySetCustomConfigVar_Vector", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Vector },
			{ "VictorySetCustomConfigVar_Vector2D", &UVictoryBPFunctionLibrary::execVictorySetCustomConfigVar_Vector2D },
			{ "VictorySimulateKeyPress", &UVictoryBPFunctionLibrary::execVictorySimulateKeyPress },
			{ "VictorySimulateMouseWheel", &UVictoryBPFunctionLibrary::execVictorySimulateMouseWheel },
			{ "VictorySortFloatArray", &UVictoryBPFunctionLibrary::execVictorySortFloatArray },
			{ "VictorySortIntArray", &UVictoryBPFunctionLibrary::execVictorySortIntArray },
			{ "VictorySortStringArray", &UVictoryBPFunctionLibrary::execVictorySortStringArray },
			{ "Viewport__GetCenterOfViewport", &UVictoryBPFunctionLibrary::execViewport__GetCenterOfViewport },
			{ "Viewport__GetMousePosition", &UVictoryBPFunctionLibrary::execViewport__GetMousePosition },
			{ "Viewport__SetMousePosition", &UVictoryBPFunctionLibrary::execViewport__SetMousePosition },
			{ "ViewportPositionDeproject", &UVictoryBPFunctionLibrary::execViewportPositionDeproject },
			{ "WidgetGetChildrenOfClass", &UVictoryBPFunctionLibrary::execWidgetGetChildrenOfClass },
			{ "WidgetGetParentOfClass", &UVictoryBPFunctionLibrary::execWidgetGetParentOfClass },
			{ "WorldType__InEditorWorld", &UVictoryBPFunctionLibrary::execWorldType__InEditorWorld },
			{ "WorldType__InGameInstanceWorld", &UVictoryBPFunctionLibrary::execWorldType__InGameInstanceWorld },
			{ "WorldType__InPIEWorld", &UVictoryBPFunctionLibrary::execWorldType__InPIEWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics
	{
		struct VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms
		{
			AActor* TheCharacter;
			bool IsValid;
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheCharacter;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_TheCharacter = { "TheCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms, TheCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_TheCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Character" },
		{ "Comment", "/** Get Player Character's Player Controller. Requires: The Passed in Actor must be a character and it must be a player controlled character. IsValid will tell you if the return value is valid, make sure to do a Branch to confirm this! */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Player Character's Player Controller. Requires: The Passed in Actor must be a character and it must be a player controlled character. IsValid will tell you if the return value is valid, make sure to do a Branch to confirm this!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Accessor__GetPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::VictoryBPFunctionLibrary_eventAccessor__GetPlayerController_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics
	{
		struct VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms
		{
			AActor* AnimBPOwner;
			float Pitch;
			float Yaw;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBPOwner;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_AnimBPOwner = { "AnimBPOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms, AnimBPOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_AnimBPOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Aim Offset" },
		{ "Comment", "/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\\n\\nRetrieves the Aim Offsets Pitch & Yaw Based On the Rotation of the Controller of The Character Owning The Anim Instance.\\n\\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\\n   Returns true if function filled the pitch and yaw vars successfully */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\\n\\nRetrieves the Aim Offsets Pitch & Yaw Based On the Rotation of the Controller of The Character Owning The Anim Instance.\\n\\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\\n   Returns true if function filled the pitch and yaw vars successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Animation__GetAimOffsets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::VictoryBPFunctionLibrary_eventAnimation__GetAimOffsets_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics
	{
		struct VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms
		{
			AActor* AnimBPOwner;
			FRotator TheRotation;
			float Pitch;
			float Yaw;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBPOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TheRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_AnimBPOwner = { "AnimBPOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms, AnimBPOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_TheRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_TheRotation = { "TheRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms, TheRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_TheRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_TheRotation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_AnimBPOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_TheRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Aim Offset" },
		{ "Comment", "/** AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\\n\\nRetrieves the Aim Offsets Pitch & Yaw for the AnimBPOwner Based On the supplied Rotation.\\n\\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\\n    Returns true if function filled the pitch and yaw vars successfully */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "AnimBPOwner - Must be a Character, Conversion Internally For Convenience.\\n\\nRetrieves the Aim Offsets Pitch & Yaw for the AnimBPOwner Based On the supplied Rotation.\\n\\nThe Pitch and Yaw are meant to be used with a Blend Space going from -90,-90 to 90,90.\\n    Returns true if function filled the pitch and yaw vars successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Animation__GetAimOffsetsFromRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::VictoryBPFunctionLibrary_eventAnimation__GetAimOffsetsFromRotation_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics
	{
		struct VictoryBPFunctionLibrary_eventCapture2D_Project_Parms
		{
			ASceneCapture2D* Target;
			FVector Location;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, Target), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCapture2D_Project_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCapture2D_Project_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_OutPixelLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** Contributed by Community Member Kris! */" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Capture2D_Project", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::VictoryBPFunctionLibrary_eventCapture2D_Project_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics
	{
		struct VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms
		{
			ASceneCapture2D* Target;
			FString ImagePath;
			FLinearColor ClearColour;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, Target), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** \n\x09\x09I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game \n\x09\x09\x09<3 Rama. \n\x09\x09\x09\n\x09\x09Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! \n\x09*/" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game\n        <3 Rama.\n\nMake sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Capture2D_SaveImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::VictoryBPFunctionLibrary_eventCapture2D_SaveImage_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics
	{
		struct VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms
		{
			USceneCaptureComponent2D* Target;
			FVector Location;
			FVector2D OutPixelLocation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPixelLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, Target), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_OutPixelLocation = { "OutPixelLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms, OutPixelLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_OutPixelLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** Contributed by Community Member Kris! */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "CaptureComponent2D_Project", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::VictoryBPFunctionLibrary_eventCaptureComponent2D_Project_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics
	{
		struct VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms
		{
			USceneCaptureComponent2D* Target;
			FString ImagePath;
			FLinearColor ClearColour;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColour;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, Target), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour = { "ClearColour", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms, ClearColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ImagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ClearColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|SceneCapture" },
		{ "Comment", "/** \n\x09\x09I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game \n\x09\x09\x09<3 Rama. \n\x09\x09\x09\n\x09\x09Make sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris! \n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "I highly recommend that your Texture Render Target Format be \"RTF RGB8 SRGB\" both so it is compatible, and so it looks the same as in-game\n        <3 Rama.\n\nMake sure to include the appropriate image extension in your file path! Recommended: .bmp, .jpg, .png. Contributed by Community Member Kris!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "CaptureComponent2D_SaveImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::VictoryBPFunctionLibrary_eventCaptureComponent2D_SaveImage_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics
	{
		struct VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms
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
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Is the Current Game Window the Foreground window in the OS, or in the Editor? This will be accurate in standalone running of the game as well as in the editor PIE */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Is the Current Game Window the Foreground window in the OS, or in the Editor? This will be accurate in standalone running of the game as well as in the editor PIE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ClientWindow__GameWindowIsForeGroundInOS", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::VictoryBPFunctionLibrary_eventClientWindow__GameWindowIsForeGroundInOS_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics
	{
		struct VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms
		{
			FVector Line1Start;
			FVector Line1End;
			FVector Line2Start;
			FVector Line2End;
			FVector LinePoint1;
			FVector LinePoint2;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line1Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line1End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line2Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Line2End;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinePoint1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinePoint2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1Start = { "Line1Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1End = { "Line1End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line1End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2Start = { "Line2Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2End = { "Line2End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, Line2End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint1 = { "LinePoint1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint2 = { "LinePoint2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms, LinePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line1End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_Line2End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::NewProp_LinePoint2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector|Intersection" },
		{ "Comment", "/**\n\x09* Find closest points between 2 line segments.\n\x09* @param\x09(Line1Start, Line1End)\x09""defines the first line segment.\n\x09* @param\x09(Line2Start, Line2End)\x09""defines the second line segment.\n\x09* @param\x09LinePoint1\x09\x09""Closest point on segment 1 to segment 2.\n\x09* @param\x09LinePoint2\x09\x09""Closest point on segment 2 to segment 1.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Find closest points between 2 line segments.\n@param        (Line1Start, Line1End)  defines the first line segment.\n@param        (Line2Start, Line2End)  defines the second line segment.\n@param        LinePoint1              Closest point on segment 1 to segment 2.\n@param        LinePoint2              Closest point on segment 2 to segment 1." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ClosestPointsOfLineSegments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::VictoryBPFunctionLibrary_eventClosestPointsOfLineSegments_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics
	{
		struct VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms
		{
			FVector closestPointLine1;
			FVector closestPointLine2;
			FVector linePoint1;
			FVector lineVec1;
			FVector linePoint2;
			FVector lineVec2;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestPointLine1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_closestPointLine2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_linePoint1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_lineVec1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_linePoint2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_lineVec2;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine1 = { "closestPointLine1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine2 = { "closestPointLine2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, closestPointLine2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint1 = { "linePoint1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec1 = { "lineVec1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint2 = { "linePoint2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, linePoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec2 = { "lineVec2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms, lineVec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_closestPointLine2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_linePoint2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_lineVec2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|TK-Master Math|Vector" },
		{ "Comment", "/*\n\x09* Calculate the closest points between two infinitely long lines.\n\x09* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.\n\x09* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.\n\x09* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.\n\x09* @param linePoint1 Line point of the first line.\n\x09* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.\n\x09* @param linePoint2 Line point of the second line.\n\x09* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.\n\x09* @return true if lines are parallel, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "* Calculate the closest points between two infinitely long lines.\n* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.\n* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.\n* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.\n* @param linePoint1 Line point of the first line.\n* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.\n* @param linePoint2 Line point of the second line.\n* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.\n* @return true if lines are parallel, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ClosestPointsOnTwoLines", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::VictoryBPFunctionLibrary_eventClosestPointsOnTwoLines_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics
	{
		struct VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms
		{
			FString ContentFolderPath;
			UDynamicMeshComponent* DynamicMeshComp;
			FString Status;
			FString NewAssetFilePath;
			bool Success;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentFolderPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewAssetFilePath;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_ContentFolderPath = { "ContentFolderPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms, ContentFolderPath), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_DynamicMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_DynamicMeshComp = { "DynamicMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms, DynamicMeshComp), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_DynamicMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_DynamicMeshComp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms, Status), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_NewAssetFilePath = { "NewAssetFilePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms, NewAssetFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_ContentFolderPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_DynamicMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_NewAssetFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "RamaCode" },
		{ "Comment", "/** Yes!!! For Real!!! \n\x09\x09\x09\xe2\x99\xa5 Rama\n\x09\x09PS: If you find the new asset has a pivot point far from itself, I recommend moving the mesh to world origin (0,0,0) in level viewport before saving \n\x09\x09\n\x09\x09PSS: Only works in Editor Builds by the way, see UE5 C++ Source file: \n\x09\x09\x09UE_5.0\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponentsEditorOnly\\PublicEditorModelingObjectsCreationAPI.h \n\x09\x09\x09\x09""for more info! \n\x09\x09\x09\n\x09\x09@param ContentFolderPath If this is just a name (there is no need to add a \".uasset\" file extension to the name), the Static Mesh Asset will be created in your game's Content root directory (folder)! If the path is YourFolder/YourAssetName, then the asset will be created in your chosen folder (within Content Folder), I create the folder if necessary, using GenericPlatformFile::CreateDirectoryTree, my very first UE Engine Github C++ code gifts! \xe2\x99\xa5 Rama\n\x09\x09@param Status more info about reason for operation not succeeding, or a special Success Message!\n\x09*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Yes!!! For Real!!!\n                      \xe2\x99\xa5 Rama\n              PS: If you find the new asset has a pivot point far from itself, I recommend moving the mesh to world origin (0,0,0) in level viewport before saving\n\n              PSS: Only works in Editor Builds by the way, see UE5 C++ Source file:\n                      UE_5.0\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponentsEditorOnly\\PublicEditorModelingObjectsCreationAPI.h\n                              for more info!\n\n              @param ContentFolderPath If this is just a name (there is no need to add a \".uasset\" file extension to the name), the Static Mesh Asset will be created in your game's Content root directory (folder)! If the path is YourFolder/YourAssetName, then the asset will be created in your chosen folder (within Content Folder), I create the folder if necessary, using GenericPlatformFile::CreateDirectoryTree, my very first UE Engine Github C++ code gifts! \xe2\x99\xa5 Rama\n              @param Status more info about reason for operation not succeeding, or a special Success Message!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "CreateStaticMeshAssetFromDynamicMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::VictoryBPFunctionLibrary_eventCreateStaticMeshAssetFromDynamicMesh_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms
		{
			FString SaveDirectory;
			FString JoyfulFileName;
			TArray<FString> SaveText;
			bool AllowOverWriting;
			bool AllowAppend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JoyfulFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveText_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SaveText;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static void NewProp_AllowAppend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowAppend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_JoyfulFileName = { "JoyfulFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms, JoyfulFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveText_Inner = { "SaveText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms, SaveText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowAppend_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms*)Obj)->AllowAppend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowAppend = { "AllowAppend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowAppend_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_JoyfulFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_SaveText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowOverWriting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_AllowAppend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Saves multiple Strings to filename of your choosing, with each string on its own line! Make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\\MyGameDir\\BPSavedTextFiles */" },
		{ "CPP_Default_AllowAppend", "false" },
		{ "CPP_Default_AllowOverWriting", "false" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Saves multiple Strings to filename of your choosing, with each string on its own line! Make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\\MyGameDir\\BPSavedTextFiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "FileIO__SaveStringArrayToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::VictoryBPFunctionLibrary_eventFileIO__SaveStringArrayToFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms
		{
			FString SaveDirectory;
			FString JoyfulFileName;
			FString SaveText;
			bool AllowOverWriting;
			bool AllowAppend;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_JoyfulFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveText;
		static void NewProp_AllowOverWriting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowOverWriting;
		static void NewProp_AllowAppend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowAppend;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_SaveDirectory = { "SaveDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms, SaveDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_JoyfulFileName = { "JoyfulFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms, JoyfulFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_SaveText = { "SaveText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms, SaveText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowOverWriting_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms*)Obj)->AllowOverWriting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowOverWriting = { "AllowOverWriting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowOverWriting_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowAppend_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms*)Obj)->AllowAppend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowAppend = { "AllowAppend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowAppend_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_SaveDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_JoyfulFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_SaveText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowOverWriting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_AllowAppend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Saves text to filename of your choosing, make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\\MyGameDir\\BPSavedTextFiles */" },
		{ "CPP_Default_AllowAppend", "false" },
		{ "CPP_Default_AllowOverWriting", "false" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Saves text to filename of your choosing, make sure include whichever file extension you want in the filename, ex: SelfNotes.txt . Make sure to include the entire file path in the save directory, ex: C:\\MyGameDir\\BPSavedTextFiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "FileIO__SaveStringTextToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::VictoryBPFunctionLibrary_eventFileIO__SaveStringTextToFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics
	{
		struct VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms
		{
			APlayerController* PC;
			bool FlashContinuous;
			int32 MaxFlashCount;
			int32 FlashFrequencyMilliseconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_FlashContinuous_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FlashContinuous;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFlashCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FlashFrequencyMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms*)Obj)->FlashContinuous = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous = { "FlashContinuous", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_MaxFlashCount = { "MaxFlashCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, MaxFlashCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashFrequencyMilliseconds = { "FlashFrequencyMilliseconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms, FlashFrequencyMilliseconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashContinuous,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_MaxFlashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::NewProp_FlashFrequencyMilliseconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Flashes the game on the windows OS task bar! Please note this won't look the best in PIE, flashing is smoother in Standalone or packaged game. You can use GameWindowIsForeGroundInOS to see if there is a need to get the user's attention! <3 Rama */" },
		{ "CPP_Default_FlashContinuous", "false" },
		{ "CPP_Default_FlashFrequencyMilliseconds", "500" },
		{ "CPP_Default_MaxFlashCount", "3" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Flashes the game on the windows OS task bar! Please note this won't look the best in PIE, flashing is smoother in Standalone or packaged game. You can use GameWindowIsForeGroundInOS to see if there is a need to get the user's attention! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "FlashGameOnTaskBar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::VictoryBPFunctionLibrary_eventFlashGameOnTaskBar_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics
	{
		struct VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms
		{
			FString ContentRelativeFilePath;
			FString ContentRelativeNewFileName;
			FString AbsolutePath;
			bool CreateFolderTree;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentRelativeFilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentRelativeNewFileName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
		static void NewProp_CreateFolderTree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateFolderTree;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ContentRelativeFilePath = { "ContentRelativeFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms, ContentRelativeFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ContentRelativeNewFileName = { "ContentRelativeNewFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms, ContentRelativeNewFileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms, AbsolutePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_CreateFolderTree_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms*)Obj)->CreateFolderTree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_CreateFolderTree = { "CreateFolderTree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_CreateFolderTree_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ContentRelativeFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ContentRelativeNewFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_AbsolutePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_CreateFolderTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** \n\x09\x09@CreateFolderTree I make sure the path you have supplied, relative to Project Content Folder, is created if you set this to true! \xe2\x99\xa5 Rama \n\x09\x09@return false if Folder Tree could not be created, see \"AbsolutePath\" to see what folder tree structure was attempted.\n\x09\x09""Creates an unused filename, Given a basefile name that is relative to Content Folder of Project (So if you supply \"YourFolder/BaseFile.EXT\", this file would be actually be located in YourProjectFolder/Content/YourFolder/BaseFile.EXT), adding a number BaseFile1, BaseFile2, BaseFile3, as needed until a unique filename is generated! \n\x09*/" },
		{ "CPP_Default_CreateFolderTree", "true" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "@CreateFolderTree I make sure the path you have supplied, relative to Project Content Folder, is created if you set this to true! \xe2\x99\xa5 Rama\n@return false if Folder Tree could not be created, see \"AbsolutePath\" to see what folder tree structure was attempted.\nCreates an unused filename, Given a basefile name that is relative to Content Folder of Project (So if you supply \"YourFolder/BaseFile.EXT\", this file would be actually be located in YourProjectFolder/Content/YourFolder/BaseFile.EXT), adding a number BaseFile1, BaseFile2, BaseFile3, as needed until a unique filename is generated!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GenerateUniqueContentRelativeFileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::VictoryBPFunctionLibrary_eventGenerateUniqueContentRelativeFileName_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms
		{
			USkeletalMeshComponent* SkeletalMeshComp;
			FName StartingBoneName;
			TArray<FName> BoneNames;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartingBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_StartingBoneName = { "StartingBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, StartingBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_SkeletalMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_StartingBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Get All Bone Names Below Bone, requires a physics asset, by Rama\n\x09 *\n\x09 * @param StartingBoneName The name of the bone to find all bones below.\n\x09 *\n\x09 * @param BoneNames , all of the bone names below the starting bone.\n\x09 *\n\x09 * @return total number of bones found\n\x09 */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get All Bone Names Below Bone, requires a physics asset, by Rama\n\n@param StartingBoneName The name of the bone to find all bones below.\n\n@param BoneNames , all of the bone names below the starting bone.\n\n@return total number of bones found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetAllBoneNamesBelowBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::VictoryBPFunctionLibrary_eventGetAllBoneNamesBelowBone_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			AActor* ActorCenter;
			float Radius;
			bool IsValid;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorCenter;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorCenter = { "ActorCenter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ActorCenter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ActorCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|AI" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetClosestActorOfClassInRadiusOfActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfActor_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FVector Center;
			float Radius;
			bool IsValid;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|AI" },
		{ "Comment", "//~~~~~~~~~~~~~~\n// \x09    AI\n//~~~~~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "AI" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetClosestActorOfClassInRadiusOfLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::VictoryBPFunctionLibrary_eventGetClosestActorOfClassInRadiusOfLocation_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UUserWidget>  WidgetClass;
			bool TopLevelOnly;
			UUserWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_TopLevelOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TopLevelOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms*)Obj)->TopLevelOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly = { "TopLevelOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_TopLevelOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "Comment", "/**\n\x09 * Find first widget of a certain class and return it.\n\x09 * @param WidgetClass The widget class to filter by.\n\x09 * @param TopLevelOnly Only a widget that is a direct child of the viewport will be returned.\n\x09 */" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Find first widget of a certain class and return it.\n@param WidgetClass The widget class to filter by.\n@param TopLevelOnly Only a widget that is a direct child of the viewport will be returned." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetFirstWidgetOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::VictoryBPFunctionLibrary_eventGetFirstWidgetOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetNamesOfLoadedLevels_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> NamesOfLoadedLevels;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamesOfLoadedLevels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamesOfLoadedLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetNamesOfLoadedLevels_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_NamesOfLoadedLevels_Inner = { "NamesOfLoadedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_NamesOfLoadedLevels = { "NamesOfLoadedLevels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetNamesOfLoadedLevels_Parms, NamesOfLoadedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_NamesOfLoadedLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::NewProp_NamesOfLoadedLevels,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** Get the names of all currently loaded and visible levels! */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get the names of all currently loaded and visible levels!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetNamesOfLoadedLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::VictoryBPFunctionLibrary_eventGetNamesOfLoadedLevels_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetObjectPath_Parms
		{
			UObject* Obj;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetObjectPath_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetObjectPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Misc" },
		{ "Comment", "/** Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Uses the same format as I use for LoadObjectFromAssetPath! Use this node to get the asset path of objects in the world! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::VictoryBPFunctionLibrary_eventGetObjectPath_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms
		{
			UStaticMeshComponent* Comp;
			TArray<FVector> VertexPositions;
			int32 LodIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexPositions_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexPositions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms, Comp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_VertexPositions_Inner = { "VertexPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_VertexPositions = { "VertexPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms, VertexPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_Comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_VertexPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_VertexPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Actor" },
		{ "Comment", "/** Obtain the scaled,rotated, and translated vertex positions for any static mesh! Returns false if operation could not occur because the comp or static mesh asset was invalid. <3 Rama */" },
		{ "CPP_Default_LodIndex", "0" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Obtain the scaled,rotated, and translated vertex positions for any static mesh! Returns false if operation could not occur because the comp or static mesh asset was invalid. <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetStaticMeshVertexLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::VictoryBPFunctionLibrary_eventGetStaticMeshVertexLocations_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetUnixTimeStamp_Parms
		{
			FDateTime UTCTime;
			int64 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UTCTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UTCTime;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_UTCTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_UTCTime = { "UTCTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetUnixTimeStamp_Parms, UTCTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_UTCTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_UTCTime_MetaData)) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetUnixTimeStamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_UTCTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/* Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetUnixTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::VictoryBPFunctionLibrary_eventGetUnixTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetUTCFromUnixTimeStamp_Parms
		{
			int64 UnixTimeStamp;
			FDateTime UTCTime;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_UnixTimeStamp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UTCTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::NewProp_UnixTimeStamp = { "UnixTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetUTCFromUnixTimeStamp_Parms, UnixTimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::NewProp_UTCTime = { "UTCTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetUTCFromUnixTimeStamp_Parms, UTCTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::NewProp_UnixTimeStamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::NewProp_UTCTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/* Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama*/" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Blueprints does not support int64 so at some pt in future int32 will not be enough, probably by then dolphins will rule the world, or UE4 BP will support int64, or both!  <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetUTCFromUnixTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::VictoryBPFunctionLibrary_eventGetUTCFromUnixTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics
	{
		struct VictoryBPFunctionLibrary_eventGetWidgetFromName_Parms
		{
			UUserWidget* ParentUserWidget;
			FName Name;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentUserWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ParentUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ParentUserWidget = { "ParentUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetWidgetFromName_Parms, ParentUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ParentUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ParentUserWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetWidgetFromName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventGetWidgetFromName_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ParentUserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "DefaultToSelf", "ParentUserWidget" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "GetWidgetFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::VictoryBPFunctionLibrary_eventGetWidgetFromName_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics
	{
		struct VictoryBPFunctionLibrary_eventHasSubstring_Parms
		{
			FString SearchIn;
			FString Substring;
			TEnumAsByte<ESearchCase::Type> SearchCase;
			TEnumAsByte<ESearchDir::Type> SearchDir;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchIn_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Substring_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Substring;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchCase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchIn = { "SearchIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventHasSubstring_Parms, SearchIn), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_Substring_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_Substring = { "Substring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventHasSubstring_Parms, Substring), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_Substring_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_Substring_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchCase = { "SearchCase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventHasSubstring_Parms, SearchCase), Z_Construct_UEnum_CoreUObject_ESearchCase, METADATA_PARAMS(nullptr, 0) }; // 1578437248
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchDir = { "SearchDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventHasSubstring_Parms, SearchDir), Z_Construct_UEnum_CoreUObject_ESearchDir, METADATA_PARAMS(nullptr, 0) }; // 3439898328
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventHasSubstring_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventHasSubstring_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_Substring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchCase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_SearchDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "/**\n\x09 * Returns whether or not the SearchIn string contains the supplied Substring.\n\x09 * \x09""Ex: \"cat\" is a contained within \"concatenation\" as a substring.\n\x09 * @param SearchIn The string to search within\n\x09 * @param Substring The string to look for in the SearchIn string\n\x09 * @param bUseCase Whether or not to be case-sensitive\n\x09 * @param bSearchFromEnd Whether or not to start the search from the end of the string instead of the beginning\n\x09 */" },
		{ "CPP_Default_SearchCase", "IgnoreCase" },
		{ "CPP_Default_SearchDir", "FromStart" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the SearchIn string contains the supplied Substring.\n     Ex: \"cat\" is a contained within \"concatenation\" as a substring.\n@param SearchIn The string to search within\n@param Substring The string to look for in the SearchIn string\n@param bUseCase Whether or not to be case-sensitive\n@param bSearchFromEnd Whether or not to start the search from the end of the string instead of the beginning" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "HasSubstring", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::VictoryBPFunctionLibrary_eventHasSubstring_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics
	{
		struct VictoryBPFunctionLibrary_eventIsAlphaNumeric_Parms
		{
			FString String;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventIsAlphaNumeric_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_String_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventIsAlphaNumeric_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventIsAlphaNumeric_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "//~~~~~~~~~~\n// \x09OS\n//~~~~~~~~~~\n" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "OS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "IsAlphaNumeric", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::VictoryBPFunctionLibrary_eventIsAlphaNumeric_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics
	{
		struct VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UUserWidget>  WidgetClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "IsWidgetOfClassInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::VictoryBPFunctionLibrary_eventIsWidgetOfClassInViewport_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics
	{
		struct VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms
		{
			TSubclassOf<UObject>  ObjectClass;
			FName Path;
			bool IsValid;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Misc" },
		{ "Comment", "/** The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "The FName that is expected is the exact same format as when you right click on asset -> Copy Reference! You can directly paste copied references into this node! IsValid lets you know if the path was correct or not and I was able to load the object. MAKE SURE TO SAVE THE RETURNED OBJECT AS A VARIABLE. Otherwise your shiny new asset will get garbage collected. I recommend you cast the return value to the appropriate object and then promote it to a variable :)  -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "LoadObjectFromAssetPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::VictoryBPFunctionLibrary_eventLoadObjectFromAssetPath_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms
		{
			TArray<FString> StringArray;
			int32 ArraySize;
			FString FullFilePath;
			bool ExcludeEmptyLines;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArraySize;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static void NewProp_ExcludeEmptyLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeEmptyLines;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ArraySize = { "ArraySize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms, ArraySize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms, FullFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ExcludeEmptyLines_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms*)Obj)->ExcludeEmptyLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ExcludeEmptyLines = { "ExcludeEmptyLines", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ExcludeEmptyLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ArraySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ExcludeEmptyLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Loads a text file from hard disk and parses it into a String array, where each entry in the string array is 1 line from the text file. Option to exclude lines that are only whitespace characters or '\\n'. Returns the size of the final String Array that was created. Returns false if the file could be loaded from hard disk. */" },
		{ "CPP_Default_ExcludeEmptyLines", "false" },
		{ "CPP_Default_FullFilePath", "Enter Full File Path" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Loads a text file from hard disk and parses it into a String array, where each entry in the string array is 1 line from the text file. Option to exclude lines that are only whitespace characters or '\\n'. Returns the size of the final String Array that was created. Returns false if the file could be loaded from hard disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "LoadStringArrayFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::VictoryBPFunctionLibrary_eventLoadStringArrayFromFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms
		{
			FString Result;
			FString FullFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms, FullFilePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Load a text file to a single string that you can use ParseIntoArray on newline characters if you want same format as LoadStringArrayFromFile. This version supports unicode characters! */" },
		{ "CPP_Default_FullFilePath", "Enter Full File Path" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a text file to a single string that you can use ParseIntoArray on newline characters if you want same format as LoadStringArrayFromFile. This version supports unicode characters!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "LoadStringFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::VictoryBPFunctionLibrary_eventLoadStringFromFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventRemoveAllWidgetsOfClass_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<UUserWidget>  WidgetClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventRemoveAllWidgetsOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventRemoveAllWidgetsOfClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::NewProp_WidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "Comment", "/** Remove all widgets of a certain class from viewport! */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Remove all widgets of a certain class from viewport!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "RemoveAllWidgetsOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::VictoryBPFunctionLibrary_eventRemoveAllWidgetsOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics
	{
		struct VictoryBPFunctionLibrary_eventServerTravel_Parms
		{
			UObject* WorldContextObject;
			FString MapName;
			bool bSkipNotifyPlayers;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
		static void NewProp_bSkipNotifyPlayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipNotifyPlayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventServerTravel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventServerTravel_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_bSkipNotifyPlayers_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventServerTravel_Parms*)Obj)->bSkipNotifyPlayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_bSkipNotifyPlayers = { "bSkipNotifyPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventServerTravel_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_bSkipNotifyPlayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_MapName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::NewProp_bSkipNotifyPlayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** Server Travel! This is an async load level process which allows you to put up a UMG widget while the level loading occurs! */" },
		{ "CPP_Default_bSkipNotifyPlayers", "false" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Server Travel! This is an async load level process which allows you to put up a UMG widget while the level loading occurs!" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ServerTravel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::VictoryBPFunctionLibrary_eventServerTravel_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics
	{
		struct VictoryBPFunctionLibrary_eventString__CombineStrings_Parms
		{
			FString StringFirst;
			FString StringSecond;
			FString Separator;
			FString StringFirstLabel;
			FString StringSecondLabel;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringFirst;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSecond;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Separator;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringFirstLabel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSecondLabel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringFirst = { "StringFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, StringFirst), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringSecond = { "StringSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, StringSecond), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_Separator = { "Separator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, Separator), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringFirstLabel = { "StringFirstLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, StringFirstLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringSecondLabel = { "StringSecondLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, StringSecondLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringFirst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_Separator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringFirstLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_StringSecondLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "/** Combines two strings together! The Separator and the Labels are optional*/" },
		{ "CPP_Default_Separator", "" },
		{ "CPP_Default_StringFirstLabel", "" },
		{ "CPP_Default_StringSecondLabel", "" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Combines two strings together! The Separator and the Labels are optional" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "String__CombineStrings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::VictoryBPFunctionLibrary_eventString__CombineStrings_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics
	{
		struct VictoryBPFunctionLibrary_eventString__CombineStrings_Multi_Parms
		{
			FString A;
			FString B;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_A;
		static const UECodeGen_Private::FStrPropertyParams NewProp_B;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Multi_Parms, A), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Multi_Parms, B), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventString__CombineStrings_Multi_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "Comment", "/** Separator is always a space */" },
		{ "CommutativeAssociativeBinaryOperator", "true" },
		{ "Keywords", "concatenate append" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Separator is always a space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "String__CombineStrings_Multi", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::VictoryBPFunctionLibrary_eventString__CombineStrings_Multi_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics
	{
		struct VictoryBPFunctionLibrary_eventText_ToFloat_Parms
		{
			FText Text;
			bool UseDotForThousands;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static void NewProp_UseDotForThousands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDotForThousands;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventText_ToFloat_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_UseDotForThousands_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventText_ToFloat_Parms*)Obj)->UseDotForThousands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_UseDotForThousands = { "UseDotForThousands", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventText_ToFloat_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_UseDotForThousands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventText_ToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_UseDotForThousands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Victory BP Library|Conversion" },
		{ "CPP_Default_UseDotForThousands", "false" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Text_ToFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::VictoryBPFunctionLibrary_eventText_ToFloat_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics
	{
		struct VictoryBPFunctionLibrary_eventText_ToInt_Parms
		{
			FText Text;
			bool UseDotForThousands;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static void NewProp_UseDotForThousands_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDotForThousands;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventText_ToInt_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_UseDotForThousands_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventText_ToInt_Parms*)Obj)->UseDotForThousands = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_UseDotForThousands = { "UseDotForThousands", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventText_ToInt_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_UseDotForThousands_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventText_ToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_UseDotForThousands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Victory BP Library|Conversion" },
		{ "CPP_Default_UseDotForThousands", "false" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Text_ToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::VictoryBPFunctionLibrary_eventText_ToInt_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics
	{
		struct VictoryBPFunctionLibrary_eventUTCToLocal_Parms
		{
			FDateTime UTCTime;
			FDateTime LocalTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UTCTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UTCTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_UTCTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_UTCTime = { "UTCTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventUTCToLocal_Parms, UTCTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_UTCTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_UTCTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_LocalTime = { "LocalTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventUTCToLocal_Parms, LocalTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_UTCTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::NewProp_LocalTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rama Save System|File IO" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "UTCToLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::VictoryBPFunctionLibrary_eventUTCToLocal_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms
		{
			TArray<FLinearColor> Pixels;
			int32 ImageHeight;
			int32 x;
			int32 y;
			FLinearColor FoundColor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pixels;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageHeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_x;
		static const UECodeGen_Private::FIntPropertyParams NewProp_y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoundColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels_Inner = { "Pixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels = { "Pixels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms, Pixels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ImageHeight = { "ImageHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms, ImageHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_FoundColor = { "FoundColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms, FoundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_Pixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ImageHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_FoundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Retrieve a pixel color value given the pixel array, the image height, and the coordinates. Returns false if the coordinates were not valid. Pixel coordinates start from upper left corner as 0,0. X= horizontal, Y = vertical \n\x09\x09""CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d */" },
		{ "Keywords", "image coordinate index map value" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Retrieve a pixel color value given the pixel array, the image height, and the coordinates. Returns false if the coordinates were not valid. Pixel coordinates start from upper left corner as 0,0. X= horizontal, Y = vertical\n              CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_Get_Pixel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::VictoryBPFunctionLibrary_eventVictory_Get_Pixel_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_RootFolderFullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_Ext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur. */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided directory, with optional extension filter. All files are returned if Ext is left blank. Returns false if operation could not occur." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::VictoryBPFunctionLibrary_eventVictory_GetFiles_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms
		{
			TArray<FString> Files;
			FString RootFolderFullPath;
			FString Ext;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootFolderFullPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_RootFolderFullPath = { "RootFolderFullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, RootFolderFullPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms, Ext), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Files,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_RootFolderFullPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_Ext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "Comment", "/** Obtain all files in a provided root directory, including all subdirectories, with optional extension filter. All files are returned if Ext is left blank. The full file path is returned because the file could be in any subdirectory. Returns false if operation could not occur. */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Obtain all files in a provided root directory, including all subdirectories, with optional extension filter. All files are returned if Ext is left blank. The full file path is returned because the file could be in any subdirectory. Returns false if operation could not occur." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFilesInRootAndAllSubFolders", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::VictoryBPFunctionLibrary_eventVictory_GetFilesInRootAndAllSubFolders_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms
		{
			FString File;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetFileTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::VictoryBPFunctionLibrary_eventVictory_GetFileTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms
		{
			UTexture2D* T2D;
			int32 X;
			int32 Y;
			FLinearColor PixelColor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_T2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelColor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_T2D = { "T2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms, T2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_PixelColor = { "PixelColor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms, PixelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_T2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_PixelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama\n\x09\x09""CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d *///, DeprecatedFunction, DeprecationMessage=\"This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin\"))\n" },
		{ "Keywords", "create image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama\n              CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d //, DeprecatedFunction, DeprecationMessage=\"This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin\"))" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetPixelFromT2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::VictoryBPFunctionLibrary_eventVictory_GetPixelFromT2D_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms
		{
			UTexture2D* T2D;
			int32 TextureWidth;
			int32 TextureHeight;
			TArray<FLinearColor> PixelArray;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_T2D;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PixelArray;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_T2D = { "T2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms, T2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_TextureWidth = { "TextureWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms, TextureWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms, TextureHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_PixelArray_Inner = { "PixelArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_PixelArray = { "PixelArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms, PixelArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_T2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_TextureWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_TextureHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_PixelArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_PixelArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama\n\x09\x09""CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d*///, DeprecatedFunction, DeprecationMessage=\"This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin\"))\n" },
		{ "Keywords", "create image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "This will modify the original T2D to remove sRGB and change compression to VectorDisplacementMap to ensure accurate pixel reading. -Rama\n              CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d//, DeprecatedFunction, DeprecationMessage=\"This function will not work until I figure out how to update it to 4.25, if you need it urgently, please post in my ue4 forum thread for this plugin\"))" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetPixelsArrayFromT2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::VictoryBPFunctionLibrary_eventVictory_GetPixelsArrayFromT2D_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms
		{
			FString FromClipboard;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromClipboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::NewProp_FromClipboard = { "FromClipboard", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms, FromClipboard), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::NewProp_FromClipboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_GetStringFromOSClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::VictoryBPFunctionLibrary_eventVictory_GetStringFromOSClipboard_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms
		{
			FString FullFilePath;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. The image type is assumed from an extension such as .jpg, .png, .bmp. Enjoy! -Rama */" },
		{ "Keywords", "image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. The image type is assumed from an extension such as .jpg, .png, .bmp. Enjoy! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_LoadTexture2D_FromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms
		{
			FString FullFilePath;
			TEnumAsByte<EJoyImageFormats> ImageFormat;
			bool IsValid;
			int32 Width;
			int32 Height;
			TArray<FLinearColor> OutPixels;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageFormat;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPixels_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPixels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_FullFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_ImageFormat = { "ImageFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, ImageFormat), Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats, METADATA_PARAMS(nullptr, 0) }; // 3488051718
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_OutPixels_Inner = { "OutPixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_OutPixels = { "OutPixels", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, OutPixels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_ImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_OutPixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_OutPixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama \n\x09\x09""CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d */" },
		{ "Keywords", "image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama\n              CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_LoadTexture2D_FromFile_Pixels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFile_Pixels_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms
		{
			FString FullFilePath;
			TEnumAsByte<EJoyImageFormats> ImageFormat;
			bool IsValid;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageFormat;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ImageFormat = { "ImageFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, ImageFormat), Z_Construct_UEnum_VictoryBPLibrary_EJoyImageFormats, METADATA_PARAMS(nullptr, 0) }; // 3488051718
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ImageFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama */" },
		{ "Keywords", "image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Load a Texture2D from a JPG,PNG,BMP,ICO,EXR,ICNS file! IsValid tells you if file path was valid or not. Enjoy! -Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_LoadTexture2D_FromFileByExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::VictoryBPFunctionLibrary_eventVictory_LoadTexture2D_FromFileByExtension_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms
		{
			FString FullFilePath;
			int32 Width;
			int32 Height;
			TArray<FLinearColor> ImagePixels;
			bool SaveAsBMP;
			bool sRGB;
			FString ErrorString;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullFilePath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImagePixels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePixels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImagePixels;
		static void NewProp_SaveAsBMP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveAsBMP;
		static void NewProp_sRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_sRGB;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_FullFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_FullFilePath = { "FullFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms, FullFilePath), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_FullFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_FullFilePath_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels_Inner = { "ImagePixels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels = { "ImagePixels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms, ImagePixels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_SaveAsBMP_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms*)Obj)->SaveAsBMP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_SaveAsBMP = { "SaveAsBMP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_SaveAsBMP_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_sRGB_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms*)Obj)->sRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_sRGB = { "sRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_sRGB_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms, ErrorString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_FullFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ImagePixels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_SaveAsBMP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_sRGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ErrorString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Load Texture From File" },
		{ "Comment", "/** Save an array of pixels to disk as a PNG! It is very important that you supply the curret width and height of the image! Returns false if Width * Height != Array length or file could not be saved to the location specified. I return an ErrorString to clarify what the exact issue was. -Rama \n\x09\x09""CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d */" },
		{ "Keywords", "create image png jpg jpeg bmp bitmap ico icon exr icns" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Save an array of pixels to disk as a PNG! It is very important that you supply the curret width and height of the image! Returns false if Width * Height != Array length or file could not be saved to the location specified. I return an ErrorString to clarify what the exact issue was. -Rama\n              CommunityTip from DarkFlash007: Make sure \xe2\x80\x9cMip Gen Setting\xe2\x80\x9d is set to \xe2\x80\x9cNomipmaps\xe2\x80\x9d" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_SavePixels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::VictoryBPFunctionLibrary_eventVictory_SavePixels_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms
		{
			FString ToClipboard;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToClipboard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToClipboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard = { "ToClipboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms, ToClipboard), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::NewProp_ToClipboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|String" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_SaveStringToOSClipboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::VictoryBPFunctionLibrary_eventVictory_SaveStringToOSClipboard_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms
		{
			FString File;
			FDateTime TimeStamp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms, TimeStamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::NewProp_TimeStamp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|File IO" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Victory_SetTimeStamp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::VictoryBPFunctionLibrary_eventVictory_SetTimeStamp_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms
		{
			int32 ProcessId;
			FString FullPathOfProgramToRun;
			TArray<FString> CommandlineArgs;
			bool Detach;
			bool Hidden;
			int32 Priority;
			FString OptionalWorkingDirectory;
			URamaVictoryPluginCreateProcessPipe* ReadPipeObject;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPathOfProgramToRun;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandlineArgs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommandlineArgs;
		static void NewProp_Detach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Detach;
		static void NewProp_Hidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Hidden;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OptionalWorkingDirectory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadPipeObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_FullPathOfProgramToRun = { "FullPathOfProgramToRun", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, FullPathOfProgramToRun), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs_Inner = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs = { "CommandlineArgs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, CommandlineArgs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms*)Obj)->Detach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach = { "Detach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms*)Obj)->Hidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, Priority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_OptionalWorkingDirectory = { "OptionalWorkingDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, OptionalWorkingDirectory), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ReadPipeObject = { "ReadPipeObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms, ReadPipeObject), Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_FullPathOfProgramToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_CommandlineArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Detach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Hidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_OptionalWorkingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::NewProp_ReadPipeObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/**\n\x09\x09Launch a new process, if it is not set to be detached, UE4 will not fully close until the other process completes.\n\n\x09\x09The new process id is returned!\n\n\x09\x09@param Detach Ensure completion before UE4 closes or not? Detach = UE4 can close and process will keep going / possibly never stop running as there is no one left to stop the process now \xe2\x99\xa5 Rama\n\x09\x09\n\x09\x09@param Priority Priority options: -2 idle, -1 low, 0 normal, 1 high, 2 higher\n\n\x09\x09@param ReadPipeObject Construct a new object of class URamaVictoryPluginCreateProcessPipe if you want to capture the output (STDOUT or STDERR) of this process! \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 Yes \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 !!!! (call ReadFromPipe on the object over time, in a timer, after creating the procedure, remember to nullptr Your Object Reference after closing the pipe, so that UE4 will garbage-collect the object! )\n\x09\x09\n\x09\x09\xe2\x99\xa5 Rama\n\x09*/" },
		{ "CPP_Default_OptionalWorkingDirectory", "" },
		{ "CPP_Default_Priority", "0" },
		{ "CPP_Default_ReadPipeObject", "None" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Launch a new process, if it is not set to be detached, UE4 will not fully close until the other process completes.\n\nThe new process id is returned!\n\n@param Detach Ensure completion before UE4 closes or not? Detach = UE4 can close and process will keep going / possibly never stop running as there is no one left to stop the process now \xe2\x99\xa5 Rama\n\n@param Priority Priority options: -2 idle, -1 low, 0 normal, 1 high, 2 higher\n\n@param ReadPipeObject Construct a new object of class URamaVictoryPluginCreateProcessPipe if you want to capture the output (STDOUT or STDERR) of this process! \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 Yes \xe2\x99\xa5\xe2\x99\xa5\xe2\x99\xa5 !!!! (call ReadFromPipe on the object over time, in a timer, after creating the procedure, remember to nullptr Your Object Reference after closing the pipe, so that UE4 will garbage-collect the object! )\n\n\xe2\x99\xa5 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryCreateProc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::VictoryBPFunctionLibrary_eventVictoryCreateProc_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms
		{
			float Float;
			float Sub;
			float FloatOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sub;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Sub = { "Sub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_FloatOut = { "FloatOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_Sub,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::NewProp_FloatOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Float" },
		{ "Comment", "/** Easily subtract from a float! <3 Rama*/" },
		{ "CompactNodeTitle", "-=" },
		{ "Keywords", "decrement float" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily subtract from a float! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryFloatMinusEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::VictoryBPFunctionLibrary_eventVictoryFloatMinusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms
		{
			float Float;
			float Add;
			float FloatOut;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Add;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_FloatOut = { "FloatOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::NewProp_FloatOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Float" },
		{ "Comment", "/** Easily add to a float! <3 Rama*/" },
		{ "CompactNodeTitle", "+=" },
		{ "Keywords", "increment float" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily add to a float! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryFloatPlusEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::VictoryBPFunctionLibrary_eventVictoryFloatPlusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetApplicationName_Parms
		{
			int32 ProcessId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetApplicationName_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetApplicationName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** You can obtain ProcessID from processes you initiate via VictoryCreateProc */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "You can obtain ProcessID from processes you initiate via VictoryCreateProc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetApplicationName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::VictoryBPFunctionLibrary_eventVictoryGetApplicationName_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Bool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Bool_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Color", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Color_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Float_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Int", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Int_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Rotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Rotator_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_String_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms
		{
			FString SectionName;
			FString VariableName;
			bool IsValid;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryGetCustomConfigVar_Vector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::VictoryBPFunctionLibrary_eventVictoryGetCustomConfigVar_Vector2D_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms
		{
			int32 Int;
			int32 Sub;
			int32 IntOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sub;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Sub = { "Sub", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_IntOut = { "IntOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_Sub,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::NewProp_IntOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Integer" },
		{ "Comment", "/** Easily subtract from an integer! <3 Rama*/" },
		{ "CompactNodeTitle", "-=" },
		{ "Keywords", "decrement integer" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily subtract from an integer! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryIntMinusEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::VictoryBPFunctionLibrary_eventVictoryIntMinusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms
		{
			int32 Int;
			int32 Add;
			int32 IntOut;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_IntOut = { "IntOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_Add,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::NewProp_IntOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Math|Integer" },
		{ "Comment", "/** Easily add to an integer! <3 Rama*/" },
		{ "CompactNodeTitle", "+=" },
		{ "Keywords", "increment integer" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Easily add to an integer! <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryIntPlusEquals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::VictoryBPFunctionLibrary_eventVictoryIntPlusEquals_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictoryIsApplicationRunning_Parms
		{
			int32 ProcessId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictoryIsApplicationRunning_Parms, ProcessId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictoryIsApplicationRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictoryIsApplicationRunning_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** You can obtain ProcessID from processes you initiate via VictoryCreateProc */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "You can obtain ProcessID from processes you initiate via VictoryCreateProc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictoryIsApplicationRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::VictoryBPFunctionLibrary_eventVictoryIsApplicationRunning_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms
		{
			FString SectionName;
			FString VariableName;
			bool Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Bool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Bool_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Color_Parms
		{
			FString SectionName;
			FString VariableName;
			FLinearColor Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Color_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Color_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Color_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Color", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Color_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Float_Parms
		{
			FString SectionName;
			FString VariableName;
			float Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Float_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Float_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Float_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Int_Parms
		{
			FString SectionName;
			FString VariableName;
			int32 Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Int_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Int_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Int_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Int", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Int_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Rotator_Parms
		{
			FString SectionName;
			FString VariableName;
			FRotator Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Rotator_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Rotator_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Rotator_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Rotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Rotator_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_String_Parms
		{
			FString SectionName;
			FString VariableName;
			FString Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_String_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_String_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_String_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_String", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_String_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector_Parms
		{
			FString SectionName;
			FString VariableName;
			FVector Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Vector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector2D_Parms
		{
			FString SectionName;
			FString VariableName;
			FVector2D Value;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector2D_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector2D_Parms, VariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector2D_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Custom Config Vars" },
		{ "Comment", "/** Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Set Custom Config Var! These are stored in Saved/Config/Windows/Game.ini" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySetCustomConfigVar_Vector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::VictoryBPFunctionLibrary_eventVictorySetCustomConfigVar_Vector2D_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySimulateKeyPress_Parms
		{
			APlayerController* ThePC;
			FKey Key;
			TEnumAsByte<EInputEvent> EventType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThePC;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_ThePC = { "ThePC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySimulateKeyPress_Parms, ThePC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySimulateKeyPress_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySimulateKeyPress_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) }; // 1054153585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_ThePC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::NewProp_EventType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Input" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySimulateKeyPress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::VictoryBPFunctionLibrary_eventVictorySimulateKeyPress_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySimulateMouseWheel_Parms
		{
			float Delta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySimulateMouseWheel_Parms, Delta), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::NewProp_Delta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Input" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySimulateMouseWheel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::VictoryBPFunctionLibrary_eventVictorySimulateMouseWheel_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms
		{
			TArray<float> FloatArray;
			TArray<float> FloatArrayRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef_Inner = { "FloatArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef = { "FloatArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms, FloatArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::NewProp_FloatArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort a float array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. */" },
		{ "Keywords", "sort float array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort a float array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortFloatArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::VictoryBPFunctionLibrary_eventVictorySortFloatArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms
		{
			TArray<int32> IntArray;
			TArray<int32> IntArrayRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef_Inner = { "IntArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef = { "IntArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms, IntArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::NewProp_IntArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort an integer array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. <3 Rama */" },
		{ "Keywords", "sort integer array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort an integer array, smallest value will be at index 0 after sorting. Modifies the input array, no new data created. <3 Rama" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortIntArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::VictoryBPFunctionLibrary_eventVictorySortIntArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics
	{
		struct VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms
		{
			TArray<FString> StringArray;
			TArray<FString> StringArrayRef;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArrayRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArrayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef_Inner = { "StringArrayRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef = { "StringArrayRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms, StringArrayRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::NewProp_StringArrayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Array" },
		{ "Comment", "/** Sort a string array alphabetically! */" },
		{ "Keywords", "sort string array" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Sort a string array alphabetically!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "VictorySortStringArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::VictoryBPFunctionLibrary_eventVictorySortStringArray_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics
	{
		struct VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms
		{
			const APlayerController* ThePC;
			float PosX;
			float PosY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThePC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ThePC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ThePC = { "ThePC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms, ThePC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ThePC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ThePC_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms, PosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms, PosY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ThePC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_PosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_PosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Get the coordinates of the center of the player's screen / viewport. Returns false if the operation could not occur */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get the coordinates of the center of the player's screen / viewport. Returns false if the operation could not occur" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Viewport__GetCenterOfViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::VictoryBPFunctionLibrary_eventViewport__GetCenterOfViewport_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics
	{
		struct VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms
		{
			const APlayerController* ThePC;
			float PosX;
			float PosY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThePC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ThePC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ThePC = { "ThePC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms, ThePC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ThePC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ThePC_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms, PosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms, PosY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ThePC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_PosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_PosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game Window" },
		{ "Comment", "/** Get the Cursor Position within the Player's Viewport. This will return a result consistent with SET Mouse Position Returns false if the operation could not occur */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Get the Cursor Position within the Player's Viewport. This will return a result consistent with SET Mouse Position Returns false if the operation could not occur" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Viewport__GetMousePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::VictoryBPFunctionLibrary_eventViewport__GetMousePosition_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics
	{
		struct VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms
		{
			const APlayerController* ThePC;
			float PosX;
			float PosY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThePC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThePC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ThePC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ThePC = { "ThePC", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms, ThePC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ThePC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ThePC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms, PosX), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms, PosY), METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosY_MetaData)) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ThePC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_PosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Input" },
		{ "Comment", "/** SET the Mouse Position! Returns false if the operation could not occur */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "SET the Mouse Position! Returns false if the operation could not occur" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "Viewport__SetMousePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::VictoryBPFunctionLibrary_eventViewport__SetMousePosition_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics
	{
		struct VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms
		{
			UObject* WorldContextObject;
			FVector2D ViewportPosition;
			FVector OutWorldOrigin;
			FVector OutWorldDirection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWorldDirection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldOrigin = { "OutWorldOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, OutWorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldDirection = { "OutWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms, OutWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ViewportPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_OutWorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|Game|Viewport" },
		{ "Comment", "/**\n\x09 * Transforms the viewport position into a world space origin and direction.\n\x09 *\n\x09 * @param WorldContextObject\x09World context.\n\x09 * @param ViewportPosition\x09\x09Local space of viewport from GetViewportPosition() or similar.\n\x09 * @param OutWorldOrigin\x09\x09""Corresponding 3D location in world space.\n\x09 * @param OutWorldDirection\x09\x09World space direction vector away from the camera at the given 2d point.\n\x09 *\n\x09 * @return false if something went wrong during the deproject process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Transforms the viewport position into a world space origin and direction.\n\n@param WorldContextObject    World context.\n@param ViewportPosition              Local space of viewport from GetViewportPosition() or similar.\n@param OutWorldOrigin                Corresponding 3D location in world space.\n@param OutWorldDirection             World space direction vector away from the camera at the given 2d point.\n\n@return false if something went wrong during the deproject process." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "ViewportPositionDeproject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::VictoryBPFunctionLibrary_eventViewportPositionDeproject_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms
		{
			UWidget* ParentWidget;
			TArray<UUserWidget*> ChildWidgets;
			TSubclassOf<UUserWidget>  WidgetClass;
			bool bImmediateOnly;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildWidgets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static void NewProp_bImmediateOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, ParentWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_Inner = { "ChildWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets = { "ChildWidgets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, ChildWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms*)Obj)->bImmediateOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly = { "bImmediateOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ParentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_ChildWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::NewProp_bImmediateOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "DefaultToSelf", "ParentWidget" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DynamicOutputParam", "ChildWidgets" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WidgetGetChildrenOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::VictoryBPFunctionLibrary_eventWidgetGetChildrenOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics
	{
		struct VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms
		{
			UWidget* ChildWidget;
			TSubclassOf<UUserWidget>  WidgetClass;
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, ChildWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ChildWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|UMG" },
		{ "Comment", "/**\n\x09 * Recurses up the list of parents until it finds a widget of WidgetClass.\n\x09 * @return widget that is Parent of ChildWidget that matches WidgetClass.\n\x09 */" },
		{ "DefaultToSelf", "ChildWidget" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Recurses up the list of parents until it finds a widget of WidgetClass.\n@return widget that is Parent of ChildWidget that matches WidgetClass." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WidgetGetParentOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::VictoryBPFunctionLibrary_eventWidgetGetParentOfClass_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics
	{
		struct VictoryBPFunctionLibrary_eventWorldType__InEditorWorld_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWorldType__InEditorWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventWorldType__InEditorWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventWorldType__InEditorWorld_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** Is this game logic running in the Editor world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Is this game logic running in the Editor world?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WorldType__InEditorWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::VictoryBPFunctionLibrary_eventWorldType__InEditorWorld_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics
	{
		struct VictoryBPFunctionLibrary_eventWorldType__InGameInstanceWorld_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWorldType__InGameInstanceWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventWorldType__InGameInstanceWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventWorldType__InGameInstanceWorld_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** Is this game logic running in an actual independent game instance? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Is this game logic running in an actual independent game instance?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WorldType__InGameInstanceWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::VictoryBPFunctionLibrary_eventWorldType__InGameInstanceWorld_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics
	{
		struct VictoryBPFunctionLibrary_eventWorldType__InPIEWorld_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VictoryBPFunctionLibrary_eventWorldType__InPIEWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VictoryBPFunctionLibrary_eventWorldType__InPIEWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VictoryBPFunctionLibrary_eventWorldType__InPIEWorld_Parms), &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Victory BP Library|System" },
		{ "Comment", "/** Is this game logic running in the PIE world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Is this game logic running in the PIE world?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVictoryBPFunctionLibrary, nullptr, "WorldType__InPIEWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::VictoryBPFunctionLibrary_eventWorldType__InPIEWorld_Parms), Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVictoryBPFunctionLibrary);
	UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary_NoRegister()
	{
		return UVictoryBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VictoryBPLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Accessor__GetPlayerController, "Accessor__GetPlayerController" }, // 1492193306
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsets, "Animation__GetAimOffsets" }, // 3007779929
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Animation__GetAimOffsetsFromRotation, "Animation__GetAimOffsetsFromRotation" }, // 1138860302
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_Project, "Capture2D_Project" }, // 341434531
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Capture2D_SaveImage, "Capture2D_SaveImage" }, // 2555129878
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_Project, "CaptureComponent2D_Project" }, // 2533074372
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CaptureComponent2D_SaveImage, "CaptureComponent2D_SaveImage" }, // 1586850926
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClientWindow__GameWindowIsForeGroundInOS, "ClientWindow__GameWindowIsForeGroundInOS" }, // 3988559311
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOfLineSegments, "ClosestPointsOfLineSegments" }, // 1547508791
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ClosestPointsOnTwoLines, "ClosestPointsOnTwoLines" }, // 4148010655
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_CreateStaticMeshAssetFromDynamicMesh, "CreateStaticMeshAssetFromDynamicMesh" }, // 3382601009
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringArrayToFile, "FileIO__SaveStringArrayToFile" }, // 2861977307
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FileIO__SaveStringTextToFile, "FileIO__SaveStringTextToFile" }, // 2002554834
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_FlashGameOnTaskBar, "FlashGameOnTaskBar" }, // 2564239734
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GenerateUniqueContentRelativeFileName, "GenerateUniqueContentRelativeFileName" }, // 2213365056
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetAllBoneNamesBelowBone, "GetAllBoneNamesBelowBone" }, // 4282954453
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfActor, "GetClosestActorOfClassInRadiusOfActor" }, // 804465359
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetClosestActorOfClassInRadiusOfLocation, "GetClosestActorOfClassInRadiusOfLocation" }, // 842802221
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetFirstWidgetOfClass, "GetFirstWidgetOfClass" }, // 2478130530
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetNamesOfLoadedLevels, "GetNamesOfLoadedLevels" }, // 3523561328
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetObjectPath, "GetObjectPath" }, // 2555183753
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetStaticMeshVertexLocations, "GetStaticMeshVertexLocations" }, // 1751116036
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUnixTimeStamp, "GetUnixTimeStamp" }, // 4122637551
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetUTCFromUnixTimeStamp, "GetUTCFromUnixTimeStamp" }, // 1777079120
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_GetWidgetFromName, "GetWidgetFromName" }, // 443863838
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_HasSubstring, "HasSubstring" }, // 298482266
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsAlphaNumeric, "IsAlphaNumeric" }, // 1746010517
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_IsWidgetOfClassInViewport, "IsWidgetOfClassInViewport" }, // 2766712647
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadObjectFromAssetPath, "LoadObjectFromAssetPath" }, // 1843589633
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringArrayFromFile, "LoadStringArrayFromFile" }, // 652673978
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_LoadStringFromFile, "LoadStringFromFile" }, // 2619635087
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_RemoveAllWidgetsOfClass, "RemoveAllWidgetsOfClass" }, // 2326919257
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ServerTravel, "ServerTravel" }, // 3662331748
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings, "String__CombineStrings" }, // 1150555791
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_String__CombineStrings_Multi, "String__CombineStrings_Multi" }, // 944963960
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToFloat, "Text_ToFloat" }, // 3979687147
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Text_ToInt, "Text_ToInt" }, // 3437388374
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_UTCToLocal, "UTCToLocal" }, // 3862635545
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_Get_Pixel, "Victory_Get_Pixel" }, // 3339997556
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFiles, "Victory_GetFiles" }, // 581697776
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFilesInRootAndAllSubFolders, "Victory_GetFilesInRootAndAllSubFolders" }, // 1117131051
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetFileTimeStamp, "Victory_GetFileTimeStamp" }, // 3485955834
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelFromT2D, "Victory_GetPixelFromT2D" }, // 3480930542
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetPixelsArrayFromT2D, "Victory_GetPixelsArrayFromT2D" }, // 699634102
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_GetStringFromOSClipboard, "Victory_GetStringFromOSClipboard" }, // 2316523490
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile, "Victory_LoadTexture2D_FromFile" }, // 1675674422
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFile_Pixels, "Victory_LoadTexture2D_FromFile_Pixels" }, // 2935283630
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_LoadTexture2D_FromFileByExtension, "Victory_LoadTexture2D_FromFileByExtension" }, // 405112715
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SavePixels, "Victory_SavePixels" }, // 839743253
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SaveStringToOSClipboard, "Victory_SaveStringToOSClipboard" }, // 1514318978
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Victory_SetTimeStamp, "Victory_SetTimeStamp" }, // 163624880
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryCreateProc, "VictoryCreateProc" }, // 917282273
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatMinusEquals, "VictoryFloatMinusEquals" }, // 804224931
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryFloatPlusEquals, "VictoryFloatPlusEquals" }, // 2442896415
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetApplicationName, "VictoryGetApplicationName" }, // 2149496930
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Bool, "VictoryGetCustomConfigVar_Bool" }, // 5986501
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Color, "VictoryGetCustomConfigVar_Color" }, // 864957272
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Float, "VictoryGetCustomConfigVar_Float" }, // 183943419
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Int, "VictoryGetCustomConfigVar_Int" }, // 3573683877
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Rotator, "VictoryGetCustomConfigVar_Rotator" }, // 3256997689
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_String, "VictoryGetCustomConfigVar_String" }, // 2364518642
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector, "VictoryGetCustomConfigVar_Vector" }, // 239061384
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryGetCustomConfigVar_Vector2D, "VictoryGetCustomConfigVar_Vector2D" }, // 1123332742
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntMinusEquals, "VictoryIntMinusEquals" }, // 2564994479
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIntPlusEquals, "VictoryIntPlusEquals" }, // 1727769806
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictoryIsApplicationRunning, "VictoryIsApplicationRunning" }, // 2065359926
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Bool, "VictorySetCustomConfigVar_Bool" }, // 2090002414
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Color, "VictorySetCustomConfigVar_Color" }, // 3102036727
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Float, "VictorySetCustomConfigVar_Float" }, // 1944681669
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Int, "VictorySetCustomConfigVar_Int" }, // 1557567110
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Rotator, "VictorySetCustomConfigVar_Rotator" }, // 668791457
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_String, "VictorySetCustomConfigVar_String" }, // 3466878980
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector, "VictorySetCustomConfigVar_Vector" }, // 675123180
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySetCustomConfigVar_Vector2D, "VictorySetCustomConfigVar_Vector2D" }, // 2403532046
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateKeyPress, "VictorySimulateKeyPress" }, // 3923913130
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySimulateMouseWheel, "VictorySimulateMouseWheel" }, // 1651059233
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortFloatArray, "VictorySortFloatArray" }, // 1002591818
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortIntArray, "VictorySortIntArray" }, // 1356052236
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_VictorySortStringArray, "VictorySortStringArray" }, // 3766854231
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetCenterOfViewport, "Viewport__GetCenterOfViewport" }, // 2970794251
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__GetMousePosition, "Viewport__GetMousePosition" }, // 2920966538
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_Viewport__SetMousePosition, "Viewport__SetMousePosition" }, // 2702097781
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_ViewportPositionDeproject, "ViewportPositionDeproject" }, // 3600179145
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetChildrenOfClass, "WidgetGetChildrenOfClass" }, // 596111372
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WidgetGetParentOfClass, "WidgetGetParentOfClass" }, // 1029212304
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InEditorWorld, "WorldType__InEditorWorld" }, // 3100089435
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InGameInstanceWorld, "WorldType__InGameInstanceWorld" }, // 778430046
		{ &Z_Construct_UFunction_UVictoryBPFunctionLibrary_WorldType__InPIEWorld, "WorldType__InPIEWorld" }, // 1579545487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09Victory to You! <3 Rama\n*/" },
		{ "IncludePath", "VictoryBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VictoryBPFunctionLibrary.h" },
		{ "ToolTip", "Victory to You! <3 Rama" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVictoryBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::ClassParams = {
		&UVictoryBPFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVictoryBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVictoryBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVictoryBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVictoryBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVictoryBPFunctionLibrary.OuterSingleton;
	}
	template<> VICTORYBPLIBRARY_API UClass* StaticClass<UVictoryBPFunctionLibrary>()
	{
		return UVictoryBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPFunctionLibrary);
	UVictoryBPFunctionLibrary::~UVictoryBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EJoyImageFormats_StaticEnum, TEXT("EJoyImageFormats"), &Z_Registration_Info_UEnum_EJoyImageFormats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3488051718U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URamaVictoryPluginCreateProcessPipe, URamaVictoryPluginCreateProcessPipe::StaticClass, TEXT("URamaVictoryPluginCreateProcessPipe"), &Z_Registration_Info_UClass_URamaVictoryPluginCreateProcessPipe, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URamaVictoryPluginCreateProcessPipe), 2865698301U) },
		{ Z_Construct_UClass_UVictoryBPFunctionLibrary, UVictoryBPFunctionLibrary::StaticClass, TEXT("UVictoryBPFunctionLibrary"), &Z_Registration_Info_UClass_UVictoryBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVictoryBPFunctionLibrary), 767057394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_3704000863(TEXT("/Script/VictoryBPLibrary"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_VictoryPlugin_Source_VictoryBPLibrary_Public_VictoryBPFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
