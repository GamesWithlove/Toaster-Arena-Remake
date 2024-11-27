// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataVisualizations/PCGParamDataVisualization.h"

#include "PCGData.h"
#include "DataVisualizations/PCGDataVisualizationHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"

#define LOCTEXT_NAMESPACE "PCGParamDataVisualization"

namespace PCGParamDataVisualizationConstants
{
	/** Names of the columns in the attribute list. */
	const FName NAME_Index = FName(TEXT("$Index"));

	/** Labels of the columns. */
	const FText TEXT_Index = LOCTEXT("Index", "$Index");
}

FPCGTableVisualizerInfo IPCGParamDataVisualization::GetTableVisualizerInfo(const UPCGData* Data) const
{
	FPCGTableVisualizerInfo Info;
	Info.Data = Data;
	Info.ColumnInfos.Add(PCGDataVisualizationHelpers::CreateColumnInfo(Data, PCGParamDataVisualizationConstants::NAME_Index, PCGParamDataVisualizationConstants::TEXT_Index));
	Info.SortingColumn = PCGParamDataVisualizationConstants::NAME_Index;
	Info.AccessorKeys = TSharedPtr<const IPCGAttributeAccessorKeys>(PCGAttributeAccessorHelpers::CreateConstKeys(Data, FPCGAttributePropertyInputSelector()).Release());

	// Add Metadata Columns
	PCGDataVisualizationHelpers::CreateMetadataColumnInfos(Data, Info.ColumnInfos);

	return Info;
}

#undef LOCTEXT_NAMESPACE
