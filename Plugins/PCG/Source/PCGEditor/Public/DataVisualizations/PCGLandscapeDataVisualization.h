// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGSpatialDataVisualization.h"

class UPCGData;
class UPCGPointData;
struct FPCGContext;

/** Overrides collapse behavior to target a given number of points generated, to avoid too coarse debug (points way bigger than data) or enormous amount of points (points way smaller than data). */
class PCGEDITOR_API IPCGLandscapeDataVisualization : public IPCGSpatialDataVisualization
{
public:
	// ~Begin IPCGSpatialDataVisualization interface
	virtual const UPCGPointData* CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const override;
	// ~End IPCGSpatialDataVisualization interface
};
