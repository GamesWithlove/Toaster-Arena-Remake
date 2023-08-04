/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/



#include "AnimGraphNode_DragonControlBase.h"
#include "AnimationGraphSchema.h"
#include "Animation/AnimationSettings.h"
#include "Kismet2/CompilerResultsLog.h"
#include "DetailLayoutBuilder.h"
#include "ScopedTransaction.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "AnimNode_DragonControlBase.h"

/////////////////////////////////////////////////////
// UAnimGraphNode_DragonControlBase

#define LOCTEXT_NAMESPACE "A3Nodes"


UAnimGraphNode_DragonControlBase::UAnimGraphNode_DragonControlBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FLinearColor UAnimGraphNode_DragonControlBase::GetNodeTitleColor() const
{
	return FLinearColor(0.75f, 0.75f, 0.10f);
}

FString UAnimGraphNode_DragonControlBase::GetNodeCategory() const
{
	return TEXT("Skeletal Control Nodes");
}

FText UAnimGraphNode_DragonControlBase::GetControllerDescription() const
{
	return LOCTEXT("ImplementMe", "Implement me");
}

FText UAnimGraphNode_DragonControlBase::GetTooltipText() const
{
	return GetControllerDescription();
}

void UAnimGraphNode_DragonControlBase::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}




void UAnimGraphNode_DragonControlBase::GetDefaultValue(const FName UpdateDefaultValueName, FVector& OutVec)
{
	for (UEdGraphPin* Pin : Pins)
	{
		if (Pin->PinName == UpdateDefaultValueName)
		{
			if (GetSchema()->IsCurrentPinDefaultValid(Pin).IsEmpty())
			{
				FString DefaultString = Pin->GetDefaultAsString();

				// Existing nodes (from older versions) might have an empty default value string; in that case we just fall through and return the zero vector below (which is the default value in that case).
				if (!DefaultString.IsEmpty())
				{
					TArray<FString> ResultString;

					//Parse string to split its contents separated by ','
					DefaultString.TrimStartAndEndInline();
					DefaultString.ParseIntoArray(ResultString, TEXT(","), true);

					check(ResultString.Num() == 3);

					OutVec.Set(
						FCString::Atof(*ResultString[0]),
						FCString::Atof(*ResultString[1]),
						FCString::Atof(*ResultString[2])
					);
					return;
				}
			}
		}
	}
	OutVec = FVector::ZeroVector;
}

void UAnimGraphNode_DragonControlBase::SetDefaultValue(const FName UpdateDefaultValueName, const FVector& Value)
{
	for (UEdGraphPin* Pin : Pins)
	{
		if (Pin->PinName == UpdateDefaultValueName)
		{
			if (GetSchema()->IsCurrentPinDefaultValid(Pin).IsEmpty())
			{
				FString Str = FString::Printf(TEXT("%.3f,%.3f,%.3f"), Value.X, Value.Y, Value.Z);
				if (Pin->DefaultValue != Str)
				{
					PreEditChange(nullptr);
					GetSchema()->TrySetDefaultValue(*Pin, Str);
					PostEditChange();
					break;
				}
			}
		}
	}
}

bool UAnimGraphNode_DragonControlBase::IsPinShown(const FName PinName) const
{
	for (const FOptionalPinFromProperty& Pin : ShowPinForProperties)
	{
		if (Pin.PropertyName == PinName)
		{
			return Pin.bShowPin;
		}
	}
	return false;
}

void UAnimGraphNode_DragonControlBase::CustomizePinData(UEdGraphPin* Pin, FName SourcePropertyName, int32 ArrayIndex) const
{
	Super::CustomizePinData(Pin, SourcePropertyName, ArrayIndex);

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, Alpha))
	{
		Pin->bHidden = (GetNode()->AlphaInputType != EAnimAlphaInputType::Float);

		if (!Pin->bHidden)
		{
			Pin->PinFriendlyName = GetNode()->AlphaScaleBias.GetFriendlyName(GetNode()->AlphaScaleBiasClamp.GetFriendlyName(Pin->PinFriendlyName));
		}
	}

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, bAlphaBoolEnabled))
	{
		Pin->bHidden = (GetNode()->AlphaInputType != EAnimAlphaInputType::Bool);
	}

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, AlphaCurveName))
	{
		Pin->bHidden = (GetNode()->AlphaInputType != EAnimAlphaInputType::Curve);

		if (!Pin->bHidden)
		{
			Pin->PinFriendlyName = GetNode()->AlphaScaleBiasClamp.GetFriendlyName(Pin->PinFriendlyName);
		}
	}
}

void UAnimGraphNode_DragonControlBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = (PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None);

	// Reconstruct node to show updates to PinFriendlyNames.
	if ((PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, AlphaScaleBias))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, bMapRange))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputRange, Min))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputRange, Max))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, Scale))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, Bias))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, bClampResult))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, ClampMin))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, ClampMax))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, bInterpResult))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, InterpSpeedIncreasing))
		|| (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FInputScaleBiasClamp, InterpSpeedDecreasing)))
	{
		ReconstructNode();
	}

	if (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, AlphaInputType))
	{
		FScopedTransaction Transaction(LOCTEXT("ChangeAlphaInputType", "Change Alpha Input Type"));
		Modify();


		// Break links to pins going away
		for (int32 PinIndex = 0; PinIndex < Pins.Num(); ++PinIndex)
		{
			UEdGraphPin* Pin = Pins[PinIndex];
			if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, Alpha))
			{
				if (GetNode()->AlphaInputType != EAnimAlphaInputType::Float)
				{
					Pin->BreakAllPinLinks();
				}
			}
			else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, bAlphaBoolEnabled))
			{
				if (GetNode()->AlphaInputType != EAnimAlphaInputType::Bool)
				{
					Pin->BreakAllPinLinks();
				}
			}
			else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_DragonControlBase, AlphaCurveName))
			{
				if (GetNode()->AlphaInputType != EAnimAlphaInputType::Curve)
				{
					Pin->BreakAllPinLinks();
				}
			}
		}

		ReconstructNode();

		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UAnimGraphNode_DragonControlBase::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	Super::CustomizeDetails(DetailBuilder);

	const FAnimNode_DragonControlBase* SkelControlNode = GetNode();
	TSharedRef<IPropertyHandle> NodeHandle = DetailBuilder.GetProperty(FName(TEXT("ik_node")), GetClass());

	if (SkelControlNode->AlphaInputType != EAnimAlphaInputType::Bool)
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, bAlphaBoolEnabled)));
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, AlphaBoolBlend)));
	}

	if (SkelControlNode->AlphaInputType != EAnimAlphaInputType::Float)
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, Alpha)));
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, AlphaScaleBias)));
	}

	if (SkelControlNode->AlphaInputType != EAnimAlphaInputType::Curve)
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, AlphaCurveName)));
	}

	if ((SkelControlNode->AlphaInputType != EAnimAlphaInputType::Float)
		&& (SkelControlNode->AlphaInputType != EAnimAlphaInputType::Curve))
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_DragonControlBase, AlphaScaleBiasClamp)));
	}
}

void UAnimGraphNode_DragonControlBase::ValidateAnimNodePostCompile(FCompilerResultsLog& MessageLog, UAnimBlueprintGeneratedClass* CompiledClass, int32 CompiledNodeIndex)
{
	if (UAnimationSettings::Get()->bEnablePerformanceLog)
	{
		const FAnimNode_DragonControlBase* Node = GetNode();
		if (Node && Node->LODThreshold < 0)
		{
			MessageLog.Warning(TEXT("@@ contains no LOD Threshold."), this);
		}
	}
}

#undef LOCTEXT_NAMESPACE