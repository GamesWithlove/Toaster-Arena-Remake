/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonAimSolver.h"


#include "DragonAimSolverEditMode.h"


#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonAimSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonAimSolver::UAnimGraphNode_DragonAimSolver(const FObjectInitializer & ObjectInitializer)
{
}

FEditorModeID UAnimGraphNode_DragonAimSolver::GetEditorMode() const
{
	return DragonAimSolverEditModes::DragonAimSolver;
}

//FEditorModeID UAnimGraphNode_DragonAimSolver::GetEditorMode() const
//{
//	return AnimNodeEditModes::ModifyBone;
//}



void UAnimGraphNode_DragonAimSolver::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, " PropertyName : " + PropertyName.ToString());

//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, " ARMS : " + GET_MEMBER_NAME_CHECKED(TArray<FDragonData_ArmsData>, FDragonData_ArmsData).ToString());

	if (PropertyName.ToString().Equals("Aiming_Hand_Limbs"))
	{
#if WITH_EDITOR
		ik_node.ResizeDebugLocations(ik_node.Aiming_Hand_Limbs.Num());
#endif
	//	ik_node.Arm_TargetLocation_Overrides.SetNum(ik_node.Aiming_Hand_Limbs.Num());
	}
}


FText UAnimGraphNode_DragonAimSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("Dragon Aim Look Solver"));
}

FText UAnimGraphNode_DragonAimSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for handling aiming towards a specific target."));
}

FString UAnimGraphNode_DragonAimSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonAimSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);

}


