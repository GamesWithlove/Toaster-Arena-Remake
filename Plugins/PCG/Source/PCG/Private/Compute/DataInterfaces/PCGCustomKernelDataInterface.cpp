// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/DataInterfaces/PCGCustomKernelDataInterface.h"

#include "PCGComponent.h"
#include "PCGModule.h"
#include "PCGSettings.h"
#include "Compute/Elements/PCGCustomHLSL.h"

#include "RenderGraphBuilder.h"
#include "RenderGraphResources.h"
#include "ShaderCompilerCore.h"
#include "ShaderParameterMetadataBuilder.h"
#include "ComputeFramework/ComputeMetadataBuilder.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCustomKernelDataInterface)

void UPCGCustomKernelDataInterface::GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const
{
	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetNumThreads"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Int, 3));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetThreadCountMultiplier"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetSeed"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetSettingsSeed"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetComponentSeed"))
		.AddReturnType(FShaderValueType::Get(EShaderFundamentalType::Uint));

	// A convenient way to serve component bounds to all kernels. Could be pulled out into a PCG context DI in the future.
	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetComponentBoundsMin"))
		.AddReturnType(EShaderFundamentalType::Float, 3);

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetComponentBoundsMax"))
		.AddReturnType(EShaderFundamentalType::Float, 3);
}

BEGIN_SHADER_PARAMETER_STRUCT(FPCGCustomKernelDataInterfaceParameters, )
	SHADER_PARAMETER(FIntVector3, NumThreads)
	SHADER_PARAMETER(uint32, ThreadCountMultiplier)
	SHADER_PARAMETER(uint32, Seed)
	SHADER_PARAMETER(uint32, SeedSettings)
	SHADER_PARAMETER(uint32, SeedComponent)
	SHADER_PARAMETER(FVector3f, ComponentBoundsMin)
	SHADER_PARAMETER(FVector3f, ComponentBoundsMax)
END_SHADER_PARAMETER_STRUCT()

void UPCGCustomKernelDataInterface::GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const
{
	InOutBuilder.AddNestedStruct<FPCGCustomKernelDataInterfaceParameters>(UID);
}

void UPCGCustomKernelDataInterface::GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const
{
	TMap<FString, FStringFormatArg> TemplateArgs =
	{
		{ TEXT("DataInterfaceName"), InDataInterfaceName },
	};

	OutHLSL += FString::Format(TEXT(
		"int3 {DataInterfaceName}_NumThreads;\n"
		"uint {DataInterfaceName}_ThreadCountMultiplier;\n"
		"uint {DataInterfaceName}_Seed;\n"
		"uint {DataInterfaceName}_SeedSettings;\n"
		"uint {DataInterfaceName}_SeedComponent;\n"
		"float3 {DataInterfaceName}_ComponentBoundsMin;\n"
		"float3 {DataInterfaceName}_ComponentBoundsMax;\n"
		"\n"
		"int3 GetNumThreads_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_NumThreads;\n}\n\n"
		"uint GetThreadCountMultiplier_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ThreadCountMultiplier;\n}\n\n"
		"uint GetSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_Seed;\n}\n\n"
		"uint GetSettingsSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_SeedSettings;\n}\n\n"
		"uint GetComponentSeed_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_SeedComponent;\n}\n\n"
		"float3 GetComponentBoundsMin_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ComponentBoundsMin;\n}\n\n"
		"float3 GetComponentBoundsMax_{DataInterfaceName}()\n{\n\treturn {DataInterfaceName}_ComponentBoundsMax;\n}\n\n"),
		TemplateArgs);
}

UComputeDataProvider* UPCGCustomKernelDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGCustomKernelDataInterface::CreateDataProvider);
	check(Settings);

	UPCGDataBinding* Binding = CastChecked<UPCGDataBinding>(InBinding);
	check(Binding->SourceComponent.IsValid() && Binding->SourceComponent.Get());

	UPCGCustomComputeKernelDataProvider* Provider = NewObject<UPCGCustomComputeKernelDataProvider>();
	Provider->ThreadCount = Settings->ComputeKernelThreadCount(Binding);

	if (const UPCGCustomHLSLSettings* CustomHLSLSettings = Cast<UPCGCustomHLSLSettings>(Settings))
	{
		Provider->ThreadCountMultiplier = CustomHLSLSettings->GetThreadCountMultiplier();
	}
	else
	{
		Provider->ThreadCountMultiplier = 1;
	}

	Provider->Seed = static_cast<uint32>(Settings->GetSeed(Binding->SourceComponent.Get()));
	Provider->SeedSettings = static_cast<uint32>(Settings->Seed);
	Provider->SeedComponent = static_cast<uint32>(Binding->SourceComponent->Seed);

	Provider->SourceComponentBounds = Binding->SourceComponent.Get()->GetGridBounds();

	return Provider;
}

FComputeDataProviderRenderProxy* UPCGCustomComputeKernelDataProvider::GetRenderProxy()
{
	return new FPCGCustomComputeKernelDataProviderProxy(ThreadCount, ThreadCountMultiplier, Seed, SeedSettings, SeedComponent, SourceComponentBounds);
}

bool FPCGCustomComputeKernelDataProviderProxy::IsValid(FValidationData const& InValidationData) const
{
	if (InValidationData.ParameterStructSize != sizeof(FParameters))
	{
		UE_LOG(LogPCG, Error, TEXT("Proxy invalid due to mismatching ParameterStructSize."));
		return false;
	}

	return true;
}

int32 FPCGCustomComputeKernelDataProviderProxy::GetDispatchThreadCount(TArray<FIntVector>& InOutThreadCounts) const
{
	// Always dispatch at least one thread. This is necessary in order to flag the kernel as executed.
	InOutThreadCounts.Emplace(FMath::Max(1, ThreadCount), 1, 1);
	return InOutThreadCounts.Num();
}

void FPCGCustomComputeKernelDataProviderProxy::GatherDispatchData(FDispatchData const& InDispatchData)
{
	const TStridedView<FParameters> ParameterArray = MakeStridedParameterView<FParameters>(InDispatchData);
	for (int32 InvocationIndex = 0; InvocationIndex < InDispatchData.NumInvocations; ++InvocationIndex)
	{
		FParameters& Parameters = ParameterArray[InvocationIndex];

		// Thread count
		// Note: If this ThreadCount is zero, the kernel will still execute one thread, but terminates early when comparing thread index against this value.
		ensure(InDispatchData.bUnifiedDispatch || InDispatchData.NumInvocations == 1);
		Parameters.NumThreads.X = ThreadCount;
		Parameters.NumThreads.Y = Parameters.NumThreads.Z = 1;
		Parameters.ThreadCountMultiplier = ThreadCountMultiplier;

		// Seed for the node
		Parameters.Seed = Seed;
		Parameters.SeedSettings = SeedSettings;
		Parameters.SeedComponent = SeedComponent;

		// Set component bounds
		Parameters.ComponentBoundsMin = (FVector3f)SourceComponentBounds.Min;
		Parameters.ComponentBoundsMax = (FVector3f)SourceComponentBounds.Max;
	}
}
