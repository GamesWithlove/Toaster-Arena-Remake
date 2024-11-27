// Copyright Qibo Pang 2022. All Rights Reserved.


#pragma once

#include "CoreMinimal.h"
#include "RenderResource.h"
#include "ShaderParameters.h"
#include "Shader.h"
#include "GlobalShader.h"
#include "ShaderParameterUtils.h"
#include "Rendering/RenderingCommon.h"
#include "RHIStaticStates.h"

const int32 MAX_BLUR_SAMPLES = 127;

/**
 * Base class slate pixel shader for all elements
 */
class FBackgroundBlurElementPS : public FGlobalShader
{
	DECLARE_TYPE_LAYOUT(FBackgroundBlurElementPS, NonVirtual);
public:
	/** Indicates that this shader should be cached */
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return true;
	}

	FBackgroundBlurElementPS()
	{
	}

	/** Constructor.  Binds all parameters used by the shader */
	FBackgroundBlurElementPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FGlobalShader(Initializer)
	{
		TextureParameter.Bind(Initializer.ParameterMap, TEXT("ElementTexture"));
		TextureParameterSampler.Bind(Initializer.ParameterMap, TEXT("ElementTextureSampler"));
		ShaderParams.Bind(Initializer.ParameterMap, TEXT("ShaderParams"));
		GammaAndAlphaValues.Bind(Initializer.ParameterMap, TEXT("GammaAndAlphaValues"));
	}

	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment);

	/**
	 * Sets the element texture used by this shader
	 *
	 * @param Texture	Texture resource to use when this pixel shader is bound
	 * @param SamplerState	Sampler state to use when sampling this texture
	 */
	void SetTexture(FRHICommandList& RHICmdList, FRHITexture* InTexture, const FSamplerStateRHIRef SamplerState)
	{
		SetTextureParameter(RHICmdList, RHICmdList.GetBoundPixelShader(), TextureParameter, TextureParameterSampler, SamplerState, InTexture);
	}

	/**
	 * Sets shader params used by the shader
	 *
	 * @param InShaderParams Shader params to use
	 */
	void SetShaderParams(FRHICommandList& RHICmdList, const FVector4f& InShaderParams)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), ShaderParams, FVector3d(InShaderParams));
	}

	/**
	 * Sets the display gamma.
	 *
	 * @param DisplayGamma The display gamma to use
	 */
	void SetDisplayGammaAndInvertAlphaAndContrast(FRHICommandList& RHICmdList, float InDisplayGamma, float bInvertAlpha, float InContrast)
	{
		FVector4f Values(2.2f / InDisplayGamma, 1.0f / InDisplayGamma, bInvertAlpha, InContrast);

		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), GammaAndAlphaValues, FVector3d(Values));
	}

private:

	/** Texture parameter used by the shader */
	LAYOUT_FIELD(FShaderResourceParameter, TextureParameter);
	LAYOUT_FIELD(FShaderResourceParameter, TextureParameterSampler);
	LAYOUT_FIELD(FShaderParameter, ShaderParams);
	LAYOUT_FIELD(FShaderParameter, GammaAndAlphaValues);
};


class FBackgroundBlurPostProcessBlurPS : public FBackgroundBlurElementPS
{
	DECLARE_SHADER_TYPE(FBackgroundBlurPostProcessBlurPS, Global);
public:
	/** Indicates that this shader should be cached */
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return true;
	}

	FBackgroundBlurPostProcessBlurPS()
	{
	}

	/** Constructor.  Binds all parameters used by the shader */
	FBackgroundBlurPostProcessBlurPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FBackgroundBlurElementPS(Initializer)
	{
		BufferSizeAndDirection.Bind(Initializer.ParameterMap, TEXT("BufferSizeAndDirection"));
		WeightAndOffsets.Bind(Initializer.ParameterMap, TEXT("WeightAndOffsets"));
		SampleCount.Bind(Initializer.ParameterMap, TEXT("SampleCount"));
		UVBounds.Bind(Initializer.ParameterMap, TEXT("UVBounds"));
	}

	void SetBufferSizeAndDirection(FRHICommandList& RHICmdList, const FVector2f& InBufferSize, const FVector2f& InDir)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), BufferSizeAndDirection, FVector3d(FVector4f(InBufferSize, InDir)));
	}

	void SetWeightsAndOffsets(FRHICommandList& RHICmdList, const TArray<FVector4f>& InWeightsAndOffsets, int32 NumSamples )
	{
		check(InWeightsAndOffsets.Num() <= MAX_BLUR_SAMPLES);
		SetShaderValueArray<FRHIPixelShader*, FVector4f>(RHICmdList, RHICmdList.GetBoundPixelShader(), WeightAndOffsets, InWeightsAndOffsets.GetData(), InWeightsAndOffsets.Num() );
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), SampleCount, NumSamples);
	}

	void SetUVBounds(FRHICommandList& RHICmdList, const FVector4f& InUVBounds)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), UVBounds, FVector3d(InUVBounds));
	}

private:
	LAYOUT_FIELD(FShaderParameter, BufferSizeAndDirection);
	LAYOUT_FIELD(FShaderParameter, WeightAndOffsets);
	LAYOUT_FIELD(FShaderParameter, SampleCount);
	LAYOUT_FIELD(FShaderParameter, UVBounds);
};

/**
 * A pixel shader for rendering a textured screen element.
 */
class FBackgroundBlurScreenWithMaskPS : public FBackgroundBlurElementPS
{
	DECLARE_SHADER_TYPE(FBackgroundBlurScreenWithMaskPS, Global);
public:

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters) { return true; }

	FBackgroundBlurScreenWithMaskPS() {}

	FBackgroundBlurScreenWithMaskPS(const ShaderMetaType::CompiledShaderInitializerType& Initializer) :
		FBackgroundBlurElementPS(Initializer)
	{
		//InTexture.Bind(Initializer.ParameterMap, TEXT("InTexture"), SPF_Mandatory);
		//InTextureSampler.Bind(Initializer.ParameterMap, TEXT("InTextureSampler"));
		UVBounds.Bind(Initializer.ParameterMap, TEXT("UVBounds"));

		MaskTextureParameter.Bind(Initializer.ParameterMap, TEXT("MaskTexture"));
		MaskTextureParameterSampler.Bind(Initializer.ParameterMap, TEXT("MaskTextureSampler"));
		MaskTextureChannelParameter.Bind(Initializer.ParameterMap, TEXT("MaskTextureChannel"));
		MaskTransformParameter.Bind(Initializer.ParameterMap, TEXT("MaskTransform"));

		SourceTextureParameter.Bind(Initializer.ParameterMap, TEXT("SourceTexture"));
		SourceTextureParameterSampler.Bind(Initializer.ParameterMap, TEXT("SourceTextureSampler"));
		SourceUVBounds.Bind(Initializer.ParameterMap, TEXT("SourceUVBounds"));
	}

	void SetSourceTexture(FRHICommandList& RHICmdList, FRHITexture* InSourceTexture, const FSamplerStateRHIRef SourceSamplerState)
	{
		SetTextureParameter(RHICmdList, RHICmdList.GetBoundPixelShader(), SourceTextureParameter, SourceTextureParameterSampler, SourceSamplerState, InSourceTexture);
	}

	void SetSourceUVBounds(FRHICommandList& RHICmdList, const FVector4f& InSourceUVBounds)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), SourceUVBounds, FVector3d(InSourceUVBounds));
	}

	void SetUVBounds(FRHICommandList& RHICmdList, const FVector4f& InUVBounds)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), UVBounds, FVector3d(InUVBounds));
	}

	/**
	 * Sets the mask texture used by this shader
	 *
	 * @param Texture	Texture resource to use when this pixel shader is bound
	 * @param SamplerState	Sampler state to use when sampling this texture
	 */
	void SetMaskTexture(FRHICommandList& RHICmdList, FRHITexture* InMaskTexture, const FSamplerStateRHIRef MaskSamplerState)
	{
		SetTextureParameter(RHICmdList, RHICmdList.GetBoundPixelShader(), MaskTextureParameter, MaskTextureParameterSampler, MaskSamplerState, InMaskTexture);
	}

	/**
	 * Sets the mask texture channel by this shader
	 *
	 * @param InMaskTextureChannel
	 */
	void SetMaskTextureChannel(FRHICommandList& RHICmdList, int32 InMaskTextureChannel)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), MaskTextureChannelParameter, InMaskTextureChannel);
	}

	/**
	 * Sets the mask transform by this shader
	 *
	 * @param InMaskTransform
	 */
	void SetMaskTransform(FRHICommandList& RHICmdList, FVector2f InMaskTransform)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), MaskTransformParameter, FVector2d(InMaskTransform));
	}

private:
	/*LAYOUT_FIELD(FShaderResourceParameter, InTexture);
	LAYOUT_FIELD(FShaderResourceParameter, InTextureSampler);*/
	LAYOUT_FIELD(FShaderParameter, UVBounds);

	LAYOUT_FIELD(FShaderResourceParameter, MaskTextureParameter);
	LAYOUT_FIELD(FShaderResourceParameter, MaskTextureParameterSampler);
	LAYOUT_FIELD(FShaderParameter, MaskTextureChannelParameter);
	LAYOUT_FIELD(FShaderParameter, MaskTransformParameter);

	LAYOUT_FIELD(FShaderResourceParameter, SourceTextureParameter);
	LAYOUT_FIELD(FShaderResourceParameter, SourceTextureParameterSampler);
	LAYOUT_FIELD(FShaderParameter, SourceUVBounds);
};


class FBackgroundBlurPostProcessDownsamplePS : public FBackgroundBlurElementPS
{
	DECLARE_SHADER_TYPE(FBackgroundBlurPostProcessDownsamplePS, Global);
public:
	/** Indicates that this shader should be cached */
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return true;
	}

	FBackgroundBlurPostProcessDownsamplePS()
	{
	}

	/** Constructor.  Binds all parameters used by the shader */
	FBackgroundBlurPostProcessDownsamplePS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FBackgroundBlurElementPS(Initializer)
	{
		UVBounds.Bind(Initializer.ParameterMap, TEXT("UVBounds"));
	}

	void SetUVBounds(FRHICommandList& RHICmdList, const FVector4f& InUVBounds)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), UVBounds, FVector3d(InUVBounds));
	}

private:
	LAYOUT_FIELD(FShaderParameter, UVBounds);
};

class FBackgroundBlurPostProcessCopysamplePS : public FBackgroundBlurElementPS
{
	DECLARE_SHADER_TYPE(FBackgroundBlurPostProcessCopysamplePS, Global);
public:
	/** Indicates that this shader should be cached */
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
		return true;
	}

	FBackgroundBlurPostProcessCopysamplePS()
	{
	}

	/** Constructor.  Binds all parameters used by the shader */
	FBackgroundBlurPostProcessCopysamplePS(const ShaderMetaType::CompiledShaderInitializerType& Initializer)
		: FBackgroundBlurElementPS(Initializer)
	{
		UVBounds.Bind(Initializer.ParameterMap, TEXT("UVBounds"));
	}

	void SetUVBounds(FRHICommandList& RHICmdList, const FVector4f& InUVBounds)
	{
		SetShaderValue(RHICmdList, RHICmdList.GetBoundPixelShader(), UVBounds, FVector3d(InUVBounds));
	}

private:
	LAYOUT_FIELD(FShaderParameter, UVBounds);
};

