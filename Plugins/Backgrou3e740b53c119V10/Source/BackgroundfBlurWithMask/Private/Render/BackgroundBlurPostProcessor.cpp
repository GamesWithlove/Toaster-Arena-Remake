// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurPostProcessor.h"
#include "ScreenRendering.h"
#include "SceneUtils.h"
#include "RendererInterface.h"
#include "StaticBoundShaderState.h"
#include "PipelineStateCache.h"
#include "CommonRenderResources.h"

#include "RendererUtils.h"
//#include "Interfaces/SlateRHIRenderingPolicyInterface.h"

//////////////////////////////////////////////////////////////////////////

bool GetBlurSlateClippingPipelineState(const FSlateClippingOp* ClippingStateOp, FRHIDepthStencilState*& OutDepthStencilState, uint8& OutStencilRef)
{
	if (ClippingStateOp && ClippingStateOp->Method == EClippingMethod::Stencil)
	{
		// Setup the stenciling state to be read only now, disable depth writes, and restore the color buffer
		// because we're about to go back to rendering widgets "normally", but with the added effect that now
		// we have the stencil buffer bound with a bunch of clipping zones rendered into it.
		OutDepthStencilState =
			TStaticDepthStencilState<
			/*bEnableDepthWrite*/ false
			, /*DepthTest*/ CF_Always
			, /*bEnableFrontFaceStencil*/ true
			, /*FrontFaceStencilTest*/ CF_Equal
			, /*FrontFaceStencilFailStencilOp*/ SO_Keep
			, /*FrontFaceDepthFailStencilOp*/ SO_Keep
			, /*FrontFacePassStencilOp*/ SO_Keep
			, /*bEnableBackFaceStencil*/ true
			, /*BackFaceStencilTest*/ CF_Equal
			, /*BackFaceStencilFailStencilOp*/ SO_Keep
			, /*BackFaceDepthFailStencilOp*/ SO_Keep
			, /*BackFacePassStencilOp*/ SO_Keep
			, /*StencilReadMask*/ 0xFF
			, /*StencilWriteMask*/ 0xFF>::GetRHI();

		// Set a StencilRef equal to the number of stenciling/clipping masks, so unless the pixel we're rendering
		// to is on top of a stencil pixel with the same number it's going to get rejected, thereby clipping
		// everything except for the cross-section of all the stenciling quads.
		OutStencilRef = ClippingStateOp->MaskingId + ClippingStateOp->Data_Stencil.Zones.Num();
		return true;
	}
	else
	{
		OutDepthStencilState = TStaticDepthStencilState<false, CF_Always>::GetRHI();
		OutStencilRef = 0;
		return false;
	}
}

void SetBlurSlateClipping(FRHICommandList& RHICmdList, const FSlateClippingOp* ClippingStateOp, FIntRect ViewportRect)
{
	check(RHICmdList.IsInsideRenderPass());

	if (ClippingStateOp)
	{
		const FVector2f ElementOffset = ClippingStateOp->Offset;

		const auto ClampRectToViewport = [ElementOffset, ViewportRect](FSlateRect ScissorRect)
			{
				ScissorRect.Left = FMath::Clamp(ScissorRect.Left + ElementOffset.X, (float)ViewportRect.Min.X, (float)ViewportRect.Max.X);
				ScissorRect.Top = FMath::Clamp(ScissorRect.Top + ElementOffset.Y, (float)ViewportRect.Min.Y, (float)ViewportRect.Max.Y);
				ScissorRect.Right = FMath::Clamp(ScissorRect.Right, ScissorRect.Left, (float)ViewportRect.Max.X);
				ScissorRect.Bottom = FMath::Clamp(ScissorRect.Bottom, ScissorRect.Top, (float)ViewportRect.Max.Y);
				return ScissorRect;
			};

		if (ClippingStateOp->Method == EClippingMethod::Scissor)
		{
			const FSlateRect ScissorRect = ClampRectToViewport(ClippingStateOp->Data_Scissor.Rect);
			RHICmdList.SetScissorRect(true, ScissorRect.Left, ScissorRect.Top, ScissorRect.Right, ScissorRect.Bottom);
		}
		else
		{
			check(ClippingStateOp->Method == EClippingMethod::Stencil);

			const TConstArrayView<FSlateClippingZone> Zones = ClippingStateOp->Data_Stencil.Zones;
			check(Zones.Num() > 0);

			// There might be some large - useless stencils, especially in the first couple of stencils if large
			// widgets that clip also contain render targets, so, by setting the scissor to the AABB of the final
			// stencil, we can cut out a lot of work that can't possibly be useful. We also round it, because if we
			// don't it can over-eagerly slice off pixels it shouldn't.

			const FSlateRect ScissorRect = ClampRectToViewport(Zones.Last().GetBoundingBox().Round());
			RHICmdList.SetScissorRect(true, ScissorRect.Left, ScissorRect.Top, ScissorRect.Right, ScissorRect.Bottom);

			const uint8 MaskingId = ClippingStateOp->MaskingId;

			//FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(GMaxRHIShaderPlatform);
			//TShaderMapRef<FSlateMaskingVS> VertexShader(ShaderMap);
			//TShaderMapRef<FSlateMaskingPS> PixelShader(ShaderMap);

			//// Start by setting up the stenciling states so that we can write representations of the clipping zones into the stencil buffer only.
			//FGraphicsPipelineStateInitializer WriteMaskPSOInit;
			//RHICmdList.ApplyCachedRenderTargets(WriteMaskPSOInit);
			//WriteMaskPSOInit.BlendState = TStaticBlendStateWriteMask<CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE, CW_NONE>::GetRHI();
			//WriteMaskPSOInit.RasterizerState = TStaticRasterizerState<>::GetRHI();
			//WriteMaskPSOInit.DepthStencilState =
			//	TStaticDepthStencilState<
			//	/*bEnableDepthWrite*/ false
			//	, /*DepthTest*/ CF_Always
			//	, /*bEnableFrontFaceStencil*/ true
			//	, /*FrontFaceStencilTest*/ CF_Always
			//	, /*FrontFaceStencilFailStencilOp*/ SO_Keep
			//	, /*FrontFaceDepthFailStencilOp*/ SO_Keep
			//	, /*FrontFacePassStencilOp*/ SO_Replace
			//	, /*bEnableBackFaceStencil*/ true
			//	, /*BackFaceStencilTest*/ CF_Always
			//	, /*BackFaceStencilFailStencilOp*/ SO_Keep
			//	, /*BackFaceDepthFailStencilOp*/ SO_Keep
			//	, /*BackFacePassStencilOp*/ SO_Replace
			//	, /*StencilReadMask*/ 0xFF
			//	, /*StencilWriteMask*/ 0xFF>::GetRHI();

			//WriteMaskPSOInit.BoundShaderState.VertexDeclarationRHI = GSlateMaskingVertexDeclaration.VertexDeclarationRHI;
			//WriteMaskPSOInit.BoundShaderState.VertexShaderRHI = VertexShader.GetVertexShader();
			//WriteMaskPSOInit.BoundShaderState.PixelShaderRHI = PixelShader.GetPixelShader();
			//WriteMaskPSOInit.PrimitiveType = PT_TriangleStrip;

			//// Draw the first stencil using SO_Replace, so that we stomp any pixel with a MaskingID + 1.
			//SetGraphicsPipelineState(RHICmdList, WriteMaskPSOInit, MaskingId + 1);

			//// Simple 2D orthographic projection from screen space to NDC space.
			//const FVector2f A
			//(
			//	2.0f / ViewportRect.Width(),
			//	2.0f / -ViewportRect.Height()
			//);

			//const FVector2f B
			//(
			//	(ViewportRect.Min.X + ViewportRect.Max.X) / -ViewportRect.Width(),
			//	(ViewportRect.Min.Y + ViewportRect.Max.Y) / ViewportRect.Height()
			//);

			//const auto TransformVertex = [A, B, ElementOffset](FVector2f P)
			//	{
			//		return FVector2f((P.X + ElementOffset.X) * A.X + B.X, (P.Y + ElementOffset.Y) * A.Y + B.Y);
			//	};

			//const auto SetMaskingParameters = [VertexShader, TransformVertex](FRHIBatchedShaderParameters& BatchedParameters, const FSlateClippingZone& Zone)
			//	{
			//		/*FSlateMaskingVS::FParameters Parameters;
			//		Parameters.MaskRectPacked[0] = FVector4f(TransformVertex(Zone.TopLeft), TransformVertex(Zone.TopRight));
			//		Parameters.MaskRectPacked[1] = FVector4f(TransformVertex(Zone.BottomLeft), TransformVertex(Zone.BottomRight));
			//		SetShaderParameters(BatchedParameters, VertexShader, Parameters);*/
			//	};

			//{
			//	FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			//	SetMaskingParameters(BatchedParameters, Zones[0]);
			//	RHICmdList.SetBatchedShaderParameters(VertexShader.GetVertexShader(), BatchedParameters);
			//	//RHICmdList.SetStreamSource(0, GSlateStencilClipVertexBuffer.VertexBufferRHI, 0);
			//	RHICmdList.DrawPrimitive(0, 2, 1);
			//}

			//// Now setup the pipeline to use SO_SaturatedIncrement, since we've established the initial
			//// stencil with SO_Replace, we can safely use SO_SaturatedIncrement, to build up the stencil
			//// to the required mask of MaskingID + StencilQuads.Num(), thereby ensuring only the union of
			//// all stencils will render pixels.
			//WriteMaskPSOInit.DepthStencilState =
			//	TStaticDepthStencilState<
			//	/*bEnableDepthWrite*/ false
			//	, /*DepthTest*/ CF_Always
			//	, /*bEnableFrontFaceStencil*/ true
			//	, /*FrontFaceStencilTest*/ CF_Always
			//	, /*FrontFaceStencilFailStencilOp*/ SO_Keep
			//	, /*FrontFaceDepthFailStencilOp*/ SO_Keep
			//	, /*FrontFacePassStencilOp*/ SO_SaturatedIncrement
			//	, /*bEnableBackFaceStencil*/ true
			//	, /*BackFaceStencilTest*/ CF_Always
			//	, /*BackFaceStencilFailStencilOp*/ SO_Keep
			//	, /*BackFaceDepthFailStencilOp*/ SO_Keep
			//	, /*BackFacePassStencilOp*/ SO_SaturatedIncrement
			//	, /*StencilReadMask*/ 0xFF
			//	, /*StencilWriteMask*/ 0xFF>::GetRHI();

			//SetGraphicsPipelineState(RHICmdList, WriteMaskPSOInit, 0);

			//// Next write the number of quads representing the number of clipping zones have on top of each other.
			//for (int32 MaskIndex = 1; MaskIndex < Zones.Num(); MaskIndex++)
			//{
			//	FRHIBatchedShaderParameters& BatchedParameters = RHICmdList.GetScratchShaderParameters();
			//	SetMaskingParameters(BatchedParameters, Zones[MaskIndex]);
			//	RHICmdList.SetBatchedShaderParameters(VertexShader.GetVertexShader(), BatchedParameters);
			//	//RHICmdList.SetStreamSource(0, GSlateStencilClipVertexBuffer.VertexBufferRHI, 0);
			//	RHICmdList.DrawPrimitive(0, 2, 1);
			//}
		}
	}
	else
	{
		RHICmdList.SetScissorRect(false, 0.0f, 0.0f, 0.0f, 0.0f);
	}
}

//////////////////////////////////////////////////////////////////////////

ETextureCreateFlags GetSlateBlurTransientRenderTargetFlags()
{
	return ETextureCreateFlags::RenderTargetable | ETextureCreateFlags::ShaderResource | ETextureCreateFlags::FastVRAM
		// Avoid fast clear metadata when this flag is set, since we'd otherwise have to clear transient render targets instead of discard.
#if PLATFORM_REQUIRES_TYPELESS_RESOURCE_DISCARD_WORKAROUND
		| ETextureCreateFlags::NoFastClear
#endif
		;
}

//////////////////////////////////////////////////////////////////////////

class FSlateMaskBlurDownsamplePS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FSlateMaskBlurDownsamplePS);
	SHADER_USE_PARAMETER_STRUCT(FSlateMaskBlurDownsamplePS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, ElementTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, ElementTextureSampler)
		SHADER_PARAMETER(FVector4f, ShaderParams)
		SHADER_PARAMETER(FVector4f, UVBounds)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()
};

IMPLEMENT_GLOBAL_SHADER(FSlateMaskBlurDownsamplePS, "/Plugin/BackgroundBlurWithMask/Private/BackgroundBlurPostProcessPixelShader.usf", "DownsampleMain", SF_Pixel);

struct FSlateMaskBlurDownsamplePassInputs
{
	FScreenPassTexture InputTexture;
	FIntPoint OutputExtent;
};

FScreenPassTexture AddSlateMaskBlurDownsamplePass(FRDGBuilder& GraphBuilder, const FSlateMaskBlurDownsamplePassInputs& Inputs)
{
	const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel;
	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(FeatureLevel);
	TShaderMapRef<FSlateMaskBlurDownsamplePS> PixelShader(ShaderMap);

	const FScreenPassRenderTarget Output(
		GraphBuilder.CreateTexture(FRDGTextureDesc::Create2D(Inputs.OutputExtent, Inputs.InputTexture.Texture->Desc.Format, FClearValueBinding::None, GetSlateBlurTransientRenderTargetFlags()), TEXT("DownsampleUI")),
		ERenderTargetLoadAction::ENoAction);

	const FScreenPassTextureViewport InputViewport(Inputs.InputTexture);
	const FScreenPassTextureViewportParameters InputParameters = GetScreenPassTextureViewportParameters(InputViewport);
	const FScreenPassTextureViewport OutputViewport(Output);

	FSlateMaskBlurDownsamplePS::FParameters* PassParameters = GraphBuilder.AllocParameters<FSlateMaskBlurDownsamplePS::FParameters>();
	PassParameters->RenderTargets[0] = Output.GetRenderTargetBinding();
	PassParameters->ElementTexture = Inputs.InputTexture.Texture;
	PassParameters->ElementTextureSampler = TStaticSamplerState<SF_Bilinear>::GetRHI();
	PassParameters->ShaderParams = FVector4f(InputParameters.ExtentInverse.X, InputParameters.ExtentInverse.Y, 0.0f, 0.0f);
	PassParameters->UVBounds = FVector4f(InputParameters.UVViewportBilinearMin, InputParameters.UVViewportBilinearMax);

	AddDrawScreenPass(GraphBuilder, RDG_EVENT_NAME("DownsampleUI"), FeatureLevel, OutputViewport, InputViewport, PixelShader, PassParameters);
	return Output;
}

//////////////////////////////////////////////////////////////////////////

enum class ESlateMaskBlurUpsampleOutputFormat
{
	SDR = 0,
	HDR_SCRGB,
	HDR_PQ10,
	MAX
};

class FSlateMaskBlurUpsamplePS : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FSlateMaskBlurUpsamplePS);
	SHADER_USE_PARAMETER_STRUCT(FSlateMaskBlurUpsamplePS, FGlobalShader);

	class FUpsampleOutputFormat : SHADER_PERMUTATION_ENUM_CLASS("UPSAMPLE_OUTPUT_FORMAT", ESlateMaskBlurUpsampleOutputFormat);
	using FPermutationDomain = TShaderPermutationDomain<FUpsampleOutputFormat>;

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, ElementTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, ElementTextureSampler)
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, MaskTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, MaskTextureSampler)
		SHADER_PARAMETER(uint32, MaskTextureChannel)
		SHADER_PARAMETER(FVector4f, UVBounds)
		SHADER_PARAMETER(FVector4f, ShaderParams)
		SHADER_PARAMETER(FVector4f, ShaderParams2)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()
};

IMPLEMENT_GLOBAL_SHADER(FSlateMaskBlurUpsamplePS, "/Plugin/BackgroundBlurWithMask/Private/BackgroundBlurPostProcessPixelShader.usf", "UpsampleMain", SF_Pixel);

struct FSlateMaskBlurUpsampleInputs
{
	FScreenPassTexture InputTexture;
	FRDGTexture* OutputTextureToClear = nullptr;
	FRDGTexture* OutputTexture = nullptr;
	ERenderTargetLoadAction OutputLoadAction = ERenderTargetLoadAction::ELoad;

	const FSlateClippingOp* ClippingOp = nullptr;
	const FDepthStencilBinding* ClippingStencilBinding = nullptr;
	FIntRect ClippingElementsViewRect;

	FIntRect OutputRect;
	FVector4f CornerRadius = FVector4f::Zero();

	FRDGTexture* MaskTexture;
	uint32 MaskTextureChannel = 0;
	bool bMaskRevertAlpha;
};

void AddSlateMaskBlurUpsamplePass(FRDGBuilder& GraphBuilder, const FSlateMaskBlurUpsampleInputs& Inputs)
{
	FSlateMaskBlurUpsamplePS::FParameters* PassParameters = GraphBuilder.AllocParameters<FSlateMaskBlurUpsamplePS::FParameters>();
	PassParameters->RenderTargets[0] = FRenderTargetBinding(Inputs.OutputTexture, Inputs.OutputLoadAction);

	if (Inputs.ClippingStencilBinding)
	{
		PassParameters->RenderTargets.DepthStencil = *Inputs.ClippingStencilBinding;
	}

	ESlateMaskBlurUpsampleOutputFormat OutputFormat = ESlateMaskBlurUpsampleOutputFormat::SDR;

	if (Inputs.OutputTextureToClear)
	{
		OutputFormat = Inputs.OutputTexture->Desc.Format == PF_FloatRGBA
			? ESlateMaskBlurUpsampleOutputFormat::HDR_SCRGB
			: ESlateMaskBlurUpsampleOutputFormat::HDR_PQ10;

		PassParameters->RenderTargets[1] = FRenderTargetBinding(Inputs.OutputTextureToClear, Inputs.OutputLoadAction);
	}

	FSlateMaskBlurUpsamplePS::FPermutationDomain PermutationVector;
	PermutationVector.Set<FSlateMaskBlurUpsamplePS::FUpsampleOutputFormat>(OutputFormat);

	const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel;
	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(FeatureLevel);

	TShaderMapRef<FScreenPassVS> VertexShader(ShaderMap);
	TShaderMapRef<FSlateMaskBlurUpsamplePS> PixelShader(ShaderMap, PermutationVector);

	const FScreenPassTextureViewport InputViewport(Inputs.InputTexture);
	const FScreenPassTextureViewport OutputViewport(Inputs.OutputTexture, Inputs.OutputRect);
	const FScreenPassTextureViewportParameters InputParameters = GetScreenPassTextureViewportParameters(InputViewport);

	PassParameters->ElementTexture = Inputs.InputTexture.Texture;
	PassParameters->ElementTextureSampler = Inputs.InputTexture.ViewRect == Inputs.OutputRect
		? TStaticSamplerState<SF_Point, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI()
		: TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();

	PassParameters->MaskTexture = Inputs.MaskTexture;
	PassParameters->MaskTextureSampler = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
	PassParameters->MaskTextureChannel = Inputs.MaskTextureChannel;
	PassParameters->UVBounds = FVector4f(InputParameters.UVViewportBilinearMin, InputParameters.UVViewportBilinearMax);
	PassParameters->ShaderParams = FVector4f(InputParameters.ViewportSize, InputParameters.UVViewportSize);
	PassParameters->ShaderParams2 = Inputs.CornerRadius;

	FRHIBlendState* BlendState = /*Inputs.CornerRadius == FVector4f::Zero() ? TStaticBlendState<>::GetRHI() : */TStaticBlendState<CW_RGBA, BO_Add, BF_SourceAlpha, BF_InverseSourceAlpha, BO_Add, BF_One, BF_InverseSourceAlpha>::GetRHI();

	FScreenPassPipelineState PipelineState(VertexShader, PixelShader, BlendState);
	GetBlurSlateClippingPipelineState(Inputs.ClippingOp, PipelineState.DepthStencilState, PipelineState.StencilRef);

	GraphBuilder.AddPass(
		RDG_EVENT_NAME("Upsample"),
		PassParameters,
		ERDGPassFlags::Raster,
		[OutputViewport, InputViewport, ClippingElementsViewRect = Inputs.ClippingElementsViewRect, PipelineState, PixelShader, ClippingOp = Inputs.ClippingOp, PassParameters](FRDGAsyncTask, FRHICommandList& RHICmdList)
		{
			if (ClippingOp && ClippingOp->Method == EClippingMethod::Stencil)
			{
				// Stencil clipping quads have their own viewport.
				RHICmdList.SetViewport(ClippingElementsViewRect.Min.X, ClippingElementsViewRect.Min.Y, 0.0f, ClippingElementsViewRect.Max.X, ClippingElementsViewRect.Max.Y, 1.0f);

				// Stencil clipping will issue its own draw calls.
				SetBlurSlateClipping(RHICmdList, ClippingOp, ClippingElementsViewRect);
			}

			RHICmdList.SetViewport(OutputViewport.Rect.Min.X, OutputViewport.Rect.Min.Y, 0.0f, OutputViewport.Rect.Max.X, OutputViewport.Rect.Max.Y, 1.0f);

			if (ClippingOp && ClippingOp->Method == EClippingMethod::Scissor)
			{
				SetBlurSlateClipping(RHICmdList, ClippingOp, ClippingElementsViewRect);
			}

			SetScreenPassPipelineState(RHICmdList, PipelineState);
			SetShaderParameters(RHICmdList, PixelShader, PixelShader.GetPixelShader(), *PassParameters);
			DrawScreenPass_PostSetup(RHICmdList, FScreenPassViewInfo(), OutputViewport, InputViewport, PipelineState, EScreenPassDrawFlags::None);
		});
}

//////////////////////////////////////////////////////////////////////////

class FSlateMaskBlurBlurPS : public FGlobalShader
{
public:
	static const int32 MAX_BLUR_SAMPLES = 127 / 2;

	DECLARE_GLOBAL_SHADER(FSlateMaskBlurBlurPS);
	SHADER_USE_PARAMETER_STRUCT(FSlateMaskBlurBlurPS, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_RDG_TEXTURE(Texture2D, ElementTexture)
		SHADER_PARAMETER_SAMPLER(SamplerState, ElementTextureSampler)
		SHADER_PARAMETER_ARRAY(FVector4f, WeightAndOffsets, [MAX_BLUR_SAMPLES])
		SHADER_PARAMETER(uint32, SampleCount)
		SHADER_PARAMETER(FVector4f, BufferSizeAndDirection)
		SHADER_PARAMETER(FVector4f, UVBounds)
		RENDER_TARGET_BINDING_SLOTS()
	END_SHADER_PARAMETER_STRUCT()
};

IMPLEMENT_GLOBAL_SHADER(FSlateMaskBlurBlurPS, "/Plugin/BackgroundBlurWithMask/Private/BackgroundBlurPostProcessPixelShader.usf", "GaussianBlurMain", SF_Pixel);

void AddSlateMaskBlurBlurPass(FRDGBuilder& GraphBuilder, const FSlateMaskBlurBlurPassInputs& Inputs)
{
	RDG_EVENT_SCOPE(GraphBuilder, "GaussianBlur");

	const auto GetWeight = [](float Dist, float Strength)
		{
			float Strength2 = Strength * Strength;
			return (1.0f / FMath::Sqrt(2 * PI * Strength2)) * FMath::Exp(-(Dist * Dist) / (2 * Strength2));
		};

	const auto GetWeightsAndOffset = [GetWeight](float Dist, float Sigma)
		{
			float Offset1 = Dist;
			float Weight1 = GetWeight(Offset1, Sigma);

			float Offset2 = Dist + 1;
			float Weight2 = GetWeight(Offset2, Sigma);

			float TotalWeight = Weight1 + Weight2;
			float Offset = 0;

			if (TotalWeight > 0)
			{
				Offset = (Weight1 * Offset1 + Weight2 * Offset2) / TotalWeight;
			}

			return FVector2f(TotalWeight, Offset);
		};

	const int32 SampleCount = FMath::DivideAndRoundUp(Inputs.KernelSize, 2u);

	// We need half of the sample count array because we're packing two samples into one float;
	TArray<FVector4f, FRDGArrayAllocator> WeightsAndOffsets;
	WeightsAndOffsets.AddUninitialized(SampleCount % 2 == 0 ? SampleCount / 2 : SampleCount / 2 + 1);
	WeightsAndOffsets[0] = FVector4f(FVector2f(GetWeight(0, Inputs.Strength), 0), GetWeightsAndOffset(1, Inputs.Strength));

	for (uint32 X = 3, SampleIndex = 1; X < Inputs.KernelSize; X += 4, SampleIndex++)
	{
		WeightsAndOffsets[SampleIndex] = FVector4f(GetWeightsAndOffset((float)X, Inputs.Strength), GetWeightsAndOffset((float)(X + 2), Inputs.Strength));
	}

	FScreenPassTextureViewport OutputTextureViewport(Inputs.InputRect.Size());

	const EPixelFormat InputPixelFormat = Inputs.InputTexture->Desc.Format;

	// Defaults to the input UI texture unless a downsample / composite pass is needed.
	FScreenPassTexture BlurInputTexture(Inputs.InputTexture, Inputs.InputRect);

	// Need to composite the HDR scene texture with a separate SDR UI texture (which also does a downsample).
	if (Inputs.SDRCompositeUITexture)
	{
		/*FSlateCompositeHDRForBlurPassInputs CompositeInputs;
		CompositeInputs.InputRect = Inputs.InputRect;
		CompositeInputs.InputTexture = Inputs.InputTexture;
		CompositeInputs.InputCompositeTexture = Inputs.SDRCompositeUITexture;
		CompositeInputs.OutputExtent = OutputTextureViewport.Extent;

		BlurInputTexture = AddSlateCompositeHDRForBlurPass(GraphBuilder, CompositeInputs);*/
	}
	// Need to do an explicit downsample pass.
	else if (Inputs.DownsampleAmount > 0)
	{
		OutputTextureViewport = FScreenPassTextureViewport(GetDownscaledExtent(Inputs.InputRect.Size(), Inputs.DownsampleAmount));

		FSlateMaskBlurDownsamplePassInputs DownsampleInputs;
		DownsampleInputs.InputTexture = BlurInputTexture;
		DownsampleInputs.OutputExtent = OutputTextureViewport.Extent;

		BlurInputTexture = AddSlateMaskBlurDownsamplePass(GraphBuilder, DownsampleInputs);
	}

	const ERHIFeatureLevel::Type FeatureLevel = GMaxRHIFeatureLevel;
	FGlobalShaderMap* ShaderMap = GetGlobalShaderMap(FeatureLevel);
	TShaderMapRef<FSlateMaskBlurBlurPS> PixelShader(ShaderMap);

	FScreenPassRenderTarget BlurOutputTexture(
		GraphBuilder.CreateTexture(FRDGTextureDesc::Create2D(OutputTextureViewport.Extent, InputPixelFormat, FClearValueBinding::None, GetSlateBlurTransientRenderTargetFlags()), TEXT("SlateBlurHorizontalTexture")),
		ERenderTargetLoadAction::ENoAction);

	FSlateMaskBlurBlurPS::FParameters* PassParameters = nullptr;

	{
		const FScreenPassTextureViewport BlurInputViewport(BlurInputTexture);
		const FScreenPassTextureViewportParameters BlurInputParameters = GetScreenPassTextureViewportParameters(BlurInputViewport);

		PassParameters = GraphBuilder.AllocParameters<FSlateMaskBlurBlurPS::FParameters>();
		PassParameters->RenderTargets[0] = BlurOutputTexture.GetRenderTargetBinding();
		PassParameters->ElementTexture = BlurInputTexture.Texture;
		PassParameters->ElementTextureSampler = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
		PassParameters->SampleCount = SampleCount;
		PassParameters->BufferSizeAndDirection = FVector4f(BlurInputParameters.ExtentInverse, FVector2f(1.0f, 0.0f));
		PassParameters->UVBounds = FVector4f(BlurInputParameters.UVViewportBilinearMin, BlurInputParameters.UVViewportBilinearMax);

		check(PassParameters->WeightAndOffsets.Num() * sizeof(PassParameters->WeightAndOffsets[0]) >= WeightsAndOffsets.Num() * sizeof(WeightsAndOffsets[0]));
		FPlatformMemory::Memcpy(PassParameters->WeightAndOffsets.GetData(), WeightsAndOffsets.GetData(), WeightsAndOffsets.Num() * sizeof(WeightsAndOffsets[0]));

		AddDrawScreenPass(GraphBuilder, RDG_EVENT_NAME("Horizontal"), FeatureLevel, FScreenPassTextureViewport(BlurOutputTexture), BlurInputViewport, PixelShader, PassParameters);
	}

	BlurInputTexture = BlurOutputTexture;
	BlurOutputTexture = FScreenPassRenderTarget(
		GraphBuilder.CreateTexture(FRDGTextureDesc::Create2D(OutputTextureViewport.Extent, InputPixelFormat, FClearValueBinding::None, GetSlateBlurTransientRenderTargetFlags()), TEXT("SlateBlurVerticalTexture")),
		ERenderTargetLoadAction::ENoAction);

	{
		const FScreenPassTextureViewport BlurInputViewport(BlurInputTexture);
		const FScreenPassTextureViewportParameters BlurInputParameters = GetScreenPassTextureViewportParameters(BlurInputViewport);

		PassParameters = GraphBuilder.AllocParameters<FSlateMaskBlurBlurPS::FParameters>();
		PassParameters->RenderTargets[0] = BlurOutputTexture.GetRenderTargetBinding();
		PassParameters->ElementTexture = BlurInputTexture.Texture;
		PassParameters->ElementTextureSampler = TStaticSamplerState<SF_Bilinear, AM_Clamp, AM_Clamp, AM_Clamp>::GetRHI();
		PassParameters->SampleCount = SampleCount;
		PassParameters->BufferSizeAndDirection = FVector4f(BlurInputParameters.ExtentInverse, FVector2f(0.0f, 1.0f));
		PassParameters->UVBounds = FVector4f(BlurInputParameters.UVViewportBilinearMin, BlurInputParameters.UVViewportBilinearMax);

		check(PassParameters->WeightAndOffsets.Num() * sizeof(PassParameters->WeightAndOffsets[0]) >= WeightsAndOffsets.Num() * sizeof(WeightsAndOffsets[0]));
		FPlatformMemory::Memcpy(PassParameters->WeightAndOffsets.GetData(), WeightsAndOffsets.GetData(), WeightsAndOffsets.Num() * sizeof(WeightsAndOffsets[0]));

		AddDrawScreenPass(GraphBuilder, RDG_EVENT_NAME("Vertical"), FeatureLevel, FScreenPassTextureViewport(BlurOutputTexture), BlurInputViewport, PixelShader, PassParameters);
	}

	FSlateMaskBlurUpsampleInputs UpsampleInputs;
	UpsampleInputs.InputTexture = BlurOutputTexture;
	UpsampleInputs.OutputTextureToClear = Inputs.SDRCompositeUITexture;
	UpsampleInputs.OutputTexture = Inputs.OutputTexture;
	UpsampleInputs.OutputRect = Inputs.OutputRect;
	UpsampleInputs.ClippingOp = Inputs.ClippingOp;
	UpsampleInputs.ClippingStencilBinding = Inputs.ClippingStencilBinding;
	UpsampleInputs.ClippingElementsViewRect = Inputs.ClippingElementsViewRect;
	UpsampleInputs.CornerRadius = Inputs.CornerRadius;
	UpsampleInputs.MaskTexture = Inputs.MaskTexture;
	UpsampleInputs.MaskTextureChannel = Inputs.MaskTextureChannel;
	UpsampleInputs.bMaskRevertAlpha = Inputs.bMaskRevertAlpha;

	AddSlateMaskBlurUpsamplePass(GraphBuilder, UpsampleInputs);
}

//////////////////////////////////////////////////////////////////////////
