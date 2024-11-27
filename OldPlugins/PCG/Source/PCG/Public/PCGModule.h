// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGDataVisualizationRegistry.h"
#include "Data/PCGGetDataFunctionRegistry.h"
#include "Utils/PCGLogErrors.h"

#include "Modules/ModuleInterface.h"

// Logs
PCG_API DECLARE_LOG_CATEGORY_EXTERN(LogPCG, Log, All);

struct FPCGContext;
class IPCGDataVisualization;

namespace PCGEngineShowFlags
{
	static constexpr TCHAR Debug[] = TEXT("PCGDebug");
}

// Stats
DECLARE_STATS_GROUP(TEXT("PCG"), STATGROUP_PCG, STATCAT_Advanced);

// CVars

class FPCGModule final : public IModuleInterface
{
public:
	//~ IModuleInterface implementation
#if WITH_EDITOR
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
#endif
	virtual bool SupportsDynamicReloading() override { return true; }
	//~ End IModuleInterface implementation

	PCG_API static FPCGModule& GetPCGModuleChecked();
	static const FPCGGetDataFunctionRegistry& ConstGetDataFunctionRegistry() { return GetPCGModuleChecked().GetDataFunctionRegistry; }
	static FPCGGetDataFunctionRegistry& MutableGetDataFunctionRegistry() { return GetPCGModuleChecked().GetDataFunctionRegistry; }
	
	PCG_API static bool IsPCGModuleLoaded();
	
private:
	FPCGGetDataFunctionRegistry GetDataFunctionRegistry;

#if WITH_EDITOR
private:
	void RegisterNativeElementDeterminismTests();
	void DeregisterNativeElementDeterminismTests();
#endif

#if WITH_EDITOR
public:
	static const FPCGDataVisualizationRegistry& GetConstPCGDataVisualizationRegistry() { return GetPCGModuleChecked().PCGDataVisualizationRegistry; }
	static FPCGDataVisualizationRegistry& GetMutablePCGDataVisualizationRegistry() { return GetPCGModuleChecked().PCGDataVisualizationRegistry; }

private:
	FPCGDataVisualizationRegistry PCGDataVisualizationRegistry;
#endif
};
