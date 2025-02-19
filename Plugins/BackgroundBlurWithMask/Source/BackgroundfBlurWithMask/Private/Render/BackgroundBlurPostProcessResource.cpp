// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurPostProcessResource.h"
#include "RenderUtils.h"

DECLARE_MEMORY_STAT(TEXT("PostProcess RenderTargets"), STAT_SLATEPPRenderTargetMem, STATGROUP_SlateMemory);

FBackgroundBlurPostProcessResource::FBackgroundBlurPostProcessResource(int32 InRenderTargetCount)
	: RenderTargetSize(FIntPoint::ZeroValue)
	, RenderTargetCount(InRenderTargetCount)
{
}

FBackgroundBlurPostProcessResource::~FBackgroundBlurPostProcessResource()
{

}

void FBackgroundBlurPostProcessResource::Update(const FIntPoint& NewSize)
{
	if(NewSize.X > RenderTargetSize.X || NewSize.Y > RenderTargetSize.Y || RenderTargetSize == FIntPoint::ZeroValue || RenderTargets.Num() == 0 )
	{
		if(!IsInitialized())
		{
			InitResource();
		}
	
		ResizeTargets(NewSize);
	}
}

void FBackgroundBlurPostProcessResource::ResizeTargets(const FIntPoint& NewSize)
{
	check(IsInRenderingThread());

	RenderTargets.Empty();

	RenderTargetSize = NewSize;

	PixelFormat = PF_B8G8R8A8;
	if (RenderTargetSize.X > 0 && RenderTargetSize.Y > 0)
	{
		for (int32 TexIndex = 0; TexIndex < RenderTargetCount; ++TexIndex)
		{
			FTexture2DRHIRef RenderTargetTextureRHI;
			FTexture2DRHIRef ShaderResourceUnused;
			FRHIResourceCreateInfo CreateInfo(TEXT("FBackgroundBlurPostProcessResource"));;
			RHICreateTargetableShaderResource2D(
				RenderTargetSize.X,
				RenderTargetSize.Y,
				PixelFormat,
				1,
				TexCreate_None,
				TexCreate_RenderTargetable,
				/*bNeedsTwoCopies=*/false,
				CreateInfo,
				RenderTargetTextureRHI,
				ShaderResourceUnused
			);

			RenderTargets.Add(RenderTargetTextureRHI);
		}
	}

	STAT(int64 TotalMemory = RenderTargetCount * GPixelFormats[PixelFormat].BlockBytes*RenderTargetSize.X*RenderTargetSize.Y);
	SET_MEMORY_STAT(STAT_SLATEPPRenderTargetMem, TotalMemory);
}

void FBackgroundBlurPostProcessResource::CleanUp()
{
	BeginReleaseResource(this);

	BeginCleanup(this);
}

void FBackgroundBlurPostProcessResource::InitDynamicRHI()
{
}

void FBackgroundBlurPostProcessResource::ReleaseDynamicRHI()
{
	SET_MEMORY_STAT(STAT_SLATEPPRenderTargetMem, 0);

	RenderTargetSize = FIntPoint::ZeroValue;

	RenderTargets.Empty();
}

