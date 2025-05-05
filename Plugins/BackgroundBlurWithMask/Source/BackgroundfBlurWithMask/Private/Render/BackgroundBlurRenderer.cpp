// Copyright Qibo Pang 2022. All Rights Reserved.

#include "BackgroundBlurRenderer.h"
#include "RenderUtils.h"
#include "BackgroundBlurPostProcessor.h"

FBackgroundBlurRenderer::FBackgroundBlurRenderer()
	: PostProcessor(new FBackgroundBlurPostProcessor)
{
	;
}

FBackgroundBlurRenderer::~FBackgroundBlurRenderer()
{
	;
}

FBackgroundBlurRenderer& FBackgroundBlurRenderer::Get()
{
	static FBackgroundBlurRenderer Renderer;
	return Renderer;
}

TSharedRef<FBackgroundBlurPostProcessor> FBackgroundBlurRenderer::GetPostProcessor()
{
	return PostProcessor;
}

void FBackgroundBlurRenderer::ResetBatches()
{
	NumPostProcessPasses = 0;

	//check(BackgroundBlurRenderParamsArray.Num() == 0);
	//BackgroundBlurRenderParamsArray.Empty();
}

void FBackgroundBlurRenderer::FlushGeneratedResources()
{
	PostProcessor->ReleaseRenderTargets();
}

