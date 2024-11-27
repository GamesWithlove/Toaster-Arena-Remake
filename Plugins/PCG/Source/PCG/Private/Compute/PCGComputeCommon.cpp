// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGComputeCommon.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGParamData.h"
#include "PCGSubsystem.h"
#include "Compute/PCGPinPropertiesGPU.h"
#include "Data/PCGPointData.h"

#include "DynamicRHI.h"
#include "RHIStats.h"

namespace PCGComputeHelpers
{
	static TAutoConsoleVariable<float> CVarMaxGPUBufferSizeProportion(
		TEXT("pcg.GraphExecution.GPU.MaxBufferSize"),
		0.5f,
		TEXT("Maximum GPU buffer size as proportion of total available graphics memory."));

	int GetElementCount(const UPCGData* InData)
	{
		if (const UPCGPointData* PointData = Cast<UPCGPointData>(InData))
		{
			return PointData->GetPoints().Num();
		}
		else if (const UPCGParamData* ParamData = Cast<UPCGParamData>(InData))
		{
			if (const UPCGMetadata* Metadata = ParamData->ConstMetadata())
			{
				return Metadata->GetItemCountForChild();
			}
		}

		return 0;
	}

	bool IsTypeAllowedAsInput(EPCGDataType Type)
	{
		return (Type | PCGComputeConstants::AllowedInputTypes) == PCGComputeConstants::AllowedInputTypes;
	}

	bool IsTypeAllowedAsOutput(EPCGDataType Type)
	{
		return (Type | PCGComputeConstants::AllowedOutputTypes) == PCGComputeConstants::AllowedOutputTypes;
	}

	bool IsTypeAllowedInDataCollection(EPCGDataType Type)
	{
		return (Type | PCGComputeConstants::AllowedDataCollectionTypes) == PCGComputeConstants::AllowedDataCollectionTypes;
	}

#if PCG_KERNEL_LOGGING_ENABLED
	void LogKernelWarning(const FPCGContext* Context, const UPCGSettings* Settings, const FText& InText)
	{
#if WITH_EDITOR
		if (Context && ensure(Context->SourceComponent.IsValid() && Context->SourceComponent.Get()))
		{
			if (UPCGSubsystem* Subsystem = Context->SourceComponent->GetSubsystem())
			{
				FPCGStack StackWithNode = Context->Stack ? *Context->Stack : FPCGStack();
				StackWithNode.PushFrame(Settings->GetOuter());

				Subsystem->GetNodeVisualLogsMutable().Log(StackWithNode, ELogVerbosity::Warning, InText);
			}
		}
#endif
		PCGE_LOG_C(Warning, LogOnly, Context, InText);
	}

	void LogKernelError(const FPCGContext* Context, const UPCGSettings* Settings, const FText& InText)
	{
#if WITH_EDITOR
		if (Context && ensure(Context->SourceComponent.IsValid() && Context->SourceComponent.Get()))
		{
			if (UPCGSubsystem* Subsystem = Context->SourceComponent->GetSubsystem())
			{
				FPCGStack StackWithNode = Context->Stack ? *Context->Stack : FPCGStack();
				StackWithNode.PushFrame(Settings->GetOuter());

				Subsystem->GetNodeVisualLogsMutable().Log(StackWithNode, ELogVerbosity::Error, InText);
			}
		}
#endif
		PCGE_LOG_C(Error, LogOnly, Context, InText);
	}
#endif

	void ComputeOutputPinDataDesc(const FPCGPinPropertiesGPU& PinProperties, const UPCGSettings* Settings, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutPinDesc)
	{
		check(Settings);
		check(Binding);
		
		const UPCGNode* Node = CastChecked<UPCGNode>(Settings->GetOuter());

		// No size set by kernel, fall back to pin settings.
		const FPCGPinPropertiesGPUStruct& Props = PinProperties.PropertiesGPU;

		if (Props.InitializationMode == EPCGPinInitMode::FromInputPins)
		{
			TArray<FPCGDataCollectionDesc> InputDescs;

			TArray<FName> InitPins;

			for (const FName PinToInitFrom : Props.PinsToInititalizeFrom)
			{
				if (const UPCGPin* InitPin = Node->GetInputPin(PinToInitFrom))
				{
					InitPins.Emplace(PinToInitFrom);
					InputDescs.Emplace(PCGDataForGPUHelpers::ComputeInputPinDataDesc(InitPin, Binding));
				}
			}

			const int NumInitPins = InitPins.Num();
			check(NumInitPins == InputDescs.Num());

			// Copies unique (non-reserved) attribute descriptions from 'InDataDesc' to 'OutDataDesc'.
			auto AddAttributesFromData = [](const FPCGDataDesc& InDataDesc, FPCGDataDesc& OutDataDesc)
			{
				for (const FPCGKernelAttributeDesc& InAttrDesc : InDataDesc.AttributeDescs)
				{
					if (InAttrDesc.Index >= PCGComputeConstants::NUM_RESERVED_ATTRS
						&& !OutDataDesc.AttributeDescs.ContainsByPredicate([InAttrDesc](const FPCGKernelAttributeDesc& OutAttrDesc)
							{
								// Note: We shouldn't need to check for uniqueness of attr Index, since attributes should all have unique index via
								// the GlobalAttributeLookupTable
								return InAttrDesc.Name == OutAttrDesc.Name;
							}))
					{
						OutDataDesc.AttributeDescs.Emplace(InAttrDesc);
					}
				}
			};

			// Combines the data for index i of each pin into one data. Creates exactly 'MaxDataCount' datas.
			auto AddDataPairwise = [&](int MaxDataCount)
			{
				for (int DataIndex = 0; DataIndex < MaxDataCount; ++DataIndex)
				{
					// Set element count to 0 for now, but we will overwrite it.
					FPCGDataDesc& DataDesc = OutPinDesc.DataDescs.Emplace_GetRef(PinProperties.AllowedTypes, /*SetNumElements=*/0);
					int TotalNumElements = 0; // Total number of elements computed for this data index.

					// For each data index, loop over all the pins and create the uber-data.
					for (int InputPinIndex = 0; InputPinIndex < NumInitPins; ++InputPinIndex)
					{
						const FPCGDataCollectionDesc& InputDesc = InputDescs[InputPinIndex];

						int ClampedDataIndex = DataIndex;

						// If this pin does not have the same number of data, clamp it to the first data.
						if (DataIndex != InputDesc.DataDescs.Num())
						{
							ClampedDataIndex = 0;
						}

						const FPCGDataDesc& InputDataDesc = InputDesc.DataDescs.IsValidIndex(ClampedDataIndex) ? InputDesc.DataDescs[DataIndex] : FPCGDataDesc(EPCGDataType::Any, 0);

						if (Props.ElementCountMode == EPCGElementCountMode::FromInputData)
						{
							if (Props.ElementMultiplicity == EPCGElementMultiplicity::Product)
							{
								TotalNumElements = FMath::Max(TotalNumElements, 1) * InputDataDesc.ElementCount;
							}
							else if (Props.ElementMultiplicity == EPCGElementMultiplicity::Sum)
							{
								TotalNumElements += InputDataDesc.ElementCount;
							}
							else
							{
								checkNoEntry();
							}
						}
						else if (Props.ElementCountMode == EPCGElementCountMode::Fixed)
						{
							TotalNumElements += Props.ElementCount;
						}
						else
						{
							checkNoEntry();
						}

						if (Props.AttributeInheritanceMode == EPCGAttributeInheritanceMode::CopyAttributeSetup)
						{
							AddAttributesFromData(InputDataDesc, DataDesc);
						}

						DataDesc.ElementCount = TotalNumElements;
					}
				}
			};

			if (Props.DataCountMode == EPCGDataCountMode::FromInputData)
			{
				// If this is the only input pin, we can just copy it.
				if (NumInitPins == 1)
				{
					for (const FPCGDataDesc& InputDataDesc : InputDescs[0].DataDescs)
					{
						FPCGDataDesc& DataDesc = OutPinDesc.DataDescs.Emplace_GetRef(PinProperties.AllowedTypes, InputDataDesc.ElementCount);

						if (Props.AttributeInheritanceMode == EPCGAttributeInheritanceMode::CopyAttributeSetup)
						{
							AddAttributesFromData(InputDataDesc, DataDesc);
						}
					}
				}
				// Take pairs of datas, where the pairs are given by each data of each pin to each data of every other pin.
				else if (Props.DataMultiplicity == EPCGDataMultiplicity::CartesianProduct)
				{
					for (int InputPinIndex = 0; InputPinIndex < NumInitPins; ++InputPinIndex)
					{
						const FPCGDataCollectionDesc& InputDesc = InputDescs[InputPinIndex];

						for (int OtherInputPinIndex = InputPinIndex + 1; OtherInputPinIndex < NumInitPins; ++OtherInputPinIndex)
						{
							const FPCGDataCollectionDesc& OtherInputDesc = InputDescs[OtherInputPinIndex];

							for (const FPCGDataDesc& InputDataDesc : InputDesc.DataDescs)
							{
								for (const FPCGDataDesc& OtherInputDataDesc : OtherInputDesc.DataDescs)
								{
									FPCGDataDesc* DataDesc = nullptr;

									if (Props.ElementCountMode == EPCGElementCountMode::FromInputData)
									{
										if (Props.ElementMultiplicity == EPCGElementMultiplicity::Product)
										{
											DataDesc = &OutPinDesc.DataDescs.Emplace_GetRef(PinProperties.AllowedTypes, InputDataDesc.ElementCount * OtherInputDataDesc.ElementCount);
										}
										else if (Props.ElementMultiplicity == EPCGElementMultiplicity::Sum)
										{
											DataDesc = &OutPinDesc.DataDescs.Emplace_GetRef(PinProperties.AllowedTypes, InputDataDesc.ElementCount + OtherInputDataDesc.ElementCount);
										}
										else
										{
											checkNoEntry();
										}
									}
									else if (Props.ElementCountMode == EPCGElementCountMode::Fixed)
									{
										DataDesc = &OutPinDesc.DataDescs.Emplace_GetRef(PinProperties.AllowedTypes, Props.ElementCount);
									}
									else
									{
										checkNoEntry();
									}

									if (ensure(DataDesc) && Props.AttributeInheritanceMode == EPCGAttributeInheritanceMode::CopyAttributeSetup)
									{
										AddAttributesFromData(InputDataDesc, *DataDesc);
										AddAttributesFromData(OtherInputDataDesc, *DataDesc);
									}
								}
							}
						}
					}
				}
				// Combine elements for each set of datas, where the sets are given by the Nth datas on each pin (or the first data if there is only one data).
				else if (Props.DataMultiplicity == EPCGDataMultiplicity::Pairwise)
				{
					int MaxDataCount = 0;

					// Find the maximum number of data among the init pins. Note, they should all be the same number of data, or only one data.
					for (int I = 0; I < NumInitPins; ++I)
					{
						MaxDataCount = FMath::Max(MaxDataCount, InputDescs[I].DataDescs.Num());
					}

					AddDataPairwise(MaxDataCount);
				}
				else
				{
					checkNoEntry();
				}
			}
			else if (Props.DataCountMode == EPCGDataCountMode::Fixed)
			{
				AddDataPairwise(Props.DataCount);
			}
			else
			{
				checkNoEntry();
			}
		}
		else if (Props.InitializationMode == EPCGPinInitMode::Custom)
		{
			for (int I = 0; I < Props.DataCount; ++I)
			{
				OutPinDesc.DataDescs.Emplace(PinProperties.AllowedTypes, Props.ElementCount);
			}
		}
		else
		{
			checkNoEntry();
		}
	}

	bool IsBufferSizeTooLarge(uint64 InBufferSizeBytes, bool bInLogError)
	{
		FTextureMemoryStats TextureMemStats;
		RHIGetTextureMemoryStats(TextureMemStats);

		// If buffer size exceeds a proportion of total graphics memory, then it is deemed too large. Using this as a heuristic as there
		// is no RHI API to obtain available graphics memory outside of D3D12.
		const uint64 BudgetBytes = static_cast<uint64>(TextureMemStats.TotalGraphicsMemory * CVarMaxGPUBufferSizeProportion.GetValueOnAnyThread());
		const bool bBufferTooLarge = TextureMemStats.TotalGraphicsMemory > 0 && InBufferSizeBytes > BudgetBytes;

		if (bBufferTooLarge && bInLogError)
		{
			UE_LOG(LogPCG, Error, TEXT("Attempted to allocate a GPU buffer of size %llu bytes which is larger than the safety threshold (%llu bytes). Compute graph execution aborted."),
				InBufferSizeBytes,
				BudgetBytes);
		}

		return bBufferTooLarge;
	}
}
