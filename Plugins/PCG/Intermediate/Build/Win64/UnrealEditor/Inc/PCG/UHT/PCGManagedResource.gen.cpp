// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/PCGManagedResource.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
#include "PCG/Public/PCGCrc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGManagedResource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedActors();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedActors_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedComponent();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedISMComponent();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedISMComponent_NoRegister();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedResource();
	PCG_API UClass* Z_Construct_UClass_UPCGManagedResource_NoRegister();
	PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGCrc();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGManagedResource::StaticRegisterNativesUPCGManagedResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGManagedResource);
	UClass* Z_Construct_UClass_UPCGManagedResource_NoRegister()
	{
		return UPCGManagedResource::StaticClass();
	}
	struct Z_Construct_UClass_UPCGManagedResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Crc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarkedUnused_MetaData[];
#endif
		static void NewProp_bIsMarkedUnused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarkedUnused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGManagedResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n* This class is used to hold resources and their mechanism to delete them on demand.\n* In order to allow for some reuse (e.g. components), the Release call supports a \"soft\"\n* release by marking them unused in order to be potentially re-used down the line.\n* At the end of the generate, a call to ReleaseIfUnused will serve to finally cleanup\n* what is not needed anymore.\n*/" },
		{ "IncludePath", "PCGManagedResource.h" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
		{ "ToolTip", "This class is used to hold resources and their mechanism to delete them on demand.\nIn order to allow for some reuse (e.g. components), the Release call supports a \"soft\"\nrelease by marking them unused in order to be potentially re-used down the line.\nAt the end of the generate, a call to ReleaseIfUnused will serve to finally cleanup\nwhat is not needed anymore." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_Crc_MetaData[] = {
		{ "Category", "GeneratedData" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_Crc = { "Crc", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGManagedResource, Crc), Z_Construct_UScriptStruct_FPCGCrc, METADATA_PARAMS(Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_Crc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_Crc_MetaData)) }; // 3994413531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_MetaData[] = {
		{ "Category", "GeneratedData" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	void Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_SetBit(void* Obj)
	{
		((UPCGManagedResource*)Obj)->bIsMarkedUnused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused = { "bIsMarkedUnused", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGManagedResource), &Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGManagedResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_Crc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedResource_Statics::NewProp_bIsMarkedUnused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGManagedResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGManagedResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGManagedResource_Statics::ClassParams = {
		&UPCGManagedResource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGManagedResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedResource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGManagedResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGManagedResource()
	{
		if (!Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton, Z_Construct_UClass_UPCGManagedResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGManagedResource.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGManagedResource>()
	{
		return UPCGManagedResource::StaticClass();
	}
	UPCGManagedResource::UPCGManagedResource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGManagedResource);
	UPCGManagedResource::~UPCGManagedResource() {}
	void UPCGManagedActors::StaticRegisterNativesUPCGManagedActors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGManagedActors);
	UClass* Z_Construct_UClass_UPCGManagedActors_NoRegister()
	{
		return UPCGManagedActors::StaticClass();
	}
	struct Z_Construct_UClass_UPCGManagedActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeneratedActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GeneratedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGManagedActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGManagedResource,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedActors_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PCGManagedResource.h" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors_ElementProp = { "GeneratedActors", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors_MetaData[] = {
		{ "Category", "GeneratedData" },
		{ "Comment", "//~End UPCGManagedResource interface\n" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors = { "GeneratedActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGManagedActors, GeneratedActors), METADATA_PARAMS(Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGManagedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedActors_Statics::NewProp_GeneratedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGManagedActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGManagedActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGManagedActors_Statics::ClassParams = {
		&UPCGManagedActors::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGManagedActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedActors_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGManagedActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGManagedActors()
	{
		if (!Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton, Z_Construct_UClass_UPCGManagedActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGManagedActors.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGManagedActors>()
	{
		return UPCGManagedActors::StaticClass();
	}
	UPCGManagedActors::UPCGManagedActors(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGManagedActors);
	UPCGManagedActors::~UPCGManagedActors() {}
	void UPCGManagedComponent::StaticRegisterNativesUPCGManagedComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGManagedComponent);
	UClass* Z_Construct_UClass_UPCGManagedComponent_NoRegister()
	{
		return UPCGManagedComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPCGManagedComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeneratedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGManagedComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGManagedResource,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PCGManagedResource.h" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedComponent_Statics::NewProp_GeneratedComponent_MetaData[] = {
		{ "Category", "GeneratedData" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPCGManagedComponent_Statics::NewProp_GeneratedComponent = { "GeneratedComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGManagedComponent, GeneratedComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGManagedComponent_Statics::NewProp_GeneratedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedComponent_Statics::NewProp_GeneratedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGManagedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedComponent_Statics::NewProp_GeneratedComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGManagedComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGManagedComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGManagedComponent_Statics::ClassParams = {
		&UPCGManagedComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGManagedComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGManagedComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGManagedComponent()
	{
		if (!Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton, Z_Construct_UClass_UPCGManagedComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGManagedComponent.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGManagedComponent>()
	{
		return UPCGManagedComponent::StaticClass();
	}
	UPCGManagedComponent::UPCGManagedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGManagedComponent);
	UPCGManagedComponent::~UPCGManagedComponent() {}
	void UPCGManagedISMComponent::StaticRegisterNativesUPCGManagedISMComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGManagedISMComponent);
	UClass* Z_Construct_UClass_UPCGManagedISMComponent_NoRegister()
	{
		return UPCGManagedISMComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPCGManagedISMComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDescriptor_MetaData[];
#endif
		static void NewProp_bHasDescriptor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDescriptor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsUID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_SettingsUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGManagedISMComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPCGManagedComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedISMComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PCGManagedResource.h" },
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	void Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_SetBit(void* Obj)
	{
		((UPCGManagedISMComponent*)Obj)->bHasDescriptor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor = { "bHasDescriptor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPCGManagedISMComponent), &Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_Descriptor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGManagedISMComponent, Descriptor), Z_Construct_UScriptStruct_FISMComponentDescriptor, METADATA_PARAMS(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_Descriptor_MetaData)) }; // 4080497835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_SettingsUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/PCGManagedResource.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_SettingsUID = { "SettingsUID", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPCGManagedISMComponent, SettingsUID), METADATA_PARAMS(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_SettingsUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_SettingsUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGManagedISMComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_bHasDescriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGManagedISMComponent_Statics::NewProp_SettingsUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGManagedISMComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGManagedISMComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGManagedISMComponent_Statics::ClassParams = {
		&UPCGManagedISMComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGManagedISMComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedISMComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGManagedISMComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGManagedISMComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGManagedISMComponent()
	{
		if (!Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton, Z_Construct_UClass_UPCGManagedISMComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGManagedISMComponent.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGManagedISMComponent>()
	{
		return UPCGManagedISMComponent::StaticClass();
	}
	UPCGManagedISMComponent::UPCGManagedISMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGManagedISMComponent);
	UPCGManagedISMComponent::~UPCGManagedISMComponent() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGManagedResource, UPCGManagedResource::StaticClass, TEXT("UPCGManagedResource"), &Z_Registration_Info_UClass_UPCGManagedResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGManagedResource), 2596819569U) },
		{ Z_Construct_UClass_UPCGManagedActors, UPCGManagedActors::StaticClass, TEXT("UPCGManagedActors"), &Z_Registration_Info_UClass_UPCGManagedActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGManagedActors), 1471989448U) },
		{ Z_Construct_UClass_UPCGManagedComponent, UPCGManagedComponent::StaticClass, TEXT("UPCGManagedComponent"), &Z_Registration_Info_UClass_UPCGManagedComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGManagedComponent), 3897276759U) },
		{ Z_Construct_UClass_UPCGManagedISMComponent, UPCGManagedISMComponent::StaticClass, TEXT("UPCGManagedISMComponent"), &Z_Registration_Info_UClass_UPCGManagedISMComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGManagedISMComponent), 232001377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_2616306292(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_PCGManagedResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
