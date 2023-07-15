/*
* Copyright (c) 2020 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA Corporation and its licensors retain all intellectual property and proprietary
* rights in and to this software, related documentation and any modifications thereto.
* Any use, reproduction, disclosure or distribution of this software and related
* documentation without an express license agreement from NVIDIA Corporation is strictly
* prohibited.
*
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THIS SOFTWARE IS PROVIDED *AS IS*
* AND NVIDIA AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, EITHER EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE.  IN NO EVENT SHALL NVIDIA OR ITS SUPPLIERS BE LIABLE FOR ANY
* SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR
* INABILITY TO USE THIS SOFTWARE, EVEN IF NVIDIA HAS BEEN ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGES.
*/

#pragma once

#include "CoreMinimal.h"
#include "ScreenSpaceDenoise.h"
// for ENGINE_MAJOR_VERSION
#include "Launch/Resources/Version.h" 
class FDLSSUpscaler;

// wrapper for the default denoiser to add TAA after some passes
class DLSS_API FDLSSDenoiser final : public IScreenSpaceDenoiser
{

public:
	FDLSSDenoiser(const IScreenSpaceDenoiser* InWrappedDenoiser, const FDLSSUpscaler* InUpscaler);

	// Inherited via IScreenSpaceDenoiser
	virtual const TCHAR* GetDebugName() const final;
	virtual EShadowRequirements GetShadowRequirements(const FViewInfo& View, const FLightSceneInfo& LightSceneInfo, const FShadowRayTracingConfig& RayTracingConfig) const final;
	virtual void DenoiseShadowVisibilityMasks(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const TStaticArray<FShadowVisibilityParameters, IScreenSpaceDenoiser::kMaxBatchSize>& InputParameters, const int32 InputParameterCount, TStaticArray<FShadowVisibilityOutputs, IScreenSpaceDenoiser::kMaxBatchSize>& Outputs) const final;
	virtual FPolychromaticPenumbraOutputs DenoisePolychromaticPenumbraHarmonics(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FPolychromaticPenumbraHarmonics& Inputs) const final;
	virtual FReflectionsOutputs DenoiseReflections(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FReflectionsInputs& Inputs, const FReflectionsRayTracingConfig Config) const final;
	virtual FReflectionsOutputs DenoiseWaterReflections(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FReflectionsInputs& Inputs, const FReflectionsRayTracingConfig Config) const override;
	virtual FAmbientOcclusionOutputs DenoiseAmbientOcclusion(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FAmbientOcclusionInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
#if ENGINE_MAJOR_VERSION == 4
	virtual FDiffuseIndirectOutputs DenoiseDiffuseIndirect(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
	virtual FDiffuseIndirectHarmonic DenoiseDiffuseIndirectHarmonic(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectHarmonic& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
	virtual FDiffuseIndirectOutputs DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
#elif ENGINE_MAJOR_VERSION == 5
	virtual FSSDSignalTextures DenoiseDiffuseIndirect(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
	virtual FSSDSignalTextures DenoiseScreenSpaceDiffuseIndirect(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
	virtual FSSDSignalTextures DenoiseDiffuseIndirectHarmonic(FRDGBuilder& GraphBuilder,const FViewInfo& View,FPreviousViewInfo* PreviousViewInfos,	const FSceneTextureParameters& SceneTextures,		const FDiffuseIndirectHarmonic& Inputs, const HybridIndirectLighting::FCommonParameters& CommonDiffuseParameters) const final;
#else
#error "ENGINE_MAJOR_VERSION must be either 4 or 5"
#endif
	virtual FDiffuseIndirectOutputs DenoiseSkyLight(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;
	virtual FDiffuseIndirectOutputs DenoiseReflectedSkyLight(FRDGBuilder& GraphBuilder, const FViewInfo& View, FPreviousViewInfo* PreviousViewInfos, const FSceneTextureParameters& SceneTextures, const FDiffuseIndirectInputs& Inputs, const FAmbientOcclusionRayTracingConfig Config) const final;


	virtual bool SupportsScreenSpaceDiffuseIndirectDenoiser(EShaderPlatform Platform) const final;
	const IScreenSpaceDenoiser* GetWrappedDenoiser() const;
private:

	const IScreenSpaceDenoiser* WrappedDenoiser;
	const FDLSSUpscaler* Upscaler;
};