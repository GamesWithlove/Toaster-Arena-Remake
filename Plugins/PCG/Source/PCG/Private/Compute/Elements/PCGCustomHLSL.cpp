// Copyright Epic Games, Inc. All Rights Reserved.

#include "Compute/Elements/PCGCustomHLSL.h"

#include "PCGComputeGraphElement.h"
#include "PCGContext.h"
#include "PCGComponent.h"
#include "PCGEdge.h"
#include "PCGModule.h"
#include "PCGPoint.h"
#include "PCGSubsystem.h"
#include "Compute/PCGComputeCommon.h"
#include "Compute/PCGComputeGraph.h"
#include "Compute/PCGDataBinding.h"
#include "Data/PCGPointData.h"
#include "Elements/Metadata/PCGMetadataElementCommon.h"

#include "Internationalization/Regex.h"
#include "Containers/StaticArray.h"

#if WITH_EDITOR
#include "ScopedTransaction.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGCustomHLSL)

#define LOCTEXT_NAMESPACE "PCGCustomHLSLElement"

namespace PCGHLSLElement
{
	const FString PinDeclTemplateStr = TEXT("<pin>");

	/** First capture: Pin name (supports a - z, A - Z, and 0 - 9) */
	constexpr int AttributePinCaptureGroup = 1;

	/** Second capture: Function name (Get or Set) */
	constexpr int AttributeFunctionCaptureGroup = 2;

	/** Third capture: Attribute type (e.g. Int, Float, Rotator, etc.) */
	constexpr int AttributeTypeCaptureGroup = 3;

	/** Fourth capture: Attribute name (supports a-z, A-Z, 0-9, ' ', '-', '_', and '/') */
	constexpr int AttributeNameCaptureGroup = 4;

	/** Regex pattern used to detect and parse attribute function usage in kernels. */
	constexpr TCHAR AttributeFunctionPattern[] = { TEXT("([a-zA-Z0-9]+)_(Get|Set)(.*)\\(.*'([a-zA-Z0-9 -_\\/]+)'.*") };

	constexpr TCHAR AttributeFunctionGet[] = { TEXT("Get") };
	constexpr TCHAR AttributeFunctionSet[] = { TEXT("Set") };

	void ConvertObjectPathToShaderFilePath(FString& InOutPath)
	{
		// Shader compiler recognizes "/Engine/Generated/..." path as special. 
		// It doesn't validate file suffix etc.
		InOutPath = FString::Printf(TEXT("/Engine/Generated/UObject%s.ush"), *InOutPath);
		// Shader compilation result parsing will break if it finds ':' where it doesn't expect.
		InOutPath.ReplaceCharInline(TEXT(':'), TEXT('@'));
	}

	FString GetKernelAttributeKeyAsString(const FPCGKernelAttributeKey& Key)
	{
		return FString::Format(TEXT("'{0}'"), { Key.Name.ToString() });
	}

	FString GetDataTypeString(EPCGDataType Type)
	{
		const UEnum* DataTypeEnum = StaticEnum<EPCGDataType>();
		check(DataTypeEnum);

		return DataTypeEnum->GetValueOrBitfieldAsString(static_cast<int64>(Type));
	}
}

UPCGCustomHLSLSettings::UPCGCustomHLSLSettings()
{
	bExecuteOnGPU = true;
}

void UPCGCustomHLSLSettings::PostLoad()
{
	Super::PostLoad();

	// Note: We update here so that Custom HLSL nodes will have the correct pin settings & declarations on load.
	UpdatePinSettings();
	UpdateAttributeKeys();

#if WITH_EDITOR
	UpdateDeclarations();
#endif
}

void UPCGCustomHLSLSettings::PostInitProperties()
{
	Super::PostInitProperties();

	// Note: We update here so that Custom HLSL nodes will have the correct pin settings & declarations on creation.
	UpdatePinSettings();

#if WITH_EDITOR
	UpdateDeclarations();
#endif
}

TArray<FPCGPinProperties> UPCGCustomHLSLSettings::OutputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	Algo::Transform(OutputPins, PinProperties, [](const FPCGPinPropertiesGPU& InPropertiesGPU) { return InPropertiesGPU; });
	return PinProperties;
}

#if WITH_EDITOR
void UPCGCustomHLSLSettings::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);

	// If a pin label is about to change, cache all input label names to diff against in PostEditChangeProperty. We'll use this to fix-up pin label references.
	if (PropertyAboutToChange && PropertyAboutToChange->GetFName() == GET_MEMBER_NAME_CHECKED(FPCGPinProperties, Label))
	{
		InputPinLabelsPreEditChange.Reset();

		for (const FPCGPinProperties& PinProps : InputPins)
		{
			InputPinLabelsPreEditChange.Add(PinProps.Label);
		}
	}
}

void UPCGCustomHLSLSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	// Apply any pin setup before refreshing the node.
	UpdatePinSettings();

	const FName MemberProperty = PropertyChangedEvent.MemberProperty ? PropertyChangedEvent.MemberProperty->GetFName() : NAME_None;
	const FName Property = PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (MemberProperty == GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, OutputPins)
		&& Property == GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, OutputPins)
		&& PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
	{
		// Whenever a new output pin is created, we should default initialize 'PinsToInitializeFrom' with the first input pin label (if it exists).
		if (const UPCGPin* FirstInputPin = GetFirstInputPin())
		{
			check(!OutputPins.IsEmpty());

			FPCGPinPropertiesGPU& PinProps = OutputPins.Last();
			PinProps.PropertiesGPU.PinsToInititalizeFrom.Add(FirstInputPin->Properties.Label);
		}
	}
	else if (MemberProperty == GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, InputPins)
		&& Property == GET_MEMBER_NAME_CHECKED(FPCGPinProperties, Label))
	{
		check(InputPinLabelsPreEditChange.Num() == InputPins.Num());

		// Fix-up pin input pin label references if an input pin label changed.
		for (int Index = 0; Index < InputPinLabelsPreEditChange.Num(); ++Index)
		{
			const FName InputLabelBeforeChange = InputPinLabelsPreEditChange[Index];
			const FName InputLabelAfterChange = InputPins[Index].Label;

			if (InputLabelBeforeChange != InputLabelAfterChange)
			{
				for (FPCGPinPropertiesGPU& OutPinProps : OutputPins)
				{
					for (FName& InitPinLabel : OutPinProps.PropertiesGPU.PinsToInititalizeFrom)
					{
						if (InitPinLabel == InputLabelBeforeChange)
						{
							InitPinLabel = InputLabelAfterChange;
						}
					}
				}

				// TODO: Could also find/replace to fix-up the kernel source
			}
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);

	UpdateDeclarations();
	UpdateAttributeKeys();
}
#endif

FPCGElementPtr UPCGCustomHLSLSettings::CreateElement() const
{
	return MakeShared<FPCGCustomHLSLElement>();
}

int UPCGCustomHLSLSettings::GetProcessingElemCountForInputPin(const UPCGPin* InputPin, const UPCGDataBinding* Binding) const
{
	check(InputPin && Binding);
	const FPCGDataForGPU& DataForGPU = Binding->DataForGPU;

	// Upper bound estimate of total number of data elements expected to arrive at this pin.
	int ProcessingElemCount = 0;

	if (DataForGPU.InputPins.Contains(InputPin))
	{
		FName PinLabel = InputPin->Properties.Label;
		if (const FName* PinLabelAlias = DataForGPU.InputPinLabelAliases.Find(InputPin))
		{
			PinLabel = *PinLabelAlias;
		}

		// Data coming straight from CPU, know its size now so count it.
		TArray<FPCGTaggedData> DataForPin = DataForGPU.InputDataCollection.GetInputsByPin(PinLabel);
		for (const FPCGTaggedData& Data : DataForPin)
		{
			ProcessingElemCount += PCGComputeHelpers::GetElementCount(Data.Data);
		}
	}
	else
	{
		// Estimate (upper bound) element count by looking at incident connections.
		for (const UPCGEdge* Edge : InputPin->Edges)
		{
			// InputPin is upstream output pin.
			const UPCGPin* UpstreamOutputPin = Edge->InputPin;
			if (!UpstreamOutputPin)
			{
				continue;
			}

			const UPCGSettings* UpstreamSettings = UpstreamOutputPin->Node ? UpstreamOutputPin->Node->GetSettings() : nullptr;
			check(UpstreamSettings);

			FPCGDataCollectionDesc PinDesc;
			if (ensure(UpstreamSettings->ComputeOutputPinDataDesc(UpstreamOutputPin, Binding, PinDesc)))
			{
				ProcessingElemCount += PinDesc.ComputeDataElementCount(InputPin->Properties.AllowedTypes);
			}
		}
	}

	return ProcessingElemCount;
}

int UPCGCustomHLSLSettings::ComputeKernelThreadCount(const UPCGDataBinding* Binding) const
{
	int ThreadCount = 0;

	if (KernelType == EPCGKernelType::PointGenerator)
	{
		// Point generator has fixed thread count.
		ThreadCount = PointCount;
	}
	else if (KernelType == EPCGKernelType::PointProcessor)
	{
		// Processing volume depends on data arriving on primary pin.
		if (const UPCGPin* InputPin = GetPointProcessingInputPin())
		{
			ThreadCount = GetProcessingElemCountForInputPin(InputPin, Binding);
		}
	}
	else if (KernelType == EPCGKernelType::Custom)
	{
		if (DispatchThreadCount == EPCGDispatchThreadCount::FromFirstOutputPin)
		{
			if (const UPCGPin* OutputPin = GetFirstOutputPin())
			{
				FPCGDataCollectionDesc Desc;
				if (ensure(ComputeOutputPinDataDesc(OutputPin, Binding, Desc)))
				{
					ThreadCount = Desc.ComputeDataElementCount(EPCGDataType::Any);
				}
			}
		}
		else if (DispatchThreadCount == EPCGDispatchThreadCount::FromProductOfInputPins)
		{
			for (const FName& PinLabel : ThreadCountInputPinLabels)
			{
				if (const UPCGPin* InputPin = GetInputPin(PinLabel))
				{
					ThreadCount = GetProcessingElemCountForInputPin(InputPin, Binding);
				}
			}
		}
		else if (DispatchThreadCount == EPCGDispatchThreadCount::Fixed)
		{
			ThreadCount = FixedThreadCount;
		}
	}
	else
	{
		checkNoEntry();
	}

	if (IsThreadCountMultiplierInUse())
	{
		ThreadCount *= ThreadCountMultiplier;
	}

	return ThreadCount;
}

bool UPCGCustomHLSLSettings::ComputeOutputPinDataDesc(const UPCGPin* OutputPin, const UPCGDataBinding* Binding, FPCGDataCollectionDesc& OutDesc) const
{
	check(OutputPin);
	check(Binding);

	// First inspect data coming from CPU. Will return description if this node is a CPU node or in a different compute graph.
	if (Binding->ComputeCPUOutputPinDataDesc(OutputPin, OutDesc))
	{
		return true;
	}

	FPCGDataCollectionDesc PinDesc;

	const FPCGPinPropertiesGPU* Properties = GetOutputPinPropertiesGPU(OutputPin->Properties.Label);
	const UPCGPin* FirstOutputPin = GetFirstOutputPin();

	// The primary output pin follows any rules prescribed by kernel type.
	if (OutputPin == FirstOutputPin && KernelType == EPCGKernelType::PointProcessor)
	{
		// First output pin passes through first input pin.
		if (const UPCGPin* PointProcessingInputPin = GetPointProcessingInputPin())
		{
			PinDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(PointProcessingInputPin, Binding);
		}
	}
	else if (OutputPin == FirstOutputPin && KernelType == EPCGKernelType::PointGenerator)
	{
		// Generators always produce a single point data with known point count.
		PinDesc.DataDescs.Emplace(EPCGDataType::Point, PointCount);
	}
	else if (ensure(Properties))
	{
		PCGComputeHelpers::ComputeOutputPinDataDesc(*Properties, this, Binding, PinDesc);
	}

	const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable = Binding->GetAttributeLookupTable();

	for (const FPCGKernelAttributeKey& AttributeKey : KernelAttributeKeys)
	{
		// Add attributes that will be created for this pin on the GPU.
		if (const TArray<TTuple<FPCGKernelAttributeKey, bool>>* Keys = PinToAttributeKeys.Find(OutputPin->Properties.Label))
		{
			const TTuple<FPCGKernelAttributeKey, bool>* Pair = Keys->FindByPredicate([AttributeKey](const TTuple<FPCGKernelAttributeKey, bool>& Pair) { return Pair.Key == AttributeKey; });
			if (!Pair || !Pair->Value)
			{
				// Not created on GPU.
				continue;
			}

			for (FPCGDataDesc& DataDesc : PinDesc.DataDescs)
			{
				if (const FPCGKernelAttributeIDAndType* IDAndType = GlobalAttributeLookupTable.Find(AttributeKey.Name))
				{
					const FPCGKernelAttributeDesc AttributeDesc(IDAndType->Id, IDAndType->Type, AttributeKey.Name);
					DataDesc.AttributeDescs.AddUnique(AttributeDesc);
				}
			}
		}
	}

	// Try to propagate string keys across node. Not trivial because there could be one or more string key attributes on input pins and on output pins,
	// and it is in general hard to determine from source which string keys from input are being written to outputs. Try first collecting all string keys
	// from matching attribute names (across all input pins), and then fall back to collecting keys from all string key attributes across all inputs.
	bool bOutputHasStringKeys = false;

	for (const FPCGDataDesc& DataDesc : PinDesc.DataDescs)
	{
		if (DataDesc.AttributeDescs.FindByPredicate([](const FPCGKernelAttributeDesc& InAttributeDesc) { return InAttributeDesc.Type == EPCGKernelAttributeType::StringKey; }))
		{
			bOutputHasStringKeys = true;
			break;
		}
	}

	const UPCGNode* Node = Cast<UPCGNode>(GetOuter());
	if (bOutputHasStringKeys && Node)
	{
		TArray<FPCGDataCollectionDesc> RelevantInputDataDescs;

		// Collect descriptions of input data items that have string key attributes.
		for (const UPCGPin* InputPin : Node->GetInputPins())
		{
			const FPCGDataCollectionDesc InputPinDesc = PCGDataForGPUHelpers::ComputeInputPinDataDesc(InputPin, Binding);

			bool bFoundStringKeyAttribute = false;

			for (FPCGDataDesc& DataDesc : PinDesc.DataDescs)
			{
				for (FPCGKernelAttributeDesc& AttributeDesc : DataDesc.AttributeDescs)
				{
					bFoundStringKeyAttribute |= (AttributeDesc.Type == EPCGKernelAttributeType::StringKey);
				}
			}

			if (bFoundStringKeyAttribute)
			{
				RelevantInputDataDescs.Add(InputPinDesc);
			}
		}

		if (!RelevantInputDataDescs.IsEmpty())
		{
			for (FPCGDataDesc& DataDesc : PinDesc.DataDescs)
			{
				for (FPCGKernelAttributeDesc& AttributeDesc : DataDesc.AttributeDescs)
				{
					if (AttributeDesc.Type != EPCGKernelAttributeType::StringKey)
					{
						continue;
					}

					bool bFoundMatchingAttribute = false;

					for (const FPCGDataCollectionDesc& InputPinDataDesc : RelevantInputDataDescs)
					{
						// Try to find string keys for matching attributes on inputs. E.g. if we are processing an output attribute named 'MeshPath',
						// look at data on all input pins for an attribute named MeshPath and assume we could use any of its values - copy the string keys.
						for (const FPCGDataDesc& InputDataDesc : InputPinDataDesc.DataDescs)
						{
							for (const FPCGKernelAttributeDesc& InputAttributeDesc : InputDataDesc.AttributeDescs)
							{
								if (InputAttributeDesc.Type == EPCGKernelAttributeType::StringKey && InputAttributeDesc.Name == AttributeDesc.Name)
								{
									AttributeDesc.UniqueStringKeys.Append(InputAttributeDesc.UniqueStringKeys);
									bFoundMatchingAttribute = true;
									break;
								}
							}
						}
					}

					if (!bFoundMatchingAttribute)
					{
						// We didn't find an exact attribute. Fall back to finding any and all string keys. This is concerning and perhaps we can
						// have additional hinting mechanisms in the kernel source or in the node UI.
						for (const FPCGDataCollectionDesc& InputPinDataDesc : RelevantInputDataDescs)
						{
							// Try to find string keys for matching attributes on inputs. E.g. if we are processing an output attribute named 'MeshPath',
							// look at data on all input pins for an attribute named MeshPath and assume we could use any of its values - copy the string keys.
							for (const FPCGDataDesc& InputDataDesc : InputPinDataDesc.DataDescs)
							{
								for (const FPCGKernelAttributeDesc& InputAttributeDesc : InputDataDesc.AttributeDescs)
								{
									if (InputAttributeDesc.Type == EPCGKernelAttributeType::StringKey)
									{
										AttributeDesc.UniqueStringKeys.Append(InputAttributeDesc.UniqueStringKeys);
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			// If there were no string keys found on any input pin then we are in a bad place. String values cannot be built on the GPU, they must
			// come in through an input.
			UE_LOG(LogPCG, Warning, TEXT("No incoming attributes to obtain string keys from."));
		}
	}

	OutDesc = PinDesc;
	return true;
}

#if WITH_EDITOR
TArray<FPCGPreConfiguredSettingsInfo> UPCGCustomHLSLSettings::GetPreconfiguredInfo() const
{
	return PCGMetadataElementCommon::FillPreconfiguredSettingsInfoFromEnum<EPCGKernelType>();
}

EPCGChangeType UPCGCustomHLSLSettings::GetChangeTypeForProperty(const FName& InPropertyName) const
{
	EPCGChangeType ChangeType = Super::GetChangeTypeForProperty(InPropertyName);

	if (InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, ShaderSource)
		|| InPropertyName == GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, ShaderFunctions))
	{
		ChangeType |= EPCGChangeType::ShaderSource;
	}

	// Any settings change to this node could change the compute graph.
	ChangeType |= EPCGChangeType::Structural;

	return ChangeType;
}
#endif

void UPCGCustomHLSLSettings::ApplyPreconfiguredSettings(const FPCGPreConfiguredSettingsInfo& PreconfiguredInfo)
{
	if (const UEnum* EnumPtr = StaticEnum<EPCGKernelType>())
	{
		if (EnumPtr->IsValidEnumValue(PreconfiguredInfo.PreconfiguredIndex))
		{
			KernelType = EPCGKernelType(PreconfiguredInfo.PreconfiguredIndex);

			// Point Generator doesn't utilize the default input pin, so let's not add it by default.
			if (KernelType == EPCGKernelType::PointGenerator)
			{
				InputPins.Empty();
			}

#if WITH_EDITOR
			UpdatePinSettings();
#endif

			// Default to initializing the first output pin's from the first input pin's data.
			if (const UPCGPin* FirstInputPin = GetFirstInputPin())
			{
				if (!OutputPins.IsEmpty())
				{
					FPCGPinPropertiesGPU& PinProps = OutputPins.Last();
					PinProps.PropertiesGPU.PinsToInititalizeFrom.Add(FirstInputPin->Properties.Label);
				}
			}

#if WITH_EDITOR
			UpdateDeclarations();
#endif
		}
	}
}

FString UPCGCustomHLSLSettings::GetAdditionalTitleInformation() const
{
	if (const UEnum* EnumPtr = StaticEnum<EPCGKernelType>())
	{
		return EnumPtr->GetDisplayNameTextByValue(static_cast<int64>(KernelType)).ToString();
	}

	return FString();
}

const UPCGPin* UPCGCustomHLSLSettings::GetInputPin(FName Label) const
{
	const UPCGNode* Node = Cast<UPCGNode>(GetOuter());
	return Node ? Node->GetInputPin(Label) : nullptr;
}

const UPCGPin* UPCGCustomHLSLSettings::GetOutputPin(FName Label) const
{
	const UPCGNode* Node = Cast<UPCGNode>(GetOuter());
	return Node ? Node->GetOutputPin(Label) : nullptr;
}

const UPCGPin* UPCGCustomHLSLSettings::GetFirstInputPin() const
{
	if (const UPCGNode* Node = Cast<UPCGNode>(GetOuter()))
	{
		return !Node->GetInputPins().IsEmpty() ? Node->GetInputPins()[0] : nullptr;
	}

	return nullptr;
}

const UPCGPin* UPCGCustomHLSLSettings::GetPointProcessingInputPin() const
{
	if (const UPCGNode* Node = Cast<UPCGNode>(GetOuter()))
	{
		const UPCGPin* FirstPin = !Node->GetInputPins().IsEmpty() ? Node->GetInputPins()[0] : nullptr;
		if (FirstPin && FirstPin->Properties.AllowedTypes == EPCGDataType::Point)
		{
			return FirstPin;
		}
	}

	return nullptr;
}

const UPCGPin* UPCGCustomHLSLSettings::GetFirstOutputPin() const
{
	if (const UPCGNode* Node = Cast<UPCGNode>(GetOuter()))
	{
		return !Node->GetOutputPins().IsEmpty() ? Node->GetOutputPins()[0] : nullptr;
	}

	return nullptr;
}

const UPCGPin* UPCGCustomHLSLSettings::GetFirstPointOutputPin() const
{
	if (const UPCGNode* Node = Cast<UPCGNode>(GetOuter()))
	{
		const UPCGPin* FirstPin = !Node->GetOutputPins().IsEmpty() ? Node->GetOutputPins()[0] : nullptr;
		if (FirstPin && FirstPin->Properties.AllowedTypes == EPCGDataType::Point)
		{
			return FirstPin;
		}
	}

	return nullptr;
}

#if WITH_EDITOR
FString UPCGCustomHLSLSettings::GetDeclarationsText() const
{
	return InputDeclarations + TEXT("\n\n") + OutputDeclarations + TEXT("\n\n") + HelperDeclarations;
}

FString UPCGCustomHLSLSettings::GetShaderFunctionsText() const
{
	return ShaderFunctions;
}

FString UPCGCustomHLSLSettings::GetShaderText() const
{
	return ShaderSource;
}

void UPCGCustomHLSLSettings::SetShaderFunctionsText(const FString& NewFunctionsText)
{
	const FName PropertyName = GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, ShaderFunctions);
	FProperty* Property = FindFProperty<FProperty>(StaticClass(), PropertyName);
	FPropertyChangedEvent PropertyChangedEvent(Property, EPropertyChangeType::ValueSet);

	{
		FScopedTransaction Transaction(LOCTEXT("OnSetShaderFunctionsText", "Set Shader Functions Text"));
	
		PreEditChange(Property);
		Modify();
		ShaderFunctions = NewFunctionsText;
		PostEditChangeProperty(PropertyChangedEvent);
	}
	
	OnSettingsChangedDelegate.Broadcast(this, GetChangeTypeForProperty(PropertyName));
}

void UPCGCustomHLSLSettings::SetShaderText(const FString& NewText)
{
	const FName PropertyName = GET_MEMBER_NAME_CHECKED(UPCGCustomHLSLSettings, ShaderSource);
	FProperty* Property = FindFProperty<FProperty>(StaticClass(), PropertyName);
	FPropertyChangedEvent PropertyChangedEvent(Property, EPropertyChangeType::ValueSet);
	
	{
		FScopedTransaction Transaction(LOCTEXT("OnSetShaderSourceText", "Set Shader Source Text"));

		PreEditChange(Property);
		Modify();
		ShaderSource = NewText;
		PostEditChangeProperty(PropertyChangedEvent);
	}

	OnSettingsChangedDelegate.Broadcast(this, GetChangeTypeForProperty(PropertyName));
}

bool UPCGCustomHLSLSettings::IsShaderTextReadOnly() const
{
	return false;
}
#endif //WITH_EDITOR

const FPCGPinPropertiesGPU* UPCGCustomHLSLSettings::GetOutputPinPropertiesGPU(const FName& InPinLabel) const
{
	return OutputPins.FindByPredicate([InPinLabel](const FPCGPinPropertiesGPU& InProperties)
	{
		return InProperties.Label == InPinLabel;
	});
}

#if WITH_EDITOR
void UPCGCustomHLSLSettings::UpdateDeclarations()
{
	// Reference: UOptimusNode_CustomComputeKernel::UpdatePreamble
	UpdateInputDeclarations();
	UpdateOutputDeclarations();
	UpdateHelperDeclarations();
}

void UPCGCustomHLSLSettings::UpdateInputDeclarations()
{
	InputDeclarations.Reset();

	// Constants category
	{
		if (KernelType == EPCGKernelType::PointGenerator)
		{
			InputDeclarations += TEXT("/*** INPUT CONSTANTS ***/\n\n");
			InputDeclarations += FString::Format(TEXT("const uint NumPoints = {0};\n\n"), { PointCount });
		}

		InputDeclarations += TEXT("/*** INPUT PER-THREAD CONSTANTS ***/\n\n");
		InputDeclarations += TEXT("const uint ThreadIndex;\n");

		if (KernelType == EPCGKernelType::PointProcessor)
		{
			const UPCGPin* PointProcessingInputPin = GetPointProcessingInputPin();
			const UPCGPin* PointProcessingOutputPin = GetFirstPointOutputPin();

			if (PointProcessingInputPin && PointProcessingOutputPin)
			{
				InputDeclarations += FString::Format(TEXT(
					"const uint {0}_DataIndex;\n"
					"const uint {1}_DataIndex;\n"),
					{ PointProcessingInputPin->Properties.Label.ToString(),  PointProcessingOutputPin->Properties.Label.ToString() });
			}
		}
		else if (KernelType == EPCGKernelType::PointGenerator)
		{
			if (const UPCGPin* PointProcessingOutputPin = GetFirstPointOutputPin())
			{
				InputDeclarations += FString::Format(
					TEXT("const uint {0}_DataIndex;\n"),
					{ PointProcessingOutputPin->Properties.Label.ToString() });
			}
		}

		InputDeclarations += TEXT("const uint ElementIndex;\n\n");
	}

	TArray<FString> DataCollectionDataPins;
	TArray<FString> PointDataPins;
	TArray<FString> SplineDataPins;
	TArray<FString> LandscapeDataPins;
	TArray<FString> TextureDataPins;
	TArray<FString> RawBufferDataPins;

	for (const FPCGPinProperties& Pin : InputPinProperties())
	{
		if (PCGComputeHelpers::IsTypeAllowedInDataCollection(Pin.AllowedTypes))
		{
			DataCollectionDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Point))
		{
			PointDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Spline))
		{
			SplineDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Landscape))
		{
			LandscapeDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Texture))
		{
			TextureDataPins.Add(Pin.Label.ToString());
		}
	}

	if (!DataCollectionDataPins.IsEmpty())
	{
		InputDeclarations += TEXT("/*** INPUT DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = DataCollectionDataPins.Num() > 1;

		if (bMultiPin)
		{
			InputDeclarations += TEXT("// Valid pins: ") + FString::Join(DataCollectionDataPins, TEXT(", ")) + TEXT("\n");
		}

		InputDeclarations += FString::Format(TEXT(
			"uint {0}_GetNumData();\n"
			"uint {0}_GetNumElements();\n"
			"uint {0}_GetNumElements(uint DataIndex);\n"
			"\n"
			"// Valid types: bool, int, float, float2, float3, float4, Rotator (float3), Quat (float4), Transform (float4x4), StringKey (int), Name (uint2)\n"
			"\n"
			"<type> {0}_Get<type>(uint DataIndex, uint ElementIndex, int AttributeId);\n"
			"<type> {0}_Get<type>(uint DataIndex, uint ElementIndex, 'AttributeName');\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : DataCollectionDataPins[0] });

		InputDeclarations += TEXT("\n");
	}

	if (!PointDataPins.IsEmpty())
	{
		InputDeclarations += TEXT("/*** INPUT POINT DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = PointDataPins.Num() > 1;

		if (bMultiPin)
		{
			InputDeclarations += TEXT("// Valid pins: ") + FString::Join(PointDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		InputDeclarations += FString::Format(TEXT(
			"float3 {0}_GetPosition(uint DataIndex, uint ElementIndex);\n"
			"float4 {0}_GetRotation(uint DataIndex, uint ElementIndex);\n"
			"float3 {0}_GetScale(uint DataIndex, uint ElementIndex);\n"
			"float3 {0}_GetBoundsMin(uint DataIndex, uint ElementIndex);\n"
			"float3 {0}_GetBoundsMax(uint DataIndex, uint ElementIndex);\n"
			"float3 {0}_GetColor(uint DataIndex, uint ElementIndex);\n"
			"float {0}_GetDensity(uint DataIndex, uint ElementIndex);\n"
			"int {0}_GetSeed(uint DataIndex, uint ElementIndex);\n"
			"float {0}_GetSteepness(uint DataIndex, uint ElementIndex);\n"
			"float4x4 {0}_GetPointTransform(uint DataIndex, uint ElementIndex);\n"
			"bool {0}_IsPointRemoved(uint DataIndex, uint ElementIndex);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : PointDataPins[0] });

		InputDeclarations += TEXT("\n");
	}

	if (!LandscapeDataPins.IsEmpty())
	{
		InputDeclarations += TEXT("/*** INPUT LANDSCAPE DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = LandscapeDataPins.Num() > 1;

		if (bMultiPin)
		{
			InputDeclarations += TEXT("// Valid pins: ") + FString::Join(LandscapeDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		InputDeclarations += FString::Format(TEXT(
			"float {0}_GetHeight(float3 WorldPos);\n"
			"float3 {0}_GetNormal(float3 WorldPos);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : LandscapeDataPins[0] });

		InputDeclarations += TEXT("\n");
	}

	if (!TextureDataPins.IsEmpty())
	{
		InputDeclarations += TEXT("/*** INPUT TEXTURE DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = TextureDataPins.Num() > 1;

		if (bMultiPin)
		{
			InputDeclarations += TEXT("// Valid pins: ") + FString::Join(TextureDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		InputDeclarations += FString::Format(TEXT(
			"float2 {0}_GetTexCoords(float2 WorldPos, float2 Min, float2 Max);\n"
			"float4 {0}_Sample(float2 TexCoords);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : TextureDataPins[0] });

		InputDeclarations += TEXT("\n");
	}

	if (!RawBufferDataPins.IsEmpty())
	{
		InputDeclarations += TEXT("/*** INPUT BYTE ADDRESS BUFFER DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = RawBufferDataPins.Num() > 1;

		if (bMultiPin)
		{
			InputDeclarations += TEXT("// Valid pins: ") + FString::Join(RawBufferDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		InputDeclarations += FString::Format(TEXT(
			"uint {0}_ReadNumValues();\n"
			"uint {0}_ReadValue(uint Index);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : RawBufferDataPins[0] });

		InputDeclarations += TEXT("\n");
	}

	InputDeclarations.TrimStartAndEndInline();
}

void UPCGCustomHLSLSettings::UpdateOutputDeclarations()
{
	OutputDeclarations.Reset();

	TArray<FString> DataCollectionDataPins;
	TArray<FString> PointDataPins;
	TArray<FString> SplineDataPins;
	TArray<FString> RawBufferDataPins;

	for (const FPCGPinProperties& Pin : OutputPinProperties())
	{
		if (PCGComputeHelpers::IsTypeAllowedInDataCollection(Pin.AllowedTypes))
		{
			DataCollectionDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Point))
		{
			PointDataPins.Add(Pin.Label.ToString());
		}

		if (!!(Pin.AllowedTypes & EPCGDataType::Spline))
		{
			SplineDataPins.Add(Pin.Label.ToString());
		}
	}

	if (!DataCollectionDataPins.IsEmpty())
	{
		OutputDeclarations += TEXT("/*** OUTPUT DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = DataCollectionDataPins.Num() > 1;

		if (bMultiPin)
		{
			OutputDeclarations += TEXT("// Valid pins: ") + FString::Join(DataCollectionDataPins, TEXT(", ")) + TEXT("\n");
		}

		OutputDeclarations += FString::Format(TEXT(
			"// Valid types: bool, int, float, float2, float3, float4, Rotator (float3), Quat (float4), Transform (float4x4), StringKey (int), Name (uint2)\n"
			"\n"
			"void {0}_Set<type>(uint DataIndex, uint ElementIndex, int AttributeId, <type> Value);\n"
			"void {0}_Set<type>(uint DataIndex, uint ElementIndex, 'AttributeName', <type> Value);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : DataCollectionDataPins[0] });

		OutputDeclarations += TEXT("\n");
	}

	if (!PointDataPins.IsEmpty())
	{
		OutputDeclarations += TEXT("/*** OUTPUT POINT DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = PointDataPins.Num() > 1;

		if (bMultiPin)
		{
			OutputDeclarations += TEXT("// Valid pins: ") + FString::Join(PointDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		OutputDeclarations += FString::Format(TEXT(
			"void {0}_InitializePoint(uint DataIndex, uint ElementIndex);\n"
			"void {0}_CopyElementFrom_<input pin>(uint TargetDataIndex, uint TargetElementIndex, uint SourceDataIndex, uint SourceElementIndex);\n"
			"bool {0}_RemovePoint(uint DataIndex, uint ElementIndex);\n"
			"\n"
			"void {0}_SetPosition(uint DataIndex, uint ElementIndex, float3 Position);\n"
			"void {0}_SetRotation(uint DataIndex, uint ElementIndex, float4 Rotation);\n"
			"void {0}_SetScale(uint DataIndex, uint ElementIndex, float3 Scale);\n"
			"void {0}_SetBoundsMin(uint DataIndex, uint ElementIndex, float3 BoundsMin);\n"
			"void {0}_SetBoundsMax(uint DataIndex, uint ElementIndex, float3 BoundsMax);\n"
			"void {0}_SetColor(uint DataIndex, uint ElementIndex, float4 Color);\n"
			"void {0}_SetDensity(uint DataIndex, uint ElementIndex, float Density);\n"
			"void {0}_SetSeed(uint DataIndex, uint ElementIndex, int Seed);\n"
			"void {0}_SetSteepness(uint DataIndex, uint ElementIndex, float Steepness);\n"
			"void {0}_SetPointTransform(uint DataIndex, uint ElementIndex, float4x4 Transform);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : PointDataPins[0] });

		OutputDeclarations += TEXT("\n");
	}

	if (!RawBufferDataPins.IsEmpty())
	{
		OutputDeclarations += TEXT("/*** OUTPUT BYTE ADDRESS BUFFER DATA FUNCTIONS ***/\n\n");

		const bool bMultiPin = RawBufferDataPins.Num() > 1;

		if (bMultiPin)
		{
			OutputDeclarations += TEXT("// Valid pins: ") + FString::Join(RawBufferDataPins, TEXT(", ")) + TEXT("\n\n");
		}

		OutputDeclarations += FString::Format(TEXT(
			"uint {0}_WriteValue(uint Index, uint Value);\n"),
			{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : RawBufferDataPins[0] });

		OutputDeclarations += TEXT("\n");
	}

	OutputDeclarations.TrimStartAndEndInline();
}

void UPCGCustomHLSLSettings::UpdateHelperDeclarations()
{
	HelperDeclarations.Reset();

	// Helper functions category
	{
		HelperDeclarations += TEXT(
			"/*** HELPER FUNCTIONS ***/\n"
			"\n"
			"int3 GetNumThreads();\n"
			"uint GetThreadCountMultiplier();\n");

		// Get thread data - useful in all kernel types for secondary pins.
		{
			TArray<FString> PinNames;

			for (const FPCGPinProperties& Properties : InputPinProperties())
			{
				PinNames.Add(Properties.Label.ToString());
			}

			for (const FPCGPinProperties& Properties : OutputPinProperties())
			{
				PinNames.Add(Properties.Label.ToString());
			}

			if (!PinNames.IsEmpty())
			{
				HelperDeclarations += TEXT("\n// Returns false if thread has no data to operate on.\n");

				const bool bMultiPin = PinNames.Num() > 1;

				if (bMultiPin)
				{
					HelperDeclarations += TEXT("// Valid pins: ") + FString::Join(PinNames, TEXT(", ")) + TEXT("\n");
				}

				HelperDeclarations += FString::Format(
					TEXT("bool {0}_GetThreadData(uint ThreadIndex, out uint OutDataIndex, out uint OutElementIndex);\n"),
					{ bMultiPin ? PCGHLSLElement::PinDeclTemplateStr : PinNames[0] });

				HelperDeclarations += TEXT("\n");
			}
		}

		HelperDeclarations += TEXT(
			"float3 GetComponentBoundsMin(); // World-space\n"
			"float3 GetComponentBoundsMax();\n"
			"uint GetSeed();\n"
			"\n"
			"float FRand(inout uint Seed); // Returns random float between 0 and 1.\n"
			"uint ComputeSeed(uint A, uint B);\n"
			"uint ComputeSeed(uint A, uint B, uint C);\n"
			"uint ComputeSeedFromPosition(float3 Position);\n"
			"\n"
			"// Returns the position of the Nth point in a 2D or 3D grid with the given constraints.\n"
			"float3 CreateGrid2D(int ElementIndex, int NumPoints, float3 Min, float3 Max);\n"
			"float3 CreateGrid2D(int ElementIndex, int NumPoints, int NumRows, float3 Min, float3 Max);\n"
			"float3 CreateGrid3D(int ElementIndex, int NumPoints, float3 Min, float3 Max);\n"
			"float3 CreateGrid3D(int ElementIndex, int NumPoints, int NumRows, int NumCols, float3 Min, float3 Max);\n");

		if (bPrintShaderDebugValues)
		{
			HelperDeclarations += FString::Format(TEXT(
				"\n"
				"// Writes floats to the debug buffer array, which will be readback and logged in the console for inspection."
				"void WriteDebugValue(uint Index, float Value); // Index in [0, {0}] (set from 'Debug Buffer Size' property)\n"),
				{ DebugBufferSize - 1 });
		}
	}

	HelperDeclarations.TrimStartAndEndInline();
}
#endif // WITH_EDITOR

void UPCGCustomHLSLSettings::UpdatePinSettings()
{
	// Setup input pins.
	for (int PinIndex = 0; PinIndex < InputPins.Num(); ++PinIndex)
	{
		FPCGPinProperties& Properties = InputPins[PinIndex];

		// Type Any is not allowed, default to Point
		if (Properties.AllowedTypes == EPCGDataType::Any)
		{
			Properties.AllowedTypes = EPCGDataType::Point;
		}

		if (!!(Properties.AllowedTypes & EPCGDataType::Landscape)
			|| !!(Properties.AllowedTypes & EPCGDataType::Texture)
			|| !!(Properties.AllowedTypes & EPCGDataType::Param))
		{
			// Don't allow multiple data on this pin because we do not support a dynamic number of textures/landscapes bound to a
			// compute kernel.
			// Also disallow multi-data for Attribute Sets, since we require attributes to be uniform on a pin, thus having different
			// attribute sets wouldn't work as expected.
			Properties.bAllowMultipleData = false;

#if WITH_EDITOR
			Properties.bAllowEditMultipleData = false;
#endif
		}
		else
		{
#if WITH_EDITOR
			Properties.bAllowEditMultipleData = true;
#endif
		}

		// TODO: We have work to do to allow dynamic merging of data. Also we will likely inject Gather
		// nodes on the CPU side so that merging is handled CPU side where possible.
		Properties.SetAllowMultipleConnections(false);

#if WITH_EDITOR
		Properties.bAllowEditMultipleConnections = false;
#endif
	}

	// Setup output pins.
	for (int PinIndex = 0; PinIndex < OutputPins.Num(); ++PinIndex)
	{
		FPCGPinPropertiesGPU& Properties = OutputPins[PinIndex];

		// Type Any is not allowed, default to Point
		if (Properties.AllowedTypes == EPCGDataType::Any)
		{
			Properties.AllowedTypes = EPCGDataType::Point;
		}

#if WITH_EDITOR
		// Only allow editing the initialization mode if it's not driven by the kernel type.
		const bool bInitModeDrivenByKernel = PinIndex == 0 && (KernelType == EPCGKernelType::PointProcessor || KernelType == EPCGKernelType::PointGenerator);
		Properties.PropertiesGPU.bAllowEditInitMode = !bInitModeDrivenByKernel;
		Properties.PropertiesGPU.bMultipleInitPins = Properties.PropertiesGPU.PinsToInititalizeFrom.Num() > 1;

		// Output pins should always allow multiple connections.
		// TODO this could be hoisted up somewhere in the future.
		Properties.bAllowEditMultipleConnections = false;
#endif

		if (!!(Properties.AllowedTypes & EPCGDataType::Param))
		{
			Properties.bAllowMultipleData = false;
			Properties.PropertiesGPU.DataCountMode = EPCGDataCountMode::Fixed;
			Properties.PropertiesGPU.DataCount = 1;

#if WITH_EDITOR
			Properties.bAllowEditMultipleData = false;
			Properties.PropertiesGPU.bAllowEditDataCount = false;
#endif
		}
		else
		{
#if WITH_EDITOR
			Properties.bAllowEditMultipleData = true;
			Properties.PropertiesGPU.bAllowEditDataCount = true;
#endif
		}
	}
}

void UPCGCustomHLSLSettings::UpdateAttributeKeys()
{
	KernelAttributeKeys.Reset();
	PinToAttributeKeys.Reset();

	const FString Source = ShaderFunctions + ShaderSource;
	FRegexMatcher ModuleMatcher(FRegexPattern(PCGHLSLElement::AttributeFunctionPattern), Source);

	while (ModuleMatcher.FindNext())
	{
		const FString PinStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributePinCaptureGroup);
		const FString FuncStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeFunctionCaptureGroup);
		const FString TypeStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeTypeCaptureGroup);
		const FString NameStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeNameCaptureGroup);

		const int LineStartIndex = ModuleMatcher.GetMatchBeginning();
		int CurrentSourceIndex = Source.Find("\n", ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
		int LineNumber = 0;

		while (CurrentSourceIndex < LineStartIndex && CurrentSourceIndex != INDEX_NONE)
		{
			++LineNumber;
			CurrentSourceIndex = Source.Find("\n", ESearchCase::IgnoreCase, ESearchDir::FromStart, CurrentSourceIndex + 1);
		}

		if (PinStr.IsEmpty() || FuncStr.IsEmpty() || TypeStr.IsEmpty() || NameStr.IsEmpty())
		{
			UE_LOG(LogPCG, Error, TEXT("Invalid attribute usage in shader source, line %d."), LineNumber);
			continue;
		}

		const UEnum* AttributeTypeEnum = StaticEnum<EPCGKernelAttributeType>();
		check(AttributeTypeEnum);

		const int64 AttributeType = AttributeTypeEnum->GetValueByName(FName(*TypeStr));

		if (AttributeType == INDEX_NONE)
		{
			UE_LOG(LogPCG, Error, TEXT("Invalid attribute type in shader source, line %d."), LineNumber);
			continue;
		}

		// Add the attribute if it hasn't already been referenced.
		FPCGKernelAttributeKey Key;
		Key.Type = static_cast<EPCGKernelAttributeType>(AttributeType);
		Key.Name = FName(*NameStr);
		KernelAttributeKeys.AddUnique(Key);

		// Add an entry mapping this pin to the referenced attribute, if the entry doesn't already exist.
		TArray<TTuple<FPCGKernelAttributeKey, bool>>& Keys = PinToAttributeKeys.FindOrAdd(FName(*PinStr));
		Keys.AddUnique(MakeTuple(Key, false));
	}

	// Process each output pin for any new attributes they want to create.
	for (const FPCGPinPropertiesGPU& OutputPin : OutputPins)
	{
		for (const FPCGKernelAttributeKey& Key : OutputPin.PropertiesGPU.CreatedKernelAttributeKeys)
		{
			KernelAttributeKeys.AddUnique(Key);

			TArray<TTuple<FPCGKernelAttributeKey, bool>>& Keys = PinToAttributeKeys.FindOrAdd(OutputPin.Label);
			TTuple<FPCGKernelAttributeKey, bool>* Pair = Keys.FindByPredicate([Key](const TTuple<FPCGKernelAttributeKey, bool>& Pair) { return Pair.Key == Key; });

			// Mark as created on GPU
			if (Pair)
			{
				Pair->Value = true;
			}
			else
			{
				Keys.Add(MakeTuple(Key, /*bCreatedOnGPU=*/true));
			}
		}
	}
}

#if WITH_EDITOR
TArray<FName> UPCGCustomHLSLSettings::GetInputPinNames() const
{
	TArray<FName> PinNames;

	for (const FPCGPinProperties& PinProps : InputPins)
	{
		PinNames.Add(PinProps.Label);
	}

	return PinNames;
}

TArray<FName> UPCGCustomHLSLSettings::GetInputPinNamesAndNone() const
{
	TArray<FName> PinNames = GetInputPinNames();
	PinNames.Insert(NAME_None, 0);

	return PinNames;
}
#endif // WITH_EDITOR

bool UPCGCustomHLSLSettings::IsKernelValid(FPCGContext* InContext, bool bQuiet) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGCustomHLSLSettings::IsKernelValid);

	if (OutputPins.IsEmpty())
	{
		PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("NoOutputs", "Custom HLSL nodes must have at least one output."));
		return false;
	}

	auto CheckPinLabel = [This = this, InContext, bQuiet, &InPins = InputPins, OutPins = OutputPinProperties()](FName PinLabel)
	{
		if (PinLabel == NAME_None)
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, This, bQuiet, LOCTEXT("InvalidPinLabelNone", "Pin label 'None' is not a valid pin label."));
			return false;
		}

		bool bFoundPinLabel = false;

		auto IsAlreadyFound = [This, InContext, bQuiet, PinLabel, &bFoundPinLabel](const FPCGPinProperties PinProps)
		{
			if (PinProps.Label == PinLabel)
			{
				if (bFoundPinLabel)
				{
					PCG_KERNEL_VALIDATION_ERR(InContext, This, bQuiet, FText::Format(LOCTEXT("DuplicatedPinLabels", "Duplicate pin label '{0}', all labels must be unique."), FText::FromName(PinLabel)));
					return true;
				}

				bFoundPinLabel = true;
			}

			return false;
		};

		for (const FPCGPinProperties& PinProps : InPins)
		{
			if (IsAlreadyFound(PinProps))
			{
				return false;
			}
		}

		for (const FPCGPinProperties& PinProps : OutPins)
		{
			if (IsAlreadyFound(PinProps))
			{
				return false;
			}
		}

		return true;
	};

	// Validate input pins
	bool bIsFirstInputPin = true;
	for (const FPCGPinProperties& Properties : InputPins)
	{
		if (!CheckPinLabel(Properties.Label))
		{
			return false;
		}

		if (bIsFirstInputPin && KernelType == EPCGKernelType::PointProcessor)
		{
			if (Properties.AllowedTypes != EPCGDataType::Point)
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
					LOCTEXT("InvalidNonPointPrimaryInput", "'Point Processor' nodes require primary input pin to be of type 'Point', but found '{0}'."),
					FText::FromString(PCGHLSLElement::GetDataTypeString(Properties.AllowedTypes))));

				return false;
			}
		}

		if (!PCGComputeHelpers::IsTypeAllowedAsInput(Properties.AllowedTypes))
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
				LOCTEXT("InvalidInputType", "Unsupported input type '{0}', found on pin '{1}'."),
				FText::FromString(PCGHLSLElement::GetDataTypeString(Properties.AllowedTypes)),
				FText::FromName(Properties.Label)));

			return false;
		}

		bIsFirstInputPin = false;
	}

	// Validate output pins
	bool bIsFirstOutputPin = true;
	for (const FPCGPinPropertiesGPU& Properties : OutputPins)
	{
		if (!CheckPinLabel(Properties.Label))
		{
			return false;
		}

		const bool bPinIsDefinedByKernel = bIsFirstOutputPin && (KernelType == EPCGKernelType::PointGenerator || KernelType == EPCGKernelType::PointProcessor);

		if (bPinIsDefinedByKernel)
		{
			if (Properties.AllowedTypes != EPCGDataType::Point)
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
					LOCTEXT("InvalidNonPointPrimaryOutput", "'Point Processor' and 'Point Generator' nodes require primary output pin to be of type 'Point', but found '{0}'."),
					FText::FromString(PCGHLSLElement::GetDataTypeString(Properties.AllowedTypes))));

				return false;
			}
		}

		if (!PCGComputeHelpers::IsTypeAllowedAsOutput(Properties.AllowedTypes))
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
				LOCTEXT("InvalidOutputType", "Unsupported output type '{0}', found on pin '{1}'."),
				FText::FromString(PCGHLSLElement::GetDataTypeString(Properties.AllowedTypes)),
				FText::FromName(Properties.Label)));

			return false;
		}

		if (!bPinIsDefinedByKernel)
		{
			const FPCGPinPropertiesGPUStruct& Props = Properties.PropertiesGPU;

			if (Props.InitializationMode == EPCGPinInitMode::FromInputPins)
			{
				if (Props.PinsToInititalizeFrom.IsEmpty())
				{
					PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
						LOCTEXT("InitFromEmptyPins", "Output pin '{0}' tried to initialize from input pins, but no pins were specified."),
						FText::FromName(Properties.Label)));

					return false;
				}

				for (const FName InitPinName : Props.PinsToInititalizeFrom)
				{
					const FPCGPinProperties* InitPinProps = InputPins.FindByPredicate([InitPinName](const FPCGPinProperties& InPinProps)
					{
						return InPinProps.Label == InitPinName;
					});

					if (!InitPinProps)
					{
						PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
							LOCTEXT("InitFromNonExistentPin", "Output pin '{0}' tried to initialize from non-existent input pin '{1}'."),
							FText::FromName(Properties.Label),
							FText::FromName(InitPinName)));

						return false;
					}

					if (!PCGComputeHelpers::IsTypeAllowedInDataCollection(InitPinProps->AllowedTypes))
					{
						PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
							LOCTEXT("InitFromInvalidPinType", "Output pin '{0}' tried to initialize from input pin '{1}', but pin '{1}' has an invalid type."),
							FText::FromName(Properties.Label),
							FText::FromName(InitPinName)));

						return false;
					}
				}

				// TODO: Could do validation on data multiplicity for Pairwise, checking that data counts are 1 or N, but maybe that should be a runtime error instead.
			}

			const bool bUsingFixedDataCount = Props.InitializationMode == EPCGPinInitMode::Custom || Props.DataCountMode == EPCGDataCountMode::Fixed;

			if (bUsingFixedDataCount)
			{
				if (Props.DataCount < 1)
				{
					PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
						LOCTEXT("InvalidDataCount", "Invalid fixed data count {0} on output pin '{1}'. Must be greater than 0."),
						FText::AsNumber(Props.DataCount),
						FText::FromName(Properties.Label)));

					return false;
				}

			}

			const bool bUsingFixedElemCount = Props.InitializationMode == EPCGPinInitMode::Custom || Props.ElementCountMode == EPCGElementCountMode::Fixed;

			if (bUsingFixedElemCount)
			{
				if (Props.ElementCount < 1)
				{
					PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(
						LOCTEXT("InvalidElementCount", "Invalid fixed element count {0} on output pin '{1}'. Must be greater than 0."),
						FText::AsNumber(Props.ElementCount),
						FText::FromName(Properties.Label)));

					return false;
				}
			}
		}

		bIsFirstOutputPin = false;
	}

	if (KernelType == EPCGKernelType::Custom && DispatchThreadCount == EPCGDispatchThreadCount::FromProductOfInputPins)
	{
		if (ThreadCountInputPinLabels.IsEmpty())
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("MissingThreadCountPins", "Dispatch thread count is based on input pins but no labels have been set in Input Pins array."));
			return false;
		}

		for (const FName& Label : ThreadCountInputPinLabels)
		{
			if (!GetInputPin(Label))
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(LOCTEXT("MissingThreadCountPin", "Invalid pin specified in Input Pins array: '{0}'."), FText::FromName(Label)));
				return false;
			}
		}
	}

	if (IsThreadCountMultiplierInUse())
	{
		if (ThreadCountMultiplier < 1)
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, FText::Format(LOCTEXT("InvalidThreadCountMultiplier", "Thread Count Multiplier has invalid value ({0}). Must be greater than 0."), ThreadCountMultiplier));
			return false;
		}
	}

	// Validate attributes
	for (const FPCGKernelAttributeKey& AttributeKey : KernelAttributeKeys)
	{
		if (AttributeKey.Name == NAME_None)
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("InvalidAttributeNameNone", "'None' is not a valid GPU attribute name, check the 'Attributes to Create' array on your pins."));
			return false;
		}

		if (AttributeKey.Type == EPCGKernelAttributeType::None)
		{
			PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, LOCTEXT("InvalidAttributeTypeNone", "'None' is not a valid GPU attribute type, check the 'Attributes to Create' array on your pins."));
			return false;
		}
	}

	if (InContext)
	{
		FText* ErrorTextPtr = nullptr;
#if PCG_KERNEL_LOGGING_ENABLED
		FText ErrorText;
		ErrorTextPtr = &ErrorText;
#endif

		if (!AreKernelAttributesValid(InContext, ErrorTextPtr))
		{
			if (ErrorTextPtr)
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, *ErrorTextPtr);
			}
			return false;
		}

		if (!GetGeneratedFunctions(/*OutFunctions=*/nullptr, ErrorTextPtr))
		{
			if (ErrorTextPtr)
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, *ErrorTextPtr);
			}
			return false;
		}

		if (!bMuteUnwrittenPinDataErrors && !AreAllOutputPinsWritten(ErrorTextPtr))
		{
			if (ErrorTextPtr)
			{
				PCG_KERNEL_VALIDATION_ERR(InContext, this, bQuiet, *ErrorTextPtr);
			}
			return false;
		}
	}

	return true;
}

bool UPCGCustomHLSLSettings::AreKernelAttributesValid(FPCGContext* InContext, FText* OutErrorText) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGCustomHLSLSettings::AreKernelAttributesValid);

	// The context can either be a compute graph element context (if the compute graph was successfully created), otherwise
	// it will be the original CPU node context. We need the former to run the following validation.
	if (!InContext || !InContext->IsComputeContext())
	{
		return true;
	}

	const FPCGComputeGraphContext* Context = static_cast<FPCGComputeGraphContext*>(InContext);
	const UPCGDataBinding* DataBinding = Context->DataBinding.Get();
	const UPCGNode* Node = Cast<UPCGNode>(GetOuter());

	if (DataBinding && Node)
	{
		const TArray<TObjectPtr<UPCGPin>>& InPins = Node->GetInputPins();
		const TArray<TObjectPtr<UPCGPin>>& OutPins = Node->GetOutputPins();

		TMap<FName, FPCGDataCollectionDesc> InputPinDescs;
		TMap<FName, FPCGDataCollectionDesc> OutputPinDescs;

		for (const UPCGPin* InputPin : InPins)
		{
			check(InputPin);
			InputPinDescs.Add(InputPin->Properties.Label, PCGDataForGPUHelpers::ComputeInputPinDataDesc(InputPin, DataBinding));
		}

		for (const UPCGPin* OutputPin : OutPins)
		{
			check(OutputPin);

			FPCGDataCollectionDesc PinDesc;
			if (ensure(ComputeOutputPinDataDesc(OutputPin, DataBinding, PinDesc)))
			{
				OutputPinDescs.Add(OutputPin->Properties.Label, PinDesc);
			}
		}

		const FString Source = ShaderFunctions + ShaderSource;
		FRegexMatcher ModuleMatcher(FRegexPattern(PCGHLSLElement::AttributeFunctionPattern), Source);

		while (ModuleMatcher.FindNext())
		{
			const FString PinStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributePinCaptureGroup);
			const FString FuncStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeFunctionCaptureGroup);
			const FString TypeStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeTypeCaptureGroup);
			const FString NameStr = ModuleMatcher.GetCaptureGroup(PCGHLSLElement::AttributeNameCaptureGroup);

			const FName PinName = FName(*PinStr);
			const FPCGDataCollectionDesc* PinDesc = nullptr;

			auto ConstructFunctionText = [&PinStr, &FuncStr, &TypeStr]()
			{
				return FText::FromString(PinStr + TEXT("_") + FuncStr + TypeStr);
			};

			if (FuncStr == PCGHLSLElement::AttributeFunctionSet)
			{
				PinDesc = OutputPinDescs.Find(FName(*PinStr));

				if (!PinDesc && InputPinDescs.Find(PinName))
				{
#if PCG_KERNEL_LOGGING_ENABLED
					if (OutErrorText)
					{
						*OutErrorText = FText::Format(
							LOCTEXT("InvalidSetAttributeUsage", "Tried to call attribute function '{0}' on read-only input pin '{1}'."),
							ConstructFunctionText(),
							FText::FromName(PinName));
					}
#endif

					return false;
				}
			}
			else if (ensure(FuncStr == PCGHLSLElement::AttributeFunctionGet))
			{
				PinDesc = InputPinDescs.Find(FName(*PinStr));
			}

			if (!PinDesc)
			{
#if PCG_KERNEL_LOGGING_ENABLED
				if (OutErrorText)
				{
					*OutErrorText = FText::Format(
						LOCTEXT("InvalidAttributePinName", "Tried to call attribute function '{0}' on non-existent pin '{1}'."),
						ConstructFunctionText(),
						FText::FromName(PinName));
				}
#endif

				return false;
			}

			const UEnum* AttributeTypeEnum = StaticEnum<EPCGKernelAttributeType>();
			check(AttributeTypeEnum);

			const int64 AttributeType = AttributeTypeEnum->GetValueByName(FName(*TypeStr));

			if (AttributeType == INDEX_NONE)
			{
#if PCG_KERNEL_LOGGING_ENABLED
				if (OutErrorText)
				{
					*OutErrorText = FText::Format(
						LOCTEXT("InvalidAttributePinType", "Tried to call attribute function '{0}' on non-existent type '{1}'."),
						ConstructFunctionText(),
						FText::FromString(TypeStr));
				}
#endif

				return false;
			}

			const FPCGKernelAttributeDesc* AttrDesc = nullptr;
			const FName AttrName = FName(*NameStr);

			if (!PinDesc->DataDescs.IsEmpty())
			{
				// Note: This assumes attributes are the same on all data on a pin, which is true for now
				const FPCGDataDesc& DataDesc = PinDesc->DataDescs[0];
				AttrDesc = DataDesc.AttributeDescs.FindByPredicate([AttrName](const FPCGKernelAttributeDesc& Desc) { return Desc.Name == AttrName; });
			}

			if (!AttrDesc)
			{
#if PCG_KERNEL_LOGGING_ENABLED
				if (OutErrorText)
				{
					*OutErrorText = FText::Format(
						LOCTEXT("InvalidAttributeName", "Tried to call attribute function '{0}' on attribute '{1}' which does not exist."),
						ConstructFunctionText(),
						FText::FromName(AttrName));
				}
#endif

				return false;
			}

			if (AttrDesc->Type != static_cast<EPCGKernelAttributeType>(AttributeType))
			{
#if PCG_KERNEL_LOGGING_ENABLED
				if (OutErrorText)
				{
					const FString ActualTypeStr = AttributeTypeEnum->GetNameStringByIndex(static_cast<int64>(AttrDesc->Type));

					*OutErrorText = FText::Format(
						LOCTEXT("AttributeTypeMismatch", "Type mismatch for call to attribute function '{0}' on attribute '{1}'. Expected '{2}' but received '{3}'."),
						ConstructFunctionText(),
						FText::FromName(AttrName),
						FText::FromString(TypeStr),
						FText::FromString(ActualTypeStr));
				}
#endif

				return false;
			}
		}
	}

	return true;
}

bool UPCGCustomHLSLSettings::AreAllOutputPinsWritten(FText* OutWarningText) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGCustomHLSLSettings::AreAllOutputPinsWritten);

	const UPCGNode* Node = Cast<UPCGNode>(GetOuter());
	if (!Node)
	{
		return true;
	}

	const FString AllSource = ShaderFunctions + ShaderSource;

	// Non-custom kernels initialize the first output pin data automatically.
	const UPCGPin* AutomaticallyInitializedPin = (KernelType != EPCGKernelType::Custom) ? GetFirstOutputPin() : nullptr;

	for (const UPCGPin* Pin : Node->GetOutputPins())
	{
		if (!Pin || Pin == AutomaticallyInitializedPin || Pin->Properties.Label == NAME_None)
		{
			continue;
		}

		const TStaticArray<FString, 3> WriteStrings = { 
			Pin->Properties.Label.ToString() + TEXT("_Set"), 
			Pin->Properties.Label.ToString() + TEXT("_CopyElementFrom_"),
			Pin->Properties.Label.ToString() + TEXT("_Initialize") };

		bool bFoundDataWrite = false;

		for (const FString& WriteString : WriteStrings)
		{
			if (AllSource.Contains(WriteString))
			{
				bFoundDataWrite = true;
				break;
			}
		}

		if (!bFoundDataWrite)
		{
			if (OutWarningText)
			{
				*OutWarningText = FText::Format(
					LOCTEXT("PinMayNotBeWritten", "Data on pin '{0}' may be uninitialized. Add code to write to this data, or mute this error in the node settings."),
					{ FText::FromName(Pin->Properties.Label) });
			}

			return false;
		}
	}

	return true;
}

bool UPCGCustomHLSLSettings::GetGeneratedFunctions(FString* OutFunctions, FText* OutErrorText) const
{
	TSet<TPair<FString, FString>> PinsRequiringElementCopy;

	// Point processor nodes always copy input to output at the beginning of the kernel.
	if (KernelType == EPCGKernelType::PointProcessor && GetPointProcessingInputPin() && GetFirstPointOutputPin())
	{
		PinsRequiringElementCopy.Emplace({ GetPointProcessingInputPin()->Properties.Label.ToString(), GetFirstPointOutputPin()->Properties.Label.ToString() });
	}

	const FString Source = ShaderFunctions + TEXT("\n") + ShaderSource;

	/** Regex for parsing usages of CopyElementFrom function. */
	constexpr TCHAR CopyElementPattern[] = { TEXT(/*TargetPin*/"([a-zA-Z0-9]+)" "_CopyElementFrom_" /*SourcePin*/"([a-zA-Z0-9]+)\\s*\\(") };
	constexpr int CopyElementTargetPinCaptureGroup = 1;
	constexpr int CopyElementSourcePinCaptureGroup = 2;

	FRegexMatcher ModuleMatcher(FRegexPattern(CopyElementPattern), Source);

	while (ModuleMatcher.FindNext())
	{
		const FString SourcePinStr = ModuleMatcher.GetCaptureGroup(CopyElementSourcePinCaptureGroup);
		const UPCGPin* SourcePin = GetInputPin(FName(*SourcePinStr));
		if (!SourcePin)
		{
#if PCG_KERNEL_LOGGING_ENABLED
			if (OutErrorText)
			{
				*OutErrorText = FText::Format(LOCTEXT("InvalidCopySourcePin", "Invalid input pin '{0}' used in copy element expression."), FText::FromString(SourcePinStr));
			}
#endif
			return false;
		}

		const FString TargetPinStr = ModuleMatcher.GetCaptureGroup(CopyElementTargetPinCaptureGroup);
		const UPCGPin* TargetPin = GetOutputPin(FName(*TargetPinStr));
		if (!TargetPin)
		{
#if PCG_KERNEL_LOGGING_ENABLED
			if (OutErrorText)
			{
				*OutErrorText = FText::Format(LOCTEXT("InvalidCopyTargetPin", "Invalid output pin '{0}' used in copy element expression."), FText::FromString(TargetPinStr));
			}
#endif
			return false;
		}

		if (SourcePin->Properties.AllowedTypes != TargetPin->Properties.AllowedTypes)
		{
#if PCG_KERNEL_LOGGING_ENABLED
			if (OutErrorText)
			{
				*OutErrorText = LOCTEXT("InvalidCopyPinTypes", "CopyFromElement only allowed across pins of matching type.");
			}
#endif
			return false;
		}

		PinsRequiringElementCopy.Emplace({ SourcePinStr, TargetPinStr });
	}

	if (!OutFunctions)
	{
		return true;
	}

	FString Functions = TEXT("// Generated functions\n");

	for (TPair<FString, FString>& Pair : PinsRequiringElementCopy)
	{
		Functions += FString::Format(TEXT(
			"\n"
			"// Copy element from pin {0} to pin {1}.\n"
			"void {1}_CopyElementFrom_{0}(uint {1}_DataIndex, uint {1}_ElementIndex, uint {0}_DataIndex, uint {0}_ElementIndex)\n"
			"{\n"
			"    // Copy elements across pins. Loop over all attribute headers, if the address is non-zero, then copy it from pin {0} to pin {1}.\n"
			"    int NumAttributesRemaining = (int){1}_GetDataNumAttributesInternal({1}_DataIndex);\n"
			"\n"
			"    for (int AttributeId = 0; AttributeId < {2}; ++AttributeId)\n"
			"    {\n"
			"        const uint {1}_Stride = {1}_GetAttributeStrideInternal({1}_DataIndex, AttributeId);\n"
			"\n"
			"        if ({1}_Stride == 0)\n"
			"        {\n"
			"            // No output attribute to write to.\n"
			"            continue;\n"
			"        }\n"
			"\n"
			"        const uint {0}_Stride = {0}_GetAttributeStrideInternal({0}_DataIndex, AttributeId);\n"
			"        const uint {1}_ElementAddress = {1}_GetElementAddressInternal({1}_DataIndex, {1}_ElementIndex, AttributeId);\n"
			"\n"
			"        if ({0}_Stride == {1}_Stride)\n"
			"        {\n"
			"            const uint {0}_ElementAddress = {0}_GetElementAddressInternal({0}_DataIndex, {0}_ElementIndex, AttributeId);\n"
			"\n"
			"            for (uint Offset = 0; Offset < {1}_Stride; Offset += 4)\n"
			"            {\n"
			"                {1}_StoreBufferInternal({1}_ElementAddress + Offset, {0}_LoadBufferInternal({0}_ElementAddress + Offset));\n"
			"            }\n"
			"\n"
			"        }\n"
			"        else\n"
			"        {\n"
			"            for (uint Offset = 0; Offset < {1}_Stride; Offset += 4)\n"
			"            {\n"
			"                // Initialize output data (only header part of buffer will be initialized).\n"
			"                {1}_StoreBufferInternal({1}_ElementAddress + Offset, 0u);\n"
			"            }\n"
			"        }\n"
			"\n"
			"        if (--NumAttributesRemaining <= 0)\n"
			"        {\n"
			"            break; // We can early-out when we've looked at all the possible attributes\n"
			"        }\n"
			"    }\n"
			"}\n"),
			{ Pair.Key, Pair.Value, PCGComputeConstants::MAX_NUM_ATTRS });
	}

	*OutFunctions = Functions;
	return true;
}

FString UPCGCustomHLSLSettings::GetCookedKernelSource(const TMap<FName, FPCGKernelAttributeIDAndType>& GlobalAttributeLookupTable) const
{
	const FIntVector GroupSize(PCGComputeConstants::THREAD_GROUP_SIZE, 1, 1);

	FString Source = ShaderSource;

	FString Functions;
	GetGeneratedFunctions(&Functions);
	Functions += (TEXT("\n\n// User kernel functions\n") + ShaderFunctions);

#if PLATFORM_WINDOWS
	// Remove old-school stuff.
	Source.ReplaceInline(TEXT("\r"), TEXT(""));
	Functions.ReplaceInline(TEXT("\r"), TEXT(""));
#endif

	for (const TPair<FName, FPCGKernelAttributeIDAndType>& Pair : GlobalAttributeLookupTable)
	{
		FPCGKernelAttributeKey AttributeKey(Pair.Key, Pair.Value.Type);
		const FString SourceDefinition = PCGHLSLElement::GetKernelAttributeKeyAsString(AttributeKey);
		const FString AttributeIndexAsString = FString::FromInt(Pair.Value.Id);

		Source.ReplaceInline(*SourceDefinition, *AttributeIndexAsString);
		Functions.ReplaceInline(*SourceDefinition, *AttributeIndexAsString);
	}

	FString ShaderPathName = GetPathName();
	PCGHLSLElement::ConvertObjectPathToShaderFilePath(ShaderPathName);

	//const bool bHasKernelKeyword = Source.Contains(TEXT("KERNEL"), ESearchCase::CaseSensitive);

	FString Includes;
	{
		// Add with caution: Pulling in external includes has the danger that 1) we may pull in more than we expect
		// if they include additional things in the future, and 2) if their functions change it could break user's
		// kernel source. The latter may be mitigated by branching our own PCG version of these if needed in the future.

		// TODO bring these in via additional sources so that their contents get hashed. Also these could generate declarations.
		Includes += TEXT("#include \"/Engine/Private/ComputeShaderUtils.ush\"\n");
		Includes += TEXT("#include \"/Engine/Private/Quaternion.ush\"\n");
		Includes += TEXT("#include \"/Plugin/PCG/Private/PCGShaderUtils.ush\"\n");
	}

	const FString KernelFunc = FString::Printf(
		TEXT("[numthreads(%d, %d, %d)]\nvoid %s(uint3 GroupId : SV_GroupID, uint GroupIndex : SV_GroupIndex)"),
		GroupSize.X, GroupSize.Y, GroupSize.Z, TEXT("Main"));

	const FString UnWrappedDispatchThreadId = FString::Printf(
		TEXT("GetUnWrappedDispatchThreadId(GroupId, GroupIndex, %d)"),
		GroupSize.X * GroupSize.Y * GroupSize.Z
	);

	// Used to signal that a kernel has executed. Set the most significant bit in NumData.
	FString SetAsExecuted = TEXT("    // Signal kernel executed by setting the most significant bit of NumData.\n");

	for (const FPCGPinPropertiesGPU& PinProps : OutputPins)
	{
		SetAsExecuted += FString::Format(TEXT("    if (all(GroupId == 0u) && GroupIndex == 0) {0}_SetAsExecutedInternal();\n"), { PinProps.Label.ToString() });
	}

	// Per-kernel-type preamble. Set up shader inputs and initialize output data.
	FString KernelSpecificPreamble = TEXT("    // Kernel preamble\n");
	
	auto AddThreadInfoForPin = [&KernelSpecificPreamble](FName PinLabel)
	{
		KernelSpecificPreamble += FString::Format(TEXT(
			"    uint {0}_DataIndex;\n"
			"    if (!{0}_GetThreadData(ThreadIndex, {0}_DataIndex, ElementIndex)) return;\n"),
			{ PinLabel.ToString() });
	};

	if (KernelType == EPCGKernelType::PointProcessor)
	{
		const UPCGPin* InputPin = GetPointProcessingInputPin();
		const UPCGPin* OutputPin = GetFirstPointOutputPin();

		if (InputPin && OutputPin)
		{
			KernelSpecificPreamble += TEXT("    uint ElementIndex; // Assumption - element index identical in input and output data.\n");

			AddThreadInfoForPin(InputPin->Properties.Label);
			AddThreadInfoForPin(OutputPin->Properties.Label);

			// If input point is invalid, mark output point as invalid and abort.
			KernelSpecificPreamble += FString::Format(TEXT(
				"    if ({0}_IsPointRemoved({0}_DataIndex, ElementIndex))\n"
				"    {\n"
				"        {1}_RemovePoint({1}_DataIndex, ElementIndex);\n"
				"        return;\n"
				"    }\n"),
				{ InputPin->Properties.Label.ToString(), OutputPin->Properties.Label.ToString() });

			// Automatically copy value of all attributes for this element.
			// TODO pass in IDs of attributes that are actually present.
			KernelSpecificPreamble += FString::Format(TEXT(
				"\n"
				"// Point processor always initializes outputs by copying input data elements.\n"
				"{1}_CopyElementFrom_{0}({1}_DataIndex, ElementIndex, {0}_DataIndex, ElementIndex);\n"),
				{ InputPin->Properties.Label.ToString(), OutputPin->Properties.Label.ToString() });
		}
	}
	else if (KernelType == EPCGKernelType::PointGenerator)
	{
		KernelSpecificPreamble += FString::Format(TEXT("    const uint NumPoints = {0};\n"), { PointCount });

		if (const UPCGPin* OutputPin = GetFirstPointOutputPin())
		{
			KernelSpecificPreamble += TEXT("uint ElementIndex; // Assumption - element index identical in input and output data.\n");

			AddThreadInfoForPin(OutputPin->Properties.Label);

			KernelSpecificPreamble += FString::Format(TEXT(
				"    \n"
				"    // Initialize all values to defaults for output pin {0}\n"
				"    {0}_InitializePoint({0}_DataIndex, ElementIndex);\n"),
				{ OutputPin->Properties.Label.ToString() });
		}
	}

	FString Result;

	// TODO: Support KERNEL keyword in shader source. Could be handy for external source assets and breaking kernels into sections to
	// support pin/attribute declarations, etc.
	/*if (bHasKernelKeyword)
	{
		Source.ReplaceInline(TEXT("KERNEL"), TEXT("void __kernel_func(uint ThreadIndex)"), ESearchCase::CaseSensitive);

		Result = FString::Printf(TEXT(
			"#line 0 \"%s\"\n" // ShaderPathName
			"%s\n" // Includes
			"%s\n" // Functions
			"%s\n" // Source
			"%s { __kernel_func(%s); }\n"), // KernelFunc, UnWrappedDispatchThreadId
			*ShaderPathName, *Includes, *Functions, *Source, *KernelFunc, *UnWrappedDispatchThreadId);
	}
	else*/
	{
		Result = FString::Printf(TEXT(
			"%s\n\n" // Includes
			"%s\n\n" // Functions
			"%s\n" // KernelFunc
			"{\n"
			"%s\n" // SetAsExecuted
			"	const uint ThreadIndex = %s;\n" // UnWrappedDispatchThreadId
			"	if (ThreadIndex >= GetNumThreads().x) return;\n"
			"%s\n" // KernelSpecificPreamble
			"#line 0 \"%s\"\n" // ShaderPathName
			"%s\n" // Source
			"}\n"),
			*Includes, *Functions, *KernelFunc, *SetAsExecuted, *UnWrappedDispatchThreadId, *KernelSpecificPreamble, *ShaderPathName, *Source);
	}

	return Result;
}

bool FPCGCustomHLSLElement::ExecuteInternal(FPCGContext* Context) const
{
	// This element does not support CPU execution and we are never supposed to land here.
	check(false);
	return true;
}

#undef LOCTEXT_NAMESPACE
