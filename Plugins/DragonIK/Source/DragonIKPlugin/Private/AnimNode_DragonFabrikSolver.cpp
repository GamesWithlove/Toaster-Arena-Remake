/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonFabrikSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"






// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonFabrikSolver::Initialize_AnyThread(const FAnimationInitializeContext & Context)
{
	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();


}











void FAnimNode_DragonFabrikSolver::Evaluate_AnyThread(FPoseContext & Output)
{
}





void FAnimNode_DragonFabrikSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{
	
#if WITH_EDITORONLY_DATA
	if (PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		

	}
#endif

}

//Perform update operations inside this
void FAnimNode_DragonFabrikSolver::UpdateInternal(const FAnimationUpdateContext & Context)
{
	FAnimNode_DragonControlBase::UpdateInternal(Context);

}



//Nothing would be needed here
void FAnimNode_DragonFabrikSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext & Context)
{
}

FAnimNode_DragonFabrikSolver::FAnimNode_DragonFabrikSolver()
{
//	FAnimNode_DragonFabrikSolver();

	
}

void FAnimNode_DragonFabrikSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{




    TArray<FCompactPoseBoneIndex> BoneIndices;

    {
        const FCompactPoseBoneIndex RootIndex = RootBone_Input.CachedCompactPoseIndex;
        FCompactPoseBoneIndex BoneIndex = TipBone_Input.CachedCompactPoseIndex;
        do
        {

            

            BoneIndices.Insert(BoneIndex, 0);
            BoneIndex = Output.Pose.GetPose().GetParentBoneIndex(BoneIndex);
        } while (BoneIndex != RootIndex);
        BoneIndices.Insert(BoneIndex, 0);
    }

    ChainBoneIndices = BoneIndices;





    /*
    int ChainLength = 0;
    TArray<FName> ChainBoneNames;
    TArray<int32> BoneLengths;
    bool bAllowTwist = true;
    */

    // Get the chain of bones to be solved by the FABRIK IK
    TArray<FBoneReference> Chain;
    Chain.Reserve(ChainLength);
    for (int32 i = 0; i < ChainLength; ++i)
    {
        Chain.Add(FBoneReference(ChainBoneNames[i]));
    }

    // Get the bone transforms for the chain
    TArray<FTransform> BoneModifyTransforms;
    BoneModifyTransforms.Reserve(ChainLength);
    for (const FBoneReference& BoneRef : Chain)
    {
        BoneModifyTransforms.Add(Output.Pose.GetComponentSpaceTransform(BoneRef.CachedCompactPoseIndex));
    }

    // Get the end effector transform and goal transform
    FTransform EndEffectorTransform = BoneModifyTransforms.Last();
    FTransform GoalTransform = Output.AnimInstanceProxy->GetSkelMeshComponent()->GetComponentTransform().GetRelativeTransform(Output.Pose.GetComponentSpaceTransform(Chain.Last().CachedCompactPoseIndex));

    // Perform FABRIK IK solving
    for (int32 i = ChainLength - 2; i >= 0; --i)
    {
        FVector EndEffectorPosition = EndEffectorTransform.GetTranslation();
        FVector BonePosition = BoneModifyTransforms[i].GetTranslation();
        FVector Direction = (EndEffectorPosition - BonePosition).GetSafeNormal();

        FVector TargetPosition = GoalTransform.GetTranslation() - Direction * BoneLengths[i];
        FTransform NewTransform = FTransform::Identity;
        NewTransform.SetTranslation(TargetPosition);

        if (bAllowTwist)
        {
            // Calculate the twist rotation based on the current bone and child bone direction
            FVector CurrentDirection = (BoneModifyTransforms[i].GetTranslation() - BoneModifyTransforms[i + 1].GetTranslation()).GetSafeNormal();
            FVector TwistAxis = FVector::CrossProduct(Direction, CurrentDirection).GetSafeNormal();
            float TwistAngle = FMath::Acos(FVector::DotProduct(Direction, CurrentDirection));
            NewTransform.SetRotation(FQuat(TwistAxis, TwistAngle) * FQuat::FindBetweenNormals(Direction, (EndEffectorTransform.GetTranslation() - TargetPosition).GetSafeNormal()));
        }
        else
        {
            NewTransform.SetRotation(FQuat::FindBetweenNormals(Direction, (EndEffectorTransform.GetTranslation() - TargetPosition).GetSafeNormal()));
        }

        BoneModifyTransforms[i] = NewTransform * BoneModifyTransforms[i + 1];
    }

    for (int32 i = 0; i < ChainLength - 1; ++i)
    {
        FVector EndEffectorPosition = BoneModifyTransforms[i + 1].GetTranslation();

        FVector BonePosition = BoneModifyTransforms[i].GetTranslation();
        FVector Direction = (EndEffectorPosition - BonePosition).GetSafeNormal();

        FVector TargetPosition = BoneModifyTransforms[i].GetTranslation() + Direction * BoneLengths[i];
        FTransform NewTransform = FTransform::Identity;
        NewTransform.SetTranslation(TargetPosition);

        if (bAllowTwist)
        {
            // Calculate the twist rotation based on the current bone and child bone direction
            FVector CurrentDirection = (BoneModifyTransforms[i].GetTranslation() - BoneModifyTransforms[i + 1].GetTranslation()).GetSafeNormal();
            FVector TwistAxis = FVector::CrossProduct(CurrentDirection, Direction).GetSafeNormal();
            float TwistAngle = FMath::Acos(FVector::DotProduct(CurrentDirection, Direction));
            NewTransform.SetRotation(FQuat(TwistAxis, TwistAngle) * FQuat::FindBetweenNormals(Direction, (EndEffectorPosition - TargetPosition).GetSafeNormal()));
        }
        else
        {
            NewTransform.SetRotation(FQuat::FindBetweenNormals(Direction, (EndEffectorPosition - TargetPosition).GetSafeNormal()));
        }

        BoneModifyTransforms[i + 1] = NewTransform * BoneModifyTransforms[i];
    }

    // Apply the bone transforms
    for (int32 i = 0; i < ChainLength; ++i)
    {
        OutBoneTransforms.Add(FBoneTransform(Chain[i].CachedCompactPoseIndex, BoneModifyTransforms[i]));
    }






}





bool FAnimNode_DragonFabrikSolver::IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer & RequiredBones)
{

    
    return true;

}


// SPLINE IK CODE INITIALIZATION CODE


// SPLINE IK CODE END








void FAnimNode_DragonFabrikSolver::InitializeBoneReferences(FBoneContainer & RequiredBones)
{


	SavedBoneContainer = &RequiredBones;

	




    // Initialize the bone references for the chain
    ChainBoneNames.Reserve(ChainLength);
    BoneLengths.Reserve(ChainLength - 1);
    for (int32 i = 0; i < ChainLength; ++i)
    {
        ChainBoneNames.Add(owning_skel->GetBoneName(ChainBoneIndices[i].GetInt()));
        if (i > 0)
        {
            BoneLengths.Add((RequiredBones.GetRefPoseTransform(ChainBoneIndices[i]).GetTranslation() - RequiredBones.GetRefPoseTransform(ChainBoneIndices[i - 1]).GetTranslation()).Size());
        }
    }

	
}




void FAnimNode_DragonFabrikSolver::FABRIK_BodySystem(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{


	
}








