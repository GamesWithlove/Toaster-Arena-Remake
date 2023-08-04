/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonWeaponArmSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"






// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonWeaponArmSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	//	ComponentPose.Initialize(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();




	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
}


/*
// Cache the bones . Thats it !!
void FAnimNode_DragonWeaponArmSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext & Context)
{
	FAnimNode_Base::CacheBones_AnyThread(Context);
	ComponentPose.CacheBones(Context);
	InitializeBoneReferences(Context.AnimInstanceProxy->GetRequiredBones());
}
*/














// Store the animated and calculated pose transform data
void FAnimNode_DragonWeaponArmSolver::GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	
	OutBoneTransforms = TArray<FBoneTransform>();


	{



		



		for (int i = 0; i < HandIK_Transforms.Num(); i++)
		{

			//OutBoneTransforms.Add(HandIK_Transforms[i]);

			Lerp_HandIK_Transforms[i].BoneIndex = HandIK_Transforms[i].BoneIndex;


			FTransform grab_blended_transform = MeshBases.GetComponentSpaceTransform(HandIK_Transforms[i].BoneIndex);

			
			grab_blended_transform = UKismetMathLibrary::TLerp(grab_blended_transform, HandIK_Transforms[i].Transform, grab_alpha[arm_array_index_array[i]]);

			//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " bone : " + FString::SanitizeFloat(arm_array_index_array[i]));



			//if (Internal_Switched_Interpolation_bool)
			//	Lerp_HandIK_Transforms[i].Transform = UKismetMathLibrary::TInterpTo(Lerp_HandIK_Transforms[i].Transform, grab_blended_transform, delta_seconds_saved, Interpolation_Speed);
			//else
				//		Lerp_HandIK_Transforms[i].Transform = UKismetMathLibrary::TLerp(original_transform, HandIK_Transforms[i].Transform, grab_alpha);
				Lerp_HandIK_Transforms[i].Transform = grab_blended_transform;


			OutBoneTransforms.Add(Lerp_HandIK_Transforms[i]);

		}




		for (int boneindex = 0; boneindex < OutBoneTransforms.Num(); boneindex++)
		{

			if (OutBoneTransforms[boneindex].BoneIndex > -1)
			{

				
				OutBoneTransforms[boneindex].Transform = OutBoneTransforms[boneindex].Transform;

				//OutBoneTransforms[boneindex].Transform = UKismetMathLibrary::TLerp(original_transform, OutBoneTransforms[boneindex].Transform, toggle_alpha);

			}

		}






	}

}






void FAnimNode_DragonWeaponArmSolver::Evaluate_AnyThread(FPoseContext& Output)
{
}





void FAnimNode_DragonWeaponArmSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{


#if WITH_EDITORONLY_DATA
	if (PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		for (int i = 0; i < TraceStartList.Num(); i++)
		{

			//	DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Green, false, 0.1f);



			


			{
				DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Red, false, 0.1f);

			}
		}

	}
#endif

}

//Perform update operations inside this
void FAnimNode_DragonWeaponArmSolver::UpdateInternal(const FAnimationUpdateContext& Context)
{
	FAnimNode_DragonControlBase::UpdateInternal(Context);




	if (owning_skel)
	{

		owner_skel_w_transform = owning_skel->GetComponentTransform();



		if (owning_skel->GetOwner() != nullptr)
		{
			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds* owning_skel->GetOwner()->CustomTimeDilation;
		}
		else
		{
			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
		}
	}
	else
	{
		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
	}



	

	Interpolation_Speed = FMath::Clamp<float>(Interpolation_Speed, 0.25f, 100);


	
	if (inter_frame_counter < 5)
	{
		Internal_Switched_Interpolation_bool = false;

		inter_frame_counter++;
	}
	else
	{
		Internal_Switched_Interpolation_bool = Enable_Interpolation;
	}


	component_scale = owner_skel_w_transform.GetScale3D().Z;





}






FName FAnimNode_DragonWeaponArmSolver::GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh)
{

	FName child_bone = skel_mesh->GetBoneName(skel_mesh->GetBoneIndex(BoneName) + 1);

	return child_bone;

}


//Nothing would be needed here
void FAnimNode_DragonWeaponArmSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context)
{
}



void FAnimNode_DragonWeaponArmSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{



	bool turn_on_solver = true;


	if (DisplayLineTrace == false)
	{
		if (owning_skel->GetWorld()->WorldType == EWorldType::EditorPreview)
		{
			turn_on_solver = false;
		}
	}


	//if (toggle_alpha > 0.01f)

	if(turn_on_solver)
	{

		TArray<FBoneTransform> BoneTransforms_input = TArray<FBoneTransform>();


	
		//weapon_handler_component = Cast<UDragonIKWeaponPhysicsComponent>(all_dragonikphysics_components[component_i]);


		

		if (weapon_handler_component == NULL || weapon_handler_component == nullptr)
		{


			//TArray<UDragonIKWeaponPhysicsComponent*> all_dragonikphysics_components;

			//owning_skel->GetOwner()->GetComponents(UDragonIKWeaponPhysicsComponent::StaticClass(), all_dragonikphysics_components);


			TArray<UActorComponent*> all_dragonikphysics_components;
			owning_skel->GetOwner()->GetComponents(UDragonIKWeaponPhysicsComponent::StaticClass(), all_dragonikphysics_components);


			for (int component_i = 0; component_i < all_dragonikphysics_components.Num(); component_i++)
			{

				

				UDragonIKWeaponPhysicsComponent* temp_ref = Cast<UDragonIKWeaponPhysicsComponent>(all_dragonikphysics_components[component_i]);

				if(temp_ref->physanim_tag_index == Physweapon_Component_Tag)
				weapon_handler_component = Cast<UDragonIKWeaponPhysicsComponent>(all_dragonikphysics_components[component_i]);
			}
			
			//weapon_handler_component = owning_skel->GetOwner()->FindComponentByClass<UDragonIKWeaponPhysicsComponent>();



			


		}


			

		if(Internal_Switched_Interpolation_bool)
		{
			if (weapon_handler_component != NULL && weapon_handler_component != nullptr)
			{




				//if (weapon_handler_component != nullptr && weapon_handler_component != NULL)

				if(weapon_handler_component->arm_grabbing_status.Num() > 0)
					for (int alpha_index = 0; alpha_index < grab_alpha.Num(); alpha_index++)
					{


						if(weapon_handler_component->arm_reset_queue_index.Num() > 0 && alpha_index < weapon_handler_component->arm_reset_queue_index.Num())
							if (weapon_handler_component->arm_reset_queue_index[alpha_index] == true)
							{


								if (grab_alpha[alpha_index] == 0 && Calculated_Hand_Transforms.Num() > 0 && weapon_handler_component->active_weapon_component)
								{
									Calculated_Hand_Transforms[alpha_index] = Output.Pose.GetComponentSpaceTransform(Hand_Array[alpha_index].CachedCompactPoseIndex) * owning_skel->GetComponentTransform();
									FTransform weapon_transform = weapon_handler_component->active_weapon_component->GetComponentTransform();
									//weapon_transform.SetRotation(FQuat::Identity);
									weapon_transform.SetScale3D(FVector::OneVector);
									Hand_Weapon_Relative_Transforms[alpha_index] = Calculated_Hand_Transforms[alpha_index] * weapon_transform.Inverse();

									weapon_handler_component->arm_reset_queue_index[alpha_index] = false;

								}
							}

						/*
						if (weapon_handler_component->handbone_array_map.Find(Hand_Array[alpha_index].BoneName.ToString(), alpha_index))*/
				
						if(Hand_Array.Num() == grab_alpha.Num())
						{
							if(weapon_handler_component->handbone_array_boneName.Num() > 0 && alpha_index < weapon_handler_component->handbone_array_boneName.Num())
							{
								if(weapon_handler_component->handbone_array_boneName.Num() > alpha_index && Hand_Array[alpha_index].BoneName.IsValid())
									weapon_handler_component->handbone_array_boneName[alpha_index] = (Hand_Array[alpha_index].BoneName.ToString());
							}
							//FIX LATER
							if (weapon_handler_component->handbone_array_boneIndex.Num() > 0 &&  weapon_handler_component->handbone_array_boneIndex.Num() > alpha_index)
								weapon_handler_component->handbone_array_boneIndex[alpha_index] = (alpha_index);

						}
				


						//bool arm_alpha_state = weapon_handler_component->arm_grabbing_status[arm_array_index_array[alpha_index]];

						bool arm_alpha_state = weapon_handler_component->arm_grabbing_status[alpha_index];

						int alpha_target = 0;

						if (arm_alpha_state)
							alpha_target = 1;


						if (Internal_Switched_Interpolation_bool && weapon_handler_component != nullptr)
						{
							if (weapon_handler_component->is_grabbing == true)
								grab_alpha[alpha_index] = FMath::FInterpTo(grab_alpha[alpha_index], alpha_target, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);
							else
								grab_alpha[alpha_index] = FMath::FInterpTo(grab_alpha[alpha_index], 0, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);




							//weapon_handler_component->should_override_hand_location[arm_index];
							//bool should_override_hand_rot = weapon_handler_component->should_override_hand_rotation[arm_index];

							if (weapon_handler_component->should_override_hand_rotation.Num() > 0 && weapon_handler_component->should_override_hand_location.Num() > 0)
							{

								if (weapon_handler_component->should_override_hand_location[alpha_index])
								{
									overriding_hand_position_alpha[alpha_index] = FMath::FInterpTo(overriding_hand_position_alpha[alpha_index], 1, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);
								}
								else
								{
									overriding_hand_position_alpha[alpha_index] = FMath::FInterpTo(overriding_hand_position_alpha[alpha_index], 0, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);
								}




								if (weapon_handler_component->should_override_hand_rotation[alpha_index])
								{


									overriding_hand_rotation_alpha[alpha_index] = FMath::FInterpTo(overriding_hand_rotation_alpha[alpha_index], 1, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);

								}
								else
								{
									overriding_hand_rotation_alpha[alpha_index] = FMath::FInterpTo(overriding_hand_rotation_alpha[alpha_index], 0, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);

								}

							}


							//if (weapon_handler_component->should_override_hand_location[arm_index])
							//	overriding_hand_alpha[alpha_index] = FMath::FInterpTo(overriding_hand_alpha[alpha_index], alpha_target, owning_skel->GetWorld()->DeltaTimeSeconds, Interpolation_Speed);


						}
						else
						{
							if (weapon_handler_component->is_grabbing == true)
							{
								grab_alpha[alpha_index] = alpha_target;
							}
							else
							{
								grab_alpha[alpha_index] = 0;
							}

							if (weapon_handler_component->should_override_hand_location.Num() > 0)
							{
								if (weapon_handler_component->should_override_hand_location[alpha_index])
								{
									overriding_hand_position_alpha[alpha_index] = 1;
								}
								else
								{
									overriding_hand_position_alpha[alpha_index] = 0;
								}
							}

							if (weapon_handler_component->should_override_hand_rotation.Num() > 0)
							{
								if (weapon_handler_component->should_override_hand_rotation[alpha_index])
								{
									overriding_hand_rotation_alpha[alpha_index] = 1;
								}
								else
								{
									overriding_hand_rotation_alpha[alpha_index] = 0;
								}
							}
						}


				

					}

				//grab_alpha = 1;

				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " grab_alpha : " + FString::SanitizeFloat(grab_alpha));




				for (int status_index = 0; status_index < Calibration_Status_Array.Num(); status_index++)
				{
					if (weapon_handler_component != nullptr && weapon_handler_component != NULL)
					{
						if (weapon_handler_component->active_weapon_component == nullptr)
						{
							Calibration_Status_Array[status_index] = false;

							//Hand_Weapon_Relative_Transforms[status_index] = FTransform::Identity;

							//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, " Calibration_Status_Array ");

						}
					}
				}




				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Last_Saved_Bone[limb_index] : "+ weapon_handler_component->weapon_grabbed_bone.ToString());

				if (owning_skel->GetBoneIndex(weapon_handler_component->weapon_grabbed_bone) > -1)
				{
					//Elbow_Array[limb_index].CachedCompactPoseIndex;
					FBoneReference dominant_bone_reference = FBoneReference(weapon_handler_component->weapon_grabbed_bone);
					dominant_bone_reference.Initialize(*SavedBoneContainer);

					FCompactPoseBoneIndex dominant_bone = dominant_bone_reference.CachedCompactPoseIndex;

					FTransform dominant_bone_transform = Output.Pose.GetComponentSpaceTransform(dominant_bone);


					FAnimationRuntime::ConvertCSTransformToBoneSpace(owning_skel->GetComponentTransform(), Output.Pose, dominant_bone_transform, dominant_bone, EBoneControlSpace::BCS_WorldSpace);


					//weapon_handler_component->dominant_hand_transform = dominant_bone_transform;

					//FTransform owning_skeleton_transform = owning_skel->GetComponentTransform();
					//owning_skeleton_transform.SetRotation(FQuat::Identity);


					//weapon_handler_component->dominant_hand_transform = owning_skeleton_transform;

					//FTransform physics_offset = owning_skel->GetBoneTransform(dominant_bone.GetInt())*dominant_bone_transform.Inverse();
					//dominant_bone_transform = owning_skel->GetBoneTransform(dominant_bone.GetInt());
				
					//dominant_bone_transform.SetLocation(FVector(-260,230,127));


					

					int shoulder_index = -1;

					for (int limb_index = 0; limb_index < Aiming_Hand_Limbs.Num(); limb_index++)
					{
						if (Aiming_Hand_Limbs[limb_index].Hand_Bone_Name.BoneName.IsEqual( weapon_handler_component->weapon_grabbed_bone))
						{
							shoulder_index = limb_index;
						}
					}


					if(weapon_handler_component->Frozen_Elbow_Component_Status[shoulder_index] == true)
					{

						FTransform frozen_hand_temp = Frozen_Target_Transform[shoulder_index];
						//frozen_hand_temp = frozen_hand_temp*owner_skel_w_transform.Inverse();
						//frozen_hand_temp.SetRotation(Hand_Default_Transform_Array[shoulder_index].GetRotation());

						//frozen_hand_temp.AddToTranslation(FVector(0,0,100));

						FAnimationRuntime::ConvertCSTransformToBoneSpace(owning_skel->GetComponentTransform(), Output.Pose, frozen_hand_temp, dominant_bone, EBoneControlSpace::BCS_WorldSpace);

						
						weapon_handler_component->dominant_hand_transform = dominant_bone_transform;
					}
					else
					{
						weapon_handler_component->dominant_hand_transform = dominant_bone_transform;
					}

					
					if (Actual_Shoulder_Array.Num() > shoulder_index && Actual_Shoulder_Array.Num() > 0 && shoulder_index > -1)
					{
						weapon_handler_component->dominant_shoulder = Output.Pose.GetComponentSpaceTransform(Actual_Shoulder_Array[shoulder_index].CachedCompactPoseIndex) * owning_skel->GetComponentTransform();
				
						weapon_handler_component->dominant_shoulder_name = Actual_Shoulder_Array[shoulder_index].BoneName;
			

						//	weapon_handler_component->dominant_shoulder = Output.Pose.GetComponentSpaceTransform(Hand_Array[shoulder_index].CachedCompactPoseIndex) * owning_skel->GetComponentTransform();

						//	weapon_handler_component->dominant_shoulder_name = Actual_Shoulder_Array[shoulder_index].BoneName;

					

					}



				
					//if (weapon_handler_component->physics_welded_weapon == false)
					{

						ArmIK_System(Output.Pose, Output, BoneTransforms_input);

						GetAnimatedPoseInfo(Output.Pose, OutBoneTransforms);
					}


				}
			

			}
			else
			{
				ArmIK_System(Output.Pose, Output, BoneTransforms_input);
				GetAnimatedPoseInfo(Output.Pose, OutBoneTransforms);
			}
		}


		

	}



}





bool FAnimNode_DragonWeaponArmSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{

	bool valid_to_perform = true;

	
	for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{
		if (!Hand_Array[i].IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		if (!Elbow_Array[i].IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		if (!Shoulder_Array[i].IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		
	}

	

		return valid_to_perform;

}


// SPLINE IK CODE INITIALIZATION CODE


// SPLINE IK CODE END





FAnimNode_DragonWeaponArmSolver::FAnimNode_DragonWeaponArmSolver()
{


	Lerped_LookatLocation = FVector::ZeroVector;

	


	LookAt_Axis = FVector(0, 1, 0);
	//LookAt_Axis.bInLocalSpace = false;



//	Debug_Hand_Locations.Reset();
//	Debug_Hand_Locations.SetNum(Aiming_Hand_Limbs.Num());
//	Debug_Hand_Locations.AddDefaulted(Aiming_Hand_Limbs.Num());

//	Debug_Hand_Locations.Reset();

	if (Debug_Hand_Locations.Num() == 0)
		ResizeDebugLocations(2);




}




//#if WITH_EDITOR
void FAnimNode_DragonWeaponArmSolver::ResizeDebugLocations(int32 NewSize)
{
	if (NewSize == 0)
	{
		Debug_Hand_Locations.Reset();
	}
	else if (Debug_Hand_Locations.Num() != NewSize)
	{
		int32 StartIndex = Debug_Hand_Locations.Num();
		Debug_Hand_Locations.SetNum(NewSize);

		int pair_finish_count = 1;

		for (int32 Index = StartIndex; Index < Debug_Hand_Locations.Num(); ++Index)
		{
			Debug_Hand_Locations[Index] = FTransform::Identity;

			bool is_even = (Index % 2 == 0);

			if (is_even)
			{
				pair_finish_count++;
			}


			if (is_even)
				Debug_Hand_Locations[Index].SetLocation(FVector(50 * pair_finish_count, 75, 75));
			else
				Debug_Hand_Locations[Index].SetLocation(FVector(-50 * pair_finish_count, 75, 75));



		}
	}
}
//#endif 


void FAnimNode_DragonWeaponArmSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{


	SavedBoneContainer = &RequiredBones;


	solve_should_fail = false;

	inter_frame_counter = 0;

	Internal_Switched_Interpolation_bool = false;
	

	Hand_Array.Empty();
	Elbow_Array.Empty();
	Shoulder_Array.Empty();
	Actual_Shoulder_Array.Empty();

	if (Lerp_HandIK_Transforms.Num() == 0)
		Lerp_HandIK_Transforms.AddDefaulted(Aiming_Hand_Limbs.Num() * 6);

	Last_Shoulder_Angles.Empty();

	Last_Shoulder_Angles.AddDefaulted(Aiming_Hand_Limbs.Num());

	if (Frozen_Target_Transform.Num() == 0)
	Frozen_Target_Transform.AddDefaulted(10);


	if (Frozen_Elbow_Transform.Num() == 0)
		Frozen_Elbow_Transform.AddDefaulted(10);

	if (Frozen_UpperArm_Transform.Num() == 0)
	    Frozen_UpperArm_Transform.AddDefaulted(10);


	//Debug_Hand_Locations.Empty();

	//Debug_Hand_Locations.AddDefaulted(Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num());



	Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.AddDefaulted(Aiming_Hand_Limbs.Num());


	Hand_Weapon_Relative_Transforms.AddDefaulted(Aiming_Hand_Limbs.Num());


	Calculated_Hand_Transforms.AddDefaulted(Aiming_Hand_Limbs.Num());

	Calibration_Status_Array.AddDefaulted(Aiming_Hand_Limbs.Num());

	grab_alpha.Empty();
	grab_alpha.AddDefaulted(Aiming_Hand_Limbs.Num());


	overriding_hand_position_alpha.Empty();
	overriding_hand_position_alpha.AddDefaulted(Aiming_Hand_Limbs.Num());



	overriding_hand_rotation_alpha.Empty();
	overriding_hand_rotation_alpha.AddDefaulted(Aiming_Hand_Limbs.Num());



	arm_array_index_array.Empty();
	arm_array_index_array.AddDefaulted(Aiming_Hand_Limbs.Num() * 6);

//#if WITH_EDITOR
//	ResizeDebugLocations(Aiming_Hand_Limbs.Num());
//#elif
	if (Debug_Hand_Locations.Num() < Aiming_Hand_Limbs.Num())
		ResizeDebugLocations(Aiming_Hand_Limbs.Num());
	//#endif

	for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{
		
		grab_alpha[i] = 1;
		overriding_hand_position_alpha[i] = 0;
		overriding_hand_rotation_alpha[i] = 0;


		Hand_Array.Add(Aiming_Hand_Limbs[i].Hand_Bone_Name);
		Elbow_Array.Add(Aiming_Hand_Limbs[i].Elbow_Bone_Name);
		Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);
		Actual_Shoulder_Array.Add(Aiming_Hand_Limbs[i].Shoulder_Bone_Name);


		Hand_Array[i].Initialize(*SavedBoneContainer);
		Elbow_Array[i].Initialize(*SavedBoneContainer);
		Shoulder_Array[i].Initialize(*SavedBoneContainer);
		Actual_Shoulder_Array[i].Initialize(*SavedBoneContainer);

		Aiming_Hand_Limbs[i].Clavicle_Bone.Initialize(*SavedBoneContainer);
		Aiming_Hand_Limbs[i].Twist_Forearm_Bone.Initialize(*SavedBoneContainer);
		Aiming_Hand_Limbs[i].Twist_Shoulder_Bone.Initialize(*SavedBoneContainer);




		arm_array_index_array[i] = i;
	}

	int arm_index_picker = 0;


	for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{

		int Including_Clavicle = 4;

		if (!Aiming_Hand_Limbs[i].Clavicle_Bone.IsValidToEvaluate())
		{
			Including_Clavicle = 3;
		}

		//for (int j = 0; j < Aiming_Hand_Limbs.Num(); j++)
		for (int j = 0; j < Including_Clavicle; j++)
		{

			arm_array_index_array[arm_index_picker] = i;

			arm_index_picker+=1;

				/*
			{
				arm_array_index_array[i] = j;
				arm_array_index_array[i+1] = j;
				arm_array_index_array[i+2] = j;	
				//arm_array_index_array[i+3] = j;

			}*/

		}
	}


	debug_hands_initialized = true;

	Elbow_Bone_Transform_Array.Empty();
	Hand_Default_Transform_Array.Empty();


	//if (Elbow_Bone_Transform_Array.Num() == 0)
	Elbow_Bone_Transform_Array.AddDefaulted(Aiming_Hand_Limbs.Num());

	//if (Hand_Default_Transform_Array.Num() == 0)
	Hand_Default_Transform_Array.AddDefaulted(Aiming_Hand_Limbs.Num());


	//if (test_counter < 10 && solve_should_fail==false)

	
}



FCollisionQueryParams FAnimNode_DragonWeaponArmSolver::getDefaultSpineColliParams(FName name, AActor* me, bool debug_mode)
{

	const FName TraceTag(name);

	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, me);
	RV_TraceParams.bTraceComplex = true;
	//	RV_TraceParams.bTraceAsyncScene = true;
	RV_TraceParams.bReturnPhysicalMaterial = false;
	RV_TraceParams.TraceTag = TraceTag;

	//	if(debug_mode)
	//	me->GetWorld()->DebugDrawTraceTag = TraceTag;


	return RV_TraceParams;
}







void FAnimNode_DragonWeaponArmSolver::ArmIK_System(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{




	//	if (toggle_alpha > 0.01f)
	{		

		//if (Use_Separate_Targets)
		{
			if (Calculated_Hand_Transforms.Num() > 0 && owning_skel != nullptr)
			{			

				for (int arm_index = 0; arm_index < Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num(); arm_index++)
				{

					//Arm_Transform_Modified *= Hand_Weapon_Relative_Transforms[arm_index];



					if ((Calculated_Hand_Transforms.Num() > arm_index && Hand_Array.Num() > arm_index) && weapon_handler_component != nullptr && weapon_handler_component != NULL)
					{

						if (weapon_handler_component->active_weapon_component != nullptr && weapon_handler_component->active_weapon_component != NULL)
						{
							Calculated_Hand_Transforms[arm_index] = weapon_handler_component->active_weapon_component->GetComponentTransform();

							//Hand_Default_Transform_Array[limb_index]

							//if(Hand_Default_Transform_Array.Num() < arm_index)
							Calculated_Hand_Transforms[arm_index] = MeshBases.GetComponentSpaceTransform(Hand_Array[arm_index].CachedCompactPoseIndex) * owning_skel->GetComponentTransform();


							FTransform weapon_transform = weapon_handler_component->active_weapon_component->GetComponentTransform();
							//weapon_transform.SetRotation(FQuat::Identity);
							weapon_transform.SetScale3D(FVector::OneVector);







							//if (weapon_handler_component->perform_grab_weapon)
							{


								//if (weapon_handler_component->Wep_Offset_Calculated == false)
								if (Calibration_Status_Array[arm_index] == false)
								{
									Hand_Weapon_Relative_Transforms[arm_index] = Calculated_Hand_Transforms[arm_index] * weapon_transform.Inverse();


									Calibration_Status_Array[arm_index] = true;

								
								}

							}



							//WORKS
							//Calculated_Hand_Transforms[arm_index] = Hand_Weapon_Relative_Transforms[arm_index] * weapon_handler_component->active_weapon_component->GetComponentTransform();


							//weapon_transform = weapon_handler_component->last_saved_hand_transform* weapon_transform;
							Calculated_Hand_Transforms[arm_index] = Hand_Weapon_Relative_Transforms[arm_index] * weapon_transform;

						}
					}


					
					
				}
			}
		}




		for (int arm_index = 0; arm_index < Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num(); arm_index++)
		{


			if ((owning_skel->GetWorld()->IsGameWorld()))
			{

				//	Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform.GetLocation();

				if (Debug_Hand_Locations.Num() > arm_index && weapon_handler_component != nullptr)
				{








					FTransform Overriden_Hand_Transform = FTransform::Identity;
					FTransform Modded_Hand_Transform = Calculated_Hand_Transforms[arm_index];


					if (weapon_handler_component->arm_override_transform.Num() > 0)
						Overriden_Hand_Transform = weapon_handler_component->arm_override_transform[arm_index];


					
					//if (should_override_hand_loc)
					{

						Modded_Hand_Transform.SetLocation(UKismetMathLibrary::VLerp(Calculated_Hand_Transforms[arm_index].GetLocation(), Overriden_Hand_Transform.GetLocation(), overriding_hand_position_alpha[arm_index]));

						

					//	Overriden_Hand_Transform.SetLocation(Calculated_Hand_Transforms[arm_index].GetLocation());
					}

					//if (should_override_hand_rot)
					{
					
						//Overriden_Hand_Transform.SetRotation(Calculated_Hand_Transforms[arm_index].GetRotation());
					
						Modded_Hand_Transform.SetRotation(UKismetMathLibrary::RLerp(Calculated_Hand_Transforms[arm_index].Rotator(), Overriden_Hand_Transform.Rotator(), overriding_hand_rotation_alpha[arm_index],true).Quaternion());



					}


					


					/*
					if (should_override_hand_loc || should_override_hand_rot)
					{

						//Modded_Hand_Transform = owning_skel->GetComponentTransform().Inverse() * Modded_Hand_Transform;

						Debug_Hand_Locations[arm_index] = Modded_Hand_Transform;
					}
					else
					Debug_Hand_Locations[arm_index] = Calculated_Hand_Transforms[arm_index];
					*/


					//if (overriding_hand_alpha[arm_index] > 0)
					{
						//Debug_Hand_Locations[arm_index] = UKismetMathLibrary::TLerp(Calculated_Hand_Transforms[arm_index], Modded_Hand_Transform, overriding_hand_position_alpha[arm_index]);
					
						

					}
					//else
					{
					//	Debug_Hand_Locations[arm_index] = Calculated_Hand_Transforms[arm_index];
					}


				//	Debug_Hand_Locations[arm_index] = Calculated_Hand_Transforms[arm_index];

					Debug_Hand_Locations[arm_index] = Modded_Hand_Transform;


					//Debug_Hand_Locations[arm_index] = MeshBases.GetComponentSpaceTransform(Hand_Array[arm_index].CachedCompactPoseIndex) * owning_skel->GetComponentTransform();


				}

			}
			

			
		}






		HandIK_Transforms.Empty();


		bool do_handIK_block = false;

		if ((weapon_handler_component != nullptr && weapon_handler_component != NULL))
		{
			//if(weapon_handler_component->is_grabbing)
			//if(weapon_handler_component->perform_grab_weapon == false)
			 do_handIK_block = true;

		}


		//if (enable_solver)
		//if( (weapon_handler_component != nullptr && weapon_handler_component != NULL) || !owning_skel->GetWorld()->IsGameWorld())
		//if(weapon_handler_component->is_grabbing || !owning_skel->GetWorld()->IsGameWorld())
		if(do_handIK_block || !owning_skel->GetWorld()->IsGameWorld())
		{



			
			FAxis LookatAxis_Temp;
			LookatAxis_Temp.bInLocalSpace = false;
			LookatAxis_Temp.Axis = LookAt_Axis.GetSafeNormal();




			nsew_pole_method = false;

			/*
			if (pole_system_input == EPole_System_DragonIK::ENUM_NSEWPoleSystem)
			{
				nsew_pole_method = true;
			}
			*/
			up_arm_twist_technique = false;

			if (arm_twist_axis == ETwist_Type_DragonIK::ENUM_UpAxisTwist)
			{
				up_arm_twist_technique = true;
			}
			
			{

				
				

				for (int limb_index = 0; limb_index < Aiming_Hand_Limbs.Num(); limb_index++)
				{
					

					if ((Actual_Shoulder_Array[limb_index].IsValidToEvaluate() && Elbow_Array[limb_index].IsValidToEvaluate() && Hand_Array[limb_index].IsValidToEvaluate()))
					{

						if (Elbow_Bone_Transform_Array.Num() > limb_index)
							Elbow_Bone_Transform_Array[limb_index] = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);


						if (Hand_Default_Transform_Array.Num() > limb_index)
							Hand_Default_Transform_Array[limb_index] = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);


						


						FVector Arm_LookTarget = Debug_Hand_Locations[limb_index].GetLocation();

						

						
						//if (Connector_Index.GetInt() > 0)
						{


							FVector Target_CS_Position = owner_skel_w_transform.InverseTransformPosition(Arm_LookTarget);


							

							Target_CS_Position += Aiming_Hand_Limbs[limb_index].Arm_Aiming_Offset;



							


							FTransform  Hand_Transform_Default = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);
							FTransform  Shoulder_Transform_Default = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex);
							FTransform  Knee_Transform_Default = MeshBases.GetComponentSpaceTransform(Elbow_Array[limb_index].CachedCompactPoseIndex);




							FTransform Hand_Transform = MeshBases.GetComponentSpaceTransform(Hand_Array[limb_index].CachedCompactPoseIndex);
							FTransform Shoulder_Transform = MeshBases.GetComponentSpaceTransform(Actual_Shoulder_Array[limb_index].CachedCompactPoseIndex);


							FTransform Shoulder_Offseted_Transform = Shoulder_Transform_Default;
							Shoulder_Offseted_Transform.SetLocation(Shoulder_Transform.GetLocation());

							float Individual_Leg_Clamp = Limbs_Clamp;



							FTransform Shoulder_Transform_Output = Shoulder_Transform_Default;
							FTransform Knee_Transform_Output = Knee_Transform_Default;
							FTransform Hand_Transform_Output = Hand_Transform_Default;

							//Hand_Transform_Output.SetLocation(Target_CS_Position);

							

							
							{



								//FTransform Main_Relative_Transform = FTransform::Identity;
								FTransform Offseted_Hand_Transform = Hand_Transform;


								


								FTransform Hand_Spine_Relation = Hand_Transform_Default;

								FTransform Elbow_Pole_Transform = FTransform::Identity;



								//if (reach_instead)
								{



									Offseted_Hand_Transform.SetLocation(Target_CS_Position);



									Shoulder_Transform_Output = Shoulder_Transform_Default;
									Knee_Transform_Output = Knee_Transform_Default;
									Hand_Transform_Output = Hand_Spine_Relation;

									FVector Point_Thigh_Dir = (Offseted_Hand_Transform.GetLocation() - Shoulder_Transform_Output.GetLocation());

									float Point_Thigh_Size = Point_Thigh_Dir.Size();

									float Effector_Thigh_Size = (Hand_Transform_Output.GetLocation() - Shoulder_Transform_Output.GetLocation()).Size();

									Point_Thigh_Dir.Normalize();

									Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[limb_index].Minimum_Extension), Effector_Thigh_Size * FMath::Abs(Aiming_Hand_Limbs[limb_index].Maximum_Extension)));


									Elbow_Pole_Transform.SetLocation(Aiming_Hand_Limbs[limb_index].Elbow_Pole_Offset);
									//Elbow_Pole_Transform = Elbow_Pole_Transform * Inv_Shoulder_Value;

								}
								


								float Hand_Alpha = 1;


								if (Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num() > limb_index)
								{

									FQuat Hand_Temp_Rot = (Debug_Hand_Locations[limb_index].GetRotation() * Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].rotation_offset.Quaternion());
									Hand_Alpha = Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].Arm_Alpha;

									if (Override_Hand_Rotation)
									{

										if (hand_rotation_method == ERotation_Type_DragonIK::ENUM_AdditiveRotation)
										{
											FQuat Offseted_Rotation_Value = owner_skel_w_transform.GetRotation().Inverse() * Hand_Temp_Rot;

											Offseted_Hand_Transform.SetRotation(Offseted_Rotation_Value);
										}
										else
										{
											Offseted_Hand_Transform.SetRotation(Hand_Temp_Rot);

										}
									}

									Offseted_Hand_Transform = UKismetMathLibrary::TLerp(Hand_Spine_Relation, Offseted_Hand_Transform, Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[limb_index].Arm_Alpha);

								}
							

								FDragonData_ArmSizeStruct custom_arm_temp = FDragonData_ArmSizeStruct();

								ArmIKParamStruct arm_ik_params;
							

								arm_ik_params.mesh_component_transform = owner_skel_w_transform;
								arm_ik_params.FeetBone = Hand_Array[limb_index];
								arm_ik_params.KneeBone = Elbow_Array[limb_index];
								arm_ik_params.ThighBone = Actual_Shoulder_Array[limb_index];
								arm_ik_params.twist_elbow_bone = Aiming_Hand_Limbs[limb_index].Twist_Forearm_Bone;
								arm_ik_params.twist_shoulder_bone = Aiming_Hand_Limbs[limb_index].Twist_Shoulder_Bone;
								//arm_ik_params.ThighTransform = Offseted_Hand_Transform;
								arm_ik_params.Shoulder_Trans = Shoulder_Transform_Output;
								arm_ik_params.Knee_Trans = Knee_Transform_Output;
								arm_ik_params.Hand_Trans = Hand_Transform_Output;
								arm_ik_params.JointLocation = FVector(0, 0, 0);
								arm_ik_params.Knee_Pole_Offset = FVector(0, 0, 0);
								arm_ik_params.transform_offset = FTransform::Identity;
								arm_ik_params.Common_Spine_Modified_Transform = FTransform::Identity;
								arm_ik_params.Limb_Rotation_Offset = Limb_Rotation_Offset;



								arm_ik_params.Hand_Clamp_Value = Individual_Leg_Clamp;
								arm_ik_params.Extra_Hand_Offset = FTransform::Identity;
								arm_ik_params.Elbow_Pole_Offset = Elbow_Pole_Transform.GetLocation();
								arm_ik_params.override_hand_rotation = Override_Hand_Rotation;
								arm_ik_params.Knee_Transform_Default = Knee_Transform_Default;
								arm_ik_params.LookAt_Axis_Input = LookAt_Axis;
								arm_ik_params. Reference_Constant_Forward_Axis_Input = LookAt_Axis;								


								arm_ik_params.Use_NSEW_Poles = nsew_pole_method;
								arm_ik_params.up_arm_twist_technique = up_arm_twist_technique;
								arm_ik_params.Up_Vector_Val = Upward_Axis;
								arm_ik_params.Separate_Arms_Logic_Used = Use_Separate_Targets;
								arm_ik_params.is_reach_mode = reach_instead;
								arm_ik_params.bAllowHandStretching = false;
								arm_ik_params.Let_Arm_Twist_With_Hand = Let_Arm_Twist_With_Hand;
								arm_ik_params.rotation_method = hand_rotation_method;
								arm_ik_params.arm_alpha = Hand_Alpha;
								arm_ik_params.custom_arm_size = custom_arm_temp;

								arm_ik_params.Auto_Calculated_Poles = true;
								
								arm_ik_params.Extra_Elbow_Pole_Offset = FVector::ZeroVector;

								
								if(weapon_handler_component != nullptr)
								{
									if(weapon_handler_component->Frozen_Elbow_Component_Status.Num() > 0)
									arm_ik_params.Is_Frozen_Elbow = weapon_handler_component->Frozen_Elbow_Component_Status[limb_index];


									if(arm_ik_params.Is_Frozen_Elbow == true)
									{
										

									//	arm_ik_params.ThighTransform = Frozen_Target_Transform[limb_index];

										arm_ik_params.ThighTransform = Offseted_Hand_Transform;
										arm_ik_params.Frozen_Elbow_Transform = Frozen_Elbow_Transform[limb_index];
										arm_ik_params.Frozen_UpperArm_Transform = Frozen_UpperArm_Transform[limb_index];
										arm_ik_params.Let_Arm_Twist_With_Hand = false;
									}
									else
									{
										//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " bone : ");

										arm_ik_params.ThighTransform = Offseted_Hand_Transform;
										//arm_ik_params.Frozen_Elbow_Transform = Knee_Transform_Default;
										//arm_ik_params.Frozen_Hand_Transform = Offseted_Hand_Transform;

										Frozen_Elbow_Transform[limb_index] = Knee_Transform_Output;
										Frozen_UpperArm_Transform[limb_index] = Shoulder_Transform_Output;

										
										//Frozen_Target_Transform[limb_index] = Offseted_Hand_Transform;
										//Frozen_Target_Transform[limb_index].SetRotation(FQuat::Identity);
										
										
									}

									
								}
								else
								{
									arm_ik_params.ThighTransform = Offseted_Hand_Transform;
								}
								

								
								

								UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, arm_ik_params,Aiming_Hand_Limbs[limb_index], Last_Shoulder_Angles[limb_index], HandIK_Transforms);


								

								//	UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, Hand_Array[limb_index], Elbow_Array[limb_index], Actual_Shoulder_Array[limb_index], Offseted_Hand_Transform, Shoulder_Transform_Output, Knee_Transform_Output, Hand_Transform_Output, FVector(0, 0, 0), FVector(0, 0, 0), Inv_Common_Spine, Common_Spine_Transform, Limb_Rotation_Offset, Aiming_Hand_Limbs[limb_index].Local_Direction_Axis, Aiming_Hand_Limbs[limb_index].relative_axis, Individual_Leg_Clamp, Aiming_Hand_Limbs[limb_index].accurate_hand_rotation, Main_Relative_Transform, Elbow_Pole_Transform.GetLocation(), Override_Hand_Rotation, Knee_Transform_Default, HandIK_Transforms);

							}
							

						}


					}


				}

			}

		}

	}
}





FVector FAnimNode_DragonWeaponArmSolver::AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds)
{
	FVector start_pos_val = start_pos;
	FVector end_pos_val = end_pos;


	


	FVector vector_difference = (start_pos_val - end_pos_val) / FMath::Clamp<float>(100 - (Interpolation_Speed * delta_seconds * 12), 1, 100);

	FVector output = FVector::ZeroVector;

	if (!Internal_Switched_Interpolation_bool)
	{
		return end_pos;
	}



	if (loc_interp_type == EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp)
		output = (start_pos_val - vector_difference);
	else
		output = UKismetMathLibrary::VInterpTo(start_pos_val, end_pos_val, delta_seconds, 0.5f);

	return output;
}





FTransform FAnimNode_DragonWeaponArmSolver::LookAtAroundPoint(FVector direction, FVector AxisVector, float AngleAxis, FVector origin)
{
	FVector RotateValue = UKismetMathLibrary::RotateAngleAxis(direction, AngleAxis, AxisVector);



	//FVector RotateValue = Dimensions.RotateAngleAxis(AngleAxis, AxisVector);

	origin += RotateValue;

	FTransform result = FTransform();

	result.SetLocation(origin);

	return result;
}




void FAnimNode_DragonWeaponArmSolver::Dragon_VectorCreation(bool isPelvis, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases)
{




}









FVector FAnimNode_DragonWeaponArmSolver::SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed)
{
	float t = delta_seconds_saved * speed;
	FVector v = (targetPosition - pastTargetPosition) / t;
	FVector f = pastPosition - pastTargetPosition + v;
	return targetPosition - v + f * FMath::Exp(-t);
}

FVector FAnimNode_DragonWeaponArmSolver::RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle)
{
	FVector orbit_direction;

	orbit_direction = input_point - origin_point;

	FVector axis_dir = UKismetMathLibrary::RotateAngleAxis(orbit_direction, angle, forward_vector);

	FVector result_vector = input_point + (axis_dir - orbit_direction);

	return result_vector;

}




void FAnimNode_DragonWeaponArmSolver::OrthoNormalize(FVector& Normal, FVector& Tangent)
{
	Normal = Normal.GetSafeNormal();
	Tangent = Tangent - (Normal * FVector::DotProduct(Tangent, Normal));
	Tangent = Tangent.GetSafeNormal();
}

FQuat FAnimNode_DragonWeaponArmSolver::LookRotation(FVector lookAt, FVector upDirection) {

	FVector forward = lookAt;
	FVector up = upDirection;

	OrthoNormalize(forward, up);


	FVector right = FVector::CrossProduct(up, forward);

#define m00 right.X

#define m01 up.X

#define m02 forward.X

#define m10 right.Y

#define m11 up.Y

#define m12 forward.Y

#define m20 right.Z

#define m21 up.Z

#define m22 forward.Z



	float num8 = (m00 + m11) + m22;
	FQuat quaternion = FQuat();
	if (num8 > 0.0f)
	{
		float num = (float)FMath::Sqrt(num8 + 1.0f);
		quaternion.W = num * 0.5f;
		num = 0.5f / num;
		quaternion.X = (m12 - m21) * num;
		quaternion.Y = (m20 - m02) * num;
		quaternion.Z = (m01 - m10) * num;
		return quaternion;
	}
	if ((m00 >= m11) && (m00 >= m22))
	{
		float num7 = (float)FMath::Sqrt(((1.0f + m00) - m11) - m22);
		float num4 = 0.5f / num7;
		quaternion.X = 0.5f * num7;
		quaternion.Y = (m01 + m10) * num4;
		quaternion.Z = (m02 + m20) * num4;
		quaternion.W = (m12 - m21) * num4;
		return quaternion;
	}
	if (m11 > m22)
	{
		float num6 = (float)FMath::Sqrt(((1.0f + m11) - m00) - m22);
		float num3 = 0.5f / num6;
		quaternion.X = (m10 + m01) * num3;
		quaternion.Y = 0.5f * num6;
		quaternion.Z = (m21 + m12) * num3;
		quaternion.W = (m20 - m02) * num3;
		return quaternion;
	}
	float num5 = (float)FMath::Sqrt(((1.0f + m22) - m00) - m11);
	float num2 = 0.5f / num5;
	quaternion.X = (m20 + m02) * num2;
	quaternion.Y = (m21 + m12) * num2;
	quaternion.Z = 0.5f * num5;
	quaternion.W = (m01 - m10) * num2;



#undef m00

#undef m01

#undef m02

#undef m10

#undef m11

#undef m12

#undef m20

#undef m21

#undef m22

	return quaternion;

	//	return ret;

}




FVector FAnimNode_DragonWeaponArmSolver::GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex)
{
	return MeshBases.GetComponentSpaceTransform(BoneIndex).GetLocation();
}

