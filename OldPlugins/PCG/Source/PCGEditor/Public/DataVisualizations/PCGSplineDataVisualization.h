// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSpatialDataVisualization.h"
#include "PCGEditorModule.h"

class UPCGData;
class UPCGPointData;
struct FPCGContext;

class PCGEDITOR_API IPCGSplineDataVisualization : public IPCGSpatialDataVisualization
{
public:
	// ~Begin IPCGDataVisualization interface
	virtual FPCGTableVisualizerInfo GetTableVisualizerInfo(const UPCGData* Data) const override;
	// ~End IPCGDataVisualization interface

	// ~Begin IPCGSpatialDataVisualization interface
	/** Overrides collapse behavior to show the spline control points. */
	virtual const UPCGPointData* CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const override;
	// ~End IPCGSpatialDataVisualization interface
};
