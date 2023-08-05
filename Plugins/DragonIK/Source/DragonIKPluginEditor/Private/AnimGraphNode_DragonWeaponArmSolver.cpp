/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "AnimGraphNode_DragonWeaponArmSolver.h"


#include "DragonWeaponArmSolverEditMode.h"


#include "AnimationGraphSchema.h"



void UAnimGraphNode_DragonWeaponArmSolver::CreateOutputPins()
{
	CreatePin(EGPD_Output, UAnimationGraphSchema::PC_Struct, FComponentSpacePoseLink::StaticStruct(), TEXT("Pose"));
}


UAnimGraphNode_DragonWeaponArmSolver::UAnimGraphNode_DragonWeaponArmSolver(const FObjectInitializer & ObjectInitializer)
{
}

FEditorModeID UAnimGraphNode_DragonWeaponArmSolver::GetEditorMode() const
{
	return DragonWeaponArmSolverEditModes::DragonWeaponArmSolver;
}

//FEditorModeID UAnimGraphNode_DragonWeaponArmSolver::GetEditorMode() const
//{
//	return AnimNodeEditModes::ModifyBone;
//}



void UAnimGraphNode_DragonWeaponArmSolver::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
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
	//	ik_node.Arm_TargetLocation_Overrides.SetNum(ik_node.TwistableArming_Hand_Limbs.Num());
	}
}


FText UAnimGraphNode_DragonWeaponArmSolver::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString("DragonIK Weapon Grip IK Solver"));
}

FText UAnimGraphNode_DragonWeaponArmSolver::GetTooltipText() const
{
	return FText::FromString(FString("Responsible for hand holding a weapon in conjunction with the Weapon Arm component"));
}

FString UAnimGraphNode_DragonWeaponArmSolver::GetNodeCategory() const
{
	return FString("Dragon.IK Plugin");
}

FLinearColor UAnimGraphNode_DragonWeaponArmSolver::GetNodeTitleColor() const
{
	return FLinearColor(10.0f / 255.0f, 127.0f / 255.0f, 248.0f / 255.0f);

}


