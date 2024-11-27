// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGDataVisualization.h"
#include "PCGEditorModule.h"

class AActor;
class UPCGData;
class UPCGPointData;
struct FPCGContext;

/** Default implementation for spatial data. Collapses to a PointData representation. */
class PCGEDITOR_API IPCGSpatialDataVisualization : public IPCGDataVisualization
{
public:
	// ~Begin IPCGDataVisualization interface
	virtual void ExecuteDebugDisplay(FPCGContext* Context, const UPCGSettingsInterface* SettingsInterface, const UPCGData* Data, AActor* TargetActor) const override;
	virtual FPCGTableVisualizerInfo GetTableVisualizerInfo(const UPCGData* Data) const override;
	// ~End IPCGDataVisualization interface

	virtual const UPCGPointData* CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const;
};
