// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGConvertToAttributeSet.h"

#include "PCGContext.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Helpers/PCGTagHelpers.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/PCGMetadataAttributeTpl.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGConvertToAttributeSet)

#if WITH_EDITOR
bool UPCGConvertToAttributeSetSettings::GetCompactNodeIcon(FName& OutCompactNodeIcon) const
{
	OutCompactNodeIcon = PCGNodeConstants::Icons::CompactNodeConvert;
	return true;
}
#endif

TArray<FPCGPinProperties> UPCGConvertToAttributeSetSettings::InputPinProperties() const
{
	return Super::DefaultPointInputPinProperties();
}

TArray<FPCGPinProperties> UPCGConvertToAttributeSetSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Param);

	return PinProperties;
}

FPCGElementPtr UPCGConvertToAttributeSetSettings::CreateElement() const
{
	return MakeShared<FPCGConvertToAttributeSetElement>();
}

bool FPCGConvertToAttributeSetElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGConvertToAttributeSetElement::Execute);
	check(Context);

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	for (const FPCGTaggedData& Input : Inputs)
	{
		if (Cast<UPCGPointData>(Input.Data) == nullptr)
		{
			continue;
		}

		const UPCGPointData* PointData = Cast<UPCGPointData>(Input.Data);
		const TArray<FPCGPoint>& Points = PointData->GetPoints();
		const UPCGMetadata* SourceMetadata = PointData->Metadata;
		check(SourceMetadata);

		// Note: this is very similar in idea to UPCGPointData::Flatten
		if (SourceMetadata->GetAttributeCount() == 0 || Points.Num() == 0)
		{
			continue;
		}

		UPCGParamData* ParamData = FPCGContext::NewObject_AnyThread<UPCGParamData>(Context);
		check(ParamData->Metadata);
		ParamData->Metadata->Initialize(SourceMetadata);

		// Create new entry that will map (or not) to the original parent
		TArray<PCGMetadataEntryKey> EntryKeys;
		EntryKeys.Reserve(Points.Num());
		for (const FPCGPoint& Point : Points)
		{
			EntryKeys.Add(ParamData->Metadata->AddEntry(Point.MetadataEntry));
		}

		ParamData->Metadata->FlattenAndCompress(EntryKeys);

		FPCGTaggedData& Output = Outputs.Emplace_GetRef(Input);
		Output.Data = ParamData;
	}

	return true;
}

TArray<FPCGPinProperties> UPCGTagsToAttributeSetSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Param);

	return PinProperties;
}

FPCGElementPtr UPCGTagsToAttributeSetSettings::CreateElement() const
{
	return MakeShared<FPCGTagsToAttributeSetElement>();
}

bool FPCGTagsToAttributeSetElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGTagsToAttributeSetElement::Execute);
	check(Context);

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
	TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;

	for (const FPCGTaggedData& Input : Inputs)
	{
		if (!Input.Data)
		{
			continue;
		}

		UPCGParamData* ParamData = FPCGContext::NewObject_AnyThread<UPCGParamData>(Context);
		check(ParamData && ParamData->Metadata);

		FPCGTaggedData& Output = Outputs.Emplace_GetRef(Input);
		Output.Data = ParamData;

		PCGMetadataEntryKey EntryKey = ParamData->Metadata->AddEntry();

		for (const FString& DataTag : Input.Tags)
		{
			PCG::Private::SetAttributeFromTag(DataTag, ParamData->Metadata, EntryKey, /*bCanCreateAttribute=*/true);
		}
	}

	return true;
}