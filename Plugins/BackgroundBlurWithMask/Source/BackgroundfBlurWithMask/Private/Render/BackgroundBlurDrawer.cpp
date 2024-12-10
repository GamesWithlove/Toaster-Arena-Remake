// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurDrawer.h"
#include "RenderingThread.h"
#include "UnrealClient.h"
#include "Engine/Engine.h"
#include "EngineModule.h"
#include "Framework/Application/SlateApplication.h"
#include "BackgroundBlurPostProcessor.h"
#include "BackgroundBlurShaders.h"
#include "BackgroundBlurRenderer.h"
#include "TextureResource.h"

#define INVALID_LAYER_ID UINT_MAX

static const FName RendererModuleName("Renderer");

FBackgroundBlurDrawer::FBackgroundBlurDrawer()
	: LayerID(INVALID_LAYER_ID)
	, bApplyColorDeficiencyCorrection(true)
{
	
}

FBackgroundBlurDrawer::~FBackgroundBlurDrawer()
{
	
}

static bool ShouldCullWidget(const FSlateWindowElementList& ElementList)
{
	const FSlateClippingManager& ClippingManager = ElementList.GetClippingManager();
	const int32 CurrentIndex = ClippingManager.GetClippingIndex();
	if (CurrentIndex != INDEX_NONE)
	{
		const FSlateClippingState& ClippingState = ClippingManager.GetClippingStates()[CurrentIndex];
		return ClippingState.HasZeroArea();
	}

	return false;
}

bool FBackgroundBlurDrawer::InitializeBackgroundBlurParams(FSlateWindowElementList& ElementList, uint32 InLayer, const FPaintGeometry& PaintGeometry, const FVector4& Params, int32 DownsampleAmount, UTexture* InMaskTexture, EMaskTextureChannel InMaskTextureChannel, bool bInMaskRevertAlpha)
{
	PaintGeometry.CommitTransformsIfUsingLegacyConstructor();

	if (ShouldCullWidget(ElementList))
	{
		return false;
	}

	const FSlateRenderTransform& RenderTransform = PaintGeometry.GetAccumulatedRenderTransform();
	const FVector2D& LocalSize = PaintGeometry.GetLocalSize();

	//@todo doesn't work with rotated or skewed objects yet
	const FVector2D& Position = FVector2D(PaintGeometry.DrawPosition);

	const int32 Layer = InLayer;

	// Determine the four corners of the quad
	FVector2D TopLeft = FVector2D::ZeroVector;
	FVector2D TopRight = FVector2D(LocalSize.X, 0);
	FVector2D BotLeft = FVector2D(0, LocalSize.Y);
	FVector2D BotRight = FVector2D(LocalSize.X, LocalSize.Y);

	FVector2D WorldTopLeft = TransformPoint(RenderTransform, TopLeft).RoundToVector();
	FVector2D WorldBotRight = TransformPoint(RenderTransform, BotRight).RoundToVector();

	FVector2D WindowSize = ElementList.GetPaintWindow()->GetViewportSize();;
	FVector2D SizeUV = (WorldBotRight - WorldTopLeft) / WindowSize;

	const FSlateClippingState* ClipState = ResolveClippingState(ElementList);

	FTextureResource* MaskTextureResource;
	if (InMaskTexture)
	{
		MaskTextureResource = InMaskTexture->Resource;
	}
	else
	{
		MaskTextureResource = nullptr;
	}

	// These could be negative with rotation or negative scales.  This is not supported yet
	if (SizeUV.X > 0 && SizeUV.Y > 0)
	{
		RenderParams.KernelSize = Params.X;
		RenderParams.ComputedStrength = Params.Y;
		RenderParams.RenderTargetWidth = Params.Z;
		RenderParams.RenderTargetHeight = Params.W;
		RenderParams.DownsampleAmount = DownsampleAmount;
		RenderParams.QuadPositionData = FVector4(WorldTopLeft, WorldBotRight);

		// Todo, need check changed?
		RenderParams.MaskTextureResource = MaskTextureResource;
		RenderParams.MaskTextureChannel = InMaskTextureChannel;
		RenderParams.bMaskRevertAlpha = bInMaskRevertAlpha;

		RenderParams.ClippingState = ClipState;
		return true;
	}

	return false;
}

const FSlateClippingState* FBackgroundBlurDrawer::ResolveClippingState(FSlateWindowElementList& ElementList) const
{
	FClipStateHandle ClipHandle;
	ClipHandle.SetPreCachedClipIndex(ElementList.GetClippingIndex());

	const TArray<FSlateClippingState>* PrecachedClippingStates = &ElementList.GetClippingManager().GetClippingStates();

	// Do cached first
	if (ClipHandle.GetCachedClipState())
	{
		// We should be working with cached elements if we have a cached clip state
		//check(ElementList);
		return ClipHandle.GetCachedClipState();
	}
	else if (PrecachedClippingStates->IsValidIndex(ClipHandle.GetPrecachedClipIndex()))
	{
		// Store the clipping state so we can use it later for rendering.
		return &(*PrecachedClippingStates)[ClipHandle.GetPrecachedClipIndex()];
	}

	return nullptr;
}

static bool IsMemorylessTexture(const FTexture2DRHIRef& Tex)
{
	if (Tex)
	{
		return EnumHasAnyFlags(Tex->GetFlags(), TexCreate_Memoryless);
	}
	return false;
}

static bool UpdateScissorRect(
	FRHICommandList& RHICmdList,
	FIntPoint& BackBufferSize,
	const FSlateClippingState* ClippingState,
	FTexture2DRHIRef& ColorTarget,
	const FVector2D& ViewTranslation2D,
	FGraphicsPipelineStateInitializer& InGraphicsPSOInit,
	bool bForceStateChange)
{
	check(RHICmdList.IsInsideRenderPass());
	bool bDidRestartRenderpass = false;

	if (ClippingState != nullptr || bForceStateChange)
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_Slate_UpdateScissorRect);

		if (ClippingState)
		{
			const FSlateClippingState& ClipState = *ClippingState;
			if (ClipState.GetClippingMethod() == EClippingMethod::Scissor)
			{
				const FSlateClippingZone& ScissorRect = ClipState.ScissorRect.GetValue();

				const FIntPoint SizeXY = BackBufferSize;
				const FVector2D ViewSize((float)SizeXY.X, (float)SizeXY.Y);

				// Clamp scissor rect to BackBuffer size
				const FVector2D TopLeft = FMath::Min(FMath::Max(FVector2D(ScissorRect.TopLeft) + ViewTranslation2D, FVector2D(0.0f, 0.0f)), ViewSize);
				const FVector2D BottomRight = FMath::Min(FMath::Max(FVector2D(ScissorRect.BottomRight) + ViewTranslation2D, FVector2D(0.0f, 0.0f)), ViewSize);

				if (TopLeft.X <= BottomRight.X && TopLeft.Y <= BottomRight.Y)
				{
					RHICmdList.SetScissorRect(true, TopLeft.X, TopLeft.Y, BottomRight.X, BottomRight.Y);
				}
				else
				{
					RHICmdList.SetScissorRect(false, 0, 0, 0, 0);
				}
				//RHICmdList.SetScissorRect(true, TopLeft.X, TopLeft.Y, BottomRight.X, BottomRight.Y);

				// Disable depth/stencil testing by default
				InGraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
			}
			

			RHICmdList.ApplyCachedRenderTargets(InGraphicsPSOInit);
		}
		else
		{
			RHICmdList.SetScissorRect(false, 0, 0, 0, 0);

			// Disable depth/stencil testing
			InGraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
		}
	}

	return bDidRestartRenderpass;
}


void FBackgroundBlurDrawer::DrawRenderThread(FRHICommandListImmediate& RHICmdList, const void* InWindowBackBuffer)
{
	
	IRendererModule& RendererModule = FModuleManager::GetModuleChecked<IRendererModule>(RendererModuleName);

	// This is the stenciling ref variable we set any time we draw, so that any stencil comparisons use the right mask id.
	{
		//SLATE_DRAW_EVENT(RHICmdList, PostProcess);
		//RHICmdList.EndRenderPass();

		FTexture2DRHIRef PostProcessTexture = *(FTexture2DRHIRef*)(InWindowBackBuffer);
		FTexture2DRHIRef ColorTarget = *(FTexture2DRHIRef*)(InWindowBackBuffer);

		FVector4 QuadPositionData = RenderParams.QuadPositionData;
		FIntPoint BackBufferSize = PostProcessTexture->GetSizeXY();

		const FSlateClippingState* ClippingState = RenderParams.ClippingState;
		const FSlateClippingState* LastClippingState = nullptr;

		// Currently, BackgroundBlur for 3D widget is not supported.
		FVector2D ViewTranslation2D = FVector2D::ZeroVector;
		//bool bSwitchVerticalAxis = RHINeedsToSwitchVerticalAxis(GShaderPlatformForFeatureLevel[GMaxRHIFeatureLevel]);

		FPostProcessRectParams RectParams;
		RectParams.SourceTexture = PostProcessTexture->GetTexture2D();
		RectParams.SourceRect = FSlateRect(0, 0, PostProcessTexture->GetSizeX(), PostProcessTexture->GetSizeY());
		RectParams.DestRect = FSlateRect(QuadPositionData.X, QuadPositionData.Y, QuadPositionData.Z, QuadPositionData.W);
		RectParams.SourceTextureSize = PostProcessTexture->GetSizeXY();

		RectParams.RestoreStateFunc = [&](FRHICommandListImmediate& InRHICmdList, FGraphicsPipelineStateInitializer& InGraphicsPSOInit) {
			return UpdateScissorRect(
				InRHICmdList,
				BackBufferSize,
				ClippingState,
				ColorTarget,
				ViewTranslation2D,
				InGraphicsPSOInit,
				true);
		};

		RectParams.RestoreStateFuncPostPipelineState = [&]() {
			RHICmdList.SetStencilRef(0);
		};

		FBlurRectParams BlurParams;
		BlurParams.KernelSize = RenderParams.KernelSize;
		BlurParams.Strength = RenderParams.ComputedStrength;
		BlurParams.DownsampleAmount = RenderParams.DownsampleAmount;
		BlurParams.MaskTextureChannel = (int32)RenderParams.MaskTextureChannel;
		BlurParams.bMaskRevertAlpha = RenderParams.bMaskRevertAlpha;
		if (RenderParams.MaskTextureResource)
		{
			BlurParams.MaskTexture = RenderParams.MaskTextureResource->TextureRHI;
		}
		
		FBackgroundBlurRenderer::Get().GetPostProcessor()->BlurRect(RHICmdList, RendererModule, BlurParams, RectParams);

		check(RHICmdList.IsOutsideRenderPass());
		// Render pass for slate elements will be restarted on a next loop iteration if any
	}

}



