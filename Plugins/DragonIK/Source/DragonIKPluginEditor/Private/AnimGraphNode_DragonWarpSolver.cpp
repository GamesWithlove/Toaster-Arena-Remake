/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonWarpSolver.h"


#include "DragonWarpSolverEditMode.h"

#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonWarpSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonWarpSolver::UAnimGraphNode_DragonWarpSolver(const FObjectInitializer & ObjectInitializer)
{
}


FEditorModeID UAnimGraphNode_DragonWarpSolver::GetEditorMode() const
{
	return DragonWarpSolverEditModes::DragonWarpSolver;
}


/*
void UAnimGraphNode_DragonWarpSolver::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const
{
	
	if (PreviewSkelMeshComp)
	{
		if (FAnimNode_DragonWarpSolver* ActiveNode = GetActiveInstanceNode<FAnimNode_DragonWarpSolver>(PreviewSkelMeshComp->GetAnimInstance()))
		{
			ActiveNode->ConditionalDebugDraw(PDI, PreviewSkelMeshComp);
		}
	}
}
*/


FText UAnimGraphNode_DragonWarpSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("Dragon Speed Warping Solver"));
}

FText UAnimGraphNode_DragonWarpSolver::GetTooltipText() const
{
	return FText::FromString(FString("A solver for warping your legs and hands."));
}

FString UAnimGraphNode_DragonWarpSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonWarpSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);
}
