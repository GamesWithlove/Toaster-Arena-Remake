// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGContext.h"
#include "PCGElement.h"
#include "PCGSettings.h"
#include "Compute/PCGComputeGraph.h"
#include "Compute/PCGDataBinding.h"
#include "ComputeFramework/ComputeGraphInstance.h"

#include "UObject/StrongObjectPtr.h"

#include "PCGComputeGraphElement.generated.h"

struct FPCGComputeGraphContext : public FPCGContext
{
public:
	virtual bool IsComputeContext() const override { return true; }

protected:
	virtual void AddExtraStructReferencedObjects(FReferenceCollector& Collector) override;

public:
	TStrongObjectPtr<UPCGDataBinding> DataBinding = nullptr;
	TStrongObjectPtr<UPCGComputeGraph> ComputeGraph = nullptr;

	/** Data providers created from data interfaces and data bindings. */
	FComputeGraphInstance ComputeGraphInstance;

	/** Keep track of data providers that perform async operations and require multiple frames to complete. */
	TSet<UComputeDataProvider*> ProvidersRunningAsyncOperations;
	mutable FRWLock ProvidersRunningAsyncOperationsLock;

	/** Graph enqueued (scheduled for execution by GPU). */
	bool bGraphEnqueued = false;

	/** All async operations complete and results processed. */
	bool bAllAsyncOperationsDone = false;

	/** Graph executed successfully. */
	bool bExecutionSuccess = false;

	/** Whether all required primitive proxies have been created. */
	bool bPrimitiveProxiesValidated = false;
};

/** Executes a CF graph. Created by the compiler when collapsing GPU nodes rather than by a settings/node. */
class FPCGComputeGraphElement : public IPCGElement
{
public:
	FPCGComputeGraphElement() = default;
	explicit FPCGComputeGraphElement(int32 InComputeGraphIndex)
		: ComputeGraphIndex(InComputeGraphIndex)
	{}

#if WITH_EDITOR
	//~Begin IPCGElement interface
	virtual bool IsComputeGraphElement() const override { return true; }
	//~End IPCGElement interface

	/** Return true if the elements are identical, used for change detection. */
	bool operator==(const FPCGComputeGraphElement& Other) const;
#endif

	// TODO: ComputeGraphIndex could be removed from the element if we properly hook up EPCGElementSource::FromCookedSettings in the graph executor 
	// to manufacture the context's settings from the FPCGGraphTask Settings member. Would also eliminate the need for IsComputeGraphElement().
	int32 ComputeGraphIndex = INDEX_NONE;

protected:
	virtual FPCGContext* CreateContext() override { return new FPCGComputeGraphContext(); }
	virtual bool ExecuteInternal(FPCGContext* InContext) const override;
	virtual void PostExecuteInternal(FPCGContext* InContext) const override;
	virtual void AbortInternal(FPCGContext* InContext) const override;;

	// The calls to initialize the compute graph are not thread safe.
	virtual bool CanExecuteOnlyOnMainThread(FPCGContext* Context) const override { return true; }

	// TODO - need to accumulate dependencies from compute graph nodes.
	virtual bool IsCacheable(const UPCGSettings* InSettings) const override { return false; }

	bool SetupProceduralISMComponents(FPCGContext* InContext, UPCGDataBinding* Binding) const;

	void ResetAsyncOperations(FPCGContext* InContext) const;

#if WITH_EDITOR
	void LogCompilationMessages(FPCGComputeGraphContext* InContext) const;
#endif
};

UCLASS(ClassGroup = (Procedural))
class UPCGComputeGraphSettings : public UPCGSettings
{
	GENERATED_BODY()

public:
	UPCGComputeGraphSettings();

protected:
	virtual FPCGElementPtr CreateElement() const override;

public:
	UPROPERTY()
	int32 ComputeGraphIndex = INDEX_NONE;
};
