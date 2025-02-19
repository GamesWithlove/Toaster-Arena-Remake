// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurPostProcessor.h"
#include "BackgroundBlurPostProcessResource.h"
#include "BackgroundBlurShaders.h"
#include "ScreenRendering.h"
#include "SceneUtils.h"
#include "RendererInterface.h"
#include "StaticBoundShaderState.h"
#include "PipelineStateCache.h"
#include "CommonRenderResources.h"

DECLARE_CYCLE_STAT(TEXT("Slate PostProcessing RT"), STAT_BackgroundBlurPostProcessingRTTime, STATGROUP_Slate);
DECLARE_CYCLE_STAT(TEXT("Slate ColorDeficiency RT"), STAT_SlateColorDeficiencyRTTime, STATGROUP_Slate);

FBackgroundBlurPostProcessor::FBackgroundBlurPostProcessor()
{
	const int32 NumIntermediateTargets = 3;
	IntermediateTargets = new FBackgroundBlurPostProcessResource(NumIntermediateTargets);
	BeginInitResource(IntermediateTargets);
}

FBackgroundBlurPostProcessor::~FBackgroundBlurPostProcessor()
{
	// Note this is deleted automatically because it implements FDeferredCleanupInterface.
	IntermediateTargets->CleanUp();
}

void FBackgroundBlurPostProcessor::BlurRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FBlurRectParams& Params, const FPostProcessRectParams& RectParams)
{
	SCOPE_CYCLE_COUNTER(STAT_BackgroundBlurPostProcessingRTTime);
	check(RHICmdList.IsOutsideRenderPass());

	TArray<FVector4f> WeightsAndOffsets;
	const int32 SampleCount = ComputeBlurWeights(Params.KernelSize, Params.Strength, WeightsAndOffsets);


	const bool bDownsample = Params.DownsampleAmount > 0;

	FIntPoint DestRectSize = RectParams.DestRect.GetSize().IntPoint();
	FIntPoint RequiredSize = bDownsample
										? FIntPoint(FMath::DivideAndRoundUp(DestRectSize.X, Params.DownsampleAmount), FMath::DivideAndRoundUp(DestRectSize.Y, Params.DownsampleAmount))
										: DestRectSize;

	// The max size can get ridiculous with large scale values.  Clamp to size of the backbuffer
	RequiredSize.X = FMath::Min(RequiredSize.X, RectParams.SourceTextureSize.X);
	RequiredSize.Y = FMath::Min(RequiredSize.Y, RectParams.SourceTextureSize.Y);
	
	SCOPED_DRAW_EVENTF(RHICmdList, BackgroundBlurPostProcess, TEXT("Slate Post Process Blur Background Kernel: %dx%d Size: %dx%d"), SampleCount, SampleCount, RequiredSize.X, RequiredSize.Y);

	const FIntPoint DownsampleSize = RequiredSize;

	IntermediateTargets->Update(DestRectSize);

	if(bDownsample)
	{
		DownsampleRect(RHICmdList, RendererModule, RectParams, DownsampleSize);
	}

	CopysampleRect(RHICmdList, RendererModule, RectParams);

	FSamplerStateRHIRef BilinearClamp = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();

#if 1
	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	check(ShaderMap);

	const int32 SrcTextureWidth = RectParams.SourceTextureSize.X;
	const int32 SrcTextureHeight = RectParams.SourceTextureSize.Y;

	const int32 DestTextureWidth = IntermediateTargets->GetWidth();
	const int32 DestTextureHeight = IntermediateTargets->GetHeight();

	const FSlateRect& SourceRect = RectParams.SourceRect;
	const FSlateRect& DestRect = RectParams.DestRect;

	FVertexDeclarationRHIRef VertexDecl = GFilterVertexDeclaration.VertexDeclarationRHI;
	check(IsValidRef(VertexDecl));
	
	FGraphicsPipelineStateInitializer GraphicsPSOInit;
	GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
	GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
	GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();

	RHICmdList.SetScissorRect(false, 0, 0, 0, 0);
	RHICmdList.SetViewport(0, 0, 0, DestTextureWidth, DestTextureHeight, 0.0f);
	
	const FVector2D InvBufferSize = FVector2D(1.0f / DestTextureWidth, 1.0f / DestTextureHeight);
	const FVector2D HalfTexelOffset = FVector2D(0.5f/ DestTextureWidth, 0.5f/ DestTextureHeight);

	TShaderMapRef<FScreenVS> VertexShader(ShaderMap);
	TShaderMapRef<FBackgroundBlurPostProcessBlurPS> PixelShader(ShaderMap);

	for (int32 PassIndex = 0; PassIndex < 2; ++PassIndex)
	{
		// First pass render to the render target with the post process fx
		if (PassIndex == 0)
		{
			FTexture2DRHIRef SourceTexture = bDownsample ? IntermediateTargets->GetRenderTarget(0) : RectParams.SourceTexture;
			FTexture2DRHIRef DestTexture = IntermediateTargets->GetRenderTarget(1);

			RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
			RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV));

			FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
			RHICmdList.BeginRenderPass(RPInfo, TEXT("SlateBlurRectPass0"));
			{
				RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);

				GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = VertexDecl;
				GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
				GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
				GraphicsPSOInit.PrimitiveType = PT_TriangleList;
				SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

				PixelShader->SetWeightsAndOffsets(RHICmdList, WeightsAndOffsets, SampleCount);
				PixelShader->SetTexture(RHICmdList, SourceTexture, BilinearClamp);
				//PixelShader->SetMaskTexture(RHICmdList, Params.MaskTexture, BilinearClamp);
				//PixelShader->SetMaskTextureChannel(RHICmdList, Params.MaskTextureChannel);

				if (bDownsample)
				{
					PixelShader->SetUVBounds(RHICmdList, FVector4f(FVector2f::ZeroVector, FVector2f((float)DownsampleSize.X / DestTextureWidth, (float)DownsampleSize.Y / DestTextureHeight) - FVector2f(HalfTexelOffset)));
					PixelShader->SetBufferSizeAndDirection(RHICmdList, FVector2f(InvBufferSize), FVector2f(1, 0));

					RendererModule.DrawRectangle(
						RHICmdList,
						0, 0,
						DownsampleSize.X, DownsampleSize.Y,
						0, 0,
						DownsampleSize.X, DownsampleSize.Y,
						FIntPoint(DestTextureWidth, DestTextureHeight),
						FIntPoint(DestTextureWidth, DestTextureHeight),
						VertexShader,
						EDRF_Default);
				}
				else
				{
					const FVector2D InvSrcTetureSize(1.f / SrcTextureWidth, 1.f / SrcTextureHeight);

					const FVector2D UVStart = FVector2D(DestRect.Left, DestRect.Top) * InvSrcTetureSize;
					const FVector2D UVEnd = FVector2D(DestRect.Right, DestRect.Bottom) * InvSrcTetureSize;
					const FVector2D SizeUV = UVEnd - UVStart;

					PixelShader->SetUVBounds(RHICmdList, FVector4f(FVector2f(UVStart), FVector2f(UVEnd)));
					PixelShader->SetBufferSizeAndDirection(RHICmdList, FVector2f(InvSrcTetureSize), FVector2f(1, 0));

					RendererModule.DrawRectangle(
						RHICmdList,
						0, 0,
						RequiredSize.X, RequiredSize.Y,
						UVStart.X, UVStart.Y,
						SizeUV.X, SizeUV.Y,
						FIntPoint(DestTextureWidth, DestTextureHeight),
						FIntPoint(1, 1),
						VertexShader,
						EDRF_Default);
				}
			}
			RHICmdList.EndRenderPass();
		}
		else
		{
			FTexture2DRHIRef OrgSourceTexture = RectParams.SourceTexture;
			FTexture2DRHIRef SourceTexture = IntermediateTargets->GetRenderTarget(1);
			FTexture2DRHIRef DestTexture = IntermediateTargets->GetRenderTarget(0);

			RHICmdList.Transition(FRHITransitionInfo(SourceTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
			RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV));

			FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
			RHICmdList.BeginRenderPass(RPInfo, TEXT("SlateBlurRect"));
			{
				RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);

				GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = VertexDecl;
				GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
				GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
				GraphicsPSOInit.PrimitiveType = PT_TriangleList;
				SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

				PixelShader->SetWeightsAndOffsets(RHICmdList, WeightsAndOffsets, SampleCount);
				PixelShader->SetUVBounds(RHICmdList, FVector4f(FVector2f::ZeroVector, FVector2f((float)DownsampleSize.X / DestTextureWidth, (float)DownsampleSize.Y / DestTextureHeight) - FVector2f(HalfTexelOffset)));
				PixelShader->SetTexture(RHICmdList, SourceTexture, BilinearClamp);
				PixelShader->SetBufferSizeAndDirection(RHICmdList, FVector2f(InvBufferSize), FVector2f(0, 1));

				RendererModule.DrawRectangle(
					RHICmdList,
					0, 0,
					DownsampleSize.X, DownsampleSize.Y,
					0, 0,
					DownsampleSize.X, DownsampleSize.Y,
					FIntPoint(DestTextureWidth, DestTextureHeight),
					FIntPoint(DestTextureWidth, DestTextureHeight),
					VertexShader,
					EDRF_Default);
			}
			RHICmdList.EndRenderPass();
		}	
	}

#endif

	UpsampleRect(RHICmdList, RendererModule, Params, RectParams, DownsampleSize, BilinearClamp);
}

void FBackgroundBlurPostProcessor::ReleaseRenderTargets()
{
	check(IsInGameThread());
	// Only release the resource not delete it.  Deleting it could cause issues on any RHI thread
	BeginReleaseResource(IntermediateTargets);
}

void FBackgroundBlurPostProcessor::CopysampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FPostProcessRectParams& Params)
{
	// Source is the viewport.  This is the width and height of the viewport backbuffer
	const int32 SrcTextureWidth = Params.SourceTextureSize.X;
	const int32 SrcTextureHeight = Params.SourceTextureSize.Y;

	// Dest is the destination quad for the downsample
	const int32 DestTextureWidth = IntermediateTargets->GetWidth();
	const int32 DestTextureHeight = IntermediateTargets->GetHeight();

	// Rect of the viewport
	const FSlateRect& SourceRect = Params.SourceRect;

	// Rect of the final destination post process effect (not downsample rect).  This is the area we sample from
	const FSlateRect& DestRect = Params.DestRect;

	const FIntPoint DestRectSize = Params.DestRect.GetSize().IntPoint();

	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	TShaderMapRef<FScreenVS> VertexShader(ShaderMap);

	FSamplerStateRHIRef BilinearClamp = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();

	FTexture2DRHIRef DestTexture = IntermediateTargets->GetRenderTarget(2);

	// Copysample and store in intermediate texture
	{
		TShaderMapRef<FBackgroundBlurPostProcessCopysamplePS> PixelShader(ShaderMap);

		RHICmdList.Transition(FRHITransitionInfo(Params.SourceTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV));

		const FVector2D InvSrcTetureSize(1.f / SrcTextureWidth, 1.f / SrcTextureHeight);

		const FVector2D UVStart = FVector2D(DestRect.Left, DestRect.Top) * InvSrcTetureSize;
		const FVector2D UVEnd = FVector2D(DestRect.Right, DestRect.Bottom) * InvSrcTetureSize;
		const FVector2D SizeUV = UVEnd - UVStart;

		RHICmdList.SetViewport(0, 0, 0, DestTextureWidth, DestTextureHeight, 0.0f);
		RHICmdList.SetScissorRect(false, 0, 0, 0, 0);

		FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
		RHICmdList.BeginRenderPass(RPInfo, TEXT("CopysampleRect"));
		{
			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();

			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
			GraphicsPSOInit.PrimitiveType = PT_TriangleList;
			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

			PixelShader->SetTexture(RHICmdList, Params.SourceTexture, BilinearClamp);

			RendererModule.DrawRectangle(
				RHICmdList,
				0, 0,
				DestRectSize.X, DestRectSize.Y,
				UVStart.X, UVStart.Y,
				SizeUV.X, SizeUV.Y,
				FIntPoint(DestTextureWidth, DestTextureHeight),
				FIntPoint(1, 1),
				VertexShader,
				EDRF_Default);
		}
		RHICmdList.EndRenderPass();
	}

	// Perform Writable transitions first
	//{
	//	FTexture2DRHIRef DestTexture = IntermediateTargets->GetRenderTarget(2);

	//	FRHICopyTextureInfo CopyInfo;
	//	CopyInfo.Size = FIntVector(DestRectSize.X, DestRectSize.Y, 1);
	//	CopyInfo.SourcePosition = FIntVector(DestRect.Left, DestRect.Top, 1);
	//	CopyInfo.DestPosition = FIntVector(0, 0, 1);

	//	// Put the source texture in CopySrc mode. The destination texture is already in CopyDest mode because we created it that way.
	//	RHICmdList.Transition(FRHITransitionInfo(Params.SourceTexture, ERHIAccess::Unknown, ERHIAccess::CopySrc));
	//	RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::CopyDest));
	//	RHICmdList.CopyTexture(Params.SourceTexture, DestTexture, CopyInfo);
	//	// Make the destination texture SRVGraphics again. 
	//	RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::CopyDest, ERHIAccess::SRVMask));
	//}
}

void FBackgroundBlurPostProcessor::DownsampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FPostProcessRectParams& Params, const FIntPoint& DownsampleSize)
{
	SCOPED_DRAW_EVENT(RHICmdList, BackgroundBlurPostProcessDownsample);

	// Source is the viewport.  This is the width and height of the viewport backbuffer
	const int32 SrcTextureWidth = Params.SourceTextureSize.X;
	const int32 SrcTextureHeight = Params.SourceTextureSize.Y;

	// Dest is the destination quad for the downsample
	const int32 DestTextureWidth = IntermediateTargets->GetWidth();
	const int32 DestTextureHeight = IntermediateTargets->GetHeight();

	// Rect of the viewport
	const FSlateRect& SourceRect = Params.SourceRect;

	// Rect of the final destination post process effect (not downsample rect).  This is the area we sample from
	const FSlateRect& DestRect = Params.DestRect;

	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	TShaderMapRef<FScreenVS> VertexShader(ShaderMap);

	FSamplerStateRHIRef BilinearClamp = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();

	FTexture2DRHIRef DestTexture = IntermediateTargets->GetRenderTarget(0);

	// Downsample and store in intermediate texture
	{
		TShaderMapRef<FBackgroundBlurPostProcessDownsamplePS> PixelShader(ShaderMap);

		RHICmdList.Transition(FRHITransitionInfo(Params.SourceTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
		RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV));

		const FVector2D InvSrcTetureSize(1.f/SrcTextureWidth, 1.f/SrcTextureHeight);

		const FVector2D UVStart = FVector2D(DestRect.Left, DestRect.Top) * InvSrcTetureSize;
		const FVector2D UVEnd = FVector2D(DestRect.Right, DestRect.Bottom) * InvSrcTetureSize;
		const FVector2D SizeUV = UVEnd - UVStart;
		
		RHICmdList.SetViewport(0, 0, 0, DestTextureWidth, DestTextureHeight, 0.0f);
		RHICmdList.SetScissorRect(false, 0, 0, 0, 0);

		FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
		RHICmdList.BeginRenderPass(RPInfo, TEXT("DownsampleRect"));
		{
			FGraphicsPipelineStateInitializer GraphicsPSOInit;
			RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);
			GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
			GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();

			GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
			GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
			GraphicsPSOInit.PrimitiveType = PT_TriangleList;
			SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

			PixelShader->SetShaderParams(RHICmdList, FVector4f(InvSrcTetureSize.X, InvSrcTetureSize.Y, 0, 0));
			PixelShader->SetUVBounds(RHICmdList, FVector4f(FVector2f(UVStart), FVector2f(UVEnd)));
			PixelShader->SetTexture(RHICmdList, Params.SourceTexture, BilinearClamp);

			RendererModule.DrawRectangle(
				RHICmdList,
				0, 0,
				DownsampleSize.X, DownsampleSize.Y,
				UVStart.X, UVStart.Y,
				SizeUV.X, SizeUV.Y,
				FIntPoint(DestTextureWidth, DestTextureHeight),
				FIntPoint(1, 1),
				VertexShader,
				EDRF_Default);
		}
		RHICmdList.EndRenderPass();
	}
	
	// Testing only
#if 0
	UpsampleRect(RHICmdList, RendererModule, Params, DownsampleSize);
#endif
}

void FBackgroundBlurPostProcessor::UpsampleRect(FRHICommandListImmediate& RHICmdList, IRendererModule& RendererModule, const FBlurRectParams& Params, const FPostProcessRectParams& RectParams, const FIntPoint& DownsampleSize, FSamplerStateRHIRef& Sampler)
{
	SCOPED_DRAW_EVENT(RHICmdList, BackgroundBlurPostProcessUpsample);

	FGraphicsPipelineStateInitializer GraphicsPSOInit;
	GraphicsPSOInit.BlendState = TStaticBlendState<>::GetRHI();
	GraphicsPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
	GraphicsPSOInit.DepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();

	// Original source texture is now the destination texture
	FTexture2DRHIRef DestTexture = RectParams.SourceTexture;
	const int32 DestTextureWidth = RectParams.SourceTextureSize.X;
	const int32 DestTextureHeight = RectParams.SourceTextureSize.Y;

	const int32 DownsampledWidth = DownsampleSize.X;
	const int32 DownsampledHeight = DownsampleSize.Y;

	// Source texture is the texture that was originally downsampled
	FTexture2DRHIRef BlurTexture = IntermediateTargets->GetRenderTarget(0);
	FTexture2DRHIRef SrcTexture = IntermediateTargets->GetRenderTarget(2);
	const int32 SrcTextureWidth = IntermediateTargets->GetWidth();
	const int32 SrcTextureHeight = IntermediateTargets->GetHeight();

	const FSlateRect& SourceRect = RectParams.SourceRect;
	const FSlateRect& DestRect = RectParams.DestRect;

	const FIntPoint DestRectSize = DestRect.GetSize().IntPoint();

	FTextureRHIRef MaskTexture = Params.MaskTexture;
	FVector2f MaskTransform = (Params.MaskTextureChannel == 3 && Params.bMaskRevertAlpha) ? FVector2f(-1.0f, 1.0f) : FVector2f(1.0f, 0.0f);
	
	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIFeatureLevel);
	TShaderMapRef<FScreenVS> VertexShader(ShaderMap);

	RHICmdList.SetViewport(0, 0, 0, DestTextureWidth, DestTextureHeight, 0.0f);

	RHICmdList.Transition(FRHITransitionInfo(MaskTexture, ERHIAccess::Unknown, ERHIAccess::SRVMask));
	RHICmdList.Transition(FRHITransitionInfo(BlurTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
	RHICmdList.Transition(FRHITransitionInfo(SrcTexture, ERHIAccess::Unknown, ERHIAccess::SRVGraphics));
	RHICmdList.Transition(FRHITransitionInfo(DestTexture, ERHIAccess::Unknown, ERHIAccess::RTV)); // 

	FRHIRenderPassInfo RPInfo(DestTexture, ERenderTargetActions::Load_Store);
	RHICmdList.BeginRenderPass(RPInfo, TEXT("UpsampleRect"));
	{
		RHICmdList.ApplyCachedRenderTargets(GraphicsPSOInit);

		if (RectParams.RestoreStateFunc)
		{
			// This can potentially end and restart a renderpass.
			// #todo refactor so that we only start one renderpass here. Right now RestoreStateFunc may call UpdateScissorRect which requires an open renderpass.
			RectParams.RestoreStateFunc(RHICmdList, GraphicsPSOInit);
		}

		TShaderMapRef<FBackgroundBlurScreenWithMaskPS> PixelShader(ShaderMap);

		GraphicsPSOInit.BoundShaderState.VertexDeclarationRHI = GFilterVertexDeclaration.VertexDeclarationRHI;
		GraphicsPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
		GraphicsPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
		GraphicsPSOInit.PrimitiveType = PT_TriangleList;
		SetGraphicsPipelineState(RHICmdList, GraphicsPSOInit);

		if (RectParams.RestoreStateFuncPostPipelineState)
		{
			RectParams.RestoreStateFuncPostPipelineState();
		}

		PixelShader->SetTexture(RHICmdList, BlurTexture, Sampler);
		PixelShader->SetMaskTexture(RHICmdList, MaskTexture, Sampler);
		PixelShader->SetMaskTextureChannel(RHICmdList, Params.MaskTextureChannel);
		PixelShader->SetMaskTransform(RHICmdList, MaskTransform);
		PixelShader->SetSourceTexture(RHICmdList, SrcTexture, Sampler);

		const float SourceSizeU = (DestRectSize.X == SrcTextureWidth) ? 1.0f : (DestRectSize.X / (float)SrcTextureWidth) - (1.0f / (float)SrcTextureWidth);
		const float SourceSizeV = (DestRectSize.Y == SrcTextureHeight) ? 1.0f : (DestRectSize.Y / (float)SrcTextureHeight) - (1.0f / (float)SrcTextureHeight);
		PixelShader->SetSourceUVBounds(RHICmdList, FVector4f(FVector2f::ZeroVector, FVector2f(SourceSizeU, SourceSizeV)));

		const float SizeU = (DownsampledWidth == SrcTextureWidth) ? 1.0f : (DownsampledWidth / (float)SrcTextureWidth) - (1.0f / (float)SrcTextureWidth);
		const float SizeV = (DownsampledHeight == SrcTextureHeight) ? 1.0f : (DownsampledHeight / (float)SrcTextureHeight) - (1.0f / (float)SrcTextureHeight);

		PixelShader->SetUVBounds(RHICmdList, FVector4f(FVector2f::ZeroVector, FVector2f(SizeU, SizeV)));

		RendererModule.DrawRectangle(RHICmdList,
			DestRect.Left, DestRect.Top,
			DestRect.Right - DestRect.Left, DestRect.Bottom - DestRect.Top,
			0, 0,
			SizeU, SizeV,
			RectParams.SourceTextureSize,
			FIntPoint(1, 1),
			VertexShader,
			EDRF_Default);
	}
	RHICmdList.EndRenderPass();

}
#define BILINEAR_FILTER_METHOD 1

#if !BILINEAR_FILTER_METHOD

static int32 ComputeWeights(int32 KernelSize, float Sigma, TArray<FVector4>& OutWeightsAndOffsets)
{
	OutWeightsAndOffsets.AddUninitialized(KernelSize / 2 + 1);

	int32 SampleIndex = 0;
	for (int32 X = 0; X < KernelSize; X += 2)
	{
		float Dist = X;
		FVector4 WeightAndOffset;
		WeightAndOffset.X = (1.0f / FMath::Sqrt(2 * PI*Sigma*Sigma))*FMath::Exp(-(Dist*Dist) / (2 * Sigma*Sigma));
		WeightAndOffset.Y = Dist;

		Dist = X + 1;
		WeightAndOffset.Z = (1.0f / FMath::Sqrt(2 * PI*Sigma*Sigma))*FMath::Exp(-(Dist*Dist) / (2 * Sigma*Sigma));
		WeightAndOffset.W = Dist;

		OutWeightsAndOffsets[SampleIndex] = WeightAndOffset;

		++SampleIndex;
	}

	return KernelSize;
};

#else

static float GetWeight(float Dist, float Strength)
{
	// from https://en.wikipedia.org/wiki/Gaussian_blur
	float Strength2 = Strength*Strength;
	return (1.0f / FMath::Sqrt(2 * PI*Strength2))*FMath::Exp(-(Dist*Dist) / (2 * Strength2));
}

static FVector2f GetWeightAndOffset(float Dist, float Sigma)
{
	float Offset1 = Dist;
	float Weight1 = GetWeight(Offset1, Sigma);

	float Offset2 = Dist + 1;
	float Weight2 = GetWeight(Offset2, Sigma);

	float TotalWeight = Weight1 + Weight2;

	float Offset = 0;
	if (TotalWeight > 0)
	{
		Offset = (Weight1*Offset1 + Weight2*Offset2) / TotalWeight;
	}


	return FVector2f(TotalWeight, Offset);
}

static int32 ComputeWeights(int32 KernelSize, float Sigma, TArray<FVector4f>& OutWeightsAndOffsets)
{
	int32 NumSamples = FMath::DivideAndRoundUp(KernelSize, 2);

	// We need half of the sample count array because we're packing two samples into one float4

	OutWeightsAndOffsets.AddUninitialized(NumSamples%2 == 0 ? NumSamples / 2 : NumSamples/2+1);

	OutWeightsAndOffsets[0] = FVector4f(FVector2f(GetWeight(0,Sigma), 0), GetWeightAndOffset(1, Sigma) );
	int32 SampleIndex = 1;
	for (int32 X = 3; X < KernelSize; X += 4)
	{
		OutWeightsAndOffsets[SampleIndex] = FVector4f(GetWeightAndOffset(X, Sigma), GetWeightAndOffset(X + 2, Sigma));

		++SampleIndex;
	}

	return NumSamples;
};

#endif

int32 FBackgroundBlurPostProcessor::ComputeBlurWeights(int32 KernelSize, float StdDev, TArray<FVector4f>& OutWeightsAndOffsets)
{
	return ComputeWeights(KernelSize, StdDev, OutWeightsAndOffsets);
}
