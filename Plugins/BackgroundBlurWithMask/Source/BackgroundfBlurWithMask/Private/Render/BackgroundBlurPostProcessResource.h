// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Textures/SlateShaderResource.h"
#include "RenderResource.h"
#include "RenderingThread.h"

/**
 * Handle to resources used for post processing.  This should not be deleted manually because it implements FDeferredCleanupInterface
 */
class FBackgroundBlurPostProcessResource : public FSlateShaderResource, public FRenderResource, private FDeferredCleanupInterface
{
public:
	FBackgroundBlurPostProcessResource(int32 InRenderTargetCount);
	~FBackgroundBlurPostProcessResource();

	FTexture2DRHIRef GetRenderTarget(int32 Index)
	{
		return RenderTargets[Index]; 
	}

	/** Performs per frame updates to this resource */
	void Update(const FIntPoint& NewSize);

	void CleanUp();

	/** FRenderResource interface */
	virtual void InitDynamicRHI() override;
	virtual void ReleaseDynamicRHI() override;

	/** FSlateShaderResource interface */
	virtual uint32 GetWidth() const override { return RenderTargetSize.X; }
	virtual uint32 GetHeight() const override { return RenderTargetSize.Y; }
	virtual ESlateShaderResource::Type GetType() const override { return ESlateShaderResource::PostProcess; }


private:
	/** Resizes targets to the new size */
	void ResizeTargets(const FIntPoint& NewSize);

private:
	TArray<FTexture2DRHIRef, TInlineAllocator<3>> RenderTargets;
	EPixelFormat PixelFormat;
	FIntPoint RenderTargetSize;

	int32 RenderTargetCount;
};

