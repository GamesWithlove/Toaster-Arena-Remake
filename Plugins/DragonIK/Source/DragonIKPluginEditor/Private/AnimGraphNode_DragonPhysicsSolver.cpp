/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonPhysicsSolver.h"

#include "DragonPhysicsSolverEditMode.h"

#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonPhysicsSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonPhysicsSolver::UAnimGraphNode_DragonPhysicsSolver(const FObjectInitializer & ObjectInitializer)
{
}

/*
FEditorModeID UAnimGraphNode_DragonPhysicsSolver::GetEditorMode() const
{
	return DragonPhysicsSolverEditModes::DragonPhysicsSolver;
}*/





/*
void UAnimGraphNode_DragonPhysicsSolver::Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const
{
	
	if (PreviewSkelMeshComp)
	{
		if (FAnimNode_DragonPhysicsSolver* ActiveNode = GetActiveInstanceNode<FAnimNode_DragonPhysicsSolver>(PreviewSkelMeshComp->GetAnimInstance()))
		{
			ActiveNode->ConditionalDebugDraw(PDI, PreviewSkelMeshComp);
		}
	}
}
*/


FText UAnimGraphNode_DragonPhysicsSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("DragonIK Physanim Info Relayer"));
}

FText UAnimGraphNode_DragonPhysicsSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for sending animation data into the dragonik physanim component. Find more details in the document ."));
}

FString UAnimGraphNode_DragonPhysicsSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonPhysicsSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);
}
