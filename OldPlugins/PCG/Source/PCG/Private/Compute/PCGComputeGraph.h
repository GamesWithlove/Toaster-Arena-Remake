// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Compute/PCGDataForGPU.h"

#include "ComputeFramework/ComputeGraph.h"
#include "ComputeFramework/ComputeKernelCompileResult.h"

#include "UObject/ObjectKey.h"

#include "PCGComputeGraph.generated.h"

class UPCGNode;
class UPCGPin;

UCLASS()
class UPCGComputeGraph : public UComputeGraph
{
	GENERATED_BODY()

public:
	//~Begin UComputeGraph interface
	void OnKernelCompilationComplete(int32 InKernelIndex, FComputeKernelCompileResults const& InCompileResults) override;
	//~End UComputeGraph interface

	/** Get the global attribute information collated during compilation. */
	const TMap<FName, FPCGKernelAttributeIDAndType>& GetAttributeLookupTable() const { return GlobalAttributeLookupTable; }

	const TArray<FString>& GetStringTable() const { return StringTable; }

public:
	TMap<TObjectKey<const UPCGNode>, TArray<FComputeKernelCompileMessage>> KernelToCompileMessages;
	
	/** Set of input pins at the CPU -> GPU border. */
	UPROPERTY()
	TArray<TSoftObjectPtr<const UPCGPin>> PinsReceivingDataFromCPU;

	/** Pin label aliases, used for selecting data items corresponding to an input pin from the input data collection. */
	UPROPERTY()
	TMap<TSoftObjectPtr<const UPCGPin>, FName> InputPinLabelAliases;

	/** Mapping from upstream output pin to downstream pin alias, used to select data items originating from upstream pin from the input data collection. */
	UPROPERTY()
	TMap<TSoftObjectPtr<const UPCGPin>, FName> OutputCPUPinToInputGPUPinAlias;

	/** Node corresponding to each kernel, useful for compilation feedback. */
	UPROPERTY()
	TArray<TSoftObjectPtr<const UPCGNode>> KernelToNode;

	/** List of settings for all nodes that spawn static meshes, so we can do required primitive & DI setup when compute graph element executes. */
	UPROPERTY()
	TArray<TSoftObjectPtr<const UPCGSettings>> StaticMeshSpawners;

	UPROPERTY()
	bool bLogDataDescriptions = false;

protected:
	/** Global attribute information collated during compilation. */
	UPROPERTY()
	TMap<FName /* Attribute name */, FPCGKernelAttributeIDAndType> GlobalAttributeLookupTable;

	/** String table collated during compilation. */
	UPROPERTY()
	TArray<FString> StringTable;

	friend class FPCGGraphCompilerGPU;
};
