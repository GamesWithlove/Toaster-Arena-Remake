// Copyright Qibo Pang 2022. All Rights Reserved.


#include "BackgroundBlurWithMaskModule.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"
#include "Render/BackgroundBlurRenderer.h"

#define LOCTEXT_NAMESPACE "FBackgroundBlurWithMaskModule"

void FBackgroundBlurWithMaskModule::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("BackgroundBlurWithMask"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/BackgroundBlurWithMask"), PluginShaderDir);
}

void FBackgroundBlurWithMaskModule::ShutdownModule()
{
	// Release generated resouce here, as I have not find a better place to release.
	FBackgroundBlurRenderer::Get().FlushGeneratedResources();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBackgroundBlurWithMaskModule, BackgroundBlurWithMask)