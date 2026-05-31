// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurDrawer.h"
#include "RenderingThread.h"
#include "UnrealClient.h"
#include "Engine/Engine.h"
#include "Engine/Texture.h"
#include "EngineModule.h"
#include "Framework/Application/SlateApplication.h"
#include "BackgroundBlurPostProcessor.h"
#include "BackgroundBlurRenderer.h"
#include "TextureResource.h"
#include "Engine/TextureRenderTarget2D.h"

#define INVALID_LAYER_ID UINT_MAX

namespace BlurDrawer
{
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


	enum class ESlateClippingStencilAction : uint8
	{
		None,
		Write,
		Clear
	};

	struct FSlateClippingCreateContext
	{
		uint32 NumStencils = 0;
		uint32 NumScissors = 0;
		uint32 MaskingId = 0;
		ESlateClippingStencilAction StencilAction = ESlateClippingStencilAction::None;
	};

	const FSlateClippingOp* CreateSlateClipping(FRDGBuilder& GraphBuilder, const FVector2f ElementsOffset, const FSlateClippingState* ClippingState, FSlateClippingCreateContext& Context)
	{
		Context.StencilAction = ESlateClippingStencilAction::None;

		if (ClippingState)
		{
			if (ClippingState->GetClippingMethod() == EClippingMethod::Scissor)
			{
				Context.NumScissors++;

				const FSlateClippingZone& ScissorRect = ClippingState->ScissorRect.GetValue();

				return FSlateClippingOp::Scissor(GraphBuilder, ElementsOffset, FSlateRect(ScissorRect.TopLeft.X, ScissorRect.TopLeft.Y, ScissorRect.BottomRight.X, ScissorRect.BottomRight.Y));
			}
			else
			{
				Context.NumStencils++;

				TConstArrayView<FSlateClippingZone> StencilQuads = ClippingState->StencilQuads;
				check(StencilQuads.Num() > 0);

				// Reset the masking ID back to zero if stencil is going to overflow.
				if (Context.MaskingId + StencilQuads.Num() > 255)
				{
					Context.MaskingId = 0;
				}

				// Mark stencil for clear when the masking id is 0.
				Context.StencilAction = Context.MaskingId == 0 ? ESlateClippingStencilAction::Clear : ESlateClippingStencilAction::Write;

				const FSlateClippingOp* Op = FSlateClippingOp::Stencil(GraphBuilder, ElementsOffset, StencilQuads, Context.MaskingId);
				Context.MaskingId += StencilQuads.Num();
				return Op;
			}
		}
		return nullptr;
	}

}


static const FName RendererModuleName("Renderer");

FBackgroundBlurDrawer::FBackgroundBlurDrawer()
	: LayerID(INVALID_LAYER_ID)
	, bApplyColorDeficiencyCorrection(true)
{
	
}

FBackgroundBlurDrawer::~FBackgroundBlurDrawer()
{
	if (MaskPooledTexture)
	{
		MaskPooledTexture.SafeRelease();
		MaskPooledTexture = nullptr;
	}
}

bool FBackgroundBlurDrawer::InitializeBackgroundBlurParams(FSlateWindowElementList& ElementList, uint32 InLayer, const FPaintGeometry& PaintGeometry, const FVector4& Params, int32 DownsampleAmount, UTexture* InMaskTexture, EMaskTextureChannel InMaskTextureChannel, bool bInMaskRevertAlpha)
{
	PaintGeometry.CommitTransformsIfUsingLegacyConstructor();

	if (BlurDrawer::ShouldCullWidget(ElementList))
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
		MaskTextureResource = InMaskTexture->GetResource();
	}
	else
	{
		MaskTextureResource = nullptr;
	}

	if (!MaskTextureResource)
	{
		// Create a static white texture to use as a mask  
		static UTextureRenderTarget2D* RT_MaskTexture = nullptr;
		if (!RT_MaskTexture)
		{
			RT_MaskTexture = NewObject<UTextureRenderTarget2D>();
			RT_MaskTexture->AddToRoot();
			RT_MaskTexture->ClearColor = FLinearColor::White;
			RT_MaskTexture->bAutoGenerateMips = false;
			RT_MaskTexture->bCanCreateUAV = false;
			RT_MaskTexture->InitAutoFormat(1, 1);
			RT_MaskTexture->UpdateResourceImmediate(true);
		}
		MaskTextureResource = RT_MaskTexture->GetResource();
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

void FBackgroundBlurDrawer::Draw_RenderThread(FRDGBuilder& GraphBuilder, const FDrawPassInputs& Inputs)
{
	if (!TStaticDepthStencilState<false, CF_Always>::GetRHI())
	{
		return;
	}

	// Provided output texture is actually the input into our custom post process texture.
	const FScreenPassTexture InputTexture(Inputs.OutputTexture, Inputs.SceneViewRect);

	BlurDrawer::FSlateClippingCreateContext Context;
	FVector2f ElementsOffset = Inputs.ElementsOffset;
	const FSlateClippingOp* ClippingOp = BlurDrawer::CreateSlateClipping(GraphBuilder, ElementsOffset, RenderParams.ClippingState, Context);

	{
		FSlateMaskBlurBlurPassInputs BlurInputs;

		//if (Inputs.SceneViewportTexture && Inputs.SceneViewportTexture != Inputs.ElementsTexture)
		{
			// Blur uses the scene viewport texture output as blur input and composites UI separately.
			BlurInputs.InputTexture = Inputs.OutputTexture;
		}

		FBackgroundBlurRenderParams& ShaderParams = RenderParams;
		
		FVector4 QuadPositionData = RenderParams.QuadPositionData;
		BlurInputs.InputRect = FIntRect(QuadPositionData.X, QuadPositionData.Y, QuadPositionData.Z, QuadPositionData.W);// FIntRect(0, 0, PostProcessTexture->GetSizeX(), PostProcessTexture->GetSizeY()); // FIntRect(ShaderParams.PixelParams.X, ShaderParams.PixelParams.Y, ShaderParams.PixelParams.Z, ShaderParams.PixelParams.W);
		BlurInputs.OutputTexture = Inputs.OutputTexture;
		BlurInputs.OutputRect = BlurInputs.InputRect;
		//BlurInputs.OutputLoadAction = ;// ConsumeLoadAction(ElementsLoadAction);
		BlurInputs.ClippingOp = ClippingOp;// NextClippingOp;
		//BlurInputs.ClippingStencilBinding = ;// &NextPassParameters->RenderTargets.DepthStencil;
		BlurInputs.ClippingElementsViewRect = BlurInputs.InputRect;// RenderBatchDrawInputs->ElementsViewRect;
		BlurInputs.KernelSize = RenderParams.KernelSize;
		BlurInputs.Strength = RenderParams.ComputedStrength;
		BlurInputs.DownsampleAmount = RenderParams.DownsampleAmount;
		//BlurInputs.CornerRadius = 0.0f;// ShaderParams.PixelParams3;
		BlurInputs.MaskTextureChannel = (int32)RenderParams.MaskTextureChannel;
		BlurInputs.bMaskRevertAlpha = RenderParams.bMaskRevertAlpha;
		if (RenderParams.MaskTextureResource)
		{
			if (CachedMaskTextureResource != RenderParams.MaskTextureResource && MaskPooledTexture)
			{
				MaskPooledTexture.SafeRelease();
				MaskPooledTexture = nullptr;
			}

			if (!MaskPooledTexture)
			{
				CachedMaskTextureResource = RenderParams.MaskTextureResource;
				MaskPooledTexture = CreateRenderTarget(RenderParams.MaskTextureResource->TextureRHI, TEXT("SlateBlurMaskTexture"));
			}
			BlurInputs.MaskTexture = GraphBuilder.RegisterExternalTexture(MaskPooledTexture);
		}

		AddSlateMaskBlurBlurPass(GraphBuilder, BlurInputs);
	}

}



