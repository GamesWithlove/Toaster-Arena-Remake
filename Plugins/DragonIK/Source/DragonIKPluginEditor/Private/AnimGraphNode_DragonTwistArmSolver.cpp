/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonTwistArmSolver.h"


#include "DragonTwistArmSolverEditMode.h"


#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonTwistArmSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonTwistArmSolver::UAnimGraphNode_DragonTwistArmSolver(const FObjectInitializer & ObjectInitializer)
{
}

FEditorModeID UAnimGraphNode_DragonTwistArmSolver::GetEditorMode() const
{
	return DragonTwistArmSolverEditModes::DragonTwistArmSolver;
}

//FEditorModeID UAnimGraphNode_DragonTwistArmSolver::GetEditorMode() const
//{
//	return AnimNodeEditModes::ModifyBone;
//}



void UAnimGraphNode_DragonTwistArmSolver::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName = (PropertyChangedEvent.Property != NULL) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, " PropertyName : " + PropertyName.ToString());

//	GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, " ARMS : " + GET_MEMBER_NAME_CHECKED(TArray<FDragonData_ArmsData>, FDragonData_ArmsData).ToString());

	if (PropertyName.ToString().Equals("Aiming_Hand_Limbs"))
	{
#if WITH_EDITOR
		ik_node.ResizeDebugLocations(1);
#endif
	//	ik_node.Arm_TargetLocation_Overrides.SetNum(ik_node.TwistableArming_Hand_Limbs.Num());
	}
}


FText UAnimGraphNode_DragonTwistArmSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("DragonIK Twist Arm IK Solver"));
}

FText UAnimGraphNode_DragonTwistArmSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for hand holding a weapon in conjunction with the Weapon Arm component. The same arm IK functionality provided in the Aim solver, but simplified and trimmed for solo arm use cases."));
}

FString UAnimGraphNode_DragonTwistArmSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonTwistArmSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);

}


