/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonIK_Library.h"
#include "Animation/AnimInstanceProxy.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"
#include "Kismet/KismetMathLibrary.h"



UDragonIK_Library * UDragonIK_Library::Constructor()
{
	return nullptr;
}



FRotator UDragonIK_Library::LookAt_Function(FTransform transform, FVector worldPosition, FVector up_direction, FVector rotationOffset)
{
	FVector diff = (worldPosition - transform.GetLocation()).GetSafeNormal();

	FRotator rotation = CustomLookRotation(diff, up_direction);

	//FRotator result = FRotator(rotation.Quaternion() * FQuat::MakeFromEuler(rotationOffset));

	return rotation;

}










void UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, ArmIKParamStruct arm_ik_params, FDragonData_ArmsData& HandData, float& last_shoulder_angle,TArray<FBoneTransform>& OutBoneTransforms)
{



	//check(OutBoneTransforms.Num() == 0);

	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

	// Get indices of the lower and upper limb bones and check validity.

	FCompactPoseBoneIndex IKBoneCompactPoseIndex = arm_ik_params.FeetBone.GetCompactPoseIndex(BoneContainer);

	FCompactPoseBoneIndex CachedLowerLimbIndex = arm_ik_params.KneeBone.GetCompactPoseIndex(BoneContainer);

	FCompactPoseBoneIndex CachedUpperLimbIndex = arm_ik_params.ThighBone.GetCompactPoseIndex(BoneContainer);


	FCompactPoseBoneIndex CachedClavicleIndex = FCompactPoseBoneIndex(0);

	FTransform clavicle_offset = FTransform::Identity;

	FTransform clavicle_transform = FTransform::Identity;



	if (HandData.Clavicle_Bone.IsValidToEvaluate() && arm_ik_params.Separate_Arms_Logic_Used)
	{
	
		CachedClavicleIndex = HandData.Clavicle_Bone.GetCompactPoseIndex(BoneContainer);

		clavicle_transform = Output.Pose.GetComponentSpaceTransform(CachedClavicleIndex)* arm_ik_params.transform_offset;

	//	FVector clavicle_direction = (clavicle_transform.GetLocation() - Shoulder_Trans.GetLocation()).GetSafeNormal();

		FVector clavicle_direction = (clavicle_transform.GetLocation() - arm_ik_params.Shoulder_Trans.GetLocation()).GetSafeNormal();


		FVector Clavicle_Effector_Direction = (clavicle_transform.GetLocation() - arm_ik_params.ThighTransform.GetLocation()).GetSafeNormal();
		
		FRotator clavicle_rot_difference = FQuat::FindBetweenVectors(clavicle_direction, Clavicle_Effector_Direction).Rotator();


//		clavicle_rot_difference.Yaw = FMath::UnwindDegrees(clavicle_rot_difference.Yaw);

		/*
		float is_right_arm = -1;

		if (HandData.is_this_right_hand)
			is_right_arm = 1;
			*/
		
		clavicle_rot_difference.Pitch = FMath::ClampAngle(clavicle_rot_difference.Pitch, FMath::Abs(HandData.Inner_Clavicle_Vertical_Limit.Y), -FMath::Abs(HandData.Inner_Clavicle_Vertical_Limit.X) );
	//	clavicle_rot_difference.Roll = FMath::ClampAngle(clavicle_rot_difference.Roll, 40, -40);
		clavicle_rot_difference.Yaw = FMath::ClampAngle(clavicle_rot_difference.Yaw, FMath::Abs(HandData.Inner_Clavicle_Side_Limit.X), -FMath::Abs(HandData.Inner_Clavicle_Side_Limit.Y) );

	//	HandData.Inner_Clavicle_Vertical_Limit.X

		if (clavicle_rot_difference.Pitch > 0)
			clavicle_rot_difference.Pitch = clavicle_rot_difference.Pitch - FMath::Abs(HandData.Inner_Clavicle_Vertical_Limit.Y);
		else
			clavicle_rot_difference.Pitch = clavicle_rot_difference.Pitch + FMath::Abs(HandData.Inner_Clavicle_Vertical_Limit.X);


		/*
		if (clavicle_rot_difference.Roll > 0)
			clavicle_rot_difference.Roll = clavicle_rot_difference.Roll - 40;
		else
			clavicle_rot_difference.Roll = clavicle_rot_difference.Roll + 40;
			*/

		
		if (clavicle_rot_difference.Yaw > 0)
			clavicle_rot_difference.Yaw = clavicle_rot_difference.Yaw - FMath::Abs(HandData.Inner_Clavicle_Side_Limit.X);
		else
			clavicle_rot_difference.Yaw = clavicle_rot_difference.Yaw + FMath::Abs(HandData.Inner_Clavicle_Side_Limit.Y);



		HandData.Outer_Clavicle_Side_Limit = FVector2D(FMath::Clamp<float>(HandData.Outer_Clavicle_Side_Limit.X,-179.9f,179.9f), FMath::Clamp<float>(HandData.Outer_Clavicle_Side_Limit.Y, -179.9f, 179.9f));

		
		//outward clamp vertical
		clavicle_rot_difference.Pitch = FMath::ClampAngle(clavicle_rot_difference.Pitch, -FMath::Abs( HandData.Outer_Clavicle_Vertical_Limit.X), FMath::Abs(HandData.Outer_Clavicle_Vertical_Limit.Y) );
	//	clavicle_rot_difference.Roll = FMath::ClampAngle(clavicle_rot_difference.Roll, 0 , 0);

		clavicle_rot_difference.Roll = 0;

		//outward clamp sideways
		clavicle_rot_difference.Yaw = FMath::ClampAngle(clavicle_rot_difference.Yaw, -FMath::Abs(HandData.Outer_Clavicle_Side_Limit.X), FMath::Abs(HandData.Outer_Clavicle_Side_Limit.Y) );
		
	//	clavicle_rot_difference.Yaw = FMath::Clamp<float>(clavicle_rot_difference.Yaw,-180,180);


		if (clavicle_rot_difference.Pitch != -FMath::Abs(HandData.Outer_Clavicle_Vertical_Limit.X) && clavicle_rot_difference.Pitch != FMath::Abs(HandData.Outer_Clavicle_Vertical_Limit.Y))
			HandData.last_clavicle_rotation.Pitch = clavicle_rot_difference.Pitch;

		if(clavicle_rot_difference.Yaw!= -FMath::Abs(HandData.Outer_Clavicle_Side_Limit.X) && clavicle_rot_difference.Yaw != FMath::Abs(HandData.Outer_Clavicle_Side_Limit.Y))
		HandData.last_clavicle_rotation.Yaw = clavicle_rot_difference.Yaw;


		HandData.last_clavicle_rotation.Roll = clavicle_rot_difference.Roll;





	//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " clavicle_rot_difference " + HandData.last_clavicle_rotation.ToString());


		//clavicle_rot_difference = FQuat::Slerp(FQuat::Identity, clavicle_rot_difference.Quaternion(),1.0f).Rotator();

		clavicle_transform.SetRotation(HandData.last_clavicle_rotation.Quaternion()* clavicle_transform.GetRotation());

		clavicle_offset =  Output.Pose.GetComponentSpaceTransform(CachedClavicleIndex).Inverse()* clavicle_transform;

		OutBoneTransforms.Add(FBoneTransform(CachedClavicleIndex, clavicle_transform));


	}

	// Get Local Space transforms for our bones. We do this first in case they already are local.
	// As right after we get them in component space. (And that does the auto conversion).
	// We might save one transform by doing local first...
	const FTransform EndBoneLocalTransform = Output.Pose.GetLocalSpaceTransform(IKBoneCompactPoseIndex);

	// Now get those in component space...
//	FTransform LowerLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex) * transform_offset;
//	FTransform UpperLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex) * transform_offset;
//	FTransform EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex) * transform_offset;


	FTransform LowerLimbCSTransform = arm_ik_params.Knee_Trans;
	FTransform UpperLimbCSTransform = arm_ik_params.Shoulder_Trans;
	FTransform EndBoneCSTransform = arm_ik_params.Hand_Trans;

	if (HandData.Clavicle_Bone.IsValidToEvaluate() && arm_ik_params.Separate_Arms_Logic_Used)
	{
		LowerLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex) * clavicle_offset;

		UpperLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex) * clavicle_offset;

		EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex) * clavicle_offset;

	}

	

	FTransform OriginalElbowTransform = Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex);


	/*
	if(arm_ik_params.Is_Frozen_Elbow == true)
	{


		FTransform inverse_hand_trans = arm_ik_params.ThighTransform*EndBoneCSTransform.Inverse();
		
		OriginalElbowTransform = inverse_hand_trans*OriginalElbowTransform;

		UpperLimbCSTransform = inverse_hand_trans*UpperLimbCSTransform;
		LowerLimbCSTransform =inverse_hand_trans* LowerLimbCSTransform;
		 
	}
	*/

	const FTransform EndBoneCSTransform_Const = Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);


	FTransform EndBoneCSTransform_Always = EndBoneCSTransform_Const;



	EndBoneCSTransform.SetRotation(EndBoneCSTransform_Const.GetRotation());


	// Get current position of root of limb.
	// All position are in Component space.
	const FVector RootPos = UpperLimbCSTransform.GetTranslation();
	const FVector InitialJointPos = LowerLimbCSTransform.GetTranslation();
	const FVector InitialEndPos = EndBoneCSTransform.GetTranslation();

	// Transform EffectorLocation from EffectorLocationSpace to ComponentSpace.
	FTransform EffectorTransform = EndBoneCSTransform;




	FTransform Pole_Orig_Transform = FTransform::Identity;
	Pole_Orig_Transform.SetLocation(arm_ik_params.Elbow_Pole_Offset);

	FTransform Pole_Ref_Transform = FTransform::Identity;
	Pole_Ref_Transform.SetLocation(UpperLimbCSTransform.GetLocation());



	{


		FQuat Pole_Rot_Diff = FQuat::FindBetweenVectors(  (arm_ik_params.ThighTransform.GetLocation()- UpperLimbCSTransform.GetLocation()), (EffectorTransform.GetLocation() - UpperLimbCSTransform.GetLocation()) );
		Pole_Ref_Transform.SetRotation(Pole_Rot_Diff);



		//Pole_Orig_Transform = Pole_Ref_Transform* Pole_Orig_Transform;

		//Pole_Converted_Transform.SetRotation(Pole_Rot_Diff);




	}




	//FAnimationRuntime::ConvertBoneSpaceTransformToCS(InComponentTransform, MeshBases, OutTransform, InTarget.GetCompactPoseBoneIndex(), EBoneControlSpace::BCS_WorldSpace);


	// Get joint target (used for defining plane that joint should be in).
	FTransform JointTargetTransform = LowerLimbCSTransform;




	FQuat Forward_Rotation_Difference = FQuat::FindBetweenNormals(arm_ik_params.LookAt_Axis_Input, arm_ik_params.Reference_Constant_Forward_Axis_Input);

	FTransform FRP_Knee_Transform = FTransform::Identity;
	FRP_Knee_Transform.SetRotation(Forward_Rotation_Difference);

	FTransform Pole_Transform = FTransform::Identity;

	//Pole_Transform.SetLocation(HandData.Elbow_Pole_Offset);

	Pole_Transform.SetLocation(arm_ik_params.Elbow_Pole_Offset);


//OLD	Pole_Transform =   Pole_Transform* FRP_Knee_Transform;


	FVector cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation()) / 3) - (LowerLimbCSTransform.GetLocation() + Pole_Transform.GetLocation() )).GetSafeNormal();


	

	//BendingDirectionTransform.SetLocation(BendingDirectionTransform.GetLocation() + cs_forward *-1000);


//OLD	JointTargetTransform.SetLocation(JointTargetTransform.GetLocation() + (cs_forward * -1000));

//OLD1	JointTargetTransform.SetLocation(JointTargetTransform.GetLocation() + Pole_Transform.GetLocation());


	if (arm_ik_params.is_reach_mode)
	{


		if (arm_ik_params.Use_NSEW_Poles)
		{
			FVector forward_dir = arm_ik_params.LookAt_Axis_Input;

			FVector right_dir = FVector::CrossProduct(arm_ik_params.LookAt_Axis_Input, arm_ik_params.Up_Vector_Val);

			FVector Hand_Shoulder_dir = (arm_ik_params.ThighTransform.GetLocation() - UpperLimbCSTransform.GetLocation()).GetSafeNormal();


			float NS_Alpha = UKismetMathLibrary::DegAcos(FVector::DotProduct(forward_dir, Hand_Shoulder_dir)) / 180;

			float EW_Alpha = UKismetMathLibrary::DegAcos(FVector::DotProduct(right_dir, Hand_Shoulder_dir)) / 180;






			FVector NS_Aggregated_Pole;
			FVector EW_Aggregated_Pole;
			FVector Total_Aggregated_Pole;


			if (HandData.is_this_right_hand)
			{
				NS_Aggregated_Pole = UKismetMathLibrary::VLerp(HandData.North_Pole_Offset * 10, HandData.South_Pole_Offset * 10, EW_Alpha);
				EW_Aggregated_Pole = UKismetMathLibrary::VLerp(HandData.East_Pole_Offset * 10, HandData.West_Pole_Offset * 10, NS_Alpha);
				Total_Aggregated_Pole = (NS_Aggregated_Pole + EW_Aggregated_Pole) / 2;
			}
			else
			{

				NS_Aggregated_Pole = UKismetMathLibrary::VLerp(HandData.South_Pole_Offset * 10, HandData.North_Pole_Offset * 10, EW_Alpha);
				EW_Aggregated_Pole = UKismetMathLibrary::VLerp(HandData.West_Pole_Offset * 10, HandData.East_Pole_Offset * 10, NS_Alpha);
				Total_Aggregated_Pole = (NS_Aggregated_Pole + EW_Aggregated_Pole) / 2;

			}


			JointTargetTransform.SetLocation(Total_Aggregated_Pole);

			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " NS_Alpha : "+FString::SanitizeFloat(NS_Alpha));
			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " EW_Alpha : " + FString::SanitizeFloat(EW_Alpha));



			{

				if (EW_Alpha > 0.5f)
				{

					//	JointTargetTransform.SetLocation(UKismetMathLibrary::VLerp(HandData.North_Pole_Offset, EW_Aggregated_Pole, Side_Forward_Alpha));


					//	JointTargetTransform.SetLocation(UKismetMathLibrary::VLerp(EW_Aggregated_Pole, HandData.East_Pole_Offset, Side_Forward_Alpha));

				}
				//else
				// JointTargetTransform.SetLocation(UKismetMathLibrary::VLerp(EW_Aggregated_Pole, HandData.West_Pole_Offset, Side_Backward_Alpha));


			//	JointTargetTransform.SetLocation(UKismetMathLibrary::VLerp(EW_Aggregated_Pole, HandData.South_Pole_Offset, Side_Backward_Alpha));


			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " NSEW_Alpha -1");

			}



			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " NSEW_Alpha " + FString::SanitizeFloat(NSEW_Alpha));




		}
		else
		{


			JointTargetTransform.SetLocation(OriginalElbowTransform.GetLocation() + Pole_Transform.GetLocation() * 10);



		}

	}
	else
	{
		JointTargetTransform.SetLocation(JointTargetTransform.GetLocation() + cs_forward * -1000);
	}


	if (arm_ik_params.Auto_Calculated_Poles)
	{
		JointTargetTransform.SetLocation(OriginalElbowTransform.GetLocation() + (cs_forward * -10000));
	}


	JointTargetTransform.AddToTranslation(arm_ik_params.Extra_Elbow_Pole_Offset);

	


//	JointTargetTransform.AddToTranslation( FVector(0,0, (EndBoneCSTransform.Inverse()*EndBoneCSTransform_Const).GetLocation().Z*100));


//	JointTargetTransform.SetLocation(Pole_Transform.GetLocation());

//	JointTargetTransform.AddToTranslation(FVector(0,0,500));

//	JointTargetTransform.AddToTranslation(Second_Pole_Transform.GetLocation());





	FVector	JointTargetPos = JointTargetTransform.GetLocation();



	// IK solver
	UpperLimbCSTransform.SetLocation(RootPos);
	//	UpperLimbCSTransform.SetLocation(ThighTransform.GetLocation());

	LowerLimbCSTransform.SetLocation(InitialJointPos);
	EndBoneCSTransform.SetLocation(InitialEndPos);


	// This is our reach goal.
	//FVector DesiredPos = UpperLimbCSTransform.GetTranslation();
	//	FVector DesiredPos = mesh_component_transform.InverseTransformPosition(ThighTransform.GetLocation());
	FVector DesiredPos = arm_ik_params.ThighTransform.GetLocation();

//	FVector Far_Target = (DesiredPos - Common_Spine_Modified_Transform.GetLocation()).GetSafeNormal()*100000;

	FVector Far_Target = arm_ik_params.Common_Spine_Modified_Transform.GetLocation();

	




//	FTransform BS_EndBoneCSTransform = ThighTransform;

//	FTransform BS_OG_EndBoneCSTransform = EndBoneCSTransform_Always;

	

//	FAnimationRuntime::ConvertBoneSpaceTransformToCS(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, BS_EndBoneCSTransform, IKBoneCompactPoseIndex, EBoneControlSpace::BCS_ComponentSpace);

//	FAnimationRuntime::ConvertBoneSpaceTransformToCS(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, BS_OG_EndBoneCSTransform, IKBoneCompactPoseIndex, EBoneControlSpace::BCS_ComponentSpace);


	//FQuat Hand_Difference = BS_OG_EndBoneCSTransform.GetRotation().Inverse()* BS_EndBoneCSTransform.GetRotation();


	//FAnimationRuntime::ConvertCSTransformToBoneSpace(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, BS_EndBoneCSTransform, CachedLowerLimbIndex, EBoneControlSpace::BCS_BoneSpace);


	//

	float wrist_offset = 90;

	if (HandData.is_this_right_hand)
		wrist_offset = -90;

	float clamped_stretch_priority = FMath::Clamp<float>(HandData.Stretch_lower_arm_Priorty,0.f,1.f);



	UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_4(arm_ik_params.custom_arm_size, arm_ik_params.mesh_component_transform, wrist_offset,UpperLimbCSTransform, LowerLimbCSTransform, EndBoneCSTransform, JointTargetPos, DesiredPos, arm_ik_params.bAllowHandStretching,1, HandData.Max_Stretch_Ratio, clamped_stretch_priority *2, arm_ik_params.up_arm_twist_technique);



	//float hand_angle = BS_EndBoneCSTransform.GetRotation().GetTwistAngle( (LowerLimbCSTransform.GetLocation() - EndBoneCSTransform.GetLocation()).GetSafeNormal() );


	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TEST " + FString::SanitizeFloat(hand_angle));





	bool rotate_everything = true;



	









	//LowerLimbCSTransform = LowerLimbLocalTransform * UpperLimbCSTransform;


	
	FRotator input_arm_rot = FRotator::ZeroRotator;



	float roll_limit = 60;



	//FQuat hand_rot_rel_arm = (EndBoneLocalTransform * LowerLimbCSTransform).GetRotation();

	// Update transform for end bone.
	{

		//if (bMaintainEffectorRelRot)
		if (arm_ik_params.override_hand_rotation)
		{



			FTransform Unmodifed_Hand = (EndBoneLocalTransform * LowerLimbCSTransform);
			
			/*
			EndBoneCSTransform.SetRotation( Default_Rot);

			FQuat Ref_Rot = (EndBoneCSTransform.GetLocation() - LowerLimbCSTransform.GetLocation() ).GetSafeNormal().ToOrientationQuat();


			FQuat HandRotQuat = Ref_Rot.Inverse() * Default_Rot;

			FRotator HandRotRot = HandRotQuat.Rotator();

			HandRotRot = ThighTransform.Rotator();

			//HandRotRot.Roll = FMath::Clamp<float>(HandRotRot.Roll,-80,80);

			//HandRotRot.Roll = FMath::ClampAngle(HandRotRot.Roll, -80, 80);
			//HandRotRot.Yaw = FMath::ClampAngle(HandRotRot.Yaw, -80, 80);
			//HandRotRot.Roll = FMath::ClampAngle(HandRotRot.Roll, -80, 80);


			HandRotQuat = Ref_Rot * HandRotRot.Quaternion();

			FQuat Default_New_Difference = Default_Rot.Inverse()*HandRotQuat;
			


			EndBoneCSTransform.SetRotation(Default_New_Difference * EndBoneCSTransform.GetRotation());

		//	EndBoneCSTransform.SetRotation((EndBoneLocalTransform * LowerLimbCSTransform).GetRotation());

			*/



			/*
			FQuat Normal_Quat = (EndBoneLocalTransform * LowerLimbCSTransform).GetRotation();

			FQuat Rotated_Quat = (ThighTransform.GetRotation()* EndBoneCSTransform.GetRotation());

			FQuat Diff_Quat = Rotated_Quat*Normal_Quat.Inverse();

			FRotator Diff_Quat_Rot = Diff_Quat.Rotator();
			Diff_Quat_Rot.Roll = FMath::ClampAngle(Diff_Quat_Rot.Roll,-90,90);
			Diff_Quat_Rot.Pitch = FMath::ClampAngle(Diff_Quat_Rot.Pitch, -90, 90);
			Diff_Quat_Rot.Yaw = FMath::ClampAngle(Diff_Quat_Rot.Yaw, -90, 90);


			Diff_Quat = Diff_Quat_Rot.Quaternion();

			Diff_Quat = Diff_Quat* Normal_Quat;
			*/

			//Diff_Quat = Normal_Quat * Rotated_Quat;



			/*
			if (rotation_method == ERotation_Type_DragonIK::ENUM_AdditiveRotation)
			{

				EndBoneCSTransform.SetRotation(ThighTransform.GetRotation() * EndBoneCSTransform.GetRotation());

			}
			else
			{

				EndBoneCSTransform.SetRotation(ThighTransform.GetRotation());

			}
			*/

		//	FQuat Hand_Rotation_Temporary = ThighTransform.GetRotation();
			FQuat Hand_Rotation_Temporary = arm_ik_params.mesh_component_transform.GetRotation().Inverse() * arm_ik_params.ThighTransform.GetRotation();

			if (arm_ik_params.rotation_method == ERotation_Type_DragonIK::ENUM_AdditiveRotation)
			{

				Hand_Rotation_Temporary = (arm_ik_params.ThighTransform.GetRotation() * EndBoneCSTransform.GetRotation());

			}

			EndBoneCSTransform.SetRotation( FQuat::Slerp(  EndBoneCSTransform.GetRotation(), Hand_Rotation_Temporary, arm_ik_params.arm_alpha));

			


		//	EndBoneCSTransform.SetRotation(ThighTransform.GetRotation() );


		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " ThighTransform " + ThighTransform.Rotator().ToString());


		//	EndBoneCSTransform.SetRotation(Default_Rot);



			input_arm_rot = GetHandYaw(true,HandData, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), LowerLimbCSTransform, EndBoneCSTransform, Unmodifed_Hand, arm_ik_params.Up_Vector_Val);

	


		}
		else
		{

		//EndBoneCSTransform.SetRotation((EndBoneLocalTransform* LowerLimbCSTransform).GetRotation());


			if (arm_ik_params.Extra_Hand_Offset.Equals(FTransform::Identity))
			{
				EndBoneCSTransform.SetRotation( (EndBoneLocalTransform * LowerLimbCSTransform).GetRotation() );
			}
			else
				EndBoneCSTransform.SetRotation(arm_ik_params.Extra_Hand_Offset.GetRotation() * EndBoneCSTransform.GetRotation());
				

		}

		

		


		if (rotate_everything)
		{

			
			if (!HandData.accurate_hand_rotation)
			{
				OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, EndBoneCSTransform));
			}
			else
			{
				FAxis LookAt_Axis;
				LookAt_Axis.bInLocalSpace = !HandData.relative_axis;
				LookAt_Axis.Axis = HandData.Local_Direction_Axis;

				EndBoneCSTransform_Always.SetLocation(EndBoneCSTransform.GetLocation());

				FTransform EndBoneCSTransform_Output = LookAt_Processor(EndBoneCSTransform_Always, EndBoneCSTransform_Always.GetLocation(), Far_Target, LookAt_Axis, arm_ik_params.Hand_Clamp_Value, FRotator(0,0,0),true, 1,1);

				//	EndBoneCSTransform_Output.SetRotation(EndBoneCSTransform_Output.GetRotation() * Limb_Rotation_Offset.Quaternion());

					// Order important. Third bone is End Bone.
				OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, EndBoneCSTransform_Output));
			}

		}

	}


//	FTransform BS_EndBoneCS_Orig_Transform = EndBoneCSTransform_Const;	
	FTransform BS_LowerLimbTransform = LowerLimbCSTransform;

	FTransform BS_UpperLimbTransform = UpperLimbCSTransform;

	FTransform BS_LowerTwistLimbTransform;
	FTransform BS_ShoulderTwistLimbTransform;

	if(arm_ik_params.twist_elbow_bone.IsValidToEvaluate())
	BS_LowerTwistLimbTransform = Output.Pose.GetComponentSpaceTransform(arm_ik_params.twist_elbow_bone.CachedCompactPoseIndex);


	if (arm_ik_params.twist_shoulder_bone.IsValidToEvaluate())
		BS_ShoulderTwistLimbTransform = Output.Pose.GetComponentSpaceTransform(arm_ik_params.twist_shoulder_bone.CachedCompactPoseIndex);
	


	FVector Arm_Direction = (LowerLimbCSTransform.GetLocation() - EndBoneCSTransform.GetLocation()).GetSafeNormal();

	FTransform Reference_Parent = FTransform::Identity;
	Reference_Parent.SetRotation(Arm_Direction.ToOrientationQuat());

	//TEMPORARY
	if (arm_ik_params.Let_Arm_Twist_With_Hand)
	{

		

		if (arm_ik_params.twist_elbow_bone.IsValidToEvaluate())
		{
			FTransform twist_bone_offset = OriginalElbowTransform.Inverse() * BS_LowerLimbTransform;
			BS_LowerTwistLimbTransform = BS_LowerTwistLimbTransform * twist_bone_offset;
			BS_LowerTwistLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, input_arm_rot.Roll, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(arm_ik_params.twist_elbow_bone.CachedCompactPoseIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), BS_LowerTwistLimbTransform, EndBoneCSTransform);
			OutBoneTransforms.Add(FBoneTransform(arm_ik_params.twist_elbow_bone.CachedCompactPoseIndex, BS_LowerTwistLimbTransform));
		}



		BS_LowerLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, input_arm_rot.Roll, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), LowerLimbCSTransform, EndBoneCSTransform);


		float forearm_angle = UKismetMathLibrary::RadiansToDegrees((BS_LowerLimbTransform.GetRotation().Inverse() * LowerLimbCSTransform.GetRotation()).GetAngle());
		forearm_angle = FMath::UnwindDegrees(forearm_angle);
		roll_limit = 70.f;
		forearm_angle = FMath::ClampAngle(forearm_angle, -roll_limit, roll_limit);







		input_arm_rot.Roll = FMath::UnwindDegrees(input_arm_rot.Roll);





		FVector2D Forearm_Limit_Abs = HandData.ForeArm_Angle_Limit;
		Forearm_Limit_Abs.X = FMath::Clamp<float>(FMath::Abs(Forearm_Limit_Abs.X), 0.01f, 179.9f);
		Forearm_Limit_Abs.Y = FMath::Clamp<float>(FMath::Abs(Forearm_Limit_Abs.Y), 0.01f, 179.9f);




		if (Forearm_Limit_Abs.X > 0 && Forearm_Limit_Abs.Y > 0)
		{
			input_arm_rot.Roll = FMath::ClampAngle(input_arm_rot.Roll, -Forearm_Limit_Abs.X, Forearm_Limit_Abs.Y);


			if (input_arm_rot.Roll != -Forearm_Limit_Abs.X && input_arm_rot.Roll != Forearm_Limit_Abs.Y)
			{

				HandData.last_forarm_angle = input_arm_rot.Roll;

			}
		}
		else
		{
			HandData.last_forarm_angle = input_arm_rot.Roll;
		}


		BS_LowerLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, HandData.last_forarm_angle, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), LowerLimbCSTransform, EndBoneCSTransform);


		//DO OPTIONAL TWIST BONE LOGIC HERE



		


	}
	

	FVector Shoulder_Arm_Dir = (UpperLimbCSTransform.GetLocation() - LowerLimbCSTransform.GetLocation()).GetSafeNormal();
	FVector Arm_Hand_Dir = (LowerLimbCSTransform.GetLocation() - EndBoneCSTransform.GetLocation()).GetSafeNormal();

	float Arm_Angle = (1 - 1.5f*(UKismetMathLibrary::DegAcos(FVector::DotProduct(Arm_Hand_Dir,Shoulder_Arm_Dir))/180));



	Arm_Angle = FMath::Clamp<float>(Arm_Angle,0,1);

	FRotator Forearm_Input_Rot = GetHandYaw(false,HandData, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex), Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), BS_UpperLimbTransform, BS_LowerLimbTransform, BS_LowerLimbTransform, arm_ik_params.Up_Vector_Val);

	


	FVector2D Shoulder_Inner_Clamps = HandData.Shoulder_Inner_Clamp;
	Shoulder_Inner_Clamps.X = FMath::Abs(Shoulder_Inner_Clamps.X);
	Shoulder_Inner_Clamps.Y = FMath::Abs(Shoulder_Inner_Clamps.Y);

	
	if (Shoulder_Inner_Clamps.X > 0 && Shoulder_Inner_Clamps.Y > 0)
	{

		Forearm_Input_Rot.Roll = FMath::ClampAngle(Forearm_Input_Rot.Roll, Shoulder_Inner_Clamps.X, -Shoulder_Inner_Clamps.Y);


		if (Forearm_Input_Rot.Roll > 0)
		{
			Forearm_Input_Rot.Roll = Forearm_Input_Rot.Roll - Shoulder_Inner_Clamps.X;
		}
		else
		{
			Forearm_Input_Rot.Roll = Forearm_Input_Rot.Roll + Shoulder_Inner_Clamps.Y;
		}
	}

	


	

	if (arm_ik_params.twist_shoulder_bone.IsValidToEvaluate())
	{
		FTransform twist_bone_offset = Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex).Inverse() * BS_UpperLimbTransform;
		BS_ShoulderTwistLimbTransform = BS_ShoulderTwistLimbTransform * twist_bone_offset;
		BS_ShoulderTwistLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, Forearm_Input_Rot.Roll* Arm_Angle, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(arm_ik_params.twist_shoulder_bone.CachedCompactPoseIndex), Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), BS_ShoulderTwistLimbTransform, LowerLimbCSTransform);
		OutBoneTransforms.Add(FBoneTransform(arm_ik_params.twist_shoulder_bone.CachedCompactPoseIndex, BS_ShoulderTwistLimbTransform));
	}




	FVector2D Shoulder_Outer_Clamps = HandData.Shoulder_Outer_Clamp;
	Shoulder_Outer_Clamps.X = FMath::Clamp<float>(FMath::Abs(Shoulder_Outer_Clamps.X),0.01f,179.9f );
	Shoulder_Outer_Clamps.Y = FMath::Clamp<float>(FMath::Abs(Shoulder_Outer_Clamps.Y), 0.01f, 179.9f );



	

	//Outer clamp
	Forearm_Input_Rot.Roll = FMath::ClampAngle(Forearm_Input_Rot.Roll, -Shoulder_Outer_Clamps.X, Shoulder_Outer_Clamps.Y);



	if (Forearm_Input_Rot.Roll != -Shoulder_Outer_Clamps.X && Forearm_Input_Rot.Roll != Shoulder_Outer_Clamps.Y)
	{

		last_shoulder_angle = Forearm_Input_Rot.Roll;

	}
	


	
	{


		BS_UpperLimbTransform = SetArmYaw(HandData.invert_upper_twist, HandData.is_this_right_hand, last_shoulder_angle * Arm_Angle, arm_ik_params.mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex), Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), BS_UpperLimbTransform, BS_LowerLimbTransform);

		OutBoneTransforms.Add(FBoneTransform(CachedUpperLimbIndex, BS_UpperLimbTransform));

	}





	OutBoneTransforms.Add(FBoneTransform(CachedLowerLimbIndex, BS_LowerLimbTransform));




	// Make sure we have correct number of bones
	//check(OutBoneTransforms.Num() == 3);



}




/*
FTransform UDragonIK_Library::ClampArmTwist(float& roll_limit,float& roll_alpha)
{

	
	FTransform BS_LowerLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, input_arm_rot.Roll, mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), LowerLimbCSTransform, EndBoneCSTransform);


	float forearm_angle = UKismetMathLibrary::RadiansToDegrees((BS_LowerLimbTransform.GetRotation().Inverse() * LowerLimbCSTransform.GetRotation()).GetAngle());
	forearm_angle = FMath::UnwindDegrees(forearm_angle);
	roll_limit = 70.f;
	forearm_angle = FMath::ClampAngle(forearm_angle, -roll_limit, roll_limit);


	if (forearm_angle <= roll_limit)
		roll_alpha = 1;
	else
		roll_alpha = 0;


	float start_clamp = 25;
	float end_clamp = -25;


	input_arm_rot.Roll = FMath::UnwindDegrees(input_arm_rot.Roll);





	FVector2D Forearm_Limit_Abs = HandData.ForeArm_Angle_Limit;
	Forearm_Limit_Abs.X = FMath::Clamp<float>(FMath::Abs(Forearm_Limit_Abs.X), 0.01f, 179.9f);
	Forearm_Limit_Abs.Y = FMath::Clamp<float>(FMath::Abs(Forearm_Limit_Abs.Y), 0.01f, 179.9f);




	if (Forearm_Limit_Abs.X > 0 && Forearm_Limit_Abs.Y > 0)
	{
		input_arm_rot.Roll = FMath::ClampAngle(input_arm_rot.Roll, -Forearm_Limit_Abs.X, Forearm_Limit_Abs.Y);


		if (input_arm_rot.Roll != -Forearm_Limit_Abs.X && input_arm_rot.Roll != Forearm_Limit_Abs.Y)
		{

			HandData.last_forarm_angle = input_arm_rot.Roll;

		}
	}
	else
	{
		HandData.last_forarm_angle = input_arm_rot.Roll;
	}

	
	BS_LowerLimbTransform = SetArmYaw(HandData.invert_lower_twist, HandData.is_this_right_hand, HandData.last_forarm_angle, mesh_component_transform, Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex), Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex), LowerLimbCSTransform, EndBoneCSTransform);


	return BS_LowerLimbTransform;
}
*/






bool UDragonIK_Library::IsBonePhysicsEnabled(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName)
{
	if (!SkeletalMeshComponent || !SkeletalMeshComponent->GetPhysicsAsset())
	{
		return false;
	}


	const int32 BoneIndex = SkeletalMeshComponent->GetBoneIndex(BoneName);
	if (BoneIndex == INDEX_NONE)
	{
		return false;
	}

	const FBodyInstance* BodyInstance = SkeletalMeshComponent->GetBodyInstance(BoneName);
	if (!BodyInstance || !BodyInstance->IsValidBodyInstance())
	{
		return false;
	}

	return true;
}


float UDragonIK_Library::GetBoneLengthBetweenBones(USkeletalMeshComponent* SkeletalMeshComponent, FName StartBoneName, FName EndBoneName)
{
	if (!SkeletalMeshComponent) 
		return 0.f;


	int32 NumBones = SkeletalMeshComponent->GetNumBones();

	int32 StartBoneIndex = SkeletalMeshComponent->GetBoneIndex(StartBoneName);
	if (StartBoneIndex == INDEX_NONE) 
		return 0.f;

	int32 EndBoneIndex = SkeletalMeshComponent->GetBoneIndex(EndBoneName);
	if (EndBoneIndex == INDEX_NONE) 
		return 0.f;

	if (!SkeletalMeshComponent->BoneIsChildOf(EndBoneName, StartBoneName))
		return 0.f;

	float TotalLength = 0.f;
	int32 CurrentBoneIndex = EndBoneIndex;

	FVector PreviousBoneLocation = FVector::ZeroVector;


	for (int32 i = 0; i < NumBones; i++)
	{
		FName BoneInfo = SkeletalMeshComponent->GetBoneName(CurrentBoneIndex);
		FVector BoneTranslation = SkeletalMeshComponent->GetBoneLocation(BoneInfo);

		if (PreviousBoneLocation.Equals(FVector::ZeroVector))
		{
			PreviousBoneLocation = BoneTranslation;
		}

		TotalLength += (BoneTranslation - PreviousBoneLocation).Size();

		if (BoneInfo == StartBoneName)
		{
			break;
		}

		
		CurrentBoneIndex = SkeletalMeshComponent->GetBoneIndex(SkeletalMeshComponent->GetParentBone(BoneInfo));

		if (CurrentBoneIndex == INDEX_NONE)
		{
			break;
		}

		PreviousBoneLocation = BoneTranslation;
	}

	return TotalLength;
}



FTransform UDragonIK_Library::SetArmYaw(bool invert_twist,bool is_right_hand,float roll , FTransform Body_Transform, FTransform original_arm_transform, FTransform original_hand_transform, FTransform current_arm_transform, FTransform current_hand_transform)
{

	FTransform composed_rot = current_arm_transform;

	FTransform Reference_Rot = FTransform::Identity;


	


	//Reference_Rot.SetRotation(UKismetMathLibrary::FindLookAtRotation(current_arm_transform.GetLocation() , current_hand_transform.GetLocation()).Quaternion() );


	Reference_Rot.SetRotation( (current_hand_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal().ToOrientationQuat() );


	composed_rot.SetRotation(Reference_Rot.GetRotation().Inverse() * composed_rot.GetRotation() );

//	composed_rot.SetRotation( FRotator(composed_rot.Rotator().Pitch, composed_rot.Rotator().Yaw,0).Quaternion() );

	//FQuat rotaxis = UKismetMathLibrary::RotatorFromAxisAndAngle( (current_arm_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal(), roll).Quaternion();

	//composed_rot.SetRotation(FRotator(0,0, roll).Quaternion() * composed_rot.GetRotation());


	int inv_twist = 1;

	if (invert_twist)
		inv_twist = -1;

	if(is_right_hand)
	composed_rot.SetRotation(FRotator(0, 0, roll* inv_twist).Quaternion() * composed_rot.GetRotation());
	else
		composed_rot.SetRotation(FRotator(0, 0, roll* inv_twist).Quaternion() * composed_rot.GetRotation());




//	composed_rot.SetRotation(FRotator(composed_rot.Rotator().Pitch, composed_rot.Rotator().Yaw, roll).Quaternion());

	composed_rot.SetRotation(Reference_Rot.GetRotation() * composed_rot.GetRotation());


	
	//composed_rot.SetRotation(UKismetMathLibrary::MakeRelativeTransform(current_hand_transform, current_arm_transform).GetRotation().Inverse() * composed_rot.GetRotation());


	return composed_rot;
}



FRotator UDragonIK_Library::GetHandYaw(bool is_hand_arm,FDragonData_ArmsData& HandData, FTransform Body_Transform,FTransform original_arm_transform,FTransform original_hand_transform, FTransform current_arm_transform, FTransform current_hand_transform, FTransform unmodified_hand_transform,FVector Up_Vector_CS)
{

	FTransform composed_rot = FTransform::Identity;

	/*
	composed_rot.SetRotation(UKismetMathLibrary::MakeRelativeTransform(original_hand_transform, original_arm_transform).GetRotation());
	composed_rot.SetRotation(UKismetMathLibrary::MakeRelativeTransform(current_hand_transform, current_arm_transform).GetRotation().Inverse() * composed_rot.GetRotation());


	composed_rot.SetLocation(current_arm_transform.GetLocation());

	FTransform Current_Reference_Rot = FTransform::Identity;
	Current_Reference_Rot.SetRotation((current_hand_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());

	FTransform Orig_Reference_Rot = FTransform::Identity;
	Orig_Reference_Rot.SetRotation((original_hand_transform.GetLocation() - original_arm_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());

	*/




///////////
	
	FTransform Arm_Forward_Point = current_hand_transform;
	Arm_Forward_Point.SetLocation(current_hand_transform.GetLocation() + (current_hand_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal() * 1000);

	FTransform Inverse_Point_Hand = current_hand_transform.Inverse() * unmodified_hand_transform;

	Arm_Forward_Point = Arm_Forward_Point * Inverse_Point_Hand;

	FVector Arm_Hand_Dir = (current_hand_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal();

	FVector Hand_Point_Dir = (Arm_Forward_Point.GetLocation() - current_hand_transform.GetLocation()).GetSafeNormal();




	float DiffAngle_Forward = UKismetMathLibrary::DegAcos(FVector::DotProduct(Hand_Point_Dir, Arm_Hand_Dir));

	float DiffAngle_Sideward = UKismetMathLibrary::DegAcos(FVector::DotProduct(Hand_Point_Dir, Up_Vector_CS));



//	float DiffAngle_Upward = UKismetMathLibrary::DegAcos(FVector::DotProduct(Arm_Hand_Dir, Arm_Hand_Cross_Dir));



	//DiffAngle_Sideward = FMath::Sign<float>(FVector::CrossProduct(Hand_Point_Dir, Arm_Hand_Cross_Dir).Z)* DiffAngle_Sideward*-1;


//	DiffAngle_Forward = FMath::Clamp<float>(DiffAngle_Forward,80);

//	DiffAngle_Forward = UKismetMathLibrary::NormalizeToRange(DiffAngle_Forward,0,180);


		

////////////


	composed_rot.SetLocation(current_arm_transform.GetLocation());

	FTransform Current_Reference_Rot = FTransform::Identity;



//	if (DiffAngle_Forward < 90)
	{
		Current_Reference_Rot.SetRotation((current_hand_transform.GetLocation() - current_arm_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());
	}
/*	else
	{
		Current_Reference_Rot.SetRotation((current_arm_transform.GetLocation() - current_hand_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());
	}
*/


	FTransform Orig_Reference_Rot = FTransform::Identity;



//	if (DiffAngle_Forward < 90)
	{
		Orig_Reference_Rot.SetRotation((original_hand_transform.GetLocation() - original_arm_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());
	}
/*	else
	{
		Orig_Reference_Rot.SetRotation(( original_arm_transform.GetLocation() - original_hand_transform.GetLocation()).GetSafeNormal().ToOrientationQuat());
	}
*/



	float Forward_Alpha = FMath::Clamp<float>(DiffAngle_Forward, 90, 180);
	Forward_Alpha = UKismetMathLibrary::NormalizeToRange(Forward_Alpha, 90,180);

	Forward_Alpha = Forward_Alpha > 0 ? 1 : 0;

	//float Forward_Alpha2 = FMath::Clamp<float>(DiffAngle_Forward, 180, 90);
	//Forward_Alpha2 = UKismetMathLibrary::NormalizeToRange(Forward_Alpha2, 0, 90);

	FTransform offset_transform_mod = FTransform::Identity;
	offset_transform_mod.SetRotation(FRotator(0,0,-180).Quaternion());
	


	FTransform Orig_Hand_Rel = original_hand_transform *Orig_Reference_Rot.Inverse();
	FTransform Orig_Arm_Rel = original_arm_transform* Orig_Reference_Rot.Inverse();

	FTransform Current_Hand_Rel = current_hand_transform * Current_Reference_Rot.Inverse();
//	FTransform Hand_TLerp = UKismetMathLibrary::TLerp(Current_Hand_Rel, offset_transform_mod*Current_Hand_Rel, Forward_Alpha);

//	Current_Hand_Rel = current_hand_transform * Current_Reference_Rot.Inverse();

	FTransform Current_Arm_Rel = current_arm_transform* Current_Reference_Rot.Inverse();


	//float quat_angle = UKismetMathLibrary::RadiansToDegrees((Orig_Hand_Rel.GetRotation().Inverse() * Current_Hand_Rel.GetRotation()).GetAngle());



//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " DiffAngle_Forward " + FString::SanitizeFloat(DiffAngle_Forward));


	composed_rot.SetRotation((Orig_Hand_Rel.Inverse()*Orig_Arm_Rel).GetRotation());
	composed_rot.SetRotation((Current_Hand_Rel.Inverse()*Current_Arm_Rel).GetRotation().Inverse() * composed_rot.GetRotation());



	float Composed_Roll = composed_rot.Rotator().Roll;



	//DiffAngle_Sideward = FMath::ClampAngle(DiffAngle_Sideward,0,180);

	float Angular_Offset1 = FMath::Clamp<float>(DiffAngle_Sideward, 0, 90);
	Angular_Offset1 = UKismetMathLibrary::NormalizeToRange(Angular_Offset1, 0, 90);


	float Angular_Offset2 = FMath::Clamp<float>(DiffAngle_Sideward, 90, 180);
	Angular_Offset2 = 1 - UKismetMathLibrary::NormalizeToRange(Angular_Offset2, 90, 180);



	if (DiffAngle_Forward < 90)
	{
	//	Composed_Roll = Composed_Roll;
	}
	else
	{


		//Composed_Roll = -Composed_Roll;

		//Composed_Roll = -Composed_Roll + 180;


		/*
		if (side_multiplier > 0.25f)
		{
			Composed_Roll = -Composed_Roll-180;			
		}
		else
		{
			float side_multiplier_alpha = FMath::Clamp<float>(side_multiplier, 0.f, 0.5f);
			side_multiplier_alpha = UKismetMathLibrary::NormalizeToRange(side_multiplier_alpha, 0.f, 0.5f);
		}*/

		//Composed_Roll = -Composed_Roll + (side_multiplier) *180;

		//Composed_Roll = FMath::Lerp<float>(Composed_Roll*0.25f, Composed_Roll, side_multiplier);

		//Composed_Roll = -Composed_Roll - 180;

		Composed_Roll = -Composed_Roll + HandData.Twist_Offset_Reverse;

		//Composed_Roll = FRotator(FRotator(0, 0, HandData.Twist_Offset_Reverse).Quaternion() * FRotator(0, 0, -Composed_Roll).Quaternion() ).Roll;
	

	//180* (1 - Angle_Range_Clamp2)
	}
	

//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Composed_Roll " + FString::SanitizeFloat(Composed_Roll) + " side_multiplier : " + FString::SanitizeFloat(side_multiplier));

//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " DiffAngle_Forward " + FString::SanitizeFloat(DiffAngle_Forward) + " side_multiplier : " + FString::SanitizeFloat(side_multiplier));

	//Composed_Roll = Composed_Roll;


//	if (Angle_Range_Clamp1 > Angle_Range_Clamp2)
//	{
//		Composed_Roll = Composed_Roll * 0.5f;
//	}




//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red," DiffAngle_Forward " + FString::SanitizeFloat(DiffAngle_Forward)+" side_multiplier : "+FString::SanitizeFloat(side_multiplier* direction_sign));



	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Extreme_Angle_Ratio " + FString::SanitizeFloat(Extreme_Angle_Ratio)+" composed_rot "+ FString::SanitizeFloat(composed_rot.Rotator().Roll));


	//composed_rot.SetRotation( UKismetMathLibrary::MakeRelativeTransform(current_hand_transform, current_arm_transform).GetRotation());

	//composed_rot.SetRotation(UKismetMathLibrary::MakeRelativeTransform(current_hand_transform, current_arm_transform).GetRotation());


	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " composed_rot " + composed_rot.Rotator().ToString());

	//float reducer_value = FMath::Max<float>( FMath::Abs(composed_rot.Rotator().Pitch), FMath::Abs(composed_rot.Rotator().Yaw));


	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " reducer_value " + FString::SanitizeFloat(reducer_value));


	if (is_hand_arm)
	{

		//&& (side_multiplier > 0.35f)
		if ( (DiffAngle_Forward < 85 || DiffAngle_Forward > 115))
		{
			HandData.last_hand_rotation.Roll = Composed_Roll;
		}
		else
		{

		//	float InBetween_Clamp = FMath::Clamp<float>(DiffAngle_Sideward, 80, 95);
		//	InBetween_Clamp = UKismetMathLibrary::NormalizeToRange(Angular_Offset1, 80, 95);


		//	FRotator slerped_roll = FQuat::Slerp(FRotator(0, 0, Composed_Roll).Quaternion(), FRotator(0, 0, HandData.last_hand_rotation.Roll).Quaternion(), 0.75f).Rotator();


			return FRotator(0, 0, HandData.last_hand_rotation.Roll);
		}

	}

	//reducer_value = 1;

	return FRotator(0, 0, Composed_Roll);
	//return composed_rot.Rotator();
	/*
	if (DiffAngle_Forward < 90)
	 return FRotator(0,0, Composed_Roll);
	else
		return FRotator(0, 0, 180- Composed_Roll);
		*/

	//return FRotator(0, composed_rot.Rotator().Yaw,0);
}





void UDragonIK_Library::RemoveTwist(const FTransform& InParentTransform, FTransform& InOutTransform, const FTransform& OriginalLocalTransform, const FVector& InAlignVector)
{
		FTransform LocalTransform = InOutTransform.GetRelativeTransform(InParentTransform);
		FQuat LocalRotation = LocalTransform.GetRotation();
		FQuat NewTwist, NewSwing;
		LocalRotation.ToSwingTwist(InAlignVector, NewSwing, NewTwist);
		NewSwing.Normalize();

		// get new twist from old local
		LocalRotation = OriginalLocalTransform.GetRotation();
		FQuat OldTwist, OldSwing;
		LocalRotation.ToSwingTwist(InAlignVector, OldSwing, OldTwist);
		OldTwist.Normalize();

		InOutTransform.SetRotation(InParentTransform.GetRotation() * NewSwing * OldTwist);
		InOutTransform.NormalizeRotation();

}



void UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_4(FDragonData_ArmSizeStruct arm_size_data,FTransform comp_transform, float wrist_rotation, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float stretch_arm_priority,bool up_arm_twist_tech)
{
	float LowerLimbLength = (InOutEndTransform.GetLocation() - InOutJointTransform.GetLocation()).Size();
	float UpperLimbLength = (InOutJointTransform.GetLocation() - InOutRootTransform.GetLocation()).Size();

	if (arm_size_data.Use_Custom_Arm_Sizes)
	{
		LowerLimbLength = arm_size_data.custom_lowerArm_length;
		UpperLimbLength = arm_size_data.custom_upperArm_length;
	}

	Solve_Modified_Direct_TwoBoneIK_3(comp_transform,wrist_rotation,InOutRootTransform, InOutJointTransform, InOutEndTransform, JointTarget, Effector, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale, stretch_arm_priority, up_arm_twist_tech);
}

void UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_3(FTransform comp_transform, float wrist_rotation, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale,float stretch_arm_priority, bool up_arm_twist_tech)
{
	FVector OutJointPos, OutEndPos;

	FVector RootPos = InOutRootTransform.GetLocation();
	FVector JointPos = InOutJointTransform.GetLocation();
	FVector EndPos = InOutEndTransform.GetLocation();

	// IK solver
	Solve_Modified_Direct_TwoBoneIK(RootPos, JointPos, EndPos, JointTarget, Effector, OutJointPos, OutEndPos, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale, stretch_arm_priority);






	// update transform for middle bone
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (EndPos - JointPos).GetSafeNormal();
		FVector const NewDir = (OutEndPos - OutJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
//		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
//		FQuat DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);



	//	FRotator Rot_Ref_01 = UKismetMathLibrary::FindLookAtRotation(EndPos, JointPos);
	//	FRotator Rot_Ref_02 = UKismetMathLibrary::FindLookAtRotation(OutEndPos, OutJointPos);


		FVector up_bone_vector = FVector(0, 0, 1);


		FRotator Rot_Ref_01 = CustomLookRotation((EndPos - JointPos).GetSafeNormal(), up_bone_vector);
		FRotator Rot_Ref_02 = CustomLookRotation((OutEndPos - OutJointPos).GetSafeNormal(), up_bone_vector);





		//FQuat DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		FQuat Delta1 = Rot_Ref_02.Quaternion() * Rot_Ref_01.Quaternion().Inverse();

		FQuat FBNormals = FQuat::FindBetweenNormals(OldDir, NewDir);


	//	FQuat DeltaRotation = Delta1.GetNormalized();

		FQuat DeltaRotation;

		if (up_arm_twist_tech)
		{
			DeltaRotation = Delta1.GetNormalized();
		}
		else
		{
			DeltaRotation = FBNormals.GetNormalized();
		}


		// Rotate our Joint quaternion by this delta rotation
		InOutJointTransform.SetRotation(DeltaRotation * InOutJointTransform.GetRotation());
		//		InOutJointTransform.SetRotation(FQuat::MakeFromEuler( axis_rotation) * InOutJointTransform.GetRotation());


				// And put joint where it should be.
		InOutJointTransform.SetTranslation(OutJointPos);

	}






	// Update transform for upper bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (JointPos - RootPos).GetSafeNormal();
		FVector const NewDir = (OutJointPos - RootPos).GetSafeNormal();
		// Find Delta Rotation take takes us from Old to New dir



	//	FRotator Rot_Ref_01 = UKismetMathLibrary::FindLookAtRotation(JointPos , RootPos);
	//	FRotator Rot_Ref_02 = UKismetMathLibrary::FindLookAtRotation(OutJointPos , RootPos);
		


		FVector up_bone_vector = FVector(0, 0, 1);


	FRotator Rot_Ref_01 = CustomLookRotation((JointPos - RootPos).GetSafeNormal(), up_bone_vector);
	FRotator Rot_Ref_02 = CustomLookRotation((OutJointPos - RootPos).GetSafeNormal(), up_bone_vector);



	FQuat Delta1 = Rot_Ref_02.Quaternion() * Rot_Ref_01.Quaternion().Inverse();



	

	FQuat FBNormals = FQuat::FindBetweenNormals(OldDir, NewDir);

//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " up_arm_angle 1 " + FString::SanitizeFloat(up_arm_angle));

	
	
//	FQuat DeltaRotation = FQuat::Slerp(Delta1, FBNormals, 1);


	FQuat DeltaRotation;

	if (up_arm_twist_tech)
	{
		DeltaRotation = Delta1.GetNormalized();
	}
	else
	{
		DeltaRotation = FBNormals.GetNormalized();
	}

		// Rotate our Joint quaternion by this delta rotation
    InOutRootTransform.SetRotation(DeltaRotation * InOutRootTransform.GetRotation());
		// And put joint where it should be.
    InOutRootTransform.SetTranslation(RootPos);

	}

	

	// Update transform for end bone.
	// currently not doing anything to rotation
	// keeping input rotation
	// Set correct location for end bone.
	InOutEndTransform.SetTranslation(OutEndPos);
}

void UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK_2(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float Forearm_Stretch_Priority)
{
	float LowerLimbLength = (EndPos - JointPos).Size();
	float UpperLimbLength = (JointPos - RootPos).Size();

	Solve_Modified_Direct_TwoBoneIK(RootPos, JointPos, EndPos, JointTarget, Effector, OutJointPos, OutEndPos, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale, Forearm_Stretch_Priority);
}

void UDragonIK_Library::Solve_Modified_Direct_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float Forearm_Stretch_Priority)
{
	// This is our reach goal.
	FVector DesiredPos = Effector;
	FVector DesiredDelta = DesiredPos - RootPos;
	float DesiredLength = DesiredDelta.Size();

	// Find lengths of upper and lower limb in the ref skeleton.
	// Use actual sizes instead of ref skeleton, so we take into account translation and scaling from other bone controllers.
	float MaxLimbLength = LowerLimbLength + UpperLimbLength;

	// Check to handle case where DesiredPos is the same as RootPos.
	FVector	DesiredDir;
	if (DesiredLength < (float)KINDA_SMALL_NUMBER)
	{
		DesiredLength = (float)KINDA_SMALL_NUMBER;
		DesiredDir = FVector(1, 0, 0);
	}
	else
	{
		DesiredDir = DesiredDelta.GetSafeNormal();
	}

	// Get joint target (used for defining plane that joint should be in).
	FVector JointTargetDelta = JointTarget - RootPos;
	const float JointTargetLengthSqr = JointTargetDelta.SizeSquared();

	// Same check as above, to cover case when JointTarget position is the same as RootPos.
	FVector JointPlaneNormal, JointBendDir;
	if (JointTargetLengthSqr < FMath::Square((float)KINDA_SMALL_NUMBER))
	{
		JointBendDir = FVector(0, 1, 0);
		JointPlaneNormal = FVector(0, 0, 1);
	}
	else
	{
		JointPlaneNormal = DesiredDir ^ JointTargetDelta;

		// If we are trying to point the limb in the same direction that we are supposed to displace the joint in, 
		// we have to just pick 2 random vector perp to DesiredDir and each other.
		if (JointPlaneNormal.SizeSquared() < FMath::Square((float)KINDA_SMALL_NUMBER))
		{
			DesiredDir.FindBestAxisVectors(JointPlaneNormal, JointBendDir);
		}
		else
		{
			JointPlaneNormal.Normalize();

			// Find the final member of the reference frame by removing any component of JointTargetDelta along DesiredDir.
			// This should never leave a zero vector, because we've checked DesiredDir and JointTargetDelta are not parallel.
			JointBendDir = JointTargetDelta - ((JointTargetDelta | DesiredDir) * DesiredDir);
			JointBendDir.Normalize();
		}
	}

	//UE_LOG(LogAnimationCore, Log, TEXT("UpperLimb : %0.2f, LowerLimb : %0.2f, MaxLimb : %0.2f"), UpperLimbLength, LowerLimbLength, MaxLimbLength);

	if (bAllowStretching)
	{
		const float ScaleRange = MaxStretchScale - StartStretchRatio;
		if (ScaleRange > KINDA_SMALL_NUMBER&& MaxLimbLength > KINDA_SMALL_NUMBER)
		{
			const float ReachRatio = DesiredLength / MaxLimbLength;
			const float ScalingFactor = (MaxStretchScale - 1.f) * FMath::Clamp<float>((ReachRatio - StartStretchRatio) / ScaleRange, 0.f, 1.f);
			if (ScalingFactor > KINDA_SMALL_NUMBER)
			{
				float Total_Stretch_Priority = 1;

				float UpperLimb_Priority = Forearm_Stretch_Priority;

				float LowerLimb_Priority = Total_Stretch_Priority - UpperLimb_Priority;

				//IF P = 2, THEN IP = -1
				// X+Y = 1. 2+Y = 1. Y = 1-2 = -1

				LowerLimbLength *= (1.f + LowerLimb_Priority *ScalingFactor);

			//	LowerLimbLength *= (1.f - 0.5f*ScalingFactor);

				UpperLimbLength *= (1.f + UpperLimb_Priority *ScalingFactor);
				MaxLimbLength *= (1.f + ScalingFactor);
			}
		}
	}

	OutEndPos = DesiredPos;
	OutJointPos = JointPos;

	// If we are trying to reach a goal beyond the length of the limb, clamp it to something solvable and extend limb fully.
	if (DesiredLength >= MaxLimbLength)
	{
		OutEndPos = RootPos + (MaxLimbLength * DesiredDir);
		OutJointPos = RootPos + (UpperLimbLength * DesiredDir);
	}
	else
	{
		// So we have a triangle we know the side lengths of. We can work out the angle between DesiredDir and the direction of the upper limb
		// using the sin rule:
		const float TwoAB = 2.f * UpperLimbLength * DesiredLength;

		const float CosAngle = (TwoAB != 0.f) ? ((UpperLimbLength * UpperLimbLength) + (DesiredLength * DesiredLength) - (LowerLimbLength * LowerLimbLength)) / TwoAB : 0.f;

		// If CosAngle is less than 0, the upper arm actually points the opposite way to DesiredDir, so we handle that.
		const bool bReverseUpperBone = (CosAngle < 0.f);

		// Angle between upper limb and DesiredDir
		// ACos clamps internally so we dont need to worry about out-of-range values here.
		const float Angle = FMath::Acos(CosAngle);

		// Now we calculate the distance of the joint from the root -> effector line.
		// This forms a right-angle triangle, with the upper limb as the hypotenuse.
		const float JointLineDist = UpperLimbLength * FMath::Sin(Angle);

		// And the final side of that triangle - distance along DesiredDir of perpendicular.
		// ProjJointDistSqr can't be neg, because JointLineDist must be <= UpperLimbLength because appSin(Angle) is <= 1.
		const float ProjJointDistSqr = (UpperLimbLength * UpperLimbLength) - (JointLineDist * JointLineDist);
		// although this shouldn't be ever negative, sometimes Xbox release produces -0.f, causing ProjJointDist to be NaN
		// so now I branch it. 						
		float ProjJointDist = (ProjJointDistSqr > 0.f) ? FMath::Sqrt(ProjJointDistSqr) : 0.f;
		if (bReverseUpperBone)
		{
			ProjJointDist *= -1.f;
		}

		// So now we can work out where to put the joint!
		OutJointPos = RootPos + (ProjJointDist * DesiredDir) + (JointLineDist * JointBendDir);
	}
}







void UDragonIK_Library::Evaluate_TwoBoneIK_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FTransform mesh_component_transform, FBoneReference FeetBone, FBoneReference KneeBone, FBoneReference ThighBone, FTransform ThighTransform,FVector JointLocation,FVector Knee_Pole_Offset, FVector character_forward_direction_vector_CS, FVector poles_forward_direction_vector_CS , TArray<FBoneTransform>& OutBoneTransforms)
{


	if (FeetBone.IsValidToEvaluate() && KneeBone.IsValidToEvaluate() && ThighBone.IsValidToEvaluate())
	{





		//check(OutBoneTransforms.Num() == 0);

		const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

		// Get indices of the lower and upper limb bones and check validity.

		FCompactPoseBoneIndex IKBoneCompactPoseIndex = FeetBone.GetCompactPoseIndex(BoneContainer);

		FCompactPoseBoneIndex CachedLowerLimbIndex = KneeBone.GetCompactPoseIndex(BoneContainer);

		FCompactPoseBoneIndex CachedUpperLimbIndex = ThighBone.GetCompactPoseIndex(BoneContainer);

		//	if (FeetBone.IsValidToEvaluate()&& KneeBone.IsValidToEvaluate() && ThighBone.IsValidToEvaluate())
		//	{





		// Now get those in component space...
		FTransform LowerLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedLowerLimbIndex);
		FTransform UpperLimbCSTransform = Output.Pose.GetComponentSpaceTransform(CachedUpperLimbIndex);

		//	FTransform UpperLimbCSTransform = ThighTransform;	

		FTransform EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);

		// Get current position of root of limb.
		// All position are in Component space.
		const FVector RootPos = UpperLimbCSTransform.GetTranslation();
		const FVector InitialJointPos = LowerLimbCSTransform.GetTranslation();
		const FVector InitialEndPos = EndBoneCSTransform.GetTranslation();



		//FAnimationRuntime::ConvertBoneSpaceTransformToCS(InComponentTransform, MeshBases, OutTransform, InTarget.GetCompactPoseBoneIndex(), EBoneControlSpace::BCS_WorldSpace);


		// Get joint target (used for defining plane that joint should be in).
		FTransform JointTargetTransform = LowerLimbCSTransform;



		//FVector	JointTargetPos = JointLocation;

	/*
		FVector cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation()) / 3) - LowerLimbCSTransform.GetLocation()).GetSafeNormal();
		JointTargetTransform.SetLocation(JointTargetTransform.GetLocation() + (cs_forward * -1000) );
		JointTargetTransform.AddToTranslation(Knee_Pole_Offset);
	*/

		FQuat Forward_Rotation_Difference = FQuat::FindBetweenNormals(character_forward_direction_vector_CS, poles_forward_direction_vector_CS);

		FTransform FRP_Knee_Transform = FTransform::Identity;
		FRP_Knee_Transform.SetRotation(Forward_Rotation_Difference);

		FTransform Pole_Transform = FTransform::Identity;
		Pole_Transform.SetLocation(Knee_Pole_Offset);


		Pole_Transform = Pole_Transform * FRP_Knee_Transform;


		FVector cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation()) / 3) - (LowerLimbCSTransform.GetLocation() + Pole_Transform.GetLocation())).GetSafeNormal();

		JointTargetTransform.SetLocation(JointTargetTransform.GetLocation() + cs_forward * -100);








		FVector	JointTargetPos = JointTargetTransform.GetLocation();


		// IK solver
		UpperLimbCSTransform.SetLocation(RootPos);
		//	UpperLimbCSTransform.SetLocation(ThighTransform.GetLocation());

		LowerLimbCSTransform.SetLocation(InitialJointPos);
		EndBoneCSTransform.SetLocation(InitialEndPos);


		// This is our reach goal.
		//FVector DesiredPos = UpperLimbCSTransform.GetTranslation();
		//	FVector DesiredPos = mesh_component_transform.InverseTransformPosition(ThighTransform.GetLocation());
		FVector DesiredPos = ThighTransform.GetLocation();

		FVector DesiredThighPos = mesh_component_transform.InverseTransformPosition(ThighTransform.GetLocation());



		Solve_Modified_TwoBoneIK_4(EndBoneCSTransform, LowerLimbCSTransform, UpperLimbCSTransform, JointTargetPos, DesiredPos, DesiredThighPos, false, 1, 1);


		// Update transform for upper bone.
		{
			// Order important. First bone is upper limb.
			OutBoneTransforms.Add(FBoneTransform(CachedUpperLimbIndex, UpperLimbCSTransform));
		}

		// Update transform for lower bone.
		{
			// Order important. Second bone is lower limb.
			OutBoneTransforms.Add(FBoneTransform(CachedLowerLimbIndex, LowerLimbCSTransform));
		}

		// Update transform for end bone.
		{

			//if (bMaintainEffectorRelRot)
			{
				//		EndBoneCSTransform = EndBoneLocalTransform * LowerLimbCSTransform;
			}
			// Order important. Third bone is End Bone.
			OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, EndBoneCSTransform));
		}

		// Make sure we have correct number of bones
		//check(OutBoneTransforms.Num() == 3);

	}

}





void Solve_Modified_TwoBoneIK_4(FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector,const FVector& ThighEffector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	float LowerLimbLength = (InOutEndTransform.GetLocation() - InOutJointTransform.GetLocation()).Size();
	float UpperLimbLength = (InOutJointTransform.GetLocation() - InOutRootTransform.GetLocation()).Size();
	Solve_Modified_TwoBoneIK_3(InOutRootTransform, InOutJointTransform, InOutEndTransform, JointTarget, Effector, ThighEffector, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale);
}

void Solve_Modified_TwoBoneIK_3(FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	FVector OutJointPos, OutEndPos;

	FVector RootPos = InOutRootTransform.GetLocation();
	FVector JointPos = InOutJointTransform.GetLocation();
	FVector EndPos = InOutEndTransform.GetLocation();





	// IK solver
	Solve_Modified_TwoBoneIK(RootPos, JointPos, EndPos, JointTarget, Effector, ThighEffector, OutJointPos, OutEndPos, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale);

	//Solve_Modified_TwoBoneIK(EndPos, JointPos,  RootPos, JointTarget, Effector, OutJointPos, OutEndPos, LowerLimbLength , UpperLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale);


	// Update transform for upper bone.
	{

		// Rotate our Joint quaternion by this delta rotation
	//	InOutRootTransform.SetRotation(DeltaRotation * InOutRootTransform.GetRotation());
		// And put joint where it should be.
		InOutRootTransform.SetTranslation(RootPos);

	//	InOutRootTransform.SetTranslation(Const_RootPos.GetLocation());
	//	InOutRootTransform.SetRotation(Const_RootPos.GetRotation());


	}

	// update transform for middle bone
	{
		// Get difference in direction for old and new joint orientations
	//	FVector const OldDir = (EndPos - JointPos).GetSafeNormal();
	//	FVector const NewDir = (OutEndPos - OutJointPos).GetSafeNormal();


		FVector const OldDir = (RootPos - JointPos).GetSafeNormal();
		FVector const NewDir = (RootPos - OutJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation
		InOutJointTransform.SetRotation(DeltaRotation * InOutJointTransform.GetRotation());
		// And put joint where it should be.
		InOutJointTransform.SetTranslation(OutJointPos);

	}

	// Update transform for end bone.
	// currently not doing anything to rotation
	// keeping input rotation
	// Set correct location for end bone.

	{

		FVector const OldDir = (EndPos - JointPos).GetSafeNormal();
		FVector const NewDir = (OutEndPos - OutJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation
		InOutEndTransform.SetRotation(DeltaRotation * InOutEndTransform.GetRotation());

		InOutEndTransform.SetTranslation(OutEndPos);
	}

}

void Solve_Modified_TwoBoneIK_2(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector,const FVector& ThighEffector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	float LowerLimbLength = (EndPos - JointPos).Size();
	float UpperLimbLength = (JointPos - RootPos).Size();

	Solve_Modified_TwoBoneIK(RootPos, JointPos, EndPos, JointTarget, Effector, ThighEffector, OutJointPos, OutEndPos, UpperLimbLength, LowerLimbLength, bAllowStretching, StartStretchRatio, MaxStretchScale);
}

void Solve_Modified_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, FVector& OutJointPos, FVector& OutEndPos, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	// This is our reach goal.
	FVector DesiredPos = Effector;
	FVector DesiredDelta = DesiredPos - RootPos;
	float DesiredLength = DesiredDelta.Size();

	// Find lengths of upper and lower limb in the ref skeleton.
	// Use actual sizes instead of ref skeleton, so we take into account translation and scaling from other bone controllers.
	float MaxLimbLength = LowerLimbLength + UpperLimbLength;

	// Check to handle case where DesiredPos is the same as RootPos.
	FVector	DesiredDir;
	if (DesiredLength < (float)KINDA_SMALL_NUMBER)
	{
		DesiredLength = (float)KINDA_SMALL_NUMBER;
		DesiredDir = FVector(1, 0, 0);
	}
	else
	{
		DesiredDir = DesiredDelta.GetSafeNormal();
	}

	// Get joint target (used for defining plane that joint should be in).
	FVector JointTargetDelta = JointTarget - RootPos;
	const float JointTargetLengthSqr = JointTargetDelta.SizeSquared();

	// Same check as above, to cover case when JointTarget position is the same as RootPos.
	FVector JointPlaneNormal, JointBendDir;
	if (JointTargetLengthSqr < FMath::Square((float)KINDA_SMALL_NUMBER))
	{
		JointBendDir = FVector(0, 1, 0);
		JointPlaneNormal = FVector(0, 0, 1);
	}
	else
	{
		JointPlaneNormal = DesiredDir ^ JointTargetDelta;

		// If we are trying to point the limb in the same direction that we are supposed to displace the joint in, 
		// we have to just pick 2 random vector perp to DesiredDir and each other.
		if (JointPlaneNormal.SizeSquared() < FMath::Square((float)KINDA_SMALL_NUMBER))
		{
			DesiredDir.FindBestAxisVectors(JointPlaneNormal, JointBendDir);
		}
		else
		{
			JointPlaneNormal.Normalize();

			// Find the final member of the reference frame by removing any component of JointTargetDelta along DesiredDir.
			// This should never leave a zero vector, because we've checked DesiredDir and JointTargetDelta are not parallel.
			JointBendDir = JointTargetDelta - ((JointTargetDelta | DesiredDir) * DesiredDir);
			JointBendDir.Normalize();
		}
	}

	//UE_LOG(LogAnimationCore, Log, TEXT("UpperLimb : %0.2f, LowerLimb : %0.2f, MaxLimb : %0.2f"), UpperLimbLength, LowerLimbLength, MaxLimbLength);

	if (bAllowStretching)
	{
		const float ScaleRange = MaxStretchScale - StartStretchRatio;
		if (ScaleRange > KINDA_SMALL_NUMBER&& MaxLimbLength > KINDA_SMALL_NUMBER)
		{
			const float ReachRatio = DesiredLength / MaxLimbLength;
			const float ScalingFactor = (MaxStretchScale - 1.f) * FMath::Clamp<float>((ReachRatio - StartStretchRatio) / ScaleRange, 0.f, 1.f);
			if (ScalingFactor > KINDA_SMALL_NUMBER)
			{
				LowerLimbLength *= (1.f + ScalingFactor);
				UpperLimbLength *= (1.f + ScalingFactor);
				MaxLimbLength *= (1.f + ScalingFactor);
			}
		}
	}

	OutEndPos = DesiredPos;
	OutJointPos = JointPos;

	// If we are trying to reach a goal beyond the length of the limb, clamp it to something solvable and extend limb fully.
	if (DesiredLength >= MaxLimbLength)
	{
		OutEndPos = RootPos + (MaxLimbLength * DesiredDir);
		OutJointPos = RootPos + (UpperLimbLength * DesiredDir);
	}
	else
	{
		// So we have a triangle we know the side lengths of. We can work out the angle between DesiredDir and the direction of the upper limb
		// using the sin rule:
		const float TwoAB = 2.f * UpperLimbLength * DesiredLength;

		const float CosAngle = (TwoAB != 0.f) ? ((UpperLimbLength * UpperLimbLength) + (DesiredLength * DesiredLength) - (LowerLimbLength * LowerLimbLength)) / TwoAB : 0.f;

		// If CosAngle is less than 0, the upper arm actually points the opposite way to DesiredDir, so we handle that.
		const bool bReverseUpperBone = (CosAngle < 0.f);

		// Angle between upper limb and DesiredDir
		// ACos clamps internally so we dont need to worry about out-of-range values here.
		const float Angle = FMath::Acos(CosAngle);

		// Now we calculate the distance of the joint from the root -> effector line.
		// This forms a right-angle triangle, with the upper limb as the hypotenuse.
		const float JointLineDist = UpperLimbLength * FMath::Sin(Angle);

		// And the final side of that triangle - distance along DesiredDir of perpendicular.
		// ProjJointDistSqr can't be neg, because JointLineDist must be <= UpperLimbLength because appSin(Angle) is <= 1.
		const float ProjJointDistSqr = (UpperLimbLength * UpperLimbLength) - (JointLineDist * JointLineDist);
		// although this shouldn't be ever negative, sometimes Xbox release produces -0.f, causing ProjJointDist to be NaN
		// so now I branch it. 						
		float ProjJointDist = (ProjJointDistSqr > 0.f) ? FMath::Sqrt(ProjJointDistSqr) : 0.f;
		if (bReverseUpperBone)
		{
			ProjJointDist *= -1.f;
		}

		// So now we can work out where to put the joint!
		OutJointPos = RootPos + (ProjJointDist * DesiredDir) + (JointLineDist * JointBendDir);
	}
}







bool UDragonIK_Library::Solve_Modified_CCDIK(TArray<FCCDIK_Modified_ChainLink>& InOutChain, const FVector& TargetPosition, float MaximumReach, float Precision, int32 MaxIteration)
{
	

	bool bBoneLocationUpdated = false;
	int32 const NumChainLinks = InOutChain.Num();

	// FABRIK algorithm - bone translation calculation
	// If the effector is further away than the distance from root to tip, simply move all bones in a line from root to effector location

/*	if (RootToTargetDistSq > FMath::Square(MaximumReach))
	{
		for (int32 LinkIndex = 1; LinkIndex < NumChainLinks; LinkIndex++)
		{
			FCCDIK_Modified_ChainLink const& ParentLink = InOutChain[LinkIndex - 1];
			FCCDIK_Modified_ChainLink& CurrentLink = InOutChain[LinkIndex];
			CurrentLink.Position = ParentLink.Position + (TargetPosition - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length;
		}
		bBoneLocationUpdated = true;
	}
	else // Effector is within reach, calculate bone translations to position tip at effector location
	*/
	{
		int32 const TipBoneLinkIndex = NumChainLinks - 1;

		// Check distance between tip location and effector location
		float Slop = FVector::Dist(InOutChain[TipBoneLinkIndex].Position, TargetPosition);
		if (Slop > Precision)
		{
			// Set tip bone at end effector location.
			InOutChain[TipBoneLinkIndex].Position = TargetPosition;

			int32 IterationCount = 0;
			
			//while ((Slop > Precision) && (IterationCount++ < MaxIteration))
			for(IterationCount = 0; IterationCount < MaxIteration; IterationCount ++)
			{
				// "Forward Reaching" stage - adjust bones from end effector.
				for (int32 LinkIndex = TipBoneLinkIndex - 1; LinkIndex > 0; LinkIndex--)
				{
					FCCDIK_Modified_ChainLink& CurrentLink = InOutChain[LinkIndex];
					FCCDIK_Modified_ChainLink const& ChildLink = InOutChain[LinkIndex + 1];


					FTransform ChainTransform = FTransform::Identity;
					ChainTransform.SetLocation(CurrentLink.Position);
					ChainTransform.SetRotation(CurrentLink.BoneRotation);




				//	CurrentLink.Position = ChildLink.Position + clamped_dir.GetUnsafeNormal() * ChildLink.Length;
					CurrentLink.Position = ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length;

					//CurrentLink.Position = SolveJoint(CurrentLink.Position, ChildLink.Position, ChildLink.Length);

					
				//	UDragonIK_Library::LimitFabrikBoneRotations(InOutChain);

				//	LimitForward(LinkIndex, LinkIndex + 1 , InOutChain);
				}


				/*
				// Place tip bone based on how close we got to target.
				{
					FCCDIK_Modified_ChainLink const& ParentLink = InOutChain[TipBoneLinkIndex - 1];
					FCCDIK_Modified_ChainLink& CurrentLink = InOutChain[TipBoneLinkIndex];


					FTransform ChainTransform = FTransform::Identity;
					ChainTransform.SetLocation(CurrentLink.Position);
					ChainTransform.SetRotation(CurrentLink.BoneRotation);


					FVector clamped_dir = UDragonIK_Library::LookAt_Fabrik_Processor(ChainTransform, ParentLink.Position, FVector(0, -1, 0), 70);

					//	CurrentLink.Position = ParentLink.Position + clamped_dir.GetUnsafeNormal() * CurrentLink.Length;
					CurrentLink.Position = ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length;
				}
				*/
			
				//LimitForward(0, 0, InOutChain);

				// "Backward Reaching" stage - adjust bones from root.
				for (int32 LinkIndex = 1; LinkIndex < TipBoneLinkIndex; LinkIndex++)
				{
					FCCDIK_Modified_ChainLink const& ParentLink = InOutChain[LinkIndex - 1];
					FCCDIK_Modified_ChainLink& CurrentLink = InOutChain[LinkIndex];

					FTransform ChainTransform = FTransform::Identity;
					ChainTransform.SetLocation(CurrentLink.Position);
					ChainTransform.SetRotation(CurrentLink.BoneRotation);



				//	CurrentLink.Position = ParentLink.Position + clamped_dir.GetUnsafeNormal() * CurrentLink.Length;
					CurrentLink.Position = ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length;
				//	CurrentLink.Position = SolveJoint(CurrentLink.Position, ParentLink.Position, CurrentLink.Length);

				//	UDragonIK_Library::LimitFabrikBoneRotations(InOutChain);


				//	BackwardReachLimited(TargetPosition,InOutChain);
				}

			

				// Re-check distance between tip location and effector location
				// Since we're keeping tip on top of effector location, check with its parent bone.
				Slop = FMath::Abs(InOutChain[TipBoneLinkIndex].Length - FVector::Dist(InOutChain[TipBoneLinkIndex - 1].Position, TargetPosition));

				
				if (Slop < Precision)
				{
					break;
				}
			}

			//UDragonIK_Library::LimitFabrikBoneRotations(InOutChain);

			

			bBoneLocationUpdated = true;
		}
	}

	return bBoneLocationUpdated;


}





/*
FTransform UDragonIK_Library::GetTargetTransform_Modified(const FTransform& InComponentTransform, FCSPose<FCompactPose>& MeshBases, FBoneSocketTarget& InTarget, const FVector& InOffset)
{
	FTransform OutTransform;
	

	{
		// parent bone space still goes through this way
		// if your target is socket, it will try find parents of joint that socket belongs to
		OutTransform.SetLocation(InOffset);
		FAnimationRuntime::ConvertBoneSpaceTransformToCS(InComponentTransform, MeshBases, OutTransform, InTarget.GetCompactPoseBoneIndex(), EBoneControlSpace::BCS_WorldSpace);
	}

	return OutTransform;
}*/


void UDragonIK_Library::Evaluate_ConsecutiveBoneRotations(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel,FTransform mesh_component_transform, TArray<FDragonData_SpineFeetPair> spine_feet_pair, FRuntimeFloatCurve Look_Bending_Curve, FBoneReference RootBone_Input, FBoneReference TipBone_Input, float Lookat_Radius, FRotator Inner_Body_Clamp, FTransform EffectorTransform, FAxis LookAt_Axis, float Lookat_Clamp, float Vertical_Dip_Treshold, float Downward_Dip_Multiplier, float Inverted_Dip_Multiplier, float Side_Multiplier, float Side_Down_Multiplier, bool alter_pelvis, FTransform PelvisLocTarget, FRuntimeFloatCurve Bending_Multiplier_Curve, float Up_Rot_Clamp, bool use_natural_rotation, bool separate_head_clamp, float head_clamp_value, FTransform HeadTransf, bool head_rot_override, EInputTransformSpace_DragonIK transform_space, TArray<FBoneTransform>& OutBoneTransforms)
{



	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();


	FBoneReference RootBone = FBoneReference(RootBone_Input);
	RootBone.Initialize(BoneContainer);


	FBoneReference TipBone = FBoneReference(TipBone_Input);
	TipBone.Initialize(BoneContainer);



	// Update EffectorLocation if it is based off a bone position
	//FTransform CSEffectorTransform = GetTargetTransform_Modified(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, EffectorTarget, EffectorLocation);

	FTransform CSEffectorTransform = EffectorTransform;

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(mesh_component_transform, Output.Pose, CSEffectorTransform, RootBone.GetCompactPoseIndex(BoneContainer), EBoneControlSpace::BCS_WorldSpace);


	if (transform_space == EInputTransformSpace_DragonIK::ENUM_ComponentSpaceSystem)
	{
		CSEffectorTransform.SetLocation( HeadTransf.GetLocation());
	}

	

	FVector CSEffectorLocation = CSEffectorTransform.GetLocation();



	// Gather all bone indices between root and tip.
	TArray<FCompactPoseBoneIndex> BoneIndices;

	{
		const FCompactPoseBoneIndex RootIndex = RootBone.GetCompactPoseIndex(BoneContainer);
		FCompactPoseBoneIndex BoneIndex = TipBone.GetCompactPoseIndex(BoneContainer);
		do
		{
			BoneIndices.Insert(BoneIndex, 0);
			BoneIndex = Output.Pose.GetPose().GetParentBoneIndex(BoneIndex);

			


		} while (BoneIndex != RootIndex);
		BoneIndices.Insert(BoneIndex, 0);
	}

	// Maximum length of skeleton segment at full extension
	float MaximumReach = 0;

	// Gather transforms
	int32 const NumTransforms = BoneIndices.Num();


	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " NumTransforms " + FString::SanitizeFloat(NumTransforms));


	OutBoneTransforms.AddUninitialized(NumTransforms);

	// Gather chain links. These are non zero length bones.
	TArray<FCCDIK_Modified_ChainLink> Chain;
	Chain.Reserve(NumTransforms);

	// Start with Root Bone
	{
		const FCompactPoseBoneIndex& RootBoneIndex = BoneIndices[0];
		const FTransform& BoneCSTransform = Output.Pose.GetComponentSpaceTransform(RootBoneIndex);

		const FTransform& BoneLocalTransform = Output.Pose.GetComponentSpaceTransform(RootBoneIndex);

		

		OutBoneTransforms[0] = FBoneTransform(RootBoneIndex, BoneCSTransform);
		Chain.Add(FCCDIK_Modified_ChainLink(BoneCSTransform.GetLocation(), BoneLocalTransform.GetLocation(), BoneCSTransform.GetRotation(), 0.f, RootBoneIndex, 0));
	}

	// Go through remaining transforms
	for (int32 TransformIndex = 1; TransformIndex < NumTransforms; TransformIndex++)
	{
		const FCompactPoseBoneIndex& BoneIndex = BoneIndices[TransformIndex];

		const FTransform& BoneCSTransform = Output.Pose.GetComponentSpaceTransform(BoneIndex);

		FTransform BoneLocalTransform = Output.Pose.GetLocalSpaceTransform(BoneIndex);

		FVector const BoneCSPosition = BoneCSTransform.GetLocation();

		OutBoneTransforms[TransformIndex] = FBoneTransform(BoneIndex, BoneCSTransform);

		// Calculate the combined length of this segment of skeleton
		float const BoneLength = FVector::Dist(BoneCSPosition, OutBoneTransforms[TransformIndex - 1].Transform.GetLocation());

		if (!FMath::IsNearlyZero(BoneLength))
		{
			Chain.Add(FCCDIK_Modified_ChainLink(BoneCSPosition, BoneLocalTransform.GetLocation(), BoneCSTransform.GetRotation(), BoneLength, BoneIndex, TransformIndex));
			MaximumReach += BoneLength;
		}
		else
		{
			// Mark this transform as a zero length child of the last link.
			// It will inherit position and delta rotation from parent link.
			FCCDIK_Modified_ChainLink& ParentLink = Chain[Chain.Num() - 1];
			ParentLink.ChildZeroLengthTransformIndices.Add(TransformIndex);
		}
	}

	int32 const NumChainLinks = Chain.Num();



//CLAMP BACKWARDS	CSEffectorLocation.Y = FMath::Clamp<float>( CSEffectorLocation.Y, Chain[Chain.Num() - 1].Position.Y , Chain[Chain.Num() - 1].Position.Y + 1000000);



	//TArray<FRichCurveKey> SteerKeys = Look_Bending_Curve.GetRichCurve()->GetCopyOfKeys();
	
	//SteeringCurve.GetRichCurve()->UpdateOrAddKey(SteerKeys[KeyIdx].Time, NewValue);
	
	
	FTransform Head_Location = Output.Pose.GetComponentSpaceTransform(BoneIndices[BoneIndices.Num()-1]);


	FTransform Pelvis_Location = Output.Pose.GetComponentSpaceTransform(BoneIndices[0]);



	float Up_Length = 0;

	Up_Length = -(CSEffectorLocation.Z - Chain[NumChainLinks - 1].Position.Z);

	Up_Length = FMath::Clamp<float>(Up_Length, -(FMath::Abs(Chain[NumChainLinks - 1].Position.Z*0.5f)), 0);



//	FVector Diff_Pelvis = Pelvis_Location.InverseTransformPosition(PelvisLocTarget.GetLocation());

//	FVector Diff_Pelvis = (Pelvis_Location.Inverse() * PelvisLocTarget).GetLocation();

	FVector Diff_Pelvis = (Pelvis_Location.GetLocation() - PelvisLocTarget.GetLocation());

	FTransform Pelvis_Ref_FullTransform;


	for (int32 LinkIndex = 0; LinkIndex < NumChainLinks; LinkIndex++)
	{

		FCCDIK_Modified_ChainLink const& ChainLink = Chain[LinkIndex];

		float NewValue = Look_Bending_Curve.GetRichCurve()->Eval( (float)LinkIndex/ (float)NumChainLinks);

		float Multiplier_Value =  Bending_Multiplier_Curve.GetRichCurve()->Eval((float)LinkIndex / (float)NumChainLinks);


		FVector Temp_Target_Loc = CSEffectorLocation;


		if (LinkIndex == NumChainLinks - 1)
			Temp_Target_Loc = HeadTransf.GetLocation();

		if (LinkIndex == 0)
		{
			Pelvis_Ref_FullTransform = LookAt_Processor(OutBoneTransforms[0].Transform, Head_Location.GetLocation(), Temp_Target_Loc, LookAt_Axis, 80, Inner_Body_Clamp, use_natural_rotation, 1,1);
		}


		


		const FRotator Original_Rot = OutBoneTransforms[ChainLink.TransformIndex].Transform.Rotator();

		float Lookat_Modified_Clamp = Lookat_Clamp * NewValue;

		float Up_Look_Ratio = Up_Rot_Clamp;

		FRotator Inner_Body_Clamp_Val = Inner_Body_Clamp;


		if (separate_head_clamp)
		{
			if (LinkIndex == NumChainLinks - 1)
			{
				Lookat_Modified_Clamp = head_clamp_value;

				Up_Look_Ratio = 1;

				Inner_Body_Clamp_Val = FRotator(0,0,0);

				Multiplier_Value = 1;
			}

		}



		if (LinkIndex == (NumChainLinks - 1) && head_rot_override )
		{
			OutBoneTransforms[ChainLink.TransformIndex].Transform.SetRotation(CSEffectorTransform.GetRotation() * OutBoneTransforms[ChainLink.TransformIndex].Transform.GetRotation());
			//CSEffectorTransform
		}
		else
		{
			OutBoneTransforms[ChainLink.TransformIndex].Transform = LookAt_Processor(OutBoneTransforms[ChainLink.TransformIndex].Transform, Head_Location.GetLocation(), Temp_Target_Loc, LookAt_Axis, Lookat_Modified_Clamp, Inner_Body_Clamp_Val, use_natural_rotation, Up_Look_Ratio, Multiplier_Value);
		}

		if (LinkIndex == 0)
		{
			/*
			FRotator Inverted_Pelvis_Rot = FRotator(OutBoneTransforms[0].Transform.GetRotation()* Pelvis_Location.GetRotation().Inverse());

			float Side_Angle = Inverted_Pelvis_Rot.Yaw;
			float Vertical_Angle = Inverted_Pelvis_Rot.Roll;

			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TEST "+ Inverted_Pelvis_Rot.ToString());
			*/
		}


		if (alter_pelvis)
		{
			if (LinkIndex == 0)
			{

				//	OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(-Diff_Pelvis);

				OutBoneTransforms[ChainLink.TransformIndex].Transform.SetLocation(PelvisLocTarget.GetLocation());

				OutBoneTransforms[ChainLink.TransformIndex].Transform.SetRotation(Original_Rot.Quaternion() *  PelvisLocTarget.GetRotation());


				Temp_Target_Loc += Diff_Pelvis;
			}
		}




		/*
		//	if (LinkIndex == 0)
		{


			FRotator Inverted_Pelvis_Rot = FRotator(Pelvis_Ref_FullTransform.GetRotation() * Pelvis_Location.GetRotation().Inverse());

			float Side_Angle = -Inverted_Pelvis_Rot.Yaw;
			float Vertical_Angle = FMath::Abs(Inverted_Pelvis_Rot.Roll);


			float Side_Down_Val = FMath::Abs(Side_Angle);

			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TEST " + Inverted_Pelvis_Rot.ToString());

			FVector Right_Dir = FVector::CrossProduct(LookAt_Axis.Axis, FVector::UpVector);


			//	OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(FVector(0, 0, 1) * Up_Length * -Downward_Dip_Multiplier * Vertical_Angle);

			OutBoneTransforms[0].Transform.AddToTranslation(FVector(0, 0, 1) * Downward_Dip_Multiplier * Vertical_Angle);

			OutBoneTransforms[0].Transform.AddToTranslation(Right_Dir * Side_Multiplier * Side_Angle);

			OutBoneTransforms[0].Transform.AddToTranslation(FVector(0, 0, 1) * Side_Down_Multiplier * Side_Down_Val);

			Aim_Pelvis_Diff = OutBoneTransforms[0].Transform.GetLocation() - Pelvis_Ref_FullTransform.GetLocation();

		}
		*/



		/*
		if (alter_pelvis)
		{
			if (LinkIndex == 0)
				OutBoneTransforms[ChainLink.TransformIndex].Transform.SetLocation(PelvisLocTarget.GetLocation() );
		}
		*/


		
	

		FTransform Old_Parent = FTransform();
		FTransform Current_Parent = FTransform();

		if (ChainLink.TransformIndex > 0)
		{
			//Get new parent rotation
			Current_Parent = OutBoneTransforms[ChainLink.TransformIndex - 1].Transform;

			//Get old parent rotation
			const FCompactPoseBoneIndex& Parent_BoneIndex = BoneIndices[ChainLink.TransformIndex - 1];
			Old_Parent = Output.Pose.GetComponentSpaceTransform(Parent_BoneIndex);
		}

		//Get Delta result
		FTransform Parent_Difference = Old_Parent.Inverse() * Current_Parent;

		//compose current child transform with delta parent rotation
	//	if (LinkIndex < NumChainLinks)
		OutBoneTransforms[ChainLink.TransformIndex].Transform.SetLocation( (OutBoneTransforms[ChainLink.TransformIndex].Transform * Parent_Difference).GetLocation() );

	//	OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(Aim_Pelvis_Diff);


		
	}


	FRotator Inverted_Pelvis_Rot = FRotator(Pelvis_Ref_FullTransform.GetRotation() * Pelvis_Location.GetRotation().Inverse());

	float Side_Angle = -Inverted_Pelvis_Rot.Yaw;
	float Vertical_Angle = FMath::Abs(Inverted_Pelvis_Rot.Roll);

//	float Vertical_Angle = 0;

//OLD	if ((NumChainLinks - 1) > 0)
//	Vertical_Angle = FMath::Abs(CSEffectorLocation.Z - OutBoneTransforms[NumChainLinks - 1].Transform.GetLocation().Z);


	Vertical_Angle = FMath::Clamp<float>(Vertical_Angle - Vertical_Dip_Treshold , 0, 1000);


	float vertical_direction_val = 1;

	if ( (NumChainLinks - 1) > 0 )
	vertical_direction_val = CSEffectorLocation.Z > OutBoneTransforms[NumChainLinks - 1].Transform.GetLocation().Z ? 1 : -1;


	float Side_Down_Val = FMath::Abs(Side_Angle);

	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TEST " + Inverted_Pelvis_Rot.ToString());

	FVector Right_Dir = FVector::CrossProduct(LookAt_Axis.Axis, FVector::UpVector);

	for (int32 LinkIndex = 0; LinkIndex < NumChainLinks; LinkIndex++)
	{

		FCCDIK_Modified_ChainLink const& ChainLink = Chain[LinkIndex];

		if(vertical_direction_val == 1)
		OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(FVector(0, 0, 1) * Downward_Dip_Multiplier * Vertical_Angle);
		else
			OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(FVector(0, 0, 1)* Inverted_Dip_Multiplier* Vertical_Angle);


		

		OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(Right_Dir * Side_Multiplier * Side_Angle);
		OutBoneTransforms[ChainLink.TransformIndex].Transform.AddToTranslation(FVector(0, 0, 1) * Side_Down_Multiplier * Side_Down_Val);

	}

}






FVector UDragonIK_Library::LookAt_Fabrik_Processor(FTransform ComponentBoneTransform, FVector Offset_Vector, FVector LookAt_Axis, float Lookat_Clamp)
{

	FVector TargetLocationInComponentSpace = Offset_Vector;

	FAxis LookAt_Axis_Temp;
	LookAt_Axis_Temp.bInLocalSpace = true;
	LookAt_Axis_Temp.Axis = LookAt_Axis;

	// lookat vector
	FVector LookAtVector = LookAt_Axis_Temp.GetTransformedAxis(ComponentBoneTransform).GetSafeNormal();
	//COMPARISON MODE

//	FVector target_dir = (TargetLocationInComponentSpace - ComponentBoneTransform.GetLocation()).GetSafeNormal();

	FVector target_dir = ( ComponentBoneTransform.GetLocation() - TargetLocationInComponentSpace).GetSafeNormal();

	FVector Horizontal_Target_Dir = target_dir;


	float AimClampInRadians_Forward = FMath::DegreesToRadians(FMath::Min(Lookat_Clamp, 180.f));
	float DiffAngle_Forward = FMath::Acos(FVector::DotProduct(LookAtVector, Horizontal_Target_Dir));


	if (DiffAngle_Forward > AimClampInRadians_Forward)
	{
		check(DiffAngle_Forward > 0.f);
		FVector DeltaTarget_Forward = Horizontal_Target_Dir - LookAtVector;
		DeltaTarget_Forward *= (AimClampInRadians_Forward / DiffAngle_Forward);
		Horizontal_Target_Dir = LookAtVector + DeltaTarget_Forward;
		Horizontal_Target_Dir.Normalize();
	}

	//	if(DiffAngle_Forward > AimClampInRadians_Forward)
	return Horizontal_Target_Dir;

}






FTransform UDragonIK_Library::LookAt_Processor(FTransform ComponentBoneTransform, FVector HeadLocation, FVector Offset_Vector, FAxis LookAt_Axis, float Lookat_Clamp, FRotator Inner_Body_Clamp,bool Use_Natural_Method = true, float Up_Rotation_Clamp=1, float intensity=1)
{

	FVector TargetLocationInComponentSpace = Offset_Vector;

	// lookat vector
	FVector LookAtVector = LookAt_Axis.GetTransformedAxis(ComponentBoneTransform).GetSafeNormal();

	//COMPARISON MODE

	FVector target_dir = (TargetLocationInComponentSpace - HeadLocation).GetSafeNormal();

	FVector Horizontal_Target_Dir = target_dir;
//	Horizontal_Target_Dir.Y = 0;
	FVector Opposite_Target_Dir = (HeadLocation - TargetLocationInComponentSpace).GetSafeNormal();
	Opposite_Target_Dir.Y = 0;

	float AimClampInRadians = FMath::DegreesToRadians(FMath::Min(Lookat_Clamp, 180.f));
	float DiffAngle = FMath::Acos(FVector::DotProduct(LookAtVector, Opposite_Target_Dir));

	FVector Selected_Vector = Horizontal_Target_Dir;
	
	if (DiffAngle > AimClampInRadians)
	{
		check(DiffAngle > 0.f);
		FVector DeltaTarget = Opposite_Target_Dir - LookAtVector;
		DeltaTarget *= (AimClampInRadians / DiffAngle);
		Opposite_Target_Dir = LookAtVector + DeltaTarget;
		
		Opposite_Target_Dir.Normalize();
	}


	float AimClampInRadians_Forward = FMath::DegreesToRadians(FMath::Min(Lookat_Clamp, 180.f));
	float DiffAngle_Forward = FMath::Acos(FVector::DotProduct(LookAtVector, Horizontal_Target_Dir));


	if (DiffAngle_Forward > AimClampInRadians_Forward)
	{
		check(DiffAngle_Forward > 0.f);
		FVector DeltaTarget_Forward = Horizontal_Target_Dir - LookAtVector;
		DeltaTarget_Forward *= (AimClampInRadians_Forward / DiffAngle_Forward);
		Horizontal_Target_Dir = LookAtVector + DeltaTarget_Forward;
		Horizontal_Target_Dir.Normalize();
	}

//	if(DiffAngle_Forward > AimClampInRadians_Forward)
	Selected_Vector = Horizontal_Target_Dir;


	Selected_Vector.Z = Selected_Vector.Z * Up_Rotation_Clamp;


//	else
//		Selected_Vector = Horizontal_Target_Dir;


//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " DiffAngle[0] : " +FString::SanitizeFloat(DiffAngle)+" AimClampInRadians : "+ FString::SanitizeFloat(AimClampInRadians));


	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " DiffAngle[0] : " +FString::SanitizeFloat(DiffAngle)+" AimClampInRadians : "+ FString::SanitizeFloat(AimClampInRadians));


	FQuat Normalized_Delta = FQuat::FindBetweenNormals(LookAtVector, Selected_Vector);


	if (!Use_Natural_Method)
	{
		/**/
		//FRotator Rot_Ref_01 = UDragonIK_Library::CustomLookRotation(Selected_Vector, FVector(0, 0, -1));
		//FRotator Rot_Ref_02 = UDragonIK_Library::CustomLookRotation(LookAtVector, FVector(0, 0, -1));
		
	
		
		FRotator Rot_Ref_01 = UKismetMathLibrary::FindLookAtRotation(FVector(0,0,0),Selected_Vector*100);
		FRotator Rot_Ref_02 = UKismetMathLibrary::FindLookAtRotation(FVector(0,0,0),LookAtVector*100);
		Normalized_Delta = Rot_Ref_01.Quaternion()*Rot_Ref_02.Quaternion().Inverse();
		

		/*
		Normalized_Delta = UKismetMathLibrary::NormalizedDeltaRotator(target_dir.ToOrientationRotator(), LookAtVector.ToOrientationRotator()).Quaternion();

		FRotator temp_ND = FRotator(Normalized_Delta);

		if(LookAtVector==FVector(0.0f,1.0f,0.0f))
		Normalized_Delta = FRotator(-temp_ND.Roll, temp_ND.Yaw, - temp_ND.Pitch).Quaternion();
		else
			if (LookAtVector == FVector(0.0f, -1.0f, 0.0f))
				Normalized_Delta = FRotator(temp_ND.Roll, temp_ND.Yaw, temp_ND.Pitch).Quaternion();
			else
				if (LookAtVector == FVector(-1.0f, 0.0f, 0.0f))
					Normalized_Delta = FRotator(-temp_ND.Pitch, temp_ND.Yaw, -temp_ND.Roll).Quaternion();
				else
					if (LookAtVector == FVector(1.0f, 0.0f, 0.0f))
						Normalized_Delta = FRotator(temp_ND.Pitch, temp_ND.Yaw, temp_ND.Roll).Quaternion();
					else
						Normalized_Delta = FRotator(-temp_ND.Roll, temp_ND.Yaw, -temp_ND.Pitch).Quaternion();
						*/
	}

//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Normalized_Delta : " + FRotator(Normalized_Delta).ToString());

	FQuat Normalized_Delta_Ref = FQuat::FindBetweenNormals(LookAtVector, LookAtVector);


	FVector Rot_Euler = Normalized_Delta.Euler();

//	Rot_Euler.X = Rot_Euler.X * Up_Rotation_Clamp;

	
//	if(Up_Rotation_Clamp ==1.0f)
	Rot_Euler.X = FMath::ClampAngle(Rot_Euler.X, -Lookat_Clamp, Lookat_Clamp);

	Rot_Euler.Y = FMath::ClampAngle(Rot_Euler.Y, -Lookat_Clamp, Lookat_Clamp);
	Rot_Euler.Z = FMath::ClampAngle(Rot_Euler.Z, -Lookat_Clamp, Lookat_Clamp);

//	Rot_Euler.Y = 0;
//	Rot_Euler.Z = 0;


	Normalized_Delta = FQuat::MakeFromEuler(Rot_Euler);
	

	Normalized_Delta = FQuat::Slerp(Normalized_Delta_Ref, Normalized_Delta, intensity);


	FTransform World_Rotatation_Transform = ComponentBoneTransform;

	FRotator Normalized_Delta_Rot = Normalized_Delta.Rotator();

	FRotator Inner_Body_Clamp_Abs = Inner_Body_Clamp;
	Inner_Body_Clamp_Abs.Pitch = FMath::Abs( Inner_Body_Clamp_Abs.Pitch);
	Inner_Body_Clamp_Abs.Yaw = FMath::Abs(Inner_Body_Clamp_Abs.Yaw);
	Inner_Body_Clamp_Abs.Roll = FMath::Abs(Inner_Body_Clamp_Abs.Roll);


	if (Inner_Body_Clamp_Abs.Pitch > 0)
	{
		Normalized_Delta_Rot.Pitch = FMath::ClampAngle(Normalized_Delta_Rot.Pitch, Inner_Body_Clamp_Abs.Pitch, -Inner_Body_Clamp_Abs.Pitch);

		if (Normalized_Delta_Rot.Pitch > 0)
			Normalized_Delta_Rot.Pitch = Normalized_Delta_Rot.Pitch - Inner_Body_Clamp_Abs.Pitch;
		else
			Normalized_Delta_Rot.Pitch = Normalized_Delta_Rot.Pitch + Inner_Body_Clamp_Abs.Pitch;
	}


	if (Inner_Body_Clamp_Abs.Roll > 0)
	{
		Normalized_Delta_Rot.Roll = FMath::ClampAngle(Normalized_Delta_Rot.Roll, Inner_Body_Clamp_Abs.Roll, -Inner_Body_Clamp_Abs.Roll);

		if (Normalized_Delta_Rot.Roll > 0)
			Normalized_Delta_Rot.Roll = Normalized_Delta_Rot.Roll - Inner_Body_Clamp_Abs.Roll;
		else
			Normalized_Delta_Rot.Roll = Normalized_Delta_Rot.Roll + Inner_Body_Clamp_Abs.Roll;

	}


	if (Inner_Body_Clamp_Abs.Yaw > 0)
	{

		Normalized_Delta_Rot.Yaw = FMath::ClampAngle(Normalized_Delta_Rot.Yaw, Inner_Body_Clamp_Abs.Yaw, -Inner_Body_Clamp_Abs.Yaw);

		if (Normalized_Delta_Rot.Yaw > 0)
			Normalized_Delta_Rot.Yaw = Normalized_Delta_Rot.Yaw - Inner_Body_Clamp_Abs.Yaw;
		else
			Normalized_Delta_Rot.Yaw = Normalized_Delta_Rot.Yaw + Inner_Body_Clamp_Abs.Yaw;

	}


	World_Rotatation_Transform.SetRotation(Normalized_Delta_Rot.Quaternion());


	ComponentBoneTransform.SetRotation(World_Rotatation_Transform.GetRotation() * ComponentBoneTransform.GetRotation());


	return ComponentBoneTransform;


}

void UDragonIK_Library::Evaluate_CCDIK_Modified(bool First_Start, FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FBoneReference RootBone_Input, FBoneReference TipBone_Input, float Precision, int32 MaxIteration, bool bStartFromTail, bool bEnableRotationLimit, FTransform EffectorTransform, TArray<FBoneTransform>& OutBoneTransforms, TArray<FBoneTransform>& Dulicate_OutBoneTransforms)
{


	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

	// Update EffectorLocation if it is based off a bone position
	FTransform CSEffectorTransform = EffectorTransform;
	//CSEffectorTransform = GetTargetTransform(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, EffectorTarget, EffectorTransformSpace, EffectorTransform);

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(Output.AnimInstanceProxy->GetComponentTransform(), Output.Pose, CSEffectorTransform, RootBone_Input.GetCompactPoseIndex(BoneContainer), EBoneControlSpace::BCS_WorldSpace);

	FVector const CSEffectorLocation = CSEffectorTransform.GetLocation();


	// Gather all bone indices between root and tip.
	TArray<FCompactPoseBoneIndex> BoneIndices;

	{
		const FCompactPoseBoneIndex RootIndex = RootBone_Input.GetCompactPoseIndex(BoneContainer);
		FCompactPoseBoneIndex BoneIndex = TipBone_Input.GetCompactPoseIndex(BoneContainer);
		do
		{
			BoneIndices.Insert(BoneIndex, 0);
			BoneIndex = Output.Pose.GetPose().GetParentBoneIndex(BoneIndex);
		} while (BoneIndex != RootIndex);
		BoneIndices.Insert(BoneIndex, 0);
	}

	// Maximum length of skeleton segment at full extension
	float MaximumReach = 0;

	// Gather transforms
	int32 const NumTransforms = BoneIndices.Num();

	if(First_Start)
	OutBoneTransforms.AddUninitialized(NumTransforms);

	// Gather chain links. These are non zero length bones.
	TArray<FCCDIK_Modified_ChainLink> Chain;
	Chain.Reserve(NumTransforms);

	// Start with Root Bone
	{
		const FCompactPoseBoneIndex& RootBoneIndex = BoneIndices[0];
		FTransform BoneCSTransform = Output.Pose.GetComponentSpaceTransform(RootBoneIndex);

		FTransform BoneLocalTransform = Output.Pose.GetLocalSpaceTransform(RootBoneIndex);


		if (!First_Start)
		{
			BoneCSTransform = OutBoneTransforms[0].Transform;
		}

		OutBoneTransforms[0] = FBoneTransform(RootBoneIndex, BoneCSTransform);
		Chain.Add(FCCDIK_Modified_ChainLink(BoneCSTransform.GetLocation(), BoneLocalTransform.GetLocation(), BoneCSTransform.GetRotation(), 0.f, RootBoneIndex, 0));

	}

	// Go through remaining transforms
	for (int32 TransformIndex = 1; TransformIndex < NumTransforms; TransformIndex++)
	{
		const FCompactPoseBoneIndex& BoneIndex = BoneIndices[TransformIndex];

		FTransform BoneCSTransform = Output.Pose.GetComponentSpaceTransform(BoneIndex);

		FTransform BoneLocalTransform = Output.Pose.GetLocalSpaceTransform(BoneIndex);


		if (!First_Start)
		{
			BoneCSTransform = OutBoneTransforms[TransformIndex].Transform;
		}


		FVector const BoneCSPosition = BoneCSTransform.GetLocation();


		OutBoneTransforms[TransformIndex] = FBoneTransform(BoneIndex, BoneCSTransform);



		// Calculate the combined length of this segment of skeleton
		float const BoneLength = FVector::Dist(BoneCSPosition, OutBoneTransforms[TransformIndex - 1].Transform.GetLocation());

		if (!FMath::IsNearlyZero(BoneLength))
		{
			Chain.Add(FCCDIK_Modified_ChainLink(BoneCSPosition, BoneLocalTransform.GetLocation(), BoneCSTransform.GetRotation(), BoneLength, BoneIndex, TransformIndex));
			MaximumReach += BoneLength;
		}
		else
		{
			// Mark this transform as a zero length child of the last link.
			// It will inherit position and delta rotation from parent link.
			FCCDIK_Modified_ChainLink& ParentLink = Chain[Chain.Num() - 1];
			ParentLink.ChildZeroLengthTransformIndices.Add(TransformIndex);
		}
	}


	for (int32 ix = 0; ix < Chain.Num() - 1; ix++)
	{
		Chain[ix].axis = (OutBoneTransforms[ix].Transform.GetRotation().Inverse()) * (OutBoneTransforms[ix + 1].Transform.GetLocation() - OutBoneTransforms[ix].Transform.GetLocation());
	}

	int32 const NumChainLinks = Chain.Num();
	bool bBoneLocationUpdated = Solve_Modified_CCDIK(Chain, CSEffectorLocation, MaximumReach, Precision, MaxIteration);


	// If we moved some bones, update bone transforms.
	if (bBoneLocationUpdated)
	{
		// First step: update bone transform positions from chain links.
		for (int32 LinkIndex = 0; LinkIndex < NumChainLinks; LinkIndex++)
		{
			FCCDIK_Modified_ChainLink const& ChainLink = Chain[LinkIndex];
			OutBoneTransforms[ChainLink.TransformIndex].Transform.SetTranslation(ChainLink.Position);

			// If there are any zero length children, update position of those
			int32 const NumChildren = ChainLink.ChildZeroLengthTransformIndices.Num();
			for (int32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
			{
				OutBoneTransforms[ChainLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform.SetTranslation(ChainLink.Position);
			}
		}

		// FABRIK algorithm - re-orientation of bone local axes after translation calculation
		
		for (int32 LinkIndex = 0; LinkIndex < NumChainLinks - 1; LinkIndex++)
		{
			FCCDIK_Modified_ChainLink const& CurrentLink = Chain[LinkIndex];
			FCCDIK_Modified_ChainLink const& ChildLink = Chain[LinkIndex + 1];

			// Calculate pre-translation vector between this bone and child
			FVector OldDir = (Output.Pose.GetComponentSpaceTransform(FCompactPoseBoneIndex(ChildLink.BoneIndex)).GetLocation() - Output.Pose.GetComponentSpaceTransform(FCompactPoseBoneIndex(CurrentLink.BoneIndex)).GetLocation()).GetSafeNormal();

			if (Dulicate_OutBoneTransforms.Num() > 0)
			{
				OldDir = (Dulicate_OutBoneTransforms[LinkIndex+1].Transform.GetLocation() - Dulicate_OutBoneTransforms[LinkIndex].Transform.GetLocation()).GetSafeNormal();
			}

			// Get vector from the post-translation bone to it's child
			FVector NewDir = (ChildLink.Position - CurrentLink.Position).GetUnsafeNormal();
			//FVector NewDir = (OutBoneTransforms[LinkIndex + 1].Transform.GetLocation() - OutBoneTransforms[LinkIndex].Transform.GetLocation()).GetUnsafeNormal();

			if (Dulicate_OutBoneTransforms.Num() > 0)
			{
				NewDir = (OutBoneTransforms[LinkIndex + 1].Transform.GetLocation() - OutBoneTransforms[LinkIndex].Transform.GetLocation()).GetUnsafeNormal();
			}




			

			FQuat DeltaRotation = SafeFromToRotation(OldDir, NewDir, FVector::ZeroVector );

			
			// We're going to multiply it, in order to not have to re-normalize the final quaternion, it has to be a unit quaternion.
			checkSlow(DeltaRotation.IsNormalized());

			// Calculate absolute rotation and set it
			FTransform& CurrentBoneTransform = OutBoneTransforms[CurrentLink.TransformIndex].Transform;
			
			CurrentBoneTransform.SetRotation(DeltaRotation* CurrentBoneTransform.GetRotation());

			CurrentBoneTransform.NormalizeRotation();

			// Update zero length children if any
			int32 const NumChildren = CurrentLink.ChildZeroLengthTransformIndices.Num();
			for (int32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
			{
				FTransform& ChildBoneTransform = OutBoneTransforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform;
				ChildBoneTransform.SetRotation(DeltaRotation * ChildBoneTransform.GetRotation());
				ChildBoneTransform.NormalizeRotation();
			}
		}
		
	}


	
	
}




void UDragonIK_Library::OrthoNormalize(FVector& Normal, FVector& Tangent)
{
	Normal = Normal.GetSafeNormal();
	Tangent = Tangent - (Normal * FVector::DotProduct(Tangent, Normal));
	Tangent = Tangent.GetSafeNormal();
}





FTransform UDragonIK_Library::QuatLookXatLocalDirection(const FTransform& LookAtFromTransform, const FVector& LookAtLocalDirection)
{
	const FQuat Q = FQuat::FindBetweenNormals(FVector(1, 0, 0), LookAtLocalDirection);
	return FTransform((LookAtFromTransform.GetRotation() * Q).GetNormalized(), LookAtFromTransform.GetLocation(), LookAtFromTransform.GetScale3D());
}


FTransform UDragonIK_Library::QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget)
{
	if (!LookAtFromTransform.GetLocation().Equals(LookAtTarget, 0.01f))
	{
		const FVector LookAtLocalDirection = (LookAtFromTransform.Inverse().TransformPositionNoScale(LookAtTarget)).GetSafeNormal();
		return QuatLookXatLocalDirection(LookAtFromTransform, LookAtLocalDirection);
	}
	else
	{
		return LookAtFromTransform;
	}
}

FRotator UDragonIK_Library::LookAtRotation_V3(FVector source, FVector target, FVector upvector)
{
	FVector newForward = target - source;
	newForward.Normalize();


	FVector newRight = FVector::CrossProduct(newForward, upvector);
	FVector newUp = FVector::CrossProduct(newRight, newForward);

	return FTransform(newForward, newRight, newUp, source).Rotator().GetNormalized();
}



FRotator UDragonIK_Library::LookAtVector_V2(FVector Source_Location,FVector lookAt, FVector upDirection)
{
	FVector Forward = (lookAt - Source_Location);
	FRotator Rot = UKismetMathLibrary::MakeRotFromXZ(Forward, upDirection);
	return Rot;

}


FQuat UDragonIK_Library::UnityLookRotation(FVector forward, FVector upward)
{
	FVector vector = (forward.GetSafeNormal());
	FVector vector2 = FVector::CrossProduct(upward, vector);
	FVector vector3 = FVector::CrossProduct(vector, vector2);
	float m00 = vector2.X;
	float m01 = vector2.Y;
	float m02 = vector2.Z;
	float m10 = vector3.X;
	float m11 = vector3.Y;
	float m12 = vector3.Z;
	float m20 = vector.X;
	float m21 = vector.Y;
	float m22 = vector.Z;
	float num8 = (m00 + m11) + m22;
	FQuat q;
	if (num8 > 0.0)
	{
		float num = sqrt(num8 + 1.0f);
		q.W = num * 0.5f;
		num = 0.5f / num;
		q.X = (m12 - m21) * num;
		q.Y = (m20 - m02) * num;
		q.Z = (m01 - m10) * num;
		return (q.GetNormalized());
	}
	else if ((m00 >= m11) && (m00 >= m22))
	{
		float num7 = sqrt(((1.0f + m00) - m11) - m22);
		float num4 = 0.5f / num7;
		q.X = 0.5f * num7;
		q.Y = (m01 + m10) * num4;
		q.Z = (m02 + m20) * num4;
		q.W = (m12 - m21) * num4;
		return (q.GetNormalized());
	}
	else if (m11 > m22)
	{
		float num6 = sqrt(((1.0f + m11) - m00) - m22);
		float num3 = 0.5f / num6;
		q.X = (m10 + m01) * num3;
		q.Y = 0.5f * num6;
		q.Z = (m21 + m12) * num3;
		q.W = (m20 - m02) * num3;
		return (q.GetNormalized());
	}
	else
	{
		float num5 = sqrt(((1.0f + m22) - m00) - m11);
		float num2 = 0.5f / num5;
		q.X = (m20 + m02) * num2;
		q.Y = (m21 + m12) * num2;
		q.Z = 0.5f * num5;
		q.W = (m01 - m10) * num2;
		return (q.GetNormalized());
	}

}


FQuat UDragonIK_Library::SafeFromToRotation(FVector v1, FVector v2, FVector up)
{
	FVector RotationAxis = FVector::CrossProduct(v1, v2).GetSafeNormal();
	float RotationAngle = FMath::Acos(FVector::DotProduct(v1, v2));

	return FQuat(RotationAxis, RotationAngle);
}



FQuat UDragonIK_Library::UnityRotateTowards(FQuat from, FQuat to, float maxDegreesDelta)
{
	
	float angle = from.AngularDistance(to);
	if (angle == 0.0f) return to;
	return FQuat::Slerp(from, to, FMath::Min(1.0f, maxDegreesDelta / angle));
}


FVector UDragonIK_Library::SolveJoint(FVector pos1, FVector pos2, float length) {

	return (pos2 + (pos1 - pos2).GetSafeNormal() * length);

}


void UDragonIK_Library::SolverMove(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FVector offset) {
	for (int i = index; i < InOutChain.Num(); i++) {
		InOutChain[i].Position += offset;
	}
}

void UDragonIK_Library::SolverRotate(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation, bool recursive) {
	for (int i = index; i < InOutChain.Num(); i++) {
		InOutChain[i].BoneRotation = rotation * InOutChain[i].BoneRotation;

		if (!recursive) return;
	}
}

void UDragonIK_Library::SolverRotateChildren(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation) {
	for (int i = index + 1; i < InOutChain.Num(); i++) {
		InOutChain[i].BoneRotation = rotation * InOutChain[i].BoneRotation;
	}
}

void UDragonIK_Library::SolverMoveChildrenAroundPoint(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation) {
	for (int i = index + 1; i < InOutChain.Num(); i++) {
		FVector dir = InOutChain[i].Position - InOutChain[index].Position;
		InOutChain[i].Position = InOutChain[index].Position + rotation * dir;
	}
}

FQuat UDragonIK_Library::GetParentSolverRotation(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index) {
	if (index > 0) 
		return InOutChain[index - 1].BoneRotation;
	else
		return FQuat::Identity;

/*	if (InOutChain[0].transform.parent == null) 
		return FQuat::Identity;
	
	return InOutChain[0].transform.parent.rotation;*/

}

FVector UDragonIK_Library::GetParentSolverPosition(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index) {
	if (index > 0) return InOutChain[index - 1].Position;
	else
		return FVector::ZeroVector;

	
	/*if (bones[0].transform.parent == null) 
		return FVector::ZeroVector;

	return bones[0].transform.parent.position;*/
}

FQuat UDragonIK_Library::GetLimitedRotation(TArray<FCCDIK_Modified_ChainLink>& InOutChain,FQuat OriginalBoneRotation, int index, FQuat q,bool& changed)
{
	changed = false;


//	FQuat limitedLocalRotation = InOutChain[index].rotationLimit.GetLimitedLocalRotation(localRotation,changed);



//	if (!changed) 
		return q;

	
}

FQuat UDragonIK_Library::GetLimitedLocalRotation(FQuat defaultLocalRotation,FQuat localRotation, bool &changed)
{
	/*
	if (!this.initiated)
	{
		this.Awake();
	}*/

	FQuat quaternion = (defaultLocalRotation) * localRotation;
	FQuat quaternion2 = UDragonIK_Library::LimitRotation(quaternion, FVector(0,1,0), FVector(0, 1, 0), 180.f, 0.f);
	changed = (quaternion2 != quaternion);
	if (!changed)
	{
		return localRotation;
	}
	return defaultLocalRotation * quaternion2;

}

FQuat UDragonIK_Library::LimitRotation(FQuat rotation, FVector axis,FVector secondaryAxis, float general_limit,float twistLimit)
{
	FQuat rotation2 = UDragonIK_Library::LimitSwing(rotation, axis, general_limit);
	return UDragonIK_Library::LimitTwist(rotation2, axis, secondaryAxis, twistLimit);
}

FQuat UDragonIK_Library::LimitTwist(FQuat rotation, FVector axis, FVector orthoAxis, float twistLimit)
{
	twistLimit = FMath::Clamp(twistLimit, 0.f, 180.f);
	if (twistLimit >= 180.f)
	{
		return rotation;
	}
	FVector vector = rotation * axis;
	FVector toDirection = orthoAxis;
	
	UDragonIK_Library::OrthoNormalize(vector,toDirection);
	FVector fromDirection = rotation * orthoAxis;
	UDragonIK_Library::OrthoNormalize(vector, fromDirection);
	FQuat quaternion = UDragonIK_Library::SafeFromToRotation(fromDirection, toDirection, FVector(0,0,1) ) * rotation;
	if (twistLimit <= 0.f)
	{
		return quaternion;
	}
	return UDragonIK_Library::UnityRotateTowards(quaternion, rotation, twistLimit);
}

FQuat UDragonIK_Library::LimitSwing(FQuat rotation,FVector axis, float general_limit)
{
	if (axis == FVector::ZeroVector)
	{
		return rotation;
	}
	if (rotation == FQuat::Identity)
	{
		return rotation;
	}
	if (general_limit >= 180.0f)
	{
		return rotation;
	}
	FVector vector = rotation * axis;
	FQuat to = UDragonIK_Library::SafeFromToRotation(axis, vector,FVector(0,0,1));
	FQuat rotation2 = UDragonIK_Library::UnityRotateTowards(FQuat::Identity, to, general_limit);
	FQuat lhs = UDragonIK_Library::SafeFromToRotation(vector, rotation2 * axis,FVector(0,0,1));
	return lhs * rotation;
}



FQuat UDragonIK_Library::QuatFromToRotation(FQuat from, FQuat to)
{
	if (to == from)
	{
		return FQuat::Identity;
	}
	return to * (from.Inverse());
}


void UDragonIK_Library::LimitForward(int rotateBone, int limitBone , TArray<FCCDIK_Modified_ChainLink>& InOutChain )
{

	// Storing last bone's position before applying the limit
	FVector lastBoneBeforeLimit = InOutChain[InOutChain.Num() - 1].Position;

	// Moving and rotating this bone and all its children to their solver positions
	for (int i = rotateBone; i < InOutChain.Num() - 1; i++) {
	//	if (limitedBones[i]) break;

		FQuat fromTo = UDragonIK_Library::SafeFromToRotation(InOutChain[i].BoneRotation * InOutChain[i].axis, InOutChain[i + 1].Position - InOutChain[i].Position, FVector::UpVector);
		UDragonIK_Library::SolverRotate(InOutChain,i, fromTo, false);
	}

	// Limit the bone's rotation
	bool changed = false;
	FQuat afterLimit = UDragonIK_Library::GetLimitedRotation(InOutChain, InOutChain[limitBone].BoneRotation,limitBone, InOutChain[limitBone].BoneRotation, changed);

	if (changed) {
		// Rotating and positioning the hierarchy so that the last bone's position is maintained
		if (limitBone < InOutChain.Num() - 1) {
			FQuat change = UDragonIK_Library::QuatFromToRotation(InOutChain[limitBone].BoneRotation, afterLimit);
			InOutChain[limitBone].BoneRotation = afterLimit;
			SolverRotateChildren(InOutChain,limitBone, change);
			SolverMoveChildrenAroundPoint(InOutChain,limitBone, change);

			// Rotating to compensate for the limit
			FQuat fromTo = UDragonIK_Library::SafeFromToRotation(InOutChain[InOutChain.Num() - 1].Position - InOutChain[rotateBone].Position, lastBoneBeforeLimit - InOutChain[rotateBone].Position, FVector::UpVector);

			SolverRotate(InOutChain,rotateBone, fromTo, true);
			SolverMoveChildrenAroundPoint(InOutChain,rotateBone, fromTo);

			// Moving the bone so that last bone maintains it's initial position
			SolverMove(InOutChain,rotateBone, lastBoneBeforeLimit - InOutChain[InOutChain.Num() - 1].Position);
		}
		else {
			// last bone
			InOutChain[limitBone].BoneRotation = afterLimit;
		}
	}

//	limitedBones[limitBone] = true;
}


void UDragonIK_Library::BackwardReachLimited(FVector position , TArray<FCCDIK_Modified_ChainLink>& InOutChain)
{
	// Move first bone to position
	InOutChain[InOutChain.Num() - 1].Position = position;

	// Applying rotation limits bone by bone
	for (int i = 0; i < InOutChain.Num() - 1; i++) {
		// Rotating bone to look at the solved joint position
		FVector nextPosition = UDragonIK_Library::SolveJoint(InOutChain[i + 1].Position, InOutChain[i].Position, InOutChain[i].Length);

		FQuat swing = UDragonIK_Library::SafeFromToRotation(InOutChain[i].BoneRotation * InOutChain[i].axis, nextPosition - InOutChain[i].Position, FVector::UpVector);
		FQuat targetRotation = swing * InOutChain[i].BoneRotation;

		// Rotation Constraints
	//	if (bones[i].rotationLimit != null) 
		{
			bool changed = false;
			targetRotation = UDragonIK_Library::GetLimitedRotation(InOutChain, InOutChain[i].BoneRotation, i, targetRotation,changed);
		}

		FQuat fromTo = UDragonIK_Library::QuatFromToRotation(InOutChain[i].BoneRotation, targetRotation);
		InOutChain[i].BoneRotation = targetRotation;
		UDragonIK_Library::SolverRotateChildren(InOutChain,i, fromTo);

		// Positioning the next bone to its default local position
		InOutChain[i + 1].Position = InOutChain[i].Position + InOutChain[i].BoneRotation * InOutChain[i+1].solverLocalPositions;
	}

	// Reconstruct solver rotations to protect from invalid Quaternions
	for (int i = 0; i < InOutChain.Num(); i++) {
	//	InOutChain[i].BoneRotation = UDragonIK_Library::UnityLookRotation(InOutChain[i].BoneRotation * FVector::ForwardVector, InOutChain[i].BoneRotation * FVector::UpVector);
	}
}




void UDragonIK_Library::LimitFabrikBoneRotations(TArray<FCCDIK_Modified_ChainLink>& InOutChain)
{

	/*
	PSEUDOCODE

	- Get chain data (locations)
	- Calculate vector dir between current bone and child bone.
	- Get original length
	- Clamp vector dir
	- Return vector dir and replace with previous vector dir

	*/


	for (int chain_index = InOutChain.Num() - 1; chain_index > 1; chain_index--)
	{
		



		FTransform ChainTransform = FTransform::Identity;
		ChainTransform.SetLocation(InOutChain[chain_index].Position);
		ChainTransform.SetRotation(InOutChain[chain_index].BoneRotation);
		ChainTransform.SetScale3D(FVector(1,1,1));


		FAxis LookAt_Axis;
		LookAt_Axis.bInLocalSpace = true;
		LookAt_Axis.Axis = FVector(0, -1, 0);


		//FVector clamped_dir = UDragonIK_Library::LookAt_Fabrik_Processor(ChainTransform, parent_bone_pos, LookAt_Axis, 125);

		//FVector modified_position = parent_bone_pos + clamped_dir * original_len;

		//InOutChain[chain_index].Position = modified_position;

	}


//	LookAt_Fabrik_Processor

}



FRotator UDragonIK_Library::CustomLookRotation(FVector lookAt, FVector upDirection)
{


	FVector forward = lookAt;
	FVector up = upDirection;

	//UDragonIK_Object::OrthoNormalize(forward, up);

	//UDragonIK_Object::OrthoNormalize(forward, up);

	forward = forward.GetSafeNormal();
	up = up - (forward * FVector::DotProduct(up, forward));
	up = up.GetSafeNormal();

	///////////////////////





	FVector vector = forward.GetSafeNormal();
	FVector vector2 = FVector::CrossProduct(up, vector);
	FVector vector3 = FVector::CrossProduct(vector, vector2);
	float m00 = vector2.X;
	float m01 = vector2.Y;
	float m02 = vector2.Z;
	float m10 = vector3.X;
	float m11 = vector3.Y;
	float m12 = vector3.Z;
	float m20 = vector.X;
	float m21 = vector.Y;
	float m22 = vector.Z;


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
		return FRotator(quaternion);
	}
	if ((m00 >= m11) && (m00 >= m22))
	{
		float num7 = (float)FMath::Sqrt(((1.0f + m00) - m11) - m22);
		float num4 = 0.5f / num7;
		quaternion.X = 0.5f * num7;
		quaternion.Y = (m01 + m10) * num4;
		quaternion.Z = (m02 + m20) * num4;
		quaternion.W = (m12 - m21) * num4;
		return FRotator(quaternion);
	}
	if (m11 > m22)
	{
		float num6 = (float)FMath::Sqrt(((1.0f + m11) - m00) - m22);
		float num3 = 0.5f / num6;
		quaternion.X = (m10 + m01) * num3;
		quaternion.Y = 0.5f * num6;
		quaternion.Z = (m21 + m12) * num3;
		quaternion.W = (m20 - m02) * num3;
		return FRotator(quaternion);
	}
	float num5 = (float)FMath::Sqrt(((1.0f + m22) - m00) - m11);
	float num2 = 0.5f / num5;
	quaternion.X = (m20 + m02) * num2;
	quaternion.Y = (m21 + m12) * num2;
	quaternion.Z = 0.5f * num5;
	quaternion.W = (m01 - m10) * num2;


	return FRotator(quaternion);




	//////////////////////



	//	return ret;

}