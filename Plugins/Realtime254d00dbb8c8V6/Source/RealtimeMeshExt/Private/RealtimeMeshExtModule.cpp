// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#include "RealtimeMeshExtModule.h"

#include "MeshOptimizer/meshoptimizer.h"

#define LOCTEXT_NAMESPACE "FRealtimeMeshExtModule"

static void* MeshOptimizzerMalloc(size_t size)
{
	return FMemory::Malloc(size);
}

void FRealtimeMeshExtModule::StartupModule()
{
	// Setup the allocator for mesh optimizer
	meshopt_setAllocator(&MeshOptimizzerMalloc, &FMemory::Free);
	
}

void FRealtimeMeshExtModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FRealtimeMeshExtModule, RealtimeMeshExt)