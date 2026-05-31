// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "Layout/SlateRect.h"
#include "Layout/Clipping.h"
#include "ScreenPass.h"


struct FSlateClippingOp
{
	union
	{
		struct
		{
			FSlateRect Rect;
		} Data_Scissor;

		struct
		{
			TConstArrayView<FSlateClippingZone> Zones;
		} Data_Stencil;
	};

	FVector2f Offset;
	EClippingMethod Method;
	uint8 MaskingId;

	static inline FSlateClippingOp* Scissor(FRDGBuilder& GraphBuilder, FVector2f Offset, FSlateRect Rect)
	{
		FSlateClippingOp* Op = GraphBuilder.AllocPOD<FSlateClippingOp>();
		Op->Data_Scissor.Rect = Rect;
		Op->Offset = Offset;
		Op->Method = EClippingMethod::Scissor;
		Op->MaskingId = 0;
		return Op;
	}

	static inline FSlateClippingOp* Stencil(FRDGBuilder& GraphBuilder, FVector2f Offset, TConstArrayView<FSlateClippingZone> Zones, int32 MaskingId)
	{
		FSlateClippingOp* Op = GraphBuilder.AllocPOD<FSlateClippingOp>();
		Op->Data_Stencil.Zones = Zones;
		Op->Offset = Offset;
		Op->Method = EClippingMethod::Stencil;
		Op->MaskingId = MaskingId;
		return Op;
	}
};

bool GetSlateClippingPipelineState(const FSlateClippingOp* ClippingStateOp, FRHIDepthStencilState*& OutDepthStencilState, uint8& OutStencilRef);

void SetSlateClipping(FRHICommandList& RHICmdList, const FSlateClippingOp* ClippingStateOp, FIntRect ViewportRect);

struct FSlateMaskBlurBlurPassInputs
{
	// An optional in/out separately composited UI texture that is composited with the input and then the output rect is reset to transparent.
	FRDGTexture* SDRCompositeUITexture = nullptr;
	FRDGTexture* InputTexture = nullptr;
	FRDGTexture* OutputTexture = nullptr;
	ERenderTargetLoadAction OutputLoadAction = ERenderTargetLoadAction::ELoad;

	// An optional set of inputs for when a blur is performed as part of a slate render batch.
	const FSlateClippingOp* ClippingOp = nullptr;
	const FDepthStencilBinding* ClippingStencilBinding = nullptr;
	FIntRect ClippingElementsViewRect;

	FIntRect InputRect;
	FIntRect OutputRect;
	uint32 KernelSize = 0;
	float  Strength = 0.0f;
	uint32 DownsampleAmount = 0;
	FVector4f CornerRadius = FVector4f::Zero();

	FRDGTexture* MaskTexture = nullptr;
	uint32 MaskTextureChannel = 0;
	bool bMaskRevertAlpha;
};

extern ETextureCreateFlags GetSlateTransientRenderTargetFlags();
extern ETextureCreateFlags GetSlateTransientDepthStencilFlags();

void AddSlateMaskBlurBlurPass(FRDGBuilder& GraphBuilder, const FSlateMaskBlurBlurPassInputs& Inputs);

struct FPostProcessRectParams
{
	FRHITexture* SourceTexture;
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