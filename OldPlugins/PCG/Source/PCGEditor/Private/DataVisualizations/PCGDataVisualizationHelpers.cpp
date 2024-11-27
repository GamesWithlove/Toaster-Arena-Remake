// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataVisualizations/PCGDataVisualizationHelpers.h"

#include "SPCGEditorGraphAttributeListView.h"
#include "Metadata/PCGAttributePropertySelector.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"

#define LOCTEXT_NAMESPACE "PCGDataVisualizationHelpers"

namespace PCGDataVisualizationConstants
{
	const FString NoneAttributeId = TEXT("@None");
}

namespace PCGDataVisualizationHelpers
{
	FPCGTableVisualizerColumnInfo CreateColumnInfo(const UPCGData* Data, FName Id, const FText& Label, TFunction<TSharedPtr<const IPCGAttributeAccessor>()> CreateAccessorFunc)
	{
		FPCGTableVisualizerColumnInfo ColumnInfo;
		ColumnInfo.Id = Id;
		ColumnInfo.Label = Label;

		FPCGAttributePropertyInputSelector Selector = FPCGAttributePropertySelector::CreateSelectorFromString<FPCGAttributePropertyInputSelector>(Id.ToString());
		ColumnInfo.Accessor = CreateAccessorFunc ? CreateAccessorFunc() : TSharedPtr<const IPCGAttributeAccessor>(PCGAttributeAccessorHelpers::CreateConstAccessor(Data, Selector).Release());

		if (ensure(ColumnInfo.Accessor))
		{
			ColumnInfo.Tooltip = FText::FromString(PCG::Private::GetTypeName(ColumnInfo.Accessor->GetUnderlyingType()));
		}

		return ColumnInfo;
	}

	FPCGTableVisualizerColumnInfo CreateMetadataColumnInfo(const UPCGData* Data, const FName& Id, EPCGMetadataTypes MetadataType, const TCHAR* PostFix = nullptr)
	{
		FString OriginalId = Id.ToString();
		if (PostFix)
		{
			OriginalId.Append(PostFix);
		}

		FString IdString(OriginalId);
		FText Label;

		if (Id == NAME_None)
		{
			IdString = FString::Printf(TEXT("%s%s"), *PCGDataVisualizationConstants::NoneAttributeId, PostFix);
			Label = FText::Format(LOCTEXT("NoneLabelFormat", "{0}{1}"), UEnum::GetDisplayValueAsText(MetadataType), FText::FromString(PostFix));
		}
		else if (Label.IsEmpty())
		{
			Label = FText::FromString(IdString);
		}

		FPCGTableVisualizerColumnInfo ColumnInfo;
		ColumnInfo.Id = FName(IdString);
		ColumnInfo.Label = Label;

		if (MetadataType == EPCGMetadataTypes::String)
		{
			ColumnInfo.CellAlignment = EPCGTableVisualizerCellAlignment::Left;
			ColumnInfo.Width = PCGEditorGraphAttributeListView::MaxColumnWidth;
		}

		if (Data)
		{
			FPCGAttributePropertyInputSelector Selector;
			Selector.Update(OriginalId);
	
			ColumnInfo.Accessor = TSharedPtr<const IPCGAttributeAccessor>(PCGAttributeAccessorHelpers::CreateConstAccessor(Data, Selector).Release());

			if (ColumnInfo.Accessor)
			{
				ColumnInfo.Tooltip = FText::FromString(PCG::Private::GetTypeName(ColumnInfo.Accessor->GetUnderlyingType()));
			}
		}

		return ColumnInfo;
	}

	void CreateMetadataColumnInfos(const UPCGData* Data, TArray<FPCGTableVisualizerColumnInfo>& OutColumnInfos)
	{
		const UPCGMetadata* Metadata = Data->ConstMetadata();

		TArray<FName> AttributeNames;
		TArray<EPCGMetadataTypes> AttributeTypes;
		Metadata->GetAttributes(AttributeNames, AttributeTypes);

		for (int32 I = 0; I < AttributeNames.Num(); I++)
		{
			const FName& AttributeName = AttributeNames[I];
			const EPCGMetadataTypes AttributeType = AttributeTypes[I];
			FName ColumnName = AttributeName;

			switch (AttributeType)
			{
			case EPCGMetadataTypes::Float:
			case EPCGMetadataTypes::Double:
			case EPCGMetadataTypes::Integer32:
			case EPCGMetadataTypes::Integer64:
			case EPCGMetadataTypes::Boolean:
			case EPCGMetadataTypes::String:
			case EPCGMetadataTypes::Name:
			case EPCGMetadataTypes::SoftObjectPath:
			case EPCGMetadataTypes::SoftClassPath:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT("")));
				break;
			}
			case EPCGMetadataTypes::Vector2:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".X")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Y")));
				break;
			}
			case EPCGMetadataTypes::Vector:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".X")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Y")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Z")));
				break;
			}
			case EPCGMetadataTypes::Vector4:
			case EPCGMetadataTypes::Quaternion:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".X")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Y")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Z")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".W")));
				break;
			}
			case EPCGMetadataTypes::Rotator:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Roll")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Pitch")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Yaw")));
				break;
			}
			case EPCGMetadataTypes::Transform:
			{
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Position.X")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Position.Y")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Position.Z")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Rotation.Roll")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Rotation.Pitch")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Rotation.Yaw")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Scale.X")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Scale.Y")));
				OutColumnInfos.Add(CreateMetadataColumnInfo(Data, ColumnName, AttributeType, TEXT(".Scale.Z")));
				break;
			}
			default:
				break;
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
