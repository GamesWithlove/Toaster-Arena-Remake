// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGModule.h"

#include "PCGContext.h"
#include "PCGElement.h"

#include "Interfaces/IPluginManager.h"
#include "Modules/ModuleManager.h"

#if WITH_EDITOR
#include "Elements/PCGDifferenceElement.h"
#include "Tests/Determinism/PCGDeterminismNativeTests.h"
#include "Tests/Determinism/PCGDifferenceDeterminismTest.h"

#include "ISettingsModule.h"
#include "ShaderCore.h"
#include "ShowFlags.h"
#include "Misc/Paths.h"
#endif

#define LOCTEXT_NAMESPACE "FPCGModule"

FPCGModule& FPCGModule::GetPCGModuleChecked()
{
	return FModuleManager::GetModuleChecked<FPCGModule>(TEXT("PCG"));
}

bool FPCGModule::IsPCGModuleLoaded()
{
	return FModuleManager::Get().IsModuleLoaded(TEXT("PCG"));
}

#if WITH_EDITOR
void FPCGModule::StartupModule()
{
	PCGDeterminismTests::FNativeTestRegistry::Create();

	RegisterNativeElementDeterminismTests();

	FEngineShowFlags::RegisterCustomShowFlag(PCGEngineShowFlags::Debug, /*DefaultEnabled=*/true, EShowFlagGroup::SFG_Developer, LOCTEXT("ShowFlagDisplayName", "PCG Debug"));

	const FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("PCG"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Plugin/PCG"), PluginShaderDir);
}

void FPCGModule::ShutdownModule()
{
	DeregisterNativeElementDeterminismTests();

	PCGDeterminismTests::FNativeTestRegistry::Destroy();
}

void FPCGModule::RegisterNativeElementDeterminismTests()
{
	PCGDeterminismTests::FNativeTestRegistry::RegisterTestFunction(UPCGDifferenceSettings::StaticClass(), PCGDeterminismTests::DifferenceElement::RunTestSuite);
	// TODO: Add other native test functions
}

void FPCGModule::DeregisterNativeElementDeterminismTests()
{
	PCGDeterminismTests::FNativeTestRegistry::DeregisterTestFunction(UPCGDifferenceSettings::StaticClass());
}
#endif

IMPLEMENT_MODULE(FPCGModule, PCG);

PCG_API DEFINE_LOG_CATEGORY(LogPCG);

void PCGLog::LogErrorOnGraph(const FText& InMsg, const FPCGContext* InContext)
{
	if (InContext)
	{
		PCGE_LOG_C(Error, GraphAndLog, InContext, InMsg);
	}
	else
	{
		UE_LOG(LogPCG, Error, TEXT("%s"), *InMsg.ToString());
	}
}

void PCGLog::LogWarningOnGraph(const FText& InMsg, const FPCGContext* InContext)
{
	if (InContext)
	{
		PCGE_LOG_C(Warning, GraphAndLog, InContext, InMsg);
	}
	else
	{
		UE_LOG(LogPCG, Warning, TEXT("%s"), *InMsg.ToString());
	}
}

#undef LOCTEXT_NAMESPACE
