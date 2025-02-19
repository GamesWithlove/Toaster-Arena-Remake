// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/Public/Helpers/PCGActorHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGActorHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PCG_API UClass* Z_Construct_UClass_UPCGActorHelpers();
	PCG_API UClass* Z_Construct_UClass_UPCGActorHelpers_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PCG();
// End Cross Module References
	void UPCGActorHelpers::StaticRegisterNativesUPCGActorHelpers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGActorHelpers);
	UClass* Z_Construct_UClass_UPCGActorHelpers_NoRegister()
	{
		return UPCGActorHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UPCGActorHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGActorHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PCG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGActorHelpers_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Helpers/PCGActorHelpers.h" },
		{ "ModuleRelativePath", "Public/Helpers/PCGActorHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGActorHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGActorHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGActorHelpers_Statics::ClassParams = {
		&UPCGActorHelpers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGActorHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGActorHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGActorHelpers()
	{
		if (!Z_Registration_Info_UClass_UPCGActorHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGActorHelpers.OuterSingleton, Z_Construct_UClass_UPCGActorHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGActorHelpers.OuterSingleton;
	}
	template<> PCG_API UClass* StaticClass<UPCGActorHelpers>()
	{
		return UPCGActorHelpers::StaticClass();
	}
	UPCGActorHelpers::UPCGActorHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGActorHelpers);
	UPCGActorHelpers::~UPCGActorHelpers() {}
	struct Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGActorHelpers, UPCGActorHelpers::StaticClass, TEXT("UPCGActorHelpers"), &Z_Registration_Info_UClass_UPCGActorHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGActorHelpers), 2630893592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_3697024998(TEXT("/Script/PCG"),
		Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Toaster_Arena_Remake_Plugins_PCG_Source_PCG_Public_Helpers_PCGActorHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
