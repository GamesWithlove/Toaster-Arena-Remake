// Copyright Qibo Pang 2022. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class FBackgroundBlurDrawer;
class FBackgroundBlurPostProcessor;

/**
 * Background blur renderer
 */
class FBackgroundBlurRenderer
{
public:
	FBackgroundBlurRenderer();
	~FBackgroundBlurRenderer();

	TSharedRef<FBackgroundBlurPostProcessor> GetPostProcessor();

	void ResetBatches();

	void FlushGeneratedResources();

	static FBackgroundBlurRenderer& Get();

private:

	/** How many post process passes are needed */
	int32 NumPostProcessPasses;

	/** Handles post process effects for slate */
	TSharedRef<FBackgroundBlurPostProcessor> PostProcessor;
};

