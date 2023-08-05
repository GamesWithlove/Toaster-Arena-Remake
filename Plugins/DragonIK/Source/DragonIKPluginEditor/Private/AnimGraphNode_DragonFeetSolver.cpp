/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonFeetSolver.h"

#include "DragonFootSolverEditMode.h"

#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonFeetSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonFeetSolver::UAnimGraphNode_DragonFeetSolver(const FObjectInitializer & ObjectInitializer)
{
}

FEditorModeID UAnimGraphNode_DragonFeetSolver::GetEditorMode() const
{
	return DragonFootSolverEditModes::DragonFootSolver;
}





/*
void UAnimGraphNode_DragonFeetSolver::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const
{
	
	if (PreviewSkelMeshComp)
	{
		if (FAnimNode_DragonFeetSolver* ActiveNode = GetActiveInstanceNode<FAnimNode_DragonFeetSolver>(PreviewSkelMeshComp->GetAnimInstance()))
		{
			ActiveNode->ConditionalDebugDraw(PDI, PreviewSkelMeshComp);
		}
	}
}
*/


FText UAnimGraphNode_DragonFeetSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("Dragon Foot Solver"));
}

FText UAnimGraphNode_DragonFeetSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for handling foot ik towards the terrain hit data . Find more details in the document ."));
}

FString UAnimGraphNode_DragonFeetSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonFeetSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);
}
