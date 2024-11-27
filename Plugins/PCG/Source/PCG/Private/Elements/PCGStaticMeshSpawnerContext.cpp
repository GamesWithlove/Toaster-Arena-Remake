// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGStaticMeshSpawnerContext.h"

void FPCGStaticMeshSpawnerContext::ResetInputIterationData()
{
	bCurrentInputSetup = false;
	bSelectionDone = false;
	bPartitionDone = false;
	CurrentPointData = nullptr;
	CurrentOutputPointData = nullptr;
	MaterialOverrideHelper.Reset();
	CurrentPointIndex = 0;
	WeightedMeshInstances.Reset();
	MeshToValueKey.Reset();
	CumulativeWeights.Reset();
	CategoryEntryToInstancesAndWeights.Reset();
	AttributeOverridePartition.Reset();
	OverriddenDescriptors.Reset();
}