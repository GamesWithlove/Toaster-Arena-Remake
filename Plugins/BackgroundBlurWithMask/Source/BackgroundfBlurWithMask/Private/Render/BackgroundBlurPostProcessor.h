// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHI.h"
#include "Layout/SlateRect.h"

class FBackgroundBlurPostProcessResource;
class IRendererModule;

struct FPostProcessRectParams
{
	FTexture2DRHIRef SourceTexture;
	FSlateRect SourceRect;
	FSlateRect DestRect;
	FIntPoint SourceTextureSize;
	TFunction<void(FRHICommandListImmediate&, FGraphicsPipelineStateInitializer&)> RestoreStateFunc;
	TFunction<void()> RestoreStateFuncPostPipelineState;
};

struct FBlurRectParams
{
	int32 KernelSize;
	int32 DownsampleAmount;
	float Strength;
	
	FTextureRHIRef MaskTexture;
	int32 MaskTextureChannel;
	bool bMaskRevertAlpha;

	FBlurRectParams()
	{
		KernelSize = 0;
		DownsampleAmount = 0;
		Strength = 0.0f;
		bMaskRevertAlpha = false;
		MaskTextureChannel = 0;

		MaskTexture = nullptr;
	}
};

class FBackgroundBlurPostProcessor
{
public:
	FBackgroundBlurPostProcessor();
	~FBackgroundBlurPostProcessor();

	void BlurRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FBlurRectParams& Params, const FPostProcessRectParams& RectParams);
	
	void ReleaseRenderTargets();

private:

	void CopysampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FPostProcessRectParams& Params);
	void DownsampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FPostProcessRectParams& Params, const FIntPoint& DownsampleSize);
	void UpsampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FBlurRectParams& Params, const FPostProcessRectParams& RectParams, const FIntPoint& DownsampleSize, FSamplerStateRHIRef& Sampler);
	int32 ComputeBlurWeights(int32 KernelSize, float StdDev, TArray<FVector4f>& OutWeightsAndOffsets);

private:
	FBackgroundBlurPostProcessResource* IntermediateTargets;
	FGPUFenceRHIRef Fence;
};