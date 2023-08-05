/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonPhysicsSolver.h"
#include "Animation/AnimInstanceProxy.h"



#include "DragonIKPhysicsHolder.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"

class UDragonIKPhysicsComponent;


DECLARE_CYCLE_STAT(TEXT("DragonPhysicsSolver Eval"), STAT_DragonPhysicsSolver_Eval, STATGROUP_Anim);




FAnimNode_DragonPhysicsSolver::FAnimNode_DragonPhysicsSolver()
{
	

}




void FAnimNode_DragonPhysicsSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{
	
		character_bone_references.Empty();

		UWorld* ZAWARDO = (owning_skel->GetOwner()!=nullptr ? owning_skel->GetOwner()->GetWorld() : nullptr);

		//if (owning_skel->GetOwner()->GetWorld()->IsGameWorld())
		//&& owning_skel->GetOwner()->GetWorld()->IsGameWorld()
		if (ZAWARDO!=nullptr)
		{
					
			character_bone_transforms.Empty();


			for (int physicshandle_index = 0; physicshandle_index < owning_skel->GetNumBones(); physicshandle_index++)
			{					

				FBoneReference bone_reference = FBoneReference(owning_skel->GetBoneName(physicshandle_index));
				bone_reference.Initialize(RequiredBones);
				character_bone_references.Add(bone_reference);
			}

			character_bone_transforms.AddDefaulted(character_bone_references.Num());

		}


}




// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonPhysicsSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{



	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();


	dragon_phys_component.SetNumUninitialized(3);

}




void FAnimNode_DragonPhysicsSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Output)
{
	Super::EvaluateComponentSpaceInternal(Output);

	if (owning_skel != nullptr)
	{


		TArray<UActorComponent*> all_dragonikphysics_components;

		if(owning_skel->GetOwner() != nullptr)
		owning_skel->GetOwner()->GetComponents(UDragonIKPhysicsComponent::StaticClass(), all_dragonikphysics_components);



		if (dragon_phys_component.Num() != all_dragonikphysics_components.Num())
		{
			dragon_phys_component.SetNumUninitialized(all_dragonikphysics_components.Num());
		}

		for (int component_i = 0; component_i < all_dragonikphysics_components.Num(); component_i++)
		{

			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, "component_i " + FString::SanitizeFloat(component_i));



			dragon_phys_component[component_i] = Cast<UDragonIKPhysicsComponent>(all_dragonikphysics_components[component_i]);





			if (dragon_phys_component[component_i] == NULL || dragon_phys_component[component_i] == nullptr)
				dragon_phys_component[component_i] = owning_skel->GetOwner()->FindComponentByClass<UDragonIKPhysicsComponent>();
			else
				if (dragon_phys_component[component_i]->Raw_Animation_Transforms.Num() == 0)
					dragon_phys_component[component_i] = owning_skel->GetOwner()->FindComponentByClass<UDragonIKPhysicsComponent>();


			if (dragon_phys_component[component_i] != nullptr && dragon_phys_component[component_i] != NULL)
			{

				if (character_bone_references.Num() > 0 && character_bone_transforms.Num() > 0 && (dragon_phys_component[component_i]->physanim_tag_index == physanim_tag_index))
				{

					for (int physicshandle_i = 0; physicshandle_i < character_bone_references.Num(); physicshandle_i++)
					{
						if (character_bone_references[physicshandle_i].IsValidToEvaluate())
						{
							character_bone_transforms[physicshandle_i] = Output.Pose.GetComponentSpaceTransform(character_bone_references[physicshandle_i].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer()));


							if (!character_bone_transforms[physicshandle_i].Equals(FTransform::Identity))
								FAnimationRuntime::ConvertCSTransformToBoneSpace(owning_skel->GetComponentTransform(), Output.Pose, character_bone_transforms[physicshandle_i], character_bone_references[physicshandle_i].CachedCompactPoseIndex, EBoneControlSpace::BCS_WorldSpace);


							//if (dragon_phys_component->Raw_Animation_Transforms != NULL)
							{
								if (dragon_phys_component[component_i]->Raw_Animation_Transforms.Num() > physicshandle_i)
									dragon_phys_component[component_i]->Raw_Animation_Transforms[physicshandle_i] = character_bone_transforms[physicshandle_i];
							}

						}

					}

				}

			}




		}



		/*
		if (dragon_phys_component == NULL || dragon_phys_component == nullptr)
			dragon_phys_component = owning_skel->GetOwner()->FindComponentByClass<UDragonIKPhysicsComponent>();
		else
			if (dragon_phys_component->Raw_Animation_Transforms.Num() == 0)
				dragon_phys_component = owning_skel->GetOwner()->FindComponentByClass<UDragonIKPhysicsComponent>();


		if (dragon_phys_component != nullptr && dragon_phys_component != NULL)
		{

			if (character_bone_references.Num() > 0 && character_bone_transforms.Num() > 0)
			{

				for (int physicshandle_i = 0; physicshandle_i < character_bone_references.Num(); physicshandle_i++)
				{
					if(character_bone_references[physicshandle_i].IsValidToEvaluate())
					{
						character_bone_transforms[physicshandle_i] = Output.Pose.GetComponentSpaceTransform(character_bone_references[physicshandle_i].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer()));


						if (!character_bone_transforms[physicshandle_i].Equals(FTransform::Identity))
							FAnimationRuntime::ConvertCSTransformToBoneSpace(owning_skel->GetComponentTransform(), Output.Pose, character_bone_transforms[physicshandle_i], character_bone_references[physicshandle_i].CachedCompactPoseIndex, EBoneControlSpace::BCS_WorldSpace);


						//if (dragon_phys_component->Raw_Animation_Transforms != NULL)
						{
							if(dragon_phys_component->Raw_Animation_Transforms.Num() > physicshandle_i)
							dragon_phys_component->Raw_Animation_Transforms[physicshandle_i] = character_bone_transforms[physicshandle_i];
						}

					}

				}

			}

		}

		*/


	}
}


//Perform update operations inside this
void FAnimNode_DragonPhysicsSolver::UpdateInternal(const FAnimationUpdateContext& Context)
{

	FAnimNode_DragonControlBase::UpdateInternal(Context);



}



void FAnimNode_DragonPhysicsSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	//ComponentPose.EvaluateComponentSpace(Output);


}


void FAnimNode_DragonPhysicsSolver::Evaluate_AnyThread(FPoseContext& Output)
{

	

}




bool FAnimNode_DragonPhysicsSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{

	return true;
}

