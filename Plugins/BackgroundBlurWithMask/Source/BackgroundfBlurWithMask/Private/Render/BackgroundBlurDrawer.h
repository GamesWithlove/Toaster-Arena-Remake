// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RenderResource.h"
#include "RendererInterface.h"
#include "Rendering/RenderingCommon.h"
#include "CanvasTypes.h"
#include "Widgets/SLeafWidget.h"
#include "BackgroundBlurWithMaskDefine.h"

class FRHICommandListImmediate;

struct FBackgroundBlurRenderParams
{
	int32 KernelSize;
	float ComputedStrength;
	int32 RenderTargetWidth;
	int32 RenderTargetHeight;
	int32 DownsampleAmount;

	FVector4 QuadPositionData;

	FTextureResource* MaskTextureResource;
	EMaskTextureChannel MaskTextureChannel;
	bool bMaskRevertAlpha;

	const FSlateClippingState* ClippingState;

	FBackgroundBlurRenderParams()
	{
		KernelSize = 0;
		ComputedStrength = 0.0f;
		RenderTargetWidth = 0;
		RenderTargetHeight = 0;
		DownsampleAmount = 0;

		ClippingState = nullptr;
		MaskTextureResource = nullptr;
		MaskTextureChannel = EMaskTextureChannel::A;
		bMaskRevertAlpha = false;
	}

};


/**
 * Custom Slate drawer to render a backgroundblur with mask
 */
class FBackgroundBlurDrawer : public ICustomSlateElement
{
public:
	FBackgroundBlurDrawer();
	~FBackgroundBlurDrawer();

	bool InitializeBackgroundBlurParams(FSlateWindowElementList& ElementList, uint32 InLayer, const FPaintGeometry& PaintGeometry, const FVector4& Params, int32 DownsampleAmount, UTexture* InMaskTexture, EMaskTextureChannel InMaskTextureChannel, bool bInMaskRevertAlpha);

private:
	/**
	 * ICustomSlateElement interface 
	 */
	virtual void DrawRenderThread(FRHICommandListImmediate& RHICmdList, const void* InWindowBackBuffer) override;

	const FSlateClippingState* ResolveClippingState(FSlateWindowElementList& ElementList) const;

private:
	
	/** HMD layer ID */
	uint32 LayerID;
	/** true if the RenderThreadCanvas rendered elements last frame */
	bool bCanvasRenderedLastFrame;

	bool bApplyColorDeficiencyCorrection;

	//FSlateStencilClipVertexBuffer StencilVertexBuffer;
	FBackgroundBlurRenderParams RenderParams;
	
};
