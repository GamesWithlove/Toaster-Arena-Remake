// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGTextureDataInterface.h"

#include "PCGData.h"
#include "Compute/PCGDataBinding.h"
#include "Data/PCGTextureData.h"

#include "GlobalRenderResources.h"
#include "RHIResources.h"
#include "RHIStaticStates.h"
#include "ShaderCompilerCore.h"
#include "ShaderCore.h"
#include "ShaderParameterMetadataBuilder.h"
#include "TextureResource.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
#include "Engine/Texture.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGTextureDataInterface)

void UPCGTextureDataInterface::GetSupportedInputs(TArray<FShaderFunctionDefinition>& OutFunctions) const
{
	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("GetTexCoords"))
		.AddReturnType(EShaderFundamentalType::Float, 2)
		.AddParam(EShaderFundamentalType::Float, 2)
		.AddParam(EShaderFundamentalType::Float, 2)
		.AddParam(EShaderFundamentalType::Float, 2);

	OutFunctions.AddDefaulted_GetRef()
		.SetName(TEXT("Sample"))
		.AddReturnType(EShaderFundamentalType::Float, 4)
		.AddParam(EShaderFundamentalType::Float, 2);
}

BEGIN_SHADER_PARAMETER_STRUCT(FPCGTextureDataInterfaceParameters,)
	SHADER_PARAMETER_TEXTURE(Texture2D, Texture)
	SHADER_PARAMETER_SAMPLER(SamplerState, Sampler)
END_SHADER_PARAMETER_STRUCT()

void UPCGTextureDataInterface::GetShaderParameters(TCHAR const* UID, FShaderParametersMetadataBuilder& InOutBuilder, FShaderParametersMetadataAllocations& InOutAllocations) const
{
	InOutBuilder.AddNestedStruct<FPCGTextureDataInterfaceParameters>(UID);
}

TCHAR const* UPCGTextureDataInterface::TemplateFilePath = TEXT("/Plugin/PCG/Private/PCGTextureDataInterface.ush");

TCHAR const* UPCGTextureDataInterface::GetShaderVirtualPath() const
{
	return TemplateFilePath;
}

void UPCGTextureDataInterface::GetShaderHash(FString& InOutKey) const
{
	GetShaderFileHash(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5).AppendString(InOutKey);
}

void UPCGTextureDataInterface::GetHLSL(FString& OutHLSL, FString const& InDataInterfaceName) const
{
	TMap<FString, FStringFormatArg> TemplateArgs =
	{
		{ TEXT("DataInterfaceName"), InDataInterfaceName },
	};

	FString TemplateFile;
	if (ensure(LoadShaderSourceFile(TemplateFilePath, EShaderPlatform::SP_PCD3D_SM5, &TemplateFile, nullptr)))
	{
		OutHLSL += FString::Format(*TemplateFile, TemplateArgs);
	}
}

UComputeDataProvider* UPCGTextureDataInterface::CreateDataProvider(TObjectPtr<UObject> InBinding, uint64 InInputMask, uint64 InOutputMask) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGTextureDataInterface::CreateDataProvider);
	UPCGDataBinding* Binding = CastChecked<UPCGDataBinding>(InBinding);

	TObjectPtr<UPCGTextureDataProvider> DataProvider = NewObject<UPCGTextureDataProvider>();

	// Take any input pin label alias to obtain the data from the input data collection.
	check(!DownstreamInputPinLabelAliases.IsEmpty());
	const TArray<FPCGTaggedData> TaggedDatas = Binding->DataForGPU.InputDataCollection.GetInputsByPin(DownstreamInputPinLabelAliases[0]);

	if (!TaggedDatas.IsEmpty())
	{
		ensure(TaggedDatas.Num() == 1); // There should only be one texture data
		ensure(TaggedDatas[0].Data->IsA<UPCGTextureData>());

		if (const UPCGTextureData* TextureData = Cast<UPCGTextureData>(TaggedDatas[0].Data))
		{
			const UTexture* Texture = TextureData->Texture.IsValid() ? TextureData->Texture.Get() : nullptr;

			// TODO: Support texture2d array, texture3d
			// TODO: Bindless resources to handle multiple textures

			if (Texture)
			{
				const FTextureResource* TextureResource = Texture->GetResource();

				if (TextureResource && TextureResource->TextureRHI)
				{
					DataProvider->Texture = TextureResource->TextureRHI;
				}
			}
		}
	}

	return DataProvider;
}

FComputeDataProviderRenderProxy* UPCGTextureDataProvider::GetRenderProxy()
{
	FPCGTextureDataProviderProxy* Proxy = new FPCGTextureDataProviderProxy(Texture);
	return Proxy;
}

bool FPCGTextureDataProviderProxy::IsValid(FValidationData const& InValidationData) const
{
	if (InValidationData.ParameterStructSize != sizeof(FParameters))
	{
		return false;
	}

	return true;
}

void FPCGTextureDataProviderProxy::GatherDispatchData(FDispatchData const& InDispatchData)
{
	const TStridedView<FParameters> ParameterArray = MakeStridedParameterView<FParameters>(InDispatchData);
	for (int32 InvocationIndex = 0; InvocationIndex < ParameterArray.Num(); ++InvocationIndex)
	{
		FParameters& Parameters = ParameterArray[InvocationIndex];
		Parameters.Texture = Texture ? (FRHITexture*)Texture : (FRHITexture*)GBlackTexture->TextureRHI;
		Parameters.Sampler = TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	}
}
