/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonSpineSolver.h"

#include "Animation/AnimInstance.h"

#include "AnimationGraphSchema.h"
#include "Components/SkeletalMeshComponent.h"


void UAnimGraphNode_DragonSpineSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonSpineSolver::UAnimGraphNode_DragonSpineSolver(const FObjectInitializer & ObjectInitializer)
{
}





void UAnimGraphNode_DragonSpineSolver::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const
{
	
	if (PreviewSkelMeshComp)
	{
		if (FAnimNode_DragonSpineSolver* ActiveNode = GetActiveInstanceNode<FAnimNode_DragonSpineSolver>(PreviewSkelMeshComp->GetAnimInstance()))
		{
			if(ActiveNode->Enable_Solver)
			ActiveNode->ConditionalDebugDraw(PDI, PreviewSkelMeshComp);
		}
	}
	
}


FText UAnimGraphNode_DragonSpineSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("Dragon Spine Solver"));
}

FText UAnimGraphNode_DragonSpineSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for handling spine modification towards the terrain hit data . Find more details in the document ."));
}

FString UAnimGraphNode_DragonSpineSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonSpineSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);

}


