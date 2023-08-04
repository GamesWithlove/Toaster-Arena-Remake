/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonTwistArmSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"






// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonTwistArmSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	//	ComponentPose.Initialize(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();




	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
}


/*
// Cache the bones . Thats it !!
void FAnimNode_DragonTwistArmSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext & Context)
{
	FAnimNode_Base::CacheBones_AnyThread(Context);
	ComponentPose.CacheBones(Context);
	InitializeBoneReferences(Context.AnimInstanceProxy->GetRequiredBones());
}
*/














// Store the animated and calculated pose transform data
void FAnimNode_DragonTwistArmSolver::GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	
	OutBoneTransforms = TArray<FBoneTransform>();


	{



		



		for (int i = 0; i < HandIK_Transforms.Num(); i++)
		{

			

			//OutBoneTransforms.Add(HandIK_Transforms[i]);

			Lerp_HandIK_Transforms[i].BoneIndex = HandIK_Transforms[i].BoneIndex;


			//FTransform grab_blended_transform = MeshBases.GetComponentSpaceTransform(HandIK_Transforms[i].BoneIndex);

			
			//grab_blended_transform = UKismetMathLibrary::TLerp(grab_blended_transform, HandIK_Transforms[i].Transform);

			



			if (Internal_Switched_Interpolation_bool)
				Lerp_HandIK_Transforms[i].Transform = UKismetMathLibrary::TInterpTo(Lerp_HandIK_Transforms[i].Transform, HandIK_Transforms[i].Transform, delta_seconds_saved, Interpolation_Speed);
			else
						Lerp_HandIK_Transforms[i].Transform = HandIK_Transforms[i].Transform;
				//Lerp_HandIK_Transforms[i].Transform = grab_blended_transform;


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






void FAnimNode_DragonTwistArmSolver::Evaluate_AnyThread(FPoseContext& Output)
{
}





void FAnimNode_DragonTwistArmSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
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
void FAnimNode_DragonTwistArmSolver::UpdateInternal(const FAnimationUpdateContext& Context)
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






FName FAnimNode_DragonTwistArmSolver::GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh)
{

	FName child_bone = skel_mesh->GetBoneName(skel_mesh->GetBoneIndex(BoneName) + 1);

	return child_bone;

}


//Nothing would be needed here
void FAnimNode_DragonTwistArmSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context)
{
}



void FAnimNode_DragonTwistArmSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
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

	if (turn_on_solver)
	{


		TArray<FBoneTransform> BoneTransforms_input = TArray<FBoneTransform>();

		ArmIK_System(Output.Pose, Output, BoneTransforms_input);
		GetAnimatedPoseInfo(Output.Pose, OutBoneTransforms);

	}

}





bool FAnimNode_DragonTwistArmSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{

	bool valid_to_perform = true;

	
	//for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{
		if (!Hand_Input_Info.Hand_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		if (!Hand_Input_Info.Elbow_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		if (!Hand_Input_Info.Shoulder_Bone_Name.IsValidToEvaluate(RequiredBones))
		{
			valid_to_perform = false;
		}

		
	}

	

		return valid_to_perform;

}


// SPLINE IK CODE INITIALIZATION CODE


// SPLINE IK CODE END





FAnimNode_DragonTwistArmSolver::FAnimNode_DragonTwistArmSolver()
{


	Lerped_LookatLocation = FVector::ZeroVector;

	


	LookAt_Axis = FVector(0, 1, 0);
	//LookAt_Axis.bInLocalSpace = false;



//	Debug_Hand_Locations.Reset();
//	Debug_Hand_Locations.SetNum(Aiming_Hand_Limbs.Num());
//	Debug_Hand_Locations.AddDefaulted(Aiming_Hand_Limbs.Num());

//	Debug_Hand_Locations.Reset();

	if (Debug_Hand_Locations.Num() == 0)
		ResizeDebugLocations(1);




}




//#if WITH_EDITOR
void FAnimNode_DragonTwistArmSolver::ResizeDebugLocations(int32 NewSize)
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


void FAnimNode_DragonTwistArmSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{


	SavedBoneContainer = &RequiredBones;


	solve_should_fail = false;

	

	Hand_Array.Empty();
	Elbow_Array.Empty();
	Shoulder_Array.Empty();
	Actual_Shoulder_Array.Empty();

	if (Lerp_HandIK_Transforms.Num() == 0)
		Lerp_HandIK_Transforms.AddDefaulted(6);

	Last_Shoulder_Angles.Empty();

	Last_Shoulder_Angles.AddDefaulted(1);

	


	//Debug_Hand_Locations.Empty();

	//Debug_Hand_Locations.AddDefaulted(Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num());



	//Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.AddDefaulted(Aiming_Hand_Limbs.Num());



//#if WITH_EDITOR
//	ResizeDebugLocations(Aiming_Hand_Limbs.Num());
//#elif
//	if (Debug_Hand_Locations.Num() < Aiming_Hand_Limbs.Num())
		ResizeDebugLocations(1);
	//#endif


	
	//for (int i = 0; i < Aiming_Hand_Limbs.Num(); i++)
	{
			int i = 0;
		
		
		Hand_Input_Info.Hand_Bone_Name.Initialize(*SavedBoneContainer);
		Hand_Input_Info.Elbow_Bone_Name.Initialize(*SavedBoneContainer);
		Hand_Input_Info.Shoulder_Bone_Name.Initialize(*SavedBoneContainer);
		Hand_Input_Info.Clavicle_Bone.Initialize(*SavedBoneContainer);
		Hand_Input_Info.Twist_Forearm_Bone.Initialize(*SavedBoneContainer);
		Hand_Input_Info.Twist_Shoulder_Bone.Initialize(*SavedBoneContainer);



		Hand_Array.Add(Hand_Input_Info.Hand_Bone_Name);
		Elbow_Array.Add(Hand_Input_Info.Elbow_Bone_Name);
		Shoulder_Array.Add(Hand_Input_Info.Shoulder_Bone_Name);
		Actual_Shoulder_Array.Add(Hand_Input_Info.Shoulder_Bone_Name);


		Hand_Array[i].Initialize(*SavedBoneContainer);
		Elbow_Array[i].Initialize(*SavedBoneContainer);
		Shoulder_Array[i].Initialize(*SavedBoneContainer);
		Actual_Shoulder_Array[i].Initialize(*SavedBoneContainer);

		




		
	}

	


	debug_hands_initialized = true;

	Elbow_Bone_Transform_Array.Empty();
	Hand_Default_Transform_Array.Empty();


	//if (Elbow_Bone_Transform_Array.Num() == 0)
	Elbow_Bone_Transform_Array.AddDefaulted(1);

	//if (Hand_Default_Transform_Array.Num() == 0)
	Hand_Default_Transform_Array.AddDefaulted(1);


	//if (test_counter < 10 && solve_should_fail==false)

	
}



FCollisionQueryParams FAnimNode_DragonTwistArmSolver::getDefaultSpineColliParams(FName name, AActor* me, bool debug_mode)
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







void FAnimNode_DragonTwistArmSolver::ArmIK_System(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{




	//	if (toggle_alpha > 0.01f)
	{		

		



		int arm_index = 0;
		//for (int arm_index = 0; arm_index < Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides.Num(); arm_index++)
		{


			//if ((owning_skel->GetWorld()->IsGameWorld()))
			{

				//	Arm_TargetLocation_Overrides.Arm_TargetLocation_Overrides[arm_index].Overrided_Arm_Transform.GetLocation();

				if (Debug_Hand_Locations.Num() > arm_index)
				{


					FTransform Modded_Hand_Transform = target_transform;




					if(Use_Physics_Adaptation)
					{

						
						//PHYSICS RELATED
						int physics_root_bone_index = owning_skel->GetBoneIndex(physics_root_reference);

						if(physics_root_bone_index > -1)
						{
							FTransform pure_transform = (MeshBases.GetComponentSpaceTransform(FCompactPoseBoneIndex(physics_root_bone_index)))*owner_skel_w_transform;
							FTransform existing_transform = owning_skel->GetBoneTransform(physics_root_bone_index);


							//FTransform pure_transform = (MeshBases.GetComponentSpaceTransform(FCompactPoseBoneIndex(Actual_Shoulder_Array[0].CachedCompactPoseIndex)))*owner_skel_w_transform;
							//FTransform existing_transform = owning_skel->GetBoneTransform(Actual_Shoulder_Array[0].CachedCompactPoseIndex.GetInt());

						

							FTransform target_hand_transform = Modded_Hand_Transform;
							Modded_Hand_Transform = existing_transform.Inverse()*pure_transform;
									
							Modded_Hand_Transform = target_hand_transform*Modded_Hand_Transform;
						}
						
						//Modded_Hand_Transform = Modded_Hand_Transform*owner_skel_w_transform.Inverse();
						
					}
					
					

					//if ((owning_skel->GetWorld()->IsGameWorld()))
					//EditorPreview
					if(owning_skel->GetWorld()->WorldType != EWorldType::Editor && owning_skel->GetWorld()->WorldType != EWorldType::EditorPreview)
					Debug_Hand_Locations[arm_index] = Modded_Hand_Transform;

					

					//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " WORD " + owning_skel->GetWorld()->WorldType);

				}

			}
			

			
		}






		HandIK_Transforms.Empty();


		


		//if (enable_solver)
		//if( (weapon_handler_component != nullptr && weapon_handler_component != NULL) || !owning_skel->GetWorld()->IsGameWorld())
		//if(weapon_handler_component->is_grabbing || !owning_skel->GetWorld()->IsGameWorld())
		//if(!owning_skel->GetWorld()->IsGameWorld())
		{



			
			FAxis LookatAxis_Temp;
			LookatAxis_Temp.bInLocalSpace = false;
			LookatAxis_Temp.Axis = LookAt_Axis.GetSafeNormal();




			nsew_pole_method = false;

			
			if (pole_system_input == EPole_System_DragonIK::ENUM_NSEWPoleSystem)
			{
				nsew_pole_method = true;
			}
			
			up_arm_twist_technique = false;

			if (arm_twist_axis == ETwist_Type_DragonIK::ENUM_UpAxisTwist)
			{
				up_arm_twist_technique = true;
			}
			
			{

				
				

				//for (int limb_index = 0; limb_index < Aiming_Hand_Limbs.Num(); limb_index++)
				{
					int limb_index = 0;
					

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


							

							Target_CS_Position += Hand_Input_Info.Arm_Aiming_Offset;



							


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



									if(Use_Physics_Adaptation)
									{
										Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(Hand_Input_Info.Minimum_Extension), Effector_Thigh_Size * 500));
									}
									else
									{
										Offseted_Hand_Transform.SetLocation(Shoulder_Transform_Output.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(Hand_Input_Info.Minimum_Extension), Effector_Thigh_Size * FMath::Abs(Hand_Input_Info.Maximum_Extension)));
									}
									


									Elbow_Pole_Transform.SetLocation(Hand_Input_Info.Elbow_Pole_Offset);
									//Elbow_Pole_Transform = Elbow_Pole_Transform * Inv_Shoulder_Value;

								}
								


								


								if (limb_index == 0)
								{

									FQuat Hand_Temp_Rot = (Debug_Hand_Locations[limb_index].GetRotation() );
									
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


								}



								/*
								{

									//PHYSICS RELATED
									FTransform pure_transform = (MeshBases.GetComponentSpaceTransform(FCompactPoseBoneIndex(1)))*owner_skel_w_transform;
									FTransform existing_transform = owning_skel->GetBoneTransform(1);

									FTransform target_hand_transform = Offseted_Hand_Transform*owner_skel_w_transform;
									Offseted_Hand_Transform = existing_transform.Inverse()*pure_transform;
									
									Offseted_Hand_Transform = target_hand_transform*Offseted_Hand_Transform;
									
									Offseted_Hand_Transform = Offseted_Hand_Transform*owner_skel_w_transform.Inverse();
									
								}
								*/
								
							

								FDragonData_ArmSizeStruct custom_arm_temp = FDragonData_ArmSizeStruct();

								ArmIKParamStruct arm_ik_params;
							

								arm_ik_params.mesh_component_transform = owner_skel_w_transform;
								arm_ik_params.FeetBone = Hand_Array[limb_index];
								arm_ik_params.KneeBone = Elbow_Array[limb_index];
								arm_ik_params.ThighBone = Actual_Shoulder_Array[limb_index];
								arm_ik_params.twist_elbow_bone = Hand_Input_Info.Twist_Forearm_Bone;
								arm_ik_params.twist_shoulder_bone = Hand_Input_Info.Twist_Shoulder_Bone;
								arm_ik_params.ThighTransform = Offseted_Hand_Transform;
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
								arm_ik_params.is_reach_mode = true;
								arm_ik_params.bAllowHandStretching = allow_arm_stretch;
								arm_ik_params.Let_Arm_Twist_With_Hand = Let_Arm_Twist_With_Hand;
								arm_ik_params.rotation_method = hand_rotation_method;
								arm_ik_params.arm_alpha = 1;
								arm_ik_params.custom_arm_size = custom_arm_temp;


								if(pole_system_input == EPole_System_DragonIK::ENUM_PoseBendSystem)
								arm_ik_params.Auto_Calculated_Poles = true;
								else
									arm_ik_params.Auto_Calculated_Poles = false;

								
								arm_ik_params.Extra_Elbow_Pole_Offset = Extra_Elbow_Pole_Offset;

								UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, arm_ik_params, Hand_Input_Info, Last_Shoulder_Angles[limb_index], HandIK_Transforms);




								//	UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(Output, owning_skel, Hand_Array[limb_index], Elbow_Array[limb_index], Actual_Shoulder_Array[limb_index], Offseted_Hand_Transform, Shoulder_Transform_Output, Knee_Transform_Output, Hand_Transform_Output, FVector(0, 0, 0), FVector(0, 0, 0), Inv_Common_Spine, Common_Spine_Transform, Limb_Rotation_Offset, Aiming_Hand_Limbs[limb_index].Local_Direction_Axis, Aiming_Hand_Limbs[limb_index].relative_axis, Individual_Leg_Clamp, Aiming_Hand_Limbs[limb_index].accurate_hand_rotation, Main_Relative_Transform, Elbow_Pole_Transform.GetLocation(), Override_Hand_Rotation, Knee_Transform_Default, HandIK_Transforms);

							}
							

						}


					}


				}

			}

		}

	}
}





FVector FAnimNode_DragonTwistArmSolver::AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds)
{
	FVector start_pos_val = start_pos;
	FVector end_pos_val = end_pos;


	


	FVector vector_difference = (start_pos_val - end_pos_val) / FMath::Clamp<float>(100 - (Interpolation_Speed * delta_seconds * 12), 1, 100);

	FVector output;

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





FTransform FAnimNode_DragonTwistArmSolver::LookAtAroundPoint(FVector direction, FVector AxisVector, float AngleAxis, FVector origin)
{
	FVector RotateValue = UKismetMathLibrary::RotateAngleAxis(direction, AngleAxis, AxisVector);



	//FVector RotateValue = Dimensions.RotateAngleAxis(AngleAxis, AxisVector);

	origin += RotateValue;

	FTransform result = FTransform();

	result.SetLocation(origin);

	return result;
}




void FAnimNode_DragonTwistArmSolver::Dragon_VectorCreation(bool isPelvis, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases)
{




}









FVector FAnimNode_DragonTwistArmSolver::SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed)
{
	float t = delta_seconds_saved * speed;
	FVector v = (targetPosition - pastTargetPosition) / t;
	FVector f = pastPosition - pastTargetPosition + v;
	return targetPosition - v + f * FMath::Exp(-t);
}

FVector FAnimNode_DragonTwistArmSolver::RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle)
{
	FVector orbit_direction;

	orbit_direction = input_point - origin_point;

	FVector axis_dir = UKismetMathLibrary::RotateAngleAxis(orbit_direction, angle, forward_vector);

	FVector result_vector = input_point + (axis_dir - orbit_direction);

	return result_vector;

}




void FAnimNode_DragonTwistArmSolver::OrthoNormalize(FVector& Normal, FVector& Tangent)
{
	Normal = Normal.GetSafeNormal();
	Tangent = Tangent - (Normal * FVector::DotProduct(Tangent, Normal));
	Tangent = Tangent.GetSafeNormal();
}

FQuat FAnimNode_DragonTwistArmSolver::LookRotation(FVector lookAt, FVector upDirection) {

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




FVector FAnimNode_DragonTwistArmSolver::GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex)
{
	return MeshBases.GetComponentSpaceTransform(BoneIndex).GetLocation();
}

