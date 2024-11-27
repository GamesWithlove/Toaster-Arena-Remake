// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/PCGDataBinding.h"

#include "PCGNode.h"
#include "PCGParamData.h"
#include "PCGSettings.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGComputeGraph.h"
#include "Data/PCGPointData.h"
#include "Metadata/PCGMetadata.h"

void UPCGDataBinding::Initialize(
	const UPCGComputeGraph* InComputeGraph,
	TWeakObjectPtr<UPCGComponent> InSourceComponent,
	const FPCGDataCollection& InComputeGraphElementInputData,
	const TMap<FName, FPCGKernelAttributeIDAndType>& InStaticAttributeTable)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataBinding::Initialize);
	check(InComputeGraph);

	Graph = InComputeGraph;
	SourceComponent = InSourceComponent;
	GlobalAttributeLookupTable = InStaticAttributeTable;

	InitializeInputData(InComputeGraphElementInputData);

	FillInMissingAttributeTableTypes(InComputeGraphElementInputData);

#if PCG_KERNEL_LOGGING_ENABLED
	if (Graph->bLogDataDescriptions)
	{
		DebugLogDataDescriptions();
	}
#endif
}

bool UPCGDataBinding::ComputeCPUOutputPinDataDesc(const UPCGPin* OutputPin, FPCGDataCollectionDesc& OutDesc) const
{
	check(OutputPin);
	check(Graph);

	// Find the unique alias for the virtual pin created during compilation to receive the data from the upstream OutputPin.
	// OutputPin can either be on a CPU node or on a GPU node in a different compute graph.
	const FName* FoundPinAlias = Graph->OutputCPUPinToInputGPUPinAlias.Find(OutputPin);
	if (!FoundPinAlias)
	{
		return false;
	}

	// Create description from compute graph element input data.
	OutDesc = FPCGDataCollectionDesc::BuildFromInputDataCollectionAndInputPinLabel(
		DataForGPU.InputDataCollection,
		*FoundPinAlias,
		GetAttributeLookupTable(),
		GetStringTable());

	return true;
}

void UPCGDataBinding::InitializeInputData(const FPCGDataCollection& InComputeGraphElementInputData)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataBinding::InitializeInputData);

	DataForGPU.InputDataCollection = InComputeGraphElementInputData;

	// Link each input pin to the data collection, so that data providers can find the data.
	for (const TSoftObjectPtr<const UPCGPin>& InputPinPtr : Graph->PinsReceivingDataFromCPU)
	{
		if (const UPCGPin* InputPin = InputPinPtr.Get())
		{
			DataForGPU.InputPins.Add(InputPin);
		}
	}

	DataForGPU.InputPinLabelAliases = Graph->InputPinLabelAliases;

	BuildStringTable();
}

void UPCGDataBinding::BuildStringTable()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataBinding::BuildStringTable);
	check(Graph);

	// String table always contains empty string in index 0 (and string key attributes are 0-initialized).
	StringTable = { FString() };

	// Add any strings known statically at compilation time.
	StringTable.Append(Graph->GetStringTable());

	for (const FPCGTaggedData& Data : DataForGPU.InputDataCollection.TaggedData)
	{
		const UPCGMetadata* Metadata = Data.Data ? Data.Data->ConstMetadata() : nullptr;
		if (!Metadata)
		{
			continue;
		}

		TArray<FName> AttributeNames;
		TArray<EPCGMetadataTypes> AttributeTypes;
		Metadata->GetAttributes(AttributeNames, AttributeTypes);

		for (int AttributeIndex = 0; AttributeIndex < AttributeNames.Num(); ++AttributeIndex)
		{
			const FName AttributeName = AttributeNames[AttributeIndex];
			const EPCGKernelAttributeType AttributeType = PCGDataForGPUHelpers::GetAttributeTypeFromMetadataType(AttributeTypes[AttributeIndex]);

			if (AttributeType == EPCGKernelAttributeType::StringKey)
			{
				const FPCGMetadataAttributeBase* AttributeBase = Metadata->GetConstAttribute(AttributeName);
				if (!AttributeBase)
				{
					UE_LOG(LogPCG, Warning, TEXT("Attribute '%s' not found."), *AttributeName.ToString());
					continue;
				}

				auto AddEntryToStringTable = [AttributeBase, &StringTable=StringTable](int64 InValueKey)
				{
					if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftObjectPath>::Id)
					{
						StringTable.AddUnique(static_cast<const FPCGMetadataAttribute<FSoftObjectPath>*>(AttributeBase)->GetValue(InValueKey).ToString());
					}
					else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FString>::Id)
					{
						StringTable.AddUnique(static_cast<const FPCGMetadataAttribute<FString>*>(AttributeBase)->GetValue(InValueKey));
					}
					else if (AttributeBase->GetTypeId() == PCG::Private::MetadataTypes<FSoftClassPath>::Id)
                    {
                    	StringTable.AddUnique(static_cast<const FPCGMetadataAttribute<FSoftClassPath>*>(AttributeBase)->GetValue(InValueKey).ToString());
                    }
					else
					{
						checkNoEntry();
					}
				};

				if (const UPCGPointData* PointData = Cast<UPCGPointData>(Data.Data))
				{
					for (const FPCGPoint& Point : PointData->GetPoints())
					{
						AddEntryToStringTable(AttributeBase->GetValueKey(Point.MetadataEntry));
					}
				}
				else if (const UPCGParamData* ParamData = Cast<UPCGParamData>(Data.Data))
				{
					const int32 NumElements = Metadata->GetItemCountForChild();

					for (int64 MetadataKey = 0; MetadataKey < NumElements; ++MetadataKey)
					{
						AddEntryToStringTable(AttributeBase->GetValueKey(MetadataKey));
					}
				}
				else { /** TODO: More attribute types! */ }
			}
		}
	}
}

void UPCGDataBinding::FillInMissingAttributeTableTypes(const FPCGDataCollection& InComputeGraphElementInputData)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGDataBinding::FillInMissingAttributeTableTypes);

	// Local to loop body but hoisted for perf.
	TArray<FName> AttributeNames;
	TArray<EPCGMetadataTypes> AttributeTypes;

	for (TPair<FName, FPCGKernelAttributeIDAndType>& Entry : GlobalAttributeLookupTable)
	{
		if (Entry.Value.Type != EPCGKernelAttributeType::None)
		{
			continue;
		}

		for (const FPCGTaggedData& Data : InComputeGraphElementInputData.TaggedData)
		{
			AttributeNames.Reset();
			AttributeTypes.Reset();

			if (const UPCGMetadata* Metadata = Data.Data ? Data.Data->ConstMetadata() : nullptr)
			{
				Metadata->GetAttributes(AttributeNames, AttributeTypes);
			}

			for (int Index = 0; Index < AttributeNames.Num(); ++Index)
			{
				if (AttributeNames[Index] == Entry.Key)
				{
					Entry.Value.Type = PCGDataForGPUHelpers::GetAttributeTypeFromMetadataType(AttributeTypes[Index]);
					break;
				}
			}

			if (Entry.Value.Type != EPCGKernelAttributeType::None)
			{
				break;
			}
		}
	}
}

void UPCGDataBinding::DebugLogDataDescriptions()
{
#if PCG_KERNEL_LOGGING_ENABLED
	UE_LOG(LogPCG, Display, TEXT("\n### ATTRIBUTE TABLE ###"));
	for (TPair<FName, FPCGKernelAttributeIDAndType>& AttributeEntry : GlobalAttributeLookupTable)
	{
		UE_LOG(LogPCG, Display, TEXT("\tName: %s\t\tID: %d\t\tType: %d"), *AttributeEntry.Get<0>().ToString(), AttributeEntry.Get<1>().Id, AttributeEntry.Get<1>().Type);
	}

	UE_LOG(LogPCG, Display, TEXT("\n### STRING TABLE ###"));
	for (int32 i = 0; i < StringTable.Num(); ++i)
	{
		UE_LOG(LogPCG, Display, TEXT("\t%d: %s"), i, *StringTable[i]);
	}

	const UEnum* PCGDataTypeEnum = StaticEnum<EPCGDataType>();
	const UEnum* PCGKernelAttributeTypeEnum = StaticEnum<EPCGKernelAttributeType>();
	check(PCGDataTypeEnum && PCGKernelAttributeTypeEnum);

	auto LogDataDescription = [this, PCGDataTypeEnum, PCGKernelAttributeTypeEnum](const FPCGDataCollectionDesc& InDataDesc)
	{
		for (int32 DataIndex = 0; DataIndex < InDataDesc.DataDescs.Num(); ++DataIndex)
		{
			const FPCGDataDesc& DataDesc = InDataDesc.DataDescs[DataIndex];

			UE_LOG(LogPCG, Display, TEXT("\t\tData Index %d"), DataIndex);
			UE_LOG(LogPCG, Display, TEXT("\t\t\tType: %s"), *PCGDataTypeEnum->GetNameStringByValue(static_cast<int64>(DataDesc.Type)));
			UE_LOG(LogPCG, Display, TEXT("\t\t\tElementCount: %d"), DataDesc.ElementCount);
			UE_LOG(LogPCG, Display, TEXT("\t\t\tAttributes (%d)"), DataDesc.AttributeDescs.Num());
				
			for (int32 AttributeIndex = 0; AttributeIndex < DataDesc.AttributeDescs.Num(); ++AttributeIndex)
			{
				const FPCGKernelAttributeDesc& AttributeDesc = DataDesc.AttributeDescs[AttributeIndex];

				FString UniqueStringKeys;
				for (int32 StringKey : AttributeDesc.UniqueStringKeys)
				{
					UniqueStringKeys += TEXT(", ");
					UniqueStringKeys += FString::Format(TEXT("{0}"), { StringKey });
				}

				UE_LOG(LogPCG, Display, TEXT("\t\t\t\tID: %d\t\tName: %s\t\tType: %s\t\tUniqueStringKeys%s"),
					AttributeDesc.Index,
					*AttributeDesc.Name.ToString(),
					*(PCGKernelAttributeTypeEnum->GetNameStringByValue(static_cast<int64>(AttributeDesc.Type))),
					UniqueStringKeys.IsEmpty() ? TEXT(": ") : *UniqueStringKeys);
			}
		}
	};

	UE_LOG(LogPCG, Display, TEXT("\n### INPUT PIN DATA DESCRIPTIONS ###"));
	for (const TSoftObjectPtr<const UPCGNode>& Node : Graph->KernelToNode)
	{
		const UPCGSettings* Settings = Node.IsValid() ? Node->GetSettings() : nullptr;
		if (Settings && Settings->bDumpDataDescriptions)
		{
			UE_LOG(LogPCG, Display, TEXT("Node: %s"), *Node->GetNodeTitle(EPCGNodeTitleType::ListView).ToString());

			for (const UPCGPin* Pin : Node->GetInputPins())
			{
				const FPCGDataCollectionDesc DataDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(Pin, this);
				UE_LOG(LogPCG, Display, TEXT("\tInput Pin: %s (%d data)"), *Pin->Properties.Label.ToString(), DataDesc.DataDescs.Num());
				LogDataDescription(DataDesc);
			}

			for (const UPCGPin* Pin : Node->GetOutputPins())
			{
				FPCGDataCollectionDesc DataDesc;
				if (ensure(Settings->ComputeOutputPinDataDesc(Pin, this, DataDesc)))
				{
					UE_LOG(LogPCG, Display, TEXT("\tOutput Pin: %s (%d data)"), *Pin->Properties.Label.ToString(), DataDesc.DataDescs.Num());
					LogDataDescription(DataDesc);
				}
				else
				{
					UE_LOG(LogPCG, Display, TEXT("\tOutput Pin: %s MISSING!"), *Pin->Properties.Label.ToString());
				}
			}
		}
	}
#endif
}
