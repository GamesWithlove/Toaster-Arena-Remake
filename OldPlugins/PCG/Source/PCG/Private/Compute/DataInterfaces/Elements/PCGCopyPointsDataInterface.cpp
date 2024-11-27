// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGCopyPointsDataInterface.h"

#include "Elements/PCGCopyPoints.h"

#include "GlobalRenderResources.h"
#include "RHIResources.h"
#include "ShaderCompilerCore.h"
#include "ShaderCore.h"
#include "ShaderParameterMetadataBuilder.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCopyPointsDataInterface)

void UPCGCopyPointsDataInterface::GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const
{
	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetRotationInheritance"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetScaleInheritance"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetColorInheritance"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetSeedInheritance"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetAttributeInheritance"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetCopyEachSourceOnEveryTarget"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Bool));
}

BEGIN_SHADER_PARAMETER_STRUCT(FPCGCopyPointsDataInterfaceParameters,)
	SHADER_PARAMETER(uint32, RotationInheritance)
	SHADER_PARAMETER(uint32, ScaleInheritance)
	SHADER_PARAMETER(uint32, ColorInheritance)
	SHADER_PARAMETER(uint32, SeedInheritance)
	SHADER_PARAMETER(uint32, AttributeInheritance)
	SHADER_PARAMETER(uint32, bCopyEachSourceOnEveryTarget)
END_SHADER_PARAMETER_STRUCT()

void UPCGCopyPointsDataInterface::GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const
{
	InOutBuilder.AddNestedStruct<FPCGCopyPointsDataInterfaceParameters>(UID);
}

void UPCGCopyPointsDataInterface::GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const
{
	TMap<FString, FStringFormatArg> TemplateArgs =
	{
		{ TEXT("DataInterfaceName"), InDataInterfaceName },
	};

	OutHLSL += FString::Format(TEXT(
		"uint {DataInterfaceName}_RotationInheritance;\n"
		"uint {DataInterfaceName}_ScaleInheritance;\n"
		"uint {DataInterfaceName}_ColorInheritance;\n"
		"uint {DataInterfaceName}_SeedInheritance;\n"
		"uint {DataInterfaceName}_AttributeInheritance;\n"
		"uint {DataInterfaceName}_bCopyEachSourceOnEveryTarget;\n"
		"\n"
		"uint GetRotationInheritance_{DataInterfaceName}() { return {DataInterfaceName}_RotationInheritance; }\n"
		"uint GetScaleInheritance_{DataInterfaceName}() { return {DataInterfaceName}_ScaleInheritance; }\n"
		"uint GetColorInheritance_{DataInterfaceName}() { return {DataInterfaceName}_ColorInheritance; }\n"
		"uint GetSeedInheritance_{DataInterfaceName}() { return {DataInterfaceName}_SeedInheritance; }\n"
		"uint GetAttributeInheritance_{DataInterfaceName}() { return {DataInterfaceName}_AttributeInheritance; }\n"
		"uint GetCopyEachSourceOnEveryTarget_{DataInterfaceName}() { return {DataInterfaceName}_bCopyEachSourceOnEveryTarget; }\n"
		), TemplateArgs);
}

UComputeDataProvider* UPCGCopyPointsDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	TObjectPtr<UPCGCopyPointsDataProvider> DataProvider = NewObject<UPCGCopyPointsDataProvider>();
	DataProvider->Settings = Cast<UPCGCopyPointsSettings>(Settings);

	return DataProvider;
}

FComputeDataProviderRenderProxy* UPCGCopyPointsDataProvider::GetRenderProxy()
{
	return new FPCGCopyPointsDataProviderProxy(
		static_cast<uint32>(Settings->RotationInheritance),
		static_cast<uint32>(Settings->ScaleInheritance),
		static_cast<uint32>(Settings->ColorInheritance),
		static_cast<uint32>(Settings->SeedInheritance),
		static_cast<uint32>(Settings->AttributeInheritance),
		static_cast<uint32>(Settings->bCopyEachSourceOnEveryTarget)
	);
}

bool FPCGCopyPointsDataProviderProxy::IsValid(FValidationData const& InValidationData) const
{
	if (InValidationData.ParameterStructSize != sizeof(FParameters))
	{
		return false;
	}

	return true;
}

void FPCGCopyPointsDataProviderProxy::GatherDispatchData(FDispatchData const& InDispatchData)
{
	const TStridedView<FParameters> ParameterArray = MakeStridedParameterView<FParameters>(InDispatchData);
	for (int32 InvocationIndex = 0; InvocationIndex < ParameterArray.Num(); ++InvocationIndex)
	{
		FParameters& Parameters = ParameterArray[InvocationIndex];
		Parameters.RotationInheritance = RotationInheritance;
		Parameters.ScaleInheritance = ScaleInheritance;
		Parameters.ColorInheritance = ColorInheritance;
		Parameters.SeedInheritance = SeedInheritance;
		Parameters.AttributeInheritance = AttributeInheritance;
		Parameters.bCopyEachSourceOnEveryTarget = bCopyEachSourceOnEveryTarget;
	}
}
