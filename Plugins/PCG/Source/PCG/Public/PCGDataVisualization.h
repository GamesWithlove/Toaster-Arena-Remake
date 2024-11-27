// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Metadata/Accessors/IPCGAttributeAccessor.h"

#if WITH_EDITOR
class AActor;
class UPCGData;
class UPCGSettingsInterface;
struct FPCGContext;

enum class EPCGTableVisualizerColumnSortingMode
{
	None,
	Ascending,
	Descending
};

enum class EPCGTableVisualizerCellAlignment
{
	Fill,
	Left,
	Center,
	Right,
};

struct FPCGTableVisualizerColumnInfo
{
	FName Id;
	FText Label;
	FText Tooltip;
	float Width = -1.0f; // Will be calculated automatically if < 0
	EPCGTableVisualizerCellAlignment CellAlignment = EPCGTableVisualizerCellAlignment::Right;
	TSharedPtr<const IPCGAttributeAccessor> Accessor;
};

struct FPCGTableVisualizerInfo
{
	const UPCGData* Data = nullptr;
	TArray<FPCGTableVisualizerColumnInfo> ColumnInfos;
	EPCGTableVisualizerColumnSortingMode SortingMode = EPCGTableVisualizerColumnSortingMode::Ascending;
	FName SortingColumn = NAME_None;
	TFunction<void(const UPCGData*, TArrayView<const int>)> FocusOnDataCallback = nullptr;
	TSharedPtr<const IPCGAttributeAccessorKeys> AccessorKeys;
};

/** Implement this interface to provide custom PCGData visualizations. Register your implementation to FPCGModule::FPCGDataVisualizationRegistry to be used automatically. */
class IPCGDataVisualization
{
public:
	virtual ~IPCGDataVisualization() = default;
	virtual void ExecuteDebugDisplay(FPCGContext* Context, const UPCGSettingsInterface* SettingsInterface, const UPCGData* Data, AActor* TargetActor) const = 0;
	virtual FPCGTableVisualizerInfo GetTableVisualizerInfo(const UPCGData* Data) const = 0;
};
#endif
