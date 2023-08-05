/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonFeetSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"




#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"
#include "Algo/Reverse.h"


DECLARE_CYCLE_STAT(TEXT("DragonFeetSolver Eval"), STAT_DragonFeetSolver_Eval, STATGROUP_Anim);




FAnimNode_DragonFeetSolver::FAnimNode_DragonFeetSolver()
{
	is_initialized = false;



	FRichCurve* Interval_Velocity_Curve_CurveData = Interval_Velocity_Curve.GetRichCurve();
	Interval_Velocity_Curve_CurveData->AddKey(0.f, 1.f);
	Interval_Velocity_Curve_CurveData->AddKey(100.f, 0.025f);



	FRichCurve* Interpolation_Velocity_CurveData = Interpolation_Velocity_Curve.GetRichCurve();
	Interpolation_Velocity_CurveData->AddKey(0.f, 1.f);
	Interpolation_Velocity_CurveData->AddKey(1500.f, 10.0f);


	FRichCurve* ComplexSimpleFoot_Velocity_CurveData = ComplexSimpleFoot_Velocity_Curve.GetRichCurve();
	ComplexSimpleFoot_Velocity_CurveData->AddKey(0.f, 1.0f);
	ComplexSimpleFoot_Velocity_CurveData->AddKey(100.f, 0.f);



	FRichCurve* Trace_Down_Multiplier_CurveData = Trace_Down_Multiplier_Curve.GetRichCurve();
	Trace_Down_Multiplier_CurveData->AddKey(0.f, 1.0f);
	Trace_Down_Multiplier_CurveData->AddKey(100.f, 0.5f);



	FRichCurve* Finger_Alpha_Velocity_CurveData = Finger_Alpha_Velocity_Curve.GetRichCurve();
	Finger_Alpha_Velocity_CurveData->AddKey(0.f, 1.0f);
	Finger_Alpha_Velocity_CurveData->AddKey(100.f, 0.f);





	first_time_setup = true;

	first_time_count = 0;


	/*
	for (int spine_index = 0; spine_index < feet_mod_transform_array.Num(); spine_index++)
	{
		for (int feet_index = 0; feet_index < feet_mod_transform_array[spine_index].Num(); feet_index++)
		{

			feet_mod_transform_array[spine_index][feet_index] = owning_skel->GetBoneTransform(0);
		}

	}*/


}


// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonFeetSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{

	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();

	Character_Actor = Context.AnimInstanceProxy->GetSkelMeshComponent()->GetOwner();


	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);

	for (int i = 0; i < sticky_sockets_data.sticky_socket_array.Num(); i++)
	{
		sticky_sockets_data.sticky_socket_array[i].Initialize(Context.AnimInstanceProxy);
	}


	OptionalRefPose.Initialize(Context);
}


/*
// Cache the bones . Thats it !!
void FAnimNode_DragonFeetSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext & Context)
{
	FAnimNode_Base::CacheBones_AnyThread(Context);
	ComponentPose.CacheBones(Context);
	InitializeBoneReferences(Context.AnimInstanceProxy->GetRequiredBones());
}
*/


/*
// Main update function . Do not perform any changed !!
void FAnimNode_DragonFeetSolver::Update_AnyThread(const FAnimationUpdateContext & Context)
{
	ComponentPose.Update(Context);
	ActualAlpha = 0.f;


	if (IsLODEnabled(Context.AnimInstanceProxy))
	{

		GetEvaluateGraphExposedInputs().Execute(Context);
		//EvaluateGraphExposedInputs.Execute(Context);
		// Apply the skeletal control if it's valid



		ActualAlpha = AlphaScaleBias.ApplyTo(Alpha);

		if (FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Context.AnimInstanceProxy->GetSkeleton(), Context.AnimInstanceProxy->GetRequiredBones()))
		{
			UpdateInternal(Context);



		}
	}
}



void FAnimNode_DragonFeetSolver::UpdateInternal(const FAnimationUpdateContext & Context)
{
	FAnimNode_DragonControlBase::UpdateInternal(Context);
}
*/






void FAnimNode_DragonFeetSolver::Make_All_Bones(FCSPose<FCompactPose>& MeshBases)
{




}




// Store the zero pose transform data
void FAnimNode_DragonFeetSolver::GetResetedPoseInfo(FCSPose<FCompactPose>& MeshBases)
{

}






// Store the animated and calculated pose transform data
void FAnimNode_DragonFeetSolver::GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases)
{

	for (int spine_index = 0; spine_index < dragon_input_data.FeetBones.Num(); spine_index++)
	{
		FBoneReference knee_bone_ref = FBoneReference(dragon_input_data.FeetBones[spine_index].Knee_Bone_Name);

		if (automatic_leg_make == true)
		{
			knee_bone_ref = FBoneReference(dragon_input_data.FeetBones[spine_index].Feet_Bone_Name);
		}


		knee_bone_ref.Initialize(*SavedBoneContainer);

		if (knee_bone_ref.IsValidToEvaluate() && knee_Animated_transform_array.Num() > spine_index)
		{
			if (automatic_leg_make == false)
				knee_Animated_transform_array[spine_index] = MeshBases.GetComponentSpaceTransform(knee_bone_ref.CachedCompactPoseIndex);
			else
			{
				knee_Animated_transform_array[spine_index] = MeshBases.GetComponentSpaceTransform((*SavedBoneContainer).GetParentBoneIndex(knee_bone_ref.CachedCompactPoseIndex));

			}
		}

	}

	for (int spine_index = 0; spine_index < spine_hit_pairs.Num(); spine_index++)
	{
		if (spine_Feet_pair.Num() - 1 < spine_index) continue; // @tikwon

		if (feet_Animated_transform_array.Num() > spine_index && spine_Feet_pair.Num() > spine_index)
			for (int feet_index = 0; feet_index < spine_hit_pairs[spine_index].RV_Feet_Hits.Num(); feet_index++)
			{
				if (spine_Feet_pair[spine_index].Associated_Feet.Num() - 1 < feet_index) continue; // @tikwon

				if (feet_Animated_transform_array[spine_index].Num() > feet_index && spine_Feet_pair[spine_index].Associated_Feet.Num() > feet_index)
					feet_Animated_transform_array[spine_index][feet_index] = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex);



			}

	}



}



void FAnimNode_DragonFeetSolver::Calculate_Feet_Rotation(FComponentSpacePoseContext& Output, TArray<TArray<FTransform>> feet_rotation_array)
{




	for (int spine_index = 0; spine_index < spine_hit_pairs.Num(); spine_index++)
	{
		if (spine_Feet_pair.Num() - 1 < spine_index) continue; // @tikwon
		for (int feet_index = 0; feet_index < spine_hit_pairs[spine_index].RV_Feet_Hits.Num(); feet_index++)
		{
			if (spine_Feet_pair[spine_index].Associated_Feet.Num() - 1 < feet_index || feet_rotation_array[spine_index].Num() - 1 < feet_index) continue; // @tikwon

			FTransform EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex);


			//sticky_sockets_data.sticky_socket_array[0].SocketReference.GetAnimatedSocketTransform(Output.Pose);
		
			if (sticky_feet_mode)
			{

				if (spine_Feet_pair[spine_index].order_index[feet_index] < sticky_sockets_data.sticky_socket_array.Num())
				{

					//	sticky_sockets_data.sticky_socket_array[spine_Feet_pair[spine_index].order_index[feet_index]].bUseSocket = true;


					if (sticky_sockets_data.sticky_socket_array[spine_Feet_pair[spine_index].order_index[feet_index]].IsValidToEvaluate(*SavedBoneContainer))
					{

						spine_AnimatedTransform_pairs[spine_index].Original_Associated_Feet[feet_index] = sticky_sockets_data.sticky_socket_array[spine_Feet_pair[spine_index].order_index[feet_index]].SocketReference.GetAnimatedSocketTransform(Output.Pose);

						//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Original_Associated_Feet : " + FString::SanitizeFloat(spine_AnimatedTransform_pairs[spine_index].Original_Associated_Feet[feet_index].GetLocation().Z));
						//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TAKE ");

					}
					else
						spine_AnimatedTransform_pairs[spine_index].Original_Associated_Feet[feet_index] = EndBoneCSTransform;

				}
				else
				{
					spine_AnimatedTransform_pairs[spine_index].Original_Associated_Feet[feet_index] = EndBoneCSTransform;
				}
			}

		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " TAKE AAA");


			float feet_limit = FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Rotation_Limit);


			if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
			{

				if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit && atleast_one_hit)
				{

					FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, EndBoneCSTransform, spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex, EBoneControlSpace::BCS_WorldSpace);

					
					FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, feet_rotation_array[spine_index][feet_index], spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex, EBoneControlSpace::BCS_WorldSpace);



					FVector normal_impact = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactNormal;

					bool Is_Four_Point_Hitting = spine_hit_pairs[spine_index].RV_FeetFront_Hits[feet_index].bBlockingHit && spine_hit_pairs[spine_index].RV_FeetRight_Hits[feet_index].bBlockingHit && spine_hit_pairs[spine_index].RV_FeetLeft_Hits[feet_index].bBlockingHit;

					if (Use_Four_Point_Feets && Is_Four_Point_Hitting)
					{
						FVector forward_impact = (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint - spine_hit_pairs[spine_index].RV_FeetFront_Hits[feet_index].ImpactPoint).GetSafeNormal();

						FVector right_cross = (spine_hit_pairs[spine_index].RV_FeetRight_Hits[feet_index].ImpactPoint - spine_hit_pairs[spine_index].RV_FeetLeft_Hits[feet_index].ImpactPoint).GetSafeNormal();

						FVector forward_final_impact = FVector::CrossProduct(forward_impact, right_cross).GetSafeNormal();

						forward_final_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, forward_final_impact);

						normal_impact = forward_final_impact;

						normal_impact = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, normal_impact);
					}


					// Convert back to Component Space.
					FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, Output.Pose, EndBoneCSTransform, spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex, EBoneControlSpace::BCS_WorldSpace);


					FRotator rotated_rot = RotationFromImpactNormal(spine_index, feet_index,false,Output, normal_impact, Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex), feet_limit);

					FRotator direction_rot = rotated_rot;


					if (Ignore_Lerping == false)
						feet_mod_transform_array[spine_index][feet_index].SetRotation(AnimRotSLerp(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit, spine_index, feet_index, feet_mod_transform_array[spine_index][feet_index].GetRotation(), direction_rot.Quaternion(), Delta_Rot_Speed));
					else
						feet_mod_transform_array[spine_index][feet_index].SetRotation(direction_rot.Quaternion());



					feet_modified_normals[spine_index][feet_index] = normal_impact;




				}
				else
				{
					//						feet_mod_transform_array[spine_index][feet_index].SetRotation(UKismetMathLibrary::RInterpTo(feet_mod_transform_array[spine_index][feet_index].Rotator(), EndBoneCSTransform.Rotator(), 1 - FMath::Exp(-10 * delta_seconds_saved), shift_speed).Quaternion());
				}

			}


			if (Affect_Toes_Always)
				for (int fingerx = 0; fingerx < spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index].Num(); fingerx++)
				{
					{

						const FCompactPoseBoneIndex ModifyBoneIndex_Local_Finger = spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
						FTransform ComponentBoneTransform_Finger = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_Finger);

						//FVector normal_finger_impact = spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].ImpactNormal;

						FVector up_vector_ws = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, character_direction_vector_CS);

						FVector normal_finger_impact = up_vector_ws;


						bool frontal_finger_hits = spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].bBlockingHit && spine_hit_pairs[spine_index].RV_Original_Associated_Fingers_Hits[feet_index][fingerx].bBlockingHit;

						bool sideway_feet_hits = spine_hit_pairs[spine_index].RV_FeetRight_Hits[feet_index].bBlockingHit && spine_hit_pairs[spine_index].RV_FeetLeft_Hits[feet_index].bBlockingHit;

						if (!Use_Four_Point_Feets)
							sideway_feet_hits = true;

						//if (Use_Four_Point_Feets)
						if (frontal_finger_hits && sideway_feet_hits)
						{


							FVector forward_impact = (spine_hit_pairs[spine_index].RV_Original_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint - spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint).GetSafeNormal();

							int finger_spine_index = spine_Feet_pair[spine_index].order_index[feet_index];

							if (!dragon_input_data.FeetBones[finger_spine_index].Finger_Array[fingerx].Is_Finger_Backward)
								forward_impact = (spine_hit_pairs[spine_index].RV_Original_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint - spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint).GetSafeNormal();
							else
								forward_impact = (spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint - spine_hit_pairs[spine_index].RV_Original_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint).GetSafeNormal();



							FVector right_cross = (spine_hit_pairs[spine_index].RV_FeetRight_Hits[feet_index].ImpactPoint - spine_hit_pairs[spine_index].RV_FeetLeft_Hits[feet_index].ImpactPoint).GetSafeNormal();

							FVector forward_final_impact = FVector::CrossProduct(forward_impact, right_cross).GetSafeNormal();

							forward_final_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, forward_final_impact);

							normal_finger_impact = forward_final_impact;

							normal_finger_impact = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, normal_finger_impact);

						}



						/////////////
						/*
						FVector normal_impact = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactNormal;

						FVector forward_impact = (c - spine_hit_pairs[spine_index].RV_FeetFront_Hits[feet_index].ImpactPoint).GetSafeNormal();

						//forward_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, forward_impact);

						//FVector right_cross_cs = FVector::CrossProduct(character_forward_direction_vector_CS,character_direction_vector_CS);

						//FVector right_cross = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, right_cross_cs);

						FVector right_cross = (spine_hit_pairs[spine_index].RV_FeetRight_Hits[feet_index].ImpactPoint - spine_hit_pairs[spine_index].RV_FeetLeft_Hits[feet_index].ImpactPoint).GetSafeNormal();

						FVector forward_final_impact = FVector::CrossProduct(forward_impact, right_cross).GetSafeNormal();

						forward_final_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, forward_final_impact);

						//	normal_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, normal_impact);

						//	normal_impact = normal_impact * right_cross_cs;

						normal_impact = (normal_impact + forward_final_impact).GetSafeNormal();

						//	normal_impact = forward_final_impact;

						normal_impact = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, normal_impact);
						*/
						////////////


						FRotator rotated_finger_rot = RotationFromImpactNormal(spine_index, feet_index, true,Output, normal_finger_impact, ComponentBoneTransform_Finger, feet_limit);

						//rotated_finger_rot = FRotator(ComponentBoneTransform_Finger.GetRotation().Inverse() * Lookat_Toe);


					//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " normal_finger_impact : " + normal_finger_impact.ToString());

					//	feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(rotated_finger_rot.Quaternion());

						if (Ignore_Lerping == false)
							feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(AnimRotSLerp(frontal_finger_hits, spine_index, feet_index, feet_fingers_transform_array[spine_index][feet_index][fingerx].GetRotation(), rotated_finger_rot.Quaternion(), Delta_Rot_Speed));
						else
							feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(rotated_finger_rot.Quaternion());

					}
					/*
					else
					{
						const FCompactPoseBoneIndex ModifyBoneIndex_Local_Finger = spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
						FTransform ComponentBoneTransform_Finger = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_Finger);

						//feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(ComponentBoneTransform_Finger.GetRotation());

					//	const FCompactPoseBoneIndex ModifyBoneIndex_Local_Finger = spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].GetCompactPoseIndex(MeshBasesSaved.Pose.GetPose().GetBoneContainer());
					//	FTransform ComponentBoneTransform_Finger = MeshBasesSaved.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_Finger);
						FTransform Inv_FootValue = EndBoneCSTransform.Inverse() * feet_mod_transform_array[spine_index][feet_index];
						FTransform Diff_Vect = (ComponentBoneTransform_Finger * Inv_FootValue);


						if (Ignore_Lerping == false)
							feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(AnimRotSLerp(feet_fingers_transform_array[spine_index][feet_index][fingerx].GetRotation(), Diff_Vect.GetRotation(), (1 - FMath::Exp(-10 * delta_seconds_saved)) * feet_rotation_speed));
						else
							feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(ComponentBoneTransform_Finger.GetRotation());


					}
					*/
					//	feet_fingers_transform_array[spine_index][feet_index][fingerx] = feet_mod_transform_array[spine_index][feet_index];

						//FTransform Rotated_Shoulder = UDragonIK_Library::LookAt_Processor(Shoulder_Offseted_Transform, Common_Spine_Transform.GetLocation(), Target_CS_Position, LookatAxis_Temp, Individual_Leg_Clamp, Use_Natural_Method, 1, 1);

				}



		}

	}

}





FRotator FAnimNode_DragonFeetSolver::RotationFromImpactNormal(int spine_index,int feet_index,bool is_finger,FComponentSpacePoseContext& Output, FVector normal_impact_input, FTransform original_Bone_transform, float feet_limit)
{

	FVector normal_impact = UKismetMathLibrary::InverseTransformDirection(owner_skel_w_transform, normal_impact_input);


	FRotator normal_rot = FRotator(UKismetMathLibrary::DegAtan2(normal_impact.X, normal_impact.Z) * -1, 0, UKismetMathLibrary::DegAtan2(normal_impact.Y, normal_impact.Z) * 1);
	FVector unit_normal_impact = character_direction_vector_CS;
	FRotator unit_normal_rot = FRotator(UKismetMathLibrary::DegAtan2(unit_normal_impact.X, unit_normal_impact.Z) * -1, 0, UKismetMathLibrary::DegAtan2(unit_normal_impact.Y, unit_normal_impact.Z) * 1);


	if (Enable_Pitch == false)
		normal_rot.Pitch = 0;

	if (Enable_Roll == false)
		normal_rot.Roll = 0;


	//	float feet_limit = FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Rotation_Limit);

	//	float feet_limit = 45;

	normal_rot.Pitch = FMath::Clamp<float>(normal_rot.Pitch, -feet_limit, feet_limit);
	normal_rot.Roll = FMath::Clamp<float>(normal_rot.Roll, -feet_limit, feet_limit);
	normal_rot.Yaw = FMath::Clamp<float>(normal_rot.Yaw, -feet_limit, feet_limit);


	normal_rot = normal_rot - unit_normal_rot;
	//	FTransform TestTransform1 = Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex);

	FTransform TestTransform1 = original_Bone_transform;

	//original_Bone_transform


	//OLDER CODE
	
	if (!is_finger)
	{
		//FQuat Ref_Anim_Diff = TestTransform1.GetRotation()*feet_Animated_transform_array[spine_index][feet_index].GetRotation().Inverse();

		/*
		FRotator Ref_Anim_Diff = FRotator(feet_Animated_transform_array[spine_index][feet_index].GetRotation() * TestTransform1.GetRotation().Inverse());
		Ref_Anim_Diff.Pitch = 0;
		Ref_Anim_Diff.Roll = 0;
		*/

		//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Ref_Anim_Diff : " + FRotator(Ref_Anim_Diff).ToString());


	//	FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, TestTransform1, spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex,EBoneControlSpace::BCS_ComponentSpace);


		FRotator offset_local = dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Rotation_Offset;
		//	if (!Use_OptionalRef_Feet_As_Ref)
		//		offset_local = FRotator::ZeroRotator;

		const FQuat BoneInput(offset_local);


		FQuat Forward_Rotation_Difference = FQuat::FindBetweenNormals(character_forward_direction_vector_CS, poles_forward_direction_vector_CS);
	


		TestTransform1.SetRotation(BoneInput * TestTransform1.GetRotation());

		TestTransform1.SetRotation( Forward_Rotation_Difference * TestTransform1.GetRotation());



	//	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, Output.Pose, TestTransform1, spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex, EBoneControlSpace::BCS_ComponentSpace);



	//	TestTransform1.SetRotation(Ref_Anim_Diff.Quaternion() * TestTransform1.GetRotation());
	}
	//OLDER CODE END

	normal_rot = FRotator(normal_rot.Quaternion() * (TestTransform1.Rotator()).Quaternion());

	return normal_rot;
}





void FAnimNode_DragonFeetSolver::GetFeetHeights(FComponentSpacePoseContext& Output)
{
	if (owning_skel)
	{


		

		FeetRootHeights.Empty();



		//	FeetRootHeights.AddUninitialized(spine_Feet_pair.Num());
		FeetRootHeights.AddDefaulted(spine_Feet_pair.Num());

		for (int i = 0; i < spine_Feet_pair.Num(); i++)
		{
			for (int j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{
				FTransform bonetraceTransform = Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[i].Associated_Feet[j].GetCompactPoseIndex(*SavedBoneContainer));
				//			float feet_root_height = (bonetraceTransform.GetLocation(), RootTraceTransform.GetLocation()).Size();

				

				

				float Height_Extra = 0;


				if (i == 0)
				{
					if (j == 0)
					{
						Height_Extra = Foot_01_Height_Offset;
					}
					if (j == 1)
					{
						Height_Extra = Foot_02_Height_Offset;
					}

				}



				if (i == spine_Feet_pair.Num() - 1)
				{
					if (j == 0)
					{
						Height_Extra = Foot_03_Height_Offset;
					}
					if (j == 1)
					{
						Height_Extra = Foot_04_Height_Offset;
					}

				}




				//GEngine->AddOnScreenDebugMessage(-1, 0.02f, FColor::Red, " feet : " + FString::SanitizeFloat(Height_Extra));



			//	if (Automatic_Foot_Height_Detection)

				if (!dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Fixed_Foot_Height)
				{
					if (dragon_input_data.FeetBones.Num() > spine_Feet_pair[i].order_index[j])
						FeetRootHeights[i].Add((FMath::Abs(bonetraceTransform.GetLocation().Z - FVector(0, 0, 0).Z) * owning_skel->GetComponentScale().Z) + ((dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Feet_Heights + Height_Extra) * owning_skel->GetComponentScale().Z));
				}
				else
					FeetRootHeights[i].Add((spine_Feet_pair[i].Feet_Heights[j] + Height_Extra) * owning_skel->GetComponentScale().Z);




				float warp_intensity = 0;

				if (Feet_Lift_Warping)
				{
					/*
					FVector warped_vector = EndBoneCSTransformX.GetLocation();

					warped_vector.Z += (EndBoneCSTransformX.GetLocation().Z - 5) * Feet_Lift_Warp_Multiplier;

					EndBoneCSTransformX.SetLocation(warped_vector);
					*/

					
					warp_intensity = (bonetraceTransform.GetLocation().Z - feet_vertical_size) * Feet_Lift_Warp_Multiplier;
					//warp_intensity = 25;
					warp_intensity = FMath::Max<float>(0, warp_intensity);
					warp_intensity = FMath::Clamp<float>(warp_intensity,0, Feet_Lift_Limit);

					FeetRootHeights[i][j] += warp_intensity;

					//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " EndBoneCSTransformX Z : " + FString::SanitizeFloat(EndBoneCSTransformX.GetLocation().Z));

					//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " warp_intensity Z : " + FString::SanitizeFloat(warp_intensity));


				}


				/*
				FeetFingerHeights[i][j].Empty();

				for (int32 k_finger = 0; k_finger < spine_Transform_pairs[i].Associated_Fingers[j].Num(); k_finger++)
				{

					const FCompactPoseBoneIndex ModifyBoneIndex_Local_Finger = spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
					FTransform ComponentBoneTransform_Finger = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_Finger);

					FeetFingerHeights[i][j].Add( ((FMath::Abs(ComponentBoneTransform_Finger.GetLocation().Z - FVector(0, 0, 0).Z) * owning_skel->GetComponentScale().Z)));

				}
				*/
				//FeetRootHeights[i].Add(FMath::Abs(10*owning_skel->GetComponentScale().Z));



			}

		}

	}

}

void FAnimNode_DragonFeetSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Output)
{
	Super::EvaluateComponentSpaceInternal(Output);

}






void FAnimNode_DragonFeetSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{

#if WITH_EDITORONLY_DATA
	if (show_trace_in_game && PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{

		float owner_scale = 1;

		if (PreviewSkelMeshComp->GetOwner())
		{
			owner_scale = PreviewSkelMeshComp->GetComponentTransform().GetScale3D().Z * virtual_scale;
		}



		/*
		for (int k = 0; k < spine_Feet_pair.Num(); k++)
		{



			for (int i = 0; i < spine_Feet_pair[k].knee_direction_offset.Num(); i++)
			{
				DrawDebugBox(PreviewSkelMeshComp->GetWorld(), feet_knee_offset_array[k][i], FVector(Trace_Radius*owner_scale), FColor::Red, false, 0.1f);

			}

		}
		*/


		for (int i = 0; i < TraceStartList.Num(); i++)
		{

			float selected_radius = Trace_Radius;

			if (TraceRadiusList[i] > 0)
			{
				selected_radius = TraceRadiusList[i];
			}


			if (trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type || selected_radius < 0.2f || Is_Line_Mode[i])
				DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Red, false, 0.1f);
			else
				if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
				{
					FVector Vector_Difference = (TraceStartList[i] - TraceEndList[i]);
					Vector_Difference.X = 0;
					Vector_Difference.Y = 0;



					FVector character_direction_vector = character_direction_vector_CS;

					if (owning_skel->GetOwner())
					{
						const FVector char_up = character_direction_vector_CS;
						//	FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);
						character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);

					}

					float Scaled_Trace_Radius = selected_radius * owner_scale;




					DrawDebugCapsule(PreviewSkelMeshComp->GetWorld(), (TraceStartList[i] + character_direction_vector * Scaled_Trace_Radius) - FVector(0, 0, Vector_Difference.Z * 0.5f), Vector_Difference.Size() * 0.5f + (Scaled_Trace_Radius), Scaled_Trace_Radius, FRotator(0, 0, 0).Quaternion(), FColor::Red, false, 0.1f);


					//DrawDebugCapsuleTraceSingle(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], HalfSize, Orientation, DrawDebugType, bHit, OutHit, TraceColor, TraceHitColor, DrawTime);
					//FHitResult out_result;
					//DrawDebugSphereTraceSingle(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], Trace_Radius*owner_scale,EDrawDebugTrace::ForOneFrame, true, out_result,FLinearColor::Red, FLinearColor::Red,0.1f);


					//DrawDebugSphereTraceSingle(World, Start, End, Radius, DrawDebugType, bHit, OutHit, TraceColor, TraceHitColor, DrawTime);
				}
			/*
				else
					if (trace_type == EIKTrace_Type_Plugin::ENUM_BoxTrace_Type)
					{
						FVector Vector_Difference = (TraceStartList[i] - TraceEndList[i]);
						Vector_Difference.X = 0;
						Vector_Difference.Y = 0;
						// - FVector(0,0, Vector_Difference.Z*2)
						DrawDebugBox(PreviewSkelMeshComp->GetWorld(), TraceStartList[i] - FVector(0, 0, Vector_Difference.Z * 0.5f), FVector(Trace_Radius * owner_scale, Trace_Radius * owner_scale, Vector_Difference.Size() * 0.5f), FColor::Red, false, 0.1f);
					}
					*/

		}


	}
#endif

}

//Perform update operations inside this
void FAnimNode_DragonFeetSolver::UpdateInternal(const FAnimationUpdateContext& Context)
{

	FAnimNode_DragonControlBase::UpdateInternal(Context);


	scale_mode = 1;

	if (owning_skel)
	{
		current_fps = 1 / (0.01f+delta_seconds_saved);

		//		GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " current_fps " + FString::SanitizeFloat(current_fps));

		owner_skel_w_transform = owning_skel->GetComponentTransform();



		

		if (owning_skel->GetOwner())
		{
			scale_mode = owner_skel_w_transform.GetScale3D().Z * virtual_scale;

			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds * owning_skel->GetOwner()->CustomTimeDilation;
		}
		else
		{
			delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
		}


		if (Character_Actor)
		{
			if (Override_Curve_Velocity)
				Character_Speed = custom_velocity;
			else
				Character_Speed = Character_Actor->GetVelocity().Size();
		}

	}
	else
	{
		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
	}

	

	float extra_multiplier = Interpolation_Velocity_Curve.GetRichCurve()->Eval(Character_Speed);


	Delta_Loc_Speed = FMath::Clamp<float>(delta_seconds_saved * 15 * Location_Lerp_Speed * extra_multiplier, 0, 1);


	Delta_Rot_Speed = FMath::Clamp<float>((1 - FMath::Exp(-10 * delta_seconds_saved)) * feet_rotation_speed * extra_multiplier, 0, 1);


	//	Delta_Loc_Speed = delta_seconds_saved * 15 * Location_Lerp_Speed;


	//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Delta_Loc_Speed " + FString::SanitizeFloat( Delta_Loc_Speed) );


	scale_mode = FMath::Clamp<float>(scale_mode, 0.01f, 100000000);


	



	current_trace_interval = trace_interval_duration;

	if (Use_LOD_Specific_Intervals)
	{
		int lod_current_index = owning_skel->GetForcedLOD();

		if (lod_current_index == 0)
		{
			current_trace_interval = LOD0_Interval;
		}
		else
			if (lod_current_index == 1)
			{
				current_trace_interval = LOD1_Interval;
			}
			else
			{
				current_trace_interval = LOD2_Interval;
			}



	}


	if (Use_Interval_Velocity_Curve)
	{
		current_trace_interval *= Interval_Velocity_Curve.GetRichCurve()->Eval(Character_Speed);
	}


	if (Use_Trace_Distance_Adapting)
	{

		if (owning_skel->GetWorld()->GetFirstPlayerController())
		{

			FVector Camera_Location = owning_skel->GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
			float Distance_Bw_Cam_Char = (owning_skel->GetComponentLocation() - Camera_Location).Size();


			trace_distance_legal = Distance_Bw_Cam_Char < Trace_Max_Distance;
		}
		else
		{
			trace_distance_legal = true;
		}

	}
	else
	{
		trace_distance_legal = true;
	}


	trace_timer_count += owning_skel->GetWorld()->DeltaTimeSeconds;
	

	if (enable_solver)
	{
		

		TraceStartList.Empty();
		TraceEndList.Empty();
		Is_Line_Mode.Empty();
		TraceRadiusList.Empty();



		if (test_counter < 500)
			test_counter++;


		//trace_draw_counter++;

		if (test_counter < 10)
		{
			Delta_Loc_Speed = FMath::Clamp<float>(delta_seconds_saved * 100, 0, 1);
		}





		const FVector char_up = character_direction_vector_CS;

		FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);


		FVector character_forward_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, character_forward_direction_vector_CS);


		FVector character_right_vector = FVector::CrossProduct(character_forward_vector, character_direction_vector);



		for (int32 i = 0; i < spine_hit_pairs.Num(); i++)
		{


			//if (spine_Transform_pairs[i].Associated_Feet.Num() > 0 && spine_hit_pairs[i].RV_Feet_Hits.Num() > 0)
			{
				if (spine_Feet_pair.Num() - 1 < i) continue; // @tikwon

				if (i < spine_Feet_pair.Num() && i < spine_Transform_pairs.Num())
					for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
					{

						if (j < spine_Transform_pairs[i].Associated_Feet.Num() && dragon_input_data.FeetBones.Num() > spine_Feet_pair[i].order_index[j])
						{

							if (spine_Transform_pairs[i].Associated_Frozen_Feet[j].Equals(FTransform::Identity))
								spine_Transform_pairs[i].Associated_Frozen_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];

							
							
							if (sticky_feet_mode)
							{
							//	&& 


								bool sticky_feet_bool = false;
									
								if( spine_Feet_pair[i].order_index[j] < sticky_feets_data.sticky_feet_array.Num())
								sticky_feet_bool = sticky_feets_data.sticky_feet_array[spine_Feet_pair[i].order_index[j]];


								if (sticky_floor_detection)
								{

									
								//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Original_Associated_Feet : " + FString::SanitizeFloat( spine_AnimatedTransform_pairs[i].Original_Associated_Feet[j].GetLocation().Z) );



									if (spine_AnimatedTransform_pairs[i].Original_Associated_Feet[j].GetLocation().Z > floor_value || !Auto_Sticky_Toggle)
									{
											spine_AnimatedTransform_pairs[i].Sticky_Feet_Auto[j] = false;

											//sticky_feets_data.sticky_feet_array[spine_Feet_pair[i].order_index[j]] = true;
									}
									else
									{
											spine_AnimatedTransform_pairs[i].Sticky_Feet_Auto[j] = true;

											//sticky_feets_data.sticky_feet_array[spine_Feet_pair[i].order_index[j]] = false;
									}

									sticky_feet_bool = spine_AnimatedTransform_pairs[i].Sticky_Feet_Auto[j];

									spine_AnimatedTransform_pairs[i].Sticky_Feet_Input[j] = sticky_feet_bool;



									


								}







								if (Sticky_Feet_Range > 0)
								{
									FVector thigh_to_feet_dir = (spine_Transform_pairs[i].Associated_Frozen_Feet[j].GetLocation() - spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
									float tf_dir_size = FMath::Clamp<float>(thigh_to_feet_dir.Size(), 0, Sticky_Feet_Range * scale_mode);
									spine_Transform_pairs[i].Associated_Frozen_Feet[j].SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation() + thigh_to_feet_dir.GetSafeNormal() * tf_dir_size);
								}



							//	if ((  spine_Feet_pair[i].order_index[j]) < sticky_feets_data.sticky_feet_array.Num() )
								{
									
									if (sticky_feet_bool == true && spine_hit_pairs[i].RV_Feet_Hits[j].bBlockingHit)
									{
									
										spine_Transform_pairs[i].Associated_Sticky_Alpha[j] = FMath::FInterpConstantTo(spine_Transform_pairs[i].Associated_Sticky_Alpha[j], 1, delta_seconds_saved, sticky_feet_on_speed);
										spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation(UKismetMathLibrary::VLerp(spine_Transform_pairs[i].Associated_Feet[j].GetLocation(), spine_Transform_pairs[i].Associated_Frozen_Feet[j].GetLocation() , spine_Transform_pairs[i].Associated_Sticky_Alpha[j]) );
										spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools[j] = spine_Transform_pairs[i].Associated_Temp_Feet[j].GetLocation();

									//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Blue, " ALPHA : " + FString::SanitizeFloat(spine_AnimatedTransform_pairs[i].Associated_Sticky_Alpha[j]));

									}
								else
									{

										spine_Transform_pairs[i].Associated_Frozen_Feet[j].SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
										spine_Transform_pairs[i].Associated_Sticky_Alpha[j] = FMath::FInterpConstantTo(spine_Transform_pairs[i].Associated_Sticky_Alpha[j], 0, delta_seconds_saved, sticky_feet_off_speed);
										spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation(UKismetMathLibrary::VLerp(spine_Transform_pairs[i].Associated_Feet[j].GetLocation(), spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools[j], spine_Transform_pairs[i].Associated_Sticky_Alpha[j]));

									}





									
									

								}
							//	else
								/*
								{


								//	spine_Transform_pairs[i].Associated_Frozen_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
								//	spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation( spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
								

									if (spine_Transform_pairs[i].Associated_Frozen_Feet[j].GetLocation().Equals(FVector::ZeroVector))
									{
										spine_Transform_pairs[i].Associated_Frozen_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
										spine_Transform_pairs[i].Associated_Temp_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
									}


									spine_Transform_pairs[i].Associated_Frozen_Feet[j].SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
									spine_Transform_pairs[i].Associated_Sticky_Alpha[j] = FMath::FInterpConstantTo(spine_Transform_pairs[i].Associated_Sticky_Alpha[j], 0, delta_seconds_saved, sticky_feet_off_speed);
									spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation(UKismetMathLibrary::VLerp(spine_Transform_pairs[i].Associated_Feet[j].GetLocation(), spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools[j], spine_Transform_pairs[i].Associated_Sticky_Alpha[j]));

								
								
								}*/

							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " ALPHA : " + FString::SanitizeFloat(spine_AnimatedTransform_pairs[i].Associated_Sticky_Alpha[j]));

							}
							else
							{


								
								if (spine_Transform_pairs[i].Associated_Frozen_Feet[j].GetLocation().Equals(FVector::ZeroVector) || spine_Transform_pairs[i].Associated_Temp_Feet[j].ContainsNaN())
								{
									spine_Transform_pairs[i].Associated_Frozen_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
									spine_Transform_pairs[i].Associated_Temp_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
								}
								

							//	spine_Transform_pairs[i].Associated_Frozen_Feet[j].SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
							//	spine_Transform_pairs[i].Associated_Sticky_Alpha[j] = FMath::FInterpConstantTo(spine_Transform_pairs[i].Associated_Sticky_Alpha[j], 0, delta_seconds_saved, sticky_feet_off_speed);
							//	spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation(UKismetMathLibrary::VLerp(spine_Transform_pairs[i].Associated_Feet[j].GetLocation(), spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools[j], spine_Transform_pairs[i].Associated_Sticky_Alpha[j]));


								spine_Transform_pairs[i].Associated_Frozen_Feet[j].SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation());
								spine_Transform_pairs[i].Associated_Sticky_Alpha[j] = FMath::FInterpConstantTo(spine_Transform_pairs[i].Associated_Sticky_Alpha[j], 0, delta_seconds_saved, sticky_feet_off_speed);
								spine_Transform_pairs[i].Associated_Temp_Feet[j].SetLocation(UKismetMathLibrary::VLerp(spine_Transform_pairs[i].Associated_Feet[j].GetLocation(), spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools[j], spine_Transform_pairs[i].Associated_Sticky_Alpha[j]));


								if (spine_Transform_pairs[i].Associated_Temp_Feet[j].ContainsNaN())
								{
									//GEngine->AddOnScreenDebugMessage(-1, 10.05f, FColor::Red, " startpoint mod2 : " + spine_Transform_pairs[i].Associated_Feet[j].ToString());

									spine_Transform_pairs[i].Associated_Temp_Feet[j] = spine_Transform_pairs[i].Associated_Feet[j];
								}

							//	spine_AnimatedTransform_pairs[i].Associated_Sticky_Alpha[j] = 0;

							}



							

							



							FVector offseted_linetrace_location = spine_Transform_pairs[i].Associated_Temp_Feet[j].GetLocation();


							const FVector Vanilla_Location = offseted_linetrace_location;



							int multi_to_single_index = spine_Feet_pair[i].order_index[j];

							FVector extra_foot_offset = FVector::ZeroVector;
							if (multi_to_single_index < feet_extra_offset_array.feet_extra_offset_array.Num())
							{

								extra_foot_offset = feet_extra_offset_array.feet_extra_offset_array[multi_to_single_index];
								
							}
							

							
							FVector foot_offset_a = UKismetMathLibrary::TransformLocation(owner_skel_w_transform,extra_foot_offset + dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Feet_Trace_Offset);							
							FVector foot_offset_b = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, FVector(0,0,0));

							
							

							
							FVector feet_offset_difference = (foot_offset_a - foot_offset_b);
							//feet_offset_difference = (extra_foot_offset - feet_offset_difference);
							

							

							offseted_linetrace_location += feet_offset_difference;

						//	offseted_linetrace_location += (UKismetMathLibrary::TransformLocation(owner_skel_w_transform, dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Feet_Trace_Offset));


							//line_trace_func(owning_skel, offseted_linetrace_location + FVector(0, 0, Total_spine_heights[i] * 1), offseted_linetrace_location - FVector(0, 0, FeetRootHeights[i][j] * 1), spine_hit_pairs[i].RV_Feet_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName, spine_Feet_pair[i].Associated_Feet[j].BoneName, spine_hit_pairs[i].RV_Feet_Hits[j]);






							FVector Front_point_location = spine_Transform_pairs[i].Associated_Feet[j].GetLocation() + (character_forward_vector * dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Front_Trace_Point_Spacing * scale_mode);


							FVector Mid_Point_Location_R = (Front_point_location + Vanilla_Location) * 0.5f + (character_right_vector * dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Side_Traces_Spacing * scale_mode);

							FVector Mid_Point_Location_L = (Front_point_location + Vanilla_Location) * 0.5f - (character_right_vector * dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Side_Traces_Spacing * scale_mode);


							FeetTipLocations[i][j] = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Front_point_location);

							FeetWidthSpacing[i][j] = dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Side_Traces_Spacing;



							//	FeetTipLocations[i][j] = Front_point_location;


								//FVector feet_direction = (spine_AnimatedTransform_pairs[i].Associated_Knee[j].GetLocation() - spine_AnimatedTransform_pairs[i].Associated_Feet[j].GetLocation()).GetSafeNormal();

								/*
								line_trace_func(owning_skel
									, offseted_linetrace_location + (feet_direction*line_trace_upper_height * scale_mode),
									offseted_linetrace_location - (feet_direction* (FeetRootHeights[i][j] - line_trace_down_height)  ),
									spine_hit_pairs[i].RV_Feet_Hits[j],
									spine_Feet_pair[i].Associated_Feet[j].BoneName,
									spine_Feet_pair[i].Associated_Feet[j].BoneName
									, spine_hit_pairs[i].RV_Feet_Hits[j]);
								*/


							float start_const = line_trace_upper_height * scale_mode;

							float end_const = FeetRootHeights[i][j] + (line_trace_down_height * Trace_Down_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed) * scale_mode);


							

							line_trace_func(owning_skel, offseted_linetrace_location + character_direction_vector * start_const,
								offseted_linetrace_location - character_direction_vector * end_const,
								//					offseted_linetrace_location,
								spine_hit_pairs[i].RV_Feet_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName
								, spine_Feet_pair[i].Associated_Feet[j].BoneName, dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Overrided_Trace_Radius,
								spine_hit_pairs[i].RV_Feet_Hits[j], FLinearColor::Blue, true, false);



							line_trace_func(owning_skel, Front_point_location + character_direction_vector * start_const,
								Front_point_location - character_direction_vector * end_const,
								//					offseted_linetrace_location,
								spine_hit_pairs[i].RV_FeetFront_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName
								, spine_Feet_pair[i].Associated_Feet[j].BoneName,0,
								spine_hit_pairs[i].RV_FeetFront_Hits[j], FLinearColor::Blue, false, true);




							line_trace_func(owning_skel, Mid_Point_Location_L + character_direction_vector * start_const,
								Mid_Point_Location_L - character_direction_vector * end_const,
								//					offseted_linetrace_location,
								spine_hit_pairs[i].RV_FeetLeft_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName
								, spine_Feet_pair[i].Associated_Feet[j].BoneName,0,
								spine_hit_pairs[i].RV_FeetLeft_Hits[j], FLinearColor::Blue, false, true);


							line_trace_func(owning_skel, Mid_Point_Location_R + character_direction_vector * start_const,
								Mid_Point_Location_R - character_direction_vector * end_const,
								//					offseted_linetrace_location,
								spine_hit_pairs[i].RV_FeetRight_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName
								, spine_Feet_pair[i].Associated_Feet[j].BoneName,0,
								spine_hit_pairs[i].RV_FeetRight_Hits[j], FLinearColor::Blue, false, true);



							/*
							if (spine_hit_pairs[i].RV_Feet_Hits[j].bBlockingHit)
							{
								const FVector impact_foot_point = spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint;

								spine_hit_pairs[i].RV_Feet_Hits[j] = FHitResult();

								line_trace_func(owning_skel, impact_foot_point + character_direction_vector * start_const,
									impact_foot_point - character_direction_vector * end_const,
									//					offseted_linetrace_location,
									spine_hit_pairs[i].RV_Feet_Hits[j], spine_Feet_pair[i].Associated_Feet[j].BoneName
									, spine_Feet_pair[i].Associated_Feet[j].BoneName,
									spine_hit_pairs[i].RV_Feet_Hits[j], FLinearColor::Blue);


							}
							*/

							//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " FeetRootHeights : " + FString::SanitizeFloat(FeetRootHeights[i][j]) );


							for (int32 k_finger = 0; k_finger < spine_Transform_pairs[i].Associated_Fingers[j].Num(); k_finger++)
							{



								FVector trace_offset = dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Finger_Array[k_finger].Trace_Offset;
								//finger_linetrace_location = 

							//	FVector finger_loc = owner_skel_w_transform.TransformPosition( feet_fingers_transform_array[i][j][k_finger].GetLocation() + trace_offset);

								FVector finger_loc = owner_skel_w_transform.TransformPosition(feet_fingers_transform_array[i][j][k_finger].GetLocation() + trace_offset);



								FVector original_finger_loc = owner_skel_w_transform.TransformPosition(feet_fingers_transform_array[i][j][k_finger].GetLocation() + FVector(0, 0, trace_offset.Z));


								//	FVector finger_loc = finger_linetrace_location;

								float finger_scale = dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Finger_Array[k_finger].Trace_Scale;


								line_trace_func(owning_skel, finger_loc + character_direction_vector * start_const * finger_scale,
									finger_loc - character_direction_vector * end_const * finger_scale,
									//					offseted_linetrace_location,
									spine_hit_pairs[i].RV_Associated_Fingers_Hits[j][k_finger], spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName
									, spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName,0,
									spine_hit_pairs[i].RV_Associated_Fingers_Hits[j][k_finger], FLinearColor::Blue, true, true);



								line_trace_func(owning_skel, original_finger_loc + character_direction_vector * start_const * finger_scale,
									original_finger_loc - character_direction_vector * end_const * finger_scale,
									//					offseted_linetrace_location,
									spine_hit_pairs[i].RV_Original_Associated_Fingers_Hits[j][k_finger], spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName
									, spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName,0,
									spine_hit_pairs[i].RV_Original_Associated_Fingers_Hits[j][k_finger], FLinearColor::Blue, false, true);






								/*
																line_trace_func(owning_skel, finger_linetrace_location + character_direction_vector * start_const,
									finger_linetrace_location - character_direction_vector * end_const,
									//					offseted_linetrace_location,
									spine_hit_pairs[i].RV_Associated_Fingers_Hits[j][k_finger], spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName
									, spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName,
									spine_hit_pairs[i].RV_Associated_Fingers_Hits[j][k_finger], FLinearColor::Blue);

								*/

								//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " FeetRootHeights : " + FString::SanitizeFloat(k_finger));

								//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " FeetRootHeights : " + spine_Feet_pair[i].Fingers_Name_Array[j][k_finger].BoneName.ToString()+" : "+ finger_linetrace_location.ToString());


							}




							

							if (use_footstep_listening)
							{

								if (dragon_footsteps_component != nullptr && dragon_footsteps_component != NULL)
								{

									//FTransform feet_transform_val = (spine_Transform_pairs[i].Associated_Feet[j]);

									//FTransform feet_transform_val = feet_mod_transform_array[i][j] * owner_skel_w_transform;

									FTransform feet_transform_val;

									//int multi_to_single_index = -1;

									
									//multi_to_single_index = spine_Feet_pair[i].order_index[j];

									if(multi_to_single_index > -1 && (multi_to_single_index < dragon_footsteps_component->foot_socket.Num())  )
									 feet_transform_val = owning_skel->GetSocketTransform( dragon_footsteps_component->foot_socket[multi_to_single_index]);
								    else
									 feet_transform_val = feet_mod_transform_array[i][j] * owner_skel_w_transform;

									//FVector hit_point = feet_impactpoint_array[i][j];
									FVector hit_point = spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint;
									//FVector hit_point = spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint + FVector(0,0, dragon_footsteps_component->foot_height);


									hit_point.X = feet_transform_val.GetLocation().X;
									hit_point.Y = feet_transform_val.GetLocation().Y;


									Feet_Previous_Position[i][j].X = feet_transform_val.GetLocation().X;
									Feet_Previous_Position[i][j].Y = feet_transform_val.GetLocation().Y;




									//feet_transform_val.SetLocation(spine_Transform_pairs[i].Associated_Feet[j].GetLocation() - character_direction_vector * FeetRootHeights[i][j]);

									//FName test = FName(feet_transform_val.GetLocation().ToString()+" -- " + hit_point.ToString());
									//FName test = FName( FString::SanitizeFloat( (feet_transform_val.GetLocation() - hit_point).Size()) );

									//FName test = FName(FString::SanitizeFloat(velocity_difference));


									float z_difference = feet_transform_val.GetLocation().Z - hit_point.Z;

									z_difference = FMath::Clamp<float>(z_difference,0,1000);

									if ((z_difference < dragon_footsteps_component->foot_enter_height))
									{
										if (FeetStepBools[i][j] == false)
										{
											//dragon_footsteps_component->OnCharacterFootStep.Broadcast(spine_Feet_pair[i].Associated_Feet[j].BoneName, feet_transform_val);

											dragon_footsteps_component->SendInfoToDelegate(spine_Feet_pair[i].Associated_Feet[j].BoneName, feet_transform_val, z_difference, spine_hit_pairs[i].RV_Feet_Hits[j]);

											FeetStepBools[i][j] = true;

										}
									}
									//else
										if ((z_difference > dragon_footsteps_component->foot_exit_height))
									{
										FeetStepBools[i][j] = false;
									}


									Feet_Previous_Position[i][j] = feet_transform_val.GetLocation();

									//	dragon_footsteps_component->OnCharacterFootStepItem.Broadcast(spine_Feet_pair[i].Associated_Feet[j].BoneName, feet_transform_val);

								}


							}

						}
					}




			}





			/*
			if (i == 0)
			{
				FVector a = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();
				float b = Total_spine_heights[i];
				FVector c = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();


				line_trace_func(owning_skel, spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() + FVector(0, 0, Total_spine_heights[i] * line_trace_upper_height * scale_mode), spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() - FVector(0, 0, line_trace_downward_height * scale_mode), spine_hit_pairs[i].Parent_Spine_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Spine_Hit);
			}
			else
			{
				FVector offseted_vector = spine_Transform_pairs[i].Spine_Involved.GetLocation() - spine_Transform_pairs[0].Spine_Involved.GetLocation();

				line_trace_func(owning_skel, spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation() + offseted_vector + FVector(0, 0, line_trace_upper_height * scale_mode), spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation() + offseted_vector - FVector(0, 0, line_trace_downward_height * scale_mode), spine_hit_pairs[i].Parent_Spine_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Spine_Hit);
			}
			*/

		}


		



	}



	if (trace_timer_count > current_trace_interval && trace_distance_legal)
		trace_timer_count = 0;
}



/*
void FAnimNode_DragonFeetSolver::EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
}
*/

void FAnimNode_DragonFeetSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	//ComponentPose.EvaluateComponentSpace(Output);


	bool execute_in_animbp = true;


	if (show_trace_in_game == false)
	{
		if (owning_skel->GetWorld()->WorldType == EWorldType::EditorPreview)
		{
			execute_in_animbp = false;
		}
	}

	


	if (execute_in_animbp && enable_solver && (FVector(0, 0, 0) - Output.AnimInstanceProxy->GetActorTransform().GetScale3D()).Size() > 0 && FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Output.AnimInstanceProxy->GetSkeleton(), Output.AnimInstanceProxy->GetRequiredBones()) && spine_Feet_pair.Num() > 0 && Output.ContainsNaN() == false)
	{



		if (use_footstep_listening)
		{
			if (owning_skel->GetWorld()->IsGameWorld())
			{
				if (dragon_footsteps_component == NULL || dragon_footsteps_component == nullptr)
				{
					dragon_footsteps_component = owning_skel->GetOwner()->FindComponentByClass<UDragonIKFootStepsComponent>();
				}

				//if (feet_mod_transform_array[i][j].GetLocation() == FVector::ZeroVector)

			

			}

		}

		LineTraceControl_AnyThread(Output, BoneTransforms);


		GetAnimatedPoseInfo(Output.Pose);



		for (int i = 0; i < spine_Feet_pair.Num(); i++)
		{

			if (i < spine_Feet_pair.Num() && i < spine_AnimatedTransform_pairs.Num())
			{

				const FCompactPoseBoneIndex ModifyBoneIndex_Local_i = spine_Feet_pair[i].Spine_Involved.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
				FTransform ComponentBoneTransform_Local_i = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_i);

				spine_AnimatedTransform_pairs[i].Spine_Involved = (ComponentBoneTransform_Local_i)*owner_skel_w_transform;

				spine_AnimatedTransform_pairs[i].Spine_Involved.SetRotation(owner_skel_w_transform.GetRotation() * ComponentBoneTransform_Local_i.GetRotation());

				//			FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, ComponentBoneTransform_Temp, FCompactPoseBoneIndex(spine_Feet_pair[i].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);




				//			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " spine rot 2 : " + FRotator(ComponentBoneTransform.GetRotation()).ToString());



				for (int j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
				{

					if (j < spine_Feet_pair[i].Associated_Feet.Num())
					{

						const FCompactPoseBoneIndex ModifyBoneIndex_Local_j = spine_Feet_pair[i].Associated_Feet[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
						FTransform ComponentBoneTransform_Local_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_j);
						//				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Local_j.GetLocation());
						

						
						//FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, ComponentBoneTransform_Local_Temp, ModifyBoneIndex_Local_j, EBoneControlSpace::BCS_WorldSpace);

						//FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, Output.Pose, ComponentBoneTransform_Local_Temp, ModifyBoneIndex_Local_j, EBoneControlSpace::BCS_WorldSpace);

						//FTransform Temp_Zero_Transform = owner_skel_w_transform;

						//Temp_Zero_Transform.SetLocation(FVector::ZeroVector);

						//FTransform Temp_Diff_Transform = Temp_Zero_Transform * owner_skel_w_transform.Inverse();


					

						if (i < spine_AnimatedTransform_pairs.Num())
						{
							if (j < spine_AnimatedTransform_pairs[i].Associated_Feet.Num())
							{

								spine_AnimatedTransform_pairs[i].Associated_Feet[j] = (ComponentBoneTransform_Local_j)*owner_skel_w_transform;

							}
						}






						/*
						const FCompactPoseBoneIndex ModifyBoneIndex_Knee_j = spine_Feet_pair[i].Associated_Knees[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
						FTransform ComponentBoneTransform_Knee_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Knee_j);
						//				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Knee_j.GetLocation());

						spine_AnimatedTransform_pairs[i].Associated_Knee[j] = (ComponentBoneTransform_Knee_j)*owner_skel_w_transform;
						*/

					}





				}


			}
		}








		TArray<TArray<FTransform>> feet_rotation_array = TArray<TArray<FTransform>>();


		for (int spine_index = 0; spine_index < spine_hit_pairs.Num(); spine_index++)
		{
			feet_rotation_array.Add(TArray<FTransform>());

			if (spine_Feet_pair.Num() - 1 < spine_index) continue; // @tikwon

			for (int feet_index = 0; feet_index < spine_hit_pairs[spine_index].RV_Feet_Hits.Num(); feet_index++)
			{

				if (feet_index < spine_hit_pairs[spine_index].RV_Feet_Hits.Num())
				{

					if (spine_Feet_pair[spine_index].Associated_Feet.Num() - 1 < feet_index) continue;

					FTransform EndBoneCSTransform = Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex);

					//FTransform EndBoneCSTransform = FTransform::Identity;


					feet_rotation_array[spine_index].Add(EndBoneCSTransform);
				}

			}
		}



		//	Output.ResetToRefPose();

		OptionalRefPose.EvaluateComponentSpace(Output);


		GetFeetHeights(Output);

		if (Use_OptionalRef_Feet_As_Ref)
			Calculate_Feet_Rotation(Output, feet_rotation_array);




		EvaluateComponentSpaceInternal(Output);
		AnimatedBoneTransforms.Reset(AnimatedBoneTransforms.Num());
		FinalBoneTransforms.Reset(FinalBoneTransforms.Num());
		//Get Initial Pose data
		GetResetedPoseInfo(Output.Pose);
		//Reset Bone Transform array
		BoneTransforms.Reset(BoneTransforms.Num());
		saved_pose = &Output;


		ComponentPose.EvaluateComponentSpace(Output);

		if (!Use_OptionalRef_Feet_As_Ref)
			Calculate_Feet_Rotation(Output, feet_rotation_array);


		//	if (!use_ref_rotation)
		//		Calculate_Feet_Rotation(Output, feet_rotation_array);




		SCOPE_CYCLE_COUNTER(STAT_DragonFeetSolver_Eval);
		check(OutBoneTransforms.Num() == 0);




		

		if (spine_hit_pairs.Num() > 0 )
		{



			atleast_one_hit = true;


			//	for (int i = 0; i<feet_bone_array.Num(); i++)
			for (int i = 0; i < spine_hit_pairs.Num(); i++)
			{
				if (spine_Feet_pair.Num() - 1 < i) continue; // @tikwon
				for (int j = 0; j < spine_hit_pairs[i].RV_Feet_Hits.Num(); j++)
				{
					if (spine_Feet_pair[i].Associated_Feet.Num() - 1 < j) continue; // @tikwon
					Leg_Full_Function(spine_Feet_pair[i].Associated_Feet[j].BoneName, i, j, Output, OutBoneTransforms);
				}

			}

		//	for (int i = 0; i < OutBoneTransforms.Num(); i++)
		//	GEngine->AddOnScreenDebugMessage(-1, 0.05f, FColor::Red, " Position of count : "+FString::SanitizeFloat(i) + " : "+OutBoneTransforms[i].Transform.GetLocation().ToString());

		}


	}


}



void FAnimNode_DragonFeetSolver::Leg_Full_Function(FName foot_name, int spine_index, int feet_index, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms)
{


	FBoneReference ik_feet_bone = FBoneReference(foot_name);
	ik_feet_bone.Initialize(*SavedBoneContainer);






	if (ik_type == EIK_Type_Plugin::ENUM_Two_Bone_Ik)
		Leg_ik_Function(ik_feet_bone, spine_index, feet_index, EBoneControlSpace::BCS_WorldSpace, EBoneControlSpace::BCS_ComponentSpace, MeshBasesSaved, OutBoneTransforms);
	else
		Leg_Singleik_Function(ik_feet_bone, spine_index, feet_index, EBoneControlSpace::BCS_WorldSpace, EBoneControlSpace::BCS_ComponentSpace, MeshBasesSaved, OutBoneTransforms);


	bool do_stuff_in_preview = true;
		
	if (owning_skel->GetWorld()->WorldType == EWorldType::EditorPreview)
	{
		do_stuff_in_preview = execute_in_preview;
	}

	if(do_stuff_in_preview == false)
	{
		OutBoneTransforms.Empty();
	}

	
}







FVector ClampRotateVector(FVector input_position, FVector forward_vector_dir, FVector origin_location, float min_clamp_degrees, float max_clamp_degree, float hori_clamp_min, float hori_clamp_max)
{
	float Magnitude = (origin_location - input_position).Size();

	FVector rot1_v = (forward_vector_dir).GetSafeNormal();
	//	rot1_v = FVector::CrossProduct(FVector::UpVector, rot1_v);


	FVector rot2_v = (input_position - origin_location).GetSafeNormal();


	float Degrees = UKismetMathLibrary::DegAcos(FVector::DotProduct(rot1_v, rot2_v));


	FVector Angle_Cross_Result = FVector::CrossProduct(rot2_v, rot1_v);
	float Dir = FVector::DotProduct(Angle_Cross_Result, FVector::CrossProduct(FVector::UpVector, rot1_v));
	float Alpha_Dir_Vertical = (Dir / 2) + 0.5f;

	FVector Angle_Cross_Result_Horizontal = FVector::CrossProduct(rot2_v, rot1_v);
	float Dir_Horizontal = FVector::DotProduct(Angle_Cross_Result_Horizontal, FVector::UpVector);
	float Alpha_Dir_Horizontal = (Dir_Horizontal / 2) + 0.5f;

	float Max_Vertical_Angle = max_clamp_degree;
	float Min_Vertical_Angle = min_clamp_degrees;

	//Max_Vertical_Angle = Max_Vertical_Angle;
	//Min_Vertical_Angle = Min_Vertical_Angle;


	float Horizontal_Degree_Priority = (FMath::Lerp<float>(FMath::Abs<float>(hori_clamp_min), FMath::Abs<float>(hori_clamp_max), FMath::Clamp<float>(Alpha_Dir_Horizontal, 0, 1)));
	float Vertical_Degree_Priority = (FMath::Lerp<float>(FMath::Abs<float>(Min_Vertical_Angle), FMath::Abs<float>(Max_Vertical_Angle), FMath::Clamp<float>(Alpha_Dir_Vertical, 0, 1)));

	float selected_clamp_value = FMath::Lerp<float>(Vertical_Degree_Priority, Horizontal_Degree_Priority, FMath::Clamp<float>(FMath::Abs<float>(Dir_Horizontal), 0, 1));

	float Alpha = (selected_clamp_value / (FMath::Max<float>(selected_clamp_value, Degrees)));
	Alpha = FMath::Clamp<float>(Alpha, 0, 1);

	FVector output_rot = UKismetMathLibrary::VLerp(rot1_v, rot2_v, Alpha);
	return (origin_location + (output_rot.GetSafeNormal() * Magnitude));
}





FVector FAnimNode_DragonFeetSolver::RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle)
{
	FVector orbit_direction;

	orbit_direction = input_point - origin_point;

	FVector axis_dir = UKismetMathLibrary::RotateAngleAxis(orbit_direction, angle, forward_vector);

	FVector result_vector = input_point + (axis_dir - orbit_direction);

	return result_vector;

}




void FAnimNode_DragonFeetSolver::Leg_ik_Function(FBoneReference ik_footbone, int spine_index, int feet_index, TEnumAsByte<enum EBoneControlSpace> EffectorLocationSpace, TEnumAsByte<enum EBoneControlSpace> JointTargetLocationSpace, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms)
{

	// Get indices of the lower and upper limb bones and check validity.
	bool bInvalidLimb = false;

	FCompactPoseBoneIndex IKBoneCompactPoseIndex = ik_footbone.GetCompactPoseIndex(*SavedBoneContainer);


	if (automatic_leg_make == false)
	{


		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Feet : " + owning_skel->GetBoneName(spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex.GetInt()).ToString() + " = "+ owning_skel->GetBoneName(IKBoneCompactPoseIndex.GetInt()).ToString());

		IKBoneCompactPoseIndex = spine_Feet_pair[spine_index].Associated_Feet[feet_index].CachedCompactPoseIndex;
	}


	const FVector char_up = character_direction_vector_CS;

	FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);



	FCompactPoseBoneIndex LowerLimbIndex = (*SavedBoneContainer).GetParentBoneIndex(IKBoneCompactPoseIndex);

	if (automatic_leg_make == false)
	{
		LowerLimbIndex = spine_Feet_pair[spine_index].Associated_Knees[feet_index].CachedCompactPoseIndex;

		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Knee : " + owning_skel->GetBoneName(spine_Feet_pair[spine_index].Associated_Knees[feet_index].CachedCompactPoseIndex.GetInt()).ToString() + " = " + owning_skel->GetBoneName(LowerLimbIndex.GetInt()).ToString());

	}



	if (LowerLimbIndex == INDEX_NONE)
	{
		bInvalidLimb = true;
	}


	FCompactPoseBoneIndex UpperLimbIndex = (*SavedBoneContainer).GetParentBoneIndex(LowerLimbIndex);

	if (automatic_leg_make == false)
	{
		UpperLimbIndex = spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex;

		//	 GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Thigh : " + owning_skel->GetBoneName(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex.GetInt()).ToString() + " = " + owning_skel->GetBoneName(UpperLimbIndex.GetInt()).ToString());

	}


	if (UpperLimbIndex == INDEX_NONE)
	{
		bInvalidLimb = true;
	}











	const bool bInBoneSpace = (EffectorLocationSpace == BCS_ParentBoneSpace) || (EffectorLocationSpace == BCS_BoneSpace);
	const int32 EffectorBoneIndex = bInBoneSpace ? (*SavedBoneContainer).GetPoseBoneIndexForBoneName("") : INDEX_NONE;
	const FCompactPoseBoneIndex EffectorSpaceBoneIndex = (*SavedBoneContainer).MakeCompactPoseIndex(FMeshPoseBoneIndex(EffectorBoneIndex));


	// If we walked past the root, this controlled is invalid, so return no affected bones.
	if (bInvalidLimb)
	{
		return;
	}




	// Now get those in component space...
	FTransform LowerLimbCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(LowerLimbIndex);
	FTransform UpperLimbCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
	FTransform EndBoneCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);





	FTransform LowerLimbCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(LowerLimbIndex);
	FTransform UpperLimbCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
	FTransform EndBoneCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);


	//if (Sticky_Extension_Limit)
	{
		/*
		* Used only if sticky logic is used.
		*/
		spine_Transform_pairs[spine_index].Associated_Thigh[feet_index] = UpperLimbCSTransform;

		spine_Transform_pairs[spine_index].Associated_Thigh[feet_index].SetLocation(owner_skel_w_transform.TransformPosition(spine_Transform_pairs[spine_index].Associated_Thigh[feet_index].GetLocation()));


	}



	



	if (!Work_Outside_PIE)
	{
		if (!owning_skel->GetWorld()->IsGameWorld())
		{

			feet_mod_transform_array[spine_index][feet_index] = EndBoneCSTransformX;

		}

	}


	if (first_time_setup)
	{

		feet_mod_transform_array[spine_index][feet_index] = EndBoneCSTransformX;

		if (first_time_count > 5)
			first_time_setup = false;
		else
			first_time_count++;

	}





	//	FTransform RootBoneCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(FCompactPoseBoneIndex(0));




	// Get current position of root of limb.
	// All position are in Component space.
	const FVector RootPos = UpperLimbCSTransform.GetTranslation();
	const FVector InitialJointPos = LowerLimbCSTransform.GetTranslation();
	const FVector InitialEndPos = EndBoneCSTransform.GetTranslation();

	const FTransform Original_EndBoneCSTransform = EndBoneCSTransform;


	FVector EffectorLocation_Point = owner_skel_w_transform.InverseTransformPosition(spine_AnimatedTransform_pairs[spine_index].Associated_Feet[feet_index].GetLocation());





	//if (feet_mod_transform_array[spine_index][feet_index].GetLocation().Equals(FVector::ZeroVector))


	//if 


	//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Feet Z : " + FString::SanitizeFloat(FMath::Abs(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint.Z - (spine_AnimatedTransform_pairs[spine_index].Associated_Feet[feet_index].GetLocation().Z)))+" FeetBall Z : " + FString::SanitizeFloat(FMath::Abs(spine_hit_pairs[spine_index].RV_FeetBalls_Hits[feet_index].ImpactPoint.Z - (spine_AnimatedTransform_pairs[spine_index].Associated_FeetBalls[feet_index].GetLocation().Z))));



	if (!first_time_setup && atleast_one_hit && enable_solver == true)
	{
		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Feet is hit");



		FTransform eb_wtransform = EndBoneCSTransform;

		FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBasesSaved.Pose, eb_wtransform, EffectorSpaceBoneIndex, EffectorLocationSpace);


		//	if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
		{


			{


				FVector Temp_Impact_Ref = eb_wtransform.GetLocation();


				
				// THE NEW STICKY FEET CODE
				if (sticky_feet_mode)
				{
				
					FVector Impact_W_EB = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint;


					

					bool is_hit_stick = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit;



					if (is_hit_stick)
					{

						//	Temp_Impact_Ref = Impact_W_EB;

					//	Temp_Impact_Ref = Zero_XY_Vector(Temp_Impact_Ref, spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint, owner_skel_w_transform,false);


					//	Temp_Impact_Ref = Zero_XY_Vector(Temp_Impact_Ref, spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint, owner_skel_w_transform);
					//	Temp_Impact_Ref = UKismetMathLibrary::VLerp(spine_Transform_pairs[spine_index].Associated_Feet[feet_index].GetLocation(), Impact_W_EB, spine_Transform_pairs[spine_index].Associated_Sticky_Alpha[feet_index]);

					//	Temp_Impact_Ref = Zero_XY_Vector(Temp_Impact_Ref, spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint, owner_skel_w_transform,true);

					//	Temp_Impact_Ref = Impact_W_EB;


					//	if(spine_AnimatedTransform_pairs[spine_index].Sticky_Feet_Input[feet_index])
						 Temp_Impact_Ref = UKismetMathLibrary::VLerp(spine_Transform_pairs[spine_index].Associated_Feet[feet_index].GetLocation(), Impact_W_EB, spine_Transform_pairs[spine_index].Associated_Sticky_Alpha[feet_index]);
					//	else

					}
					else
					{
						Temp_Impact_Ref = UKismetMathLibrary::VLerp(eb_wtransform.GetLocation(), spine_Transform_pairs[spine_index].Associated_Temp_Feet[feet_index].GetLocation(), spine_Transform_pairs[spine_index].Associated_Sticky_Alpha[feet_index]);
					}


				//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Feet is hit "+ FString::SanitizeFloat( spine_Transform_pairs[spine_index].Associated_Sticky_Alpha[feet_index]));


				}
				else
				{
					if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
					Temp_Impact_Ref = Zero_XY_Vector(Temp_Impact_Ref, spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint, owner_skel_w_transform);

				}



			
				


				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " ALPHA : " + FString::SanitizeFloat(spine_Transform_pairs[spine_index].Associated_Sticky_Alpha[feet_index]));


				//TESTES
				//Temp_Impact_Ref = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint;




				if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
				{
					//Temp_Impact_Ref.Z = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint.Z;


					Temp_Impact_Ref = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint;

					Temp_Impact_Ref = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Temp_Impact_Ref);


					//if (interpolate_only_z)
					// Temp_Impact_Ref = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint;
					//else
					// Temp_Impact_Ref = spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint;


					
					if (sticky_feet_mode)
					{
						if (sticky_floor_detection)
						{

							
							if (spine_AnimatedTransform_pairs[spine_index].Sticky_Feet_Auto[feet_index])
							{

							}
							else
							{
								Temp_Impact_Ref.X = EndBoneCSTransform.GetLocation().X;
								Temp_Impact_Ref.Y = EndBoneCSTransform.GetLocation().Y;
							}
							
						}
						else
						{
							if (sticky_feets_data.sticky_feet_array.Num() > spine_Feet_pair[spine_index].order_index[feet_index])
							{
								if (sticky_feets_data.sticky_feet_array[spine_Feet_pair[spine_index].order_index[feet_index]])
								{

								}
								else
								{
									Temp_Impact_Ref.X = EndBoneCSTransform.GetLocation().X;
									Temp_Impact_Ref.Y = EndBoneCSTransform.GetLocation().Y;
								}
							}
							else
							{
								Temp_Impact_Ref.X = EndBoneCSTransform.GetLocation().X;
								Temp_Impact_Ref.Y = EndBoneCSTransform.GetLocation().Y;
							}

						}

					}
					else
					{
						//SET THE X and Y to original position to reduce jitters caused by the trace intervals
						Temp_Impact_Ref.X = EndBoneCSTransform.GetLocation().X;
						Temp_Impact_Ref.Y = EndBoneCSTransform.GetLocation().Y;
						
						
						int multi_to_single_index = spine_Feet_pair[spine_index].order_index[feet_index];

						FVector extra_foot_offset = FVector::ZeroVector;
						if (multi_to_single_index < feet_extra_offset_array.feet_extra_offset_array.Num())
						{
							extra_foot_offset = feet_extra_offset_array.feet_extra_offset_array[multi_to_single_index];
						}
							
						FVector foot_offset_a = extra_foot_offset + dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Trace_Offset;							
						FVector foot_offset_b =  FVector(0,0,0);
							
						FVector feet_offset_difference = (foot_offset_a - foot_offset_b);

						Temp_Impact_Ref += feet_offset_difference;
						
					}
					
					Temp_Impact_Ref = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, Temp_Impact_Ref);



					Temp_Impact_Ref = (Temp_Impact_Ref + character_direction_vector * (FeetRootHeights[spine_index][feet_index]));

					
				}
				else
				{

					//Temp_Impact_Ref.Z = (eb_wtransform.GetLocation() - character_direction_vector * FeetRootHeights[spine_index][feet_index]).Z;
					//if(interpolate_only_z)
						Temp_Impact_Ref.Z = (eb_wtransform.GetLocation() - character_direction_vector * FeetRootHeights[spine_index][feet_index]).Z;
					//else
					//Temp_Impact_Ref = (eb_wtransform.GetLocation() - character_direction_vector * FeetRootHeights[spine_index][feet_index]);
				}



/* FEET OFFSET CODE
				int multi_to_single_index = spine_Feet_pair[spine_index].order_index[feet_index];

				if (multi_to_single_index < feet_extra_offset_array.feet_extra_offset_array.Num())
				{
					Temp_Impact_Ref = Temp_Impact_Ref+feet_extra_offset_array.feet_extra_offset_array[multi_to_single_index];
				}
				*/

				if (Ignore_Location_Lerping || test_counter < 10)
				{
					feet_impactpoint_array[spine_index][feet_index] = Temp_Impact_Ref;

				}
				else
				{


					if (sticky_feet_mode)
					{
						feet_impactpoint_array[spine_index][feet_index] = AnimLocLerp(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit, spine_index, feet_index, feet_impactpoint_array[spine_index][feet_index], Temp_Impact_Ref, Delta_Loc_Speed);

						//feet_impactpoint_array[spine_index][feet_index] = UKismetMathLibrary::VInterpTo(feet_impactpoint_array[spine_index][feet_index],Temp_Impact_Ref,owning_skel->GetWorld()->DeltaTimeSeconds, Delta_Loc_Speed);
					//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Delta_Loc_Speed : " + FString::SanitizeFloat(Delta_Loc_Speed));

					}
					else
					{
						feet_impactpoint_array[spine_index][feet_index] = AnimLocLerp(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit, spine_index, feet_index, FVector(Temp_Impact_Ref.X, Temp_Impact_Ref.Y, feet_impactpoint_array[spine_index][feet_index].Z), Temp_Impact_Ref, Delta_Loc_Speed);
					}
					
					

					
					
				}



			}


			EffectorLocation_Point = (feet_impactpoint_array[spine_index][feet_index] );

		//	EffectorLocation_Point = (feet_impactpoint_array[spine_index][feet_index] + character_direction_vector * FeetRootHeights[spine_index][feet_index]);


			float feet_limit = FMath::Clamp<float>(FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Rotation_Limit), 1, 90);

			float limit_alpha = feet_limit / 90;

			limit_alpha = limit_alpha * ComplexSimpleFoot_Velocity_Curve.GetRichCurve()->Eval(Character_Speed);

			if (Enable_Complex_Rotation_Method)
			{
				FQuat Post_Rotated_Normal = (FQuat::FindBetweenNormals(character_direction_vector, UKismetMathLibrary::VLerp(character_direction_vector, feet_modified_normals[spine_index][feet_index], limit_alpha)));

				FTransform Origin_Transform = FTransform::Identity;
				Origin_Transform.SetLocation(feet_impactpoint_array[spine_index][feet_index]);
				//	Origin_Transform.SetRotation(Original_EndBoneCSTransform.GetRotation());

				FTransform New_Transform = FTransform::Identity;
				New_Transform.SetLocation(feet_impactpoint_array[spine_index][feet_index]);
				New_Transform.SetRotation(Post_Rotated_Normal);
				//	New_Transform.SetRotation(feet_mod_transform_array[spine_index][feet_index].GetRotation() * Original_EndBoneCSTransform.GetRotation().Inverse());

				FTransform Diff_Transform = Origin_Transform.Inverse() * New_Transform;

				FTransform Modified_Feet_Transform = FTransform::Identity;
				Modified_Feet_Transform.SetLocation(EffectorLocation_Point);

				Modified_Feet_Transform = Modified_Feet_Transform * Diff_Transform;

				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Feet Rotated_Angle : " + FString::SanitizeFloat(Rotated_Angle));

				//EffectorLocation_Point = RotateAroundPoint(EffectorLocation_Point, character_direction_vector, EffectorLocation_Point - FVector(0,0,900), Rotated_Angle);

				EffectorLocation_Point = Modified_Feet_Transform.GetLocation();
			}


			EffectorLocation_Point = owner_skel_w_transform.InverseTransformPosition(EffectorLocation_Point);


			FVector Effector_Thigh_Dir = (Original_EndBoneCSTransform.GetLocation() - UpperLimbCSTransform.GetLocation());
			FVector Point_Thigh_Dir = (EffectorLocation_Point - UpperLimbCSTransform.GetLocation());

			float Effector_Thigh_Size = Effector_Thigh_Dir.Size();
			float Point_Thigh_Size = (EffectorLocation_Point - UpperLimbCSTransform.GetLocation()).Size();

			Effector_Thigh_Dir.Normalize();
			Point_Thigh_Dir.Normalize();


			FVector Formatted_Effector_Point = EffectorLocation_Point;

			if (Enable_Foot_Lift_Limit)
			{
			
				Formatted_Effector_Point = UpperLimbCSTransform.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, Effector_Thigh_Size * FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Min_Feet_Extension), Effector_Thigh_Size * FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Max_Feet_Extension));
			

				float Foot_Lift_Height = (Formatted_Effector_Point - Original_EndBoneCSTransform.GetLocation()).Size();

				if(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Max_Feet_Lift > 0)
				Formatted_Effector_Point = Original_EndBoneCSTransform.GetLocation() + character_direction_vector_CS * FMath::Clamp<float>(Foot_Lift_Height, 0, dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Max_Feet_Lift);


				//Formatted_Effector_Point.Z = FMath::Clamp<float>(Formatted_Effector_Point.Z, 0, dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Max_Feet_Lift);

				
			}


			//				Formatted_Effector_Point = UpperLimbCSTransform.GetLocation() + Point_Thigh_Dir * FMath::Clamp<float>(Point_Thigh_Size, UKismetMathLibrary::Max(Effector_Thigh_Size - FMath::Abs(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Max_Feet_Float), 0), Effector_Thigh_Size);

			float temp_Max_Limb_Radius = FMath::Abs(Max_Limb_Radius);

			if(temp_Max_Limb_Radius > 0)
			Formatted_Effector_Point = ClampRotateVector(Formatted_Effector_Point, -character_direction_vector_CS, UpperLimbCSTransform.GetLocation(), -temp_Max_Limb_Radius, temp_Max_Limb_Radius, -temp_Max_Limb_Radius, temp_Max_Limb_Radius);



			EffectorLocation_Point = Formatted_Effector_Point;

			//EffectorLocation_Point = UKismetMathLibrary::VLerp(EndBoneCSTransform.GetLocation(), EffectorLocation_Point, dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Alpha);


			if (interpolate_only_z)
			{
				FVector X_Y_Loc = EndBoneCSTransform.GetLocation();

				EffectorLocation_Point.X = X_Y_Loc.X;
				EffectorLocation_Point.Y = X_Y_Loc.Y;
			}

			//			feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);
		}

		//   feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);



		//ROTATE FOOT AROUND ROTATION

		FQuat Rotated_Difference = Original_EndBoneCSTransform.GetRotation() * feet_mod_transform_array[spine_index][feet_index].GetRotation().Inverse();

		float pitch_data = FMath::Max( FRotator(Rotated_Difference).Pitch,FRotator(Rotated_Difference).Roll );

		float dip_offset_multiplier = 0;
		
		if(pitch_data > 0)
		{
			dip_offset_multiplier = dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Downslope_Offset_Multiplier;
		}
		else
		{
			dip_offset_multiplier = dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Upslope_Offset_Multiplier;
		}

		float extra_slope_offset = FMath::Max(FMath::Abs(FRotator(Rotated_Difference).Roll), FMath::Abs(FRotator(Rotated_Difference).Pitch)) * dip_offset_multiplier * scale_mode;
		extra_slope_offset = FMath::Min(extra_slope_offset,dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Slope_Offset_Clamp_Radius);
		EffectorLocation_Point.Z += extra_slope_offset;


		{
			feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);


		}


		int multi_to_single_index = spine_Feet_pair[spine_index].order_index[feet_index];

		float alpha_multiplier = 1;

		if (multi_to_single_index < feet_alpha_multiplier_array.feet_IK_alpha_array.Num())
		{
			alpha_multiplier = feet_alpha_multiplier_array.feet_IK_alpha_array[multi_to_single_index];
		}


		if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit || first_time_count < 3)
			feet_Alpha_array[spine_index][feet_index] = UKismetMathLibrary::FInterpTo(feet_Alpha_array[spine_index][feet_index], dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Alpha* alpha_multiplier, 1 - FMath::Exp(-10 * delta_seconds_saved), shift_speed * 0.5f);
		else
			feet_Alpha_array[spine_index][feet_index] = UKismetMathLibrary::FInterpTo(feet_Alpha_array[spine_index][feet_index], 0, 1 - FMath::Exp(-10 * delta_seconds_saved), shift_speed * 0.5f);


	}



		//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Feet Root Alpha : " + FString::SanitizeFloat(feet_Alpha_array[spine_index][feet_index]));


			// Transform EffectorLocation from EffectorLocationSpace to ComponentSpace.
	FTransform EffectorTransform(owner_skel_w_transform.TransformPosition(feet_mod_transform_array[spine_index][feet_index].GetLocation()));




	//	FTransform EffectorTransform(DebugEffectorTransform);

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBasesSaved.Pose, EffectorTransform, EffectorSpaceBoneIndex, EffectorLocationSpace);


	//EffectorTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);


	// This is our reach goal.
	FVector DesiredPos = EffectorTransform.GetTranslation();
	FVector DesiredDelta = DesiredPos - RootPos;
	float DesiredLength = DesiredDelta.Size();

	// Check to handle case where DesiredPos is the same as RootPos.
	FVector	DesiredDir;
	if (DesiredLength < (float)KINDA_SMALL_NUMBER)
	{
		DesiredLength = (float)KINDA_SMALL_NUMBER;
		DesiredDir = FVector(1, 0, 0);
	}
	else
	{
		DesiredDir = DesiredDelta / DesiredLength;
	}



	// Get joint target (used for defining plane that joint should be in).
	//	FTransform JointTargetTransform(ik_footbone.joint_point);

	//The transform for the bending direction joint point
	FTransform BendingDirectionTransform = LowerLimbCSTransform;


	FVector cs_forward = owner_skel_w_transform.InverseTransformVector(owning_skel->GetRightVector());




	//	cs_forward = owner_skel_w_transform.InverseTransformVector( (((UpperLimb_WS + EndLimb_WS + LowerLimb_WS) / 3) - LowerLimb_WS).GetSafeNormal() );



	FQuat Forward_Rotation_Difference = FQuat::FindBetweenNormals(character_forward_direction_vector_CS, poles_forward_direction_vector_CS);

	FTransform FRP_Knee_Transform = FTransform::Identity;
//	FRP_Knee_Transform.SetLocation(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset);
	FRP_Knee_Transform.SetRotation(Forward_Rotation_Difference);

	FTransform Pole_Transform = FTransform::Identity;
	Pole_Transform.SetLocation(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset);
	Pole_Transform =  Pole_Transform* FRP_Knee_Transform;


	if (dragon_input_data.FeetBones.Num() > spine_Feet_pair[spine_index].order_index[feet_index])
	{
		if (dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Fixed_Pole)
		{
			//	cs_forward = ( LowerLimbCSTransform.GetLocation() - dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset).GetSafeNormal();
			BendingDirectionTransform.SetLocation(dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset);

		}
		else
		{
			//	cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation()) / 3) - (LowerLimbCSTransform.GetLocation() + dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset)).GetSafeNormal();

			cs_forward = (((UpperLimbCSTransform.GetLocation() + EndBoneCSTransform.GetLocation() + LowerLimbCSTransform.GetLocation()) / 3) - (LowerLimbCSTransform.GetLocation() + Pole_Transform.GetLocation())).GetSafeNormal();


			BendingDirectionTransform.SetLocation(BendingDirectionTransform.GetLocation() + cs_forward * -100);
		}
	}


	//feet_knee_offset_array[spine_index][feet_index] = owner_skel_w_transform.TransformPosition(LowerLimbCSTransform.GetLocation() );

	if (dragon_input_data.FeetBones.Num() > spine_Feet_pair[spine_index].order_index[feet_index])
		feet_knee_offset_array[spine_index][feet_index] = owner_skel_w_transform.TransformPosition(LowerLimbCSTransform.GetLocation() + dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Knee_Direction_Offset);

	//feet_knee_offset_array[spine_index][feet_index] = owner_skel_w_transform.TransformPosition(LowerLimbCSTransform.GetLocation() + Foot_Knee_Array[spine_index]);



	FTransform JointTargetTransform(BendingDirectionTransform);




	FVector	JointTargetPos = JointTargetTransform.GetTranslation();
	FVector JointTargetDelta = JointTargetPos - RootPos;
	const float JointTargetLengthSqr = JointTargetDelta.SizeSquared();

	// Same check as above, to cover case when JointTarget position is the same as RootPos.
	FVector JointPlaneNormal, JointBendDir;
	if (JointTargetLengthSqr < FMath::Square((float)KINDA_SMALL_NUMBER))
	{
		JointBendDir = FVector(0, 1, 0);
		//JointPlaneNormal = FVector(0, 0, 1);
		JointPlaneNormal = character_direction_vector;

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


	float LowerLimbLength = (InitialEndPos - InitialJointPos).Size();
	float UpperLimbLength = (InitialJointPos - RootPos).Size();
	float MaxLimbLength = LowerLimbLength + UpperLimbLength;





	if (sticky_feet_mode)
	{

//		FVector world_impact_point_CS = owner_skel_w_transform.InverseTransformPosition(feet_impactpoint_array[spine_index][feet_index]);




	//	if (sticky_feets_data.sticky_feet_array[spine_Feet_pair[spine_index].order_index[feet_index]])
		{
			float MaxStretchScale = 1.5f;
			float StartStretchRatio = 1;

			const float ScaleRange = MaxStretchScale - StartStretchRatio;
			if (ScaleRange > KINDA_SMALL_NUMBER && MaxLimbLength > KINDA_SMALL_NUMBER)
			{
				const float ReachRatio = DesiredLength / MaxLimbLength;
				const float ScalingFactor = (MaxStretchScale - 1.f) * FMath::Clamp<float>((ReachRatio - StartStretchRatio) / ScaleRange, 0.f, 1.f);
				if (ScalingFactor > KINDA_SMALL_NUMBER)
				{
					LowerLimbLength *= (1.f + ScalingFactor);
					UpperLimbLength *= (1.f + ScalingFactor);
					MaxLimbLength *= (1.f + ScalingFactor);
				}

				//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " TOTAL " + FString::SanitizeFloat(MaxLimbLength - total_length));

			}

		}
	}




	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " ScalingFactor "+FString::SanitizeFloat(spine_Feet_pair[spine_index].order_index[feet_index])+" = "+FString::SanitizeFloat(ScalingFactor));


	FVector OutEndPos = DesiredPos;
	FVector OutJointPos = InitialJointPos;

	// If we are trying to reach a goal beyond the length of the limb, clamp it to something solvable and extend limb fully.
	if (DesiredLength > MaxLimbLength)
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


	// Update transform for upper bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (InitialJointPos - RootPos).GetSafeNormal();
		FVector const NewDir = (OutJointPos - RootPos).GetSafeNormal();
		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation




		UpperLimbCSTransform.SetRotation(DeltaRotation * UpperLimbCSTransform.GetRotation());
		// And put joint where it should be.
		UpperLimbCSTransform.SetTranslation(RootPos);

		// Order important. First bone is upper limb.
	}

	// Update transform for lower bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (InitialEndPos - InitialJointPos).GetSafeNormal();
		FVector const NewDir = (OutEndPos - OutJointPos).GetSafeNormal();

		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);





		LowerLimbCSTransform.SetRotation(DeltaRotation * LowerLimbCSTransform.GetRotation());
		// And put joint where it should be.
		LowerLimbCSTransform.SetTranslation(OutJointPos);



		// Order important. Second bone is lower limb.
	}

	// Update transform for end bone.




	{

		// Set correct location for end bone.
		EndBoneCSTransform.SetTranslation(OutEndPos);
		//+ impact_result.ImpactNormal.GetSafeNormal() 


		//		MeshBasesSaved.ResetToRefPose();

		if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit && atleast_one_hit)
		{
			if (owning_skel->GetOwner() != nullptr)
			{



				if (Should_Rotate_Feet)
					EndBoneCSTransform.SetRotation(feet_mod_transform_array[spine_index][feet_index].GetRotation());

			}

		}
		else
		{


			if (feet_mod_transform_array[spine_index][feet_index].Rotator().Equals(FRotator::ZeroRotator))
				feet_mod_transform_array[spine_index][feet_index].SetRotation(EndBoneCSTransform.GetRotation());


			if (Ignore_Lerping == false)
				feet_mod_transform_array[spine_index][feet_index].SetRotation(UKismetMathLibrary::RLerp(feet_mod_transform_array[spine_index][feet_index].Rotator(), EndBoneCSTransform.Rotator(), FMath::Clamp<float>(delta_seconds_saved * feet_rotation_speed * 5, 0, 1), true).Quaternion());
			else
				feet_mod_transform_array[spine_index][feet_index].SetRotation(EndBoneCSTransform.GetRotation());



			if (Should_Rotate_Feet)
			{
				EndBoneCSTransform.SetRotation(feet_mod_transform_array[spine_index][feet_index].GetRotation());
			}


		}

	}

	//feet_Alpha_array[spine_index][feet_index] = 1;




	//if(Affect_Toes_Always)
	//feet_Alpha_array[spine_index][feet_index] = 1;




	float Alpha_Temp = 1;

	if (ignore_shift_speed)
	{

		feet_Alpha_array[spine_index][feet_index] = 1;

		Alpha_Temp = feet_Alpha_array[spine_index][feet_index];
	}
	else
	{
		Alpha_Temp = feet_Alpha_array[spine_index][feet_index];
	}





	if (!Work_Outside_PIE)
	{
		if (!owning_skel->GetWorld()->IsGameWorld())
			feet_Alpha_array[spine_index][feet_index] = 0;
	}




	FTransform FeetTransform = EndBoneCSTransformX;
	FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBasesSaved.Pose, FeetTransform, IKBoneCompactPoseIndex, EBoneControlSpace::BCS_ParentBoneSpace);

	FRotator original_relation_rot = FeetTransform.Rotator();
	original_relation_rot.Yaw = 0;
	original_relation_rot.Pitch = 0;


	FTransform Lerped_EndBoneCSTransform = UKismetMathLibrary::TLerp(EndBoneCSTransformX, EndBoneCSTransform, Alpha_Temp);
	FTransform Lerped_LowerLimbCSTransform = UKismetMathLibrary::TLerp(LowerLimbCSTransformX, LowerLimbCSTransform, Alpha_Temp);
	FTransform Lerped_UpperLimbCSTransform = UKismetMathLibrary::TLerp(UpperLimbCSTransformX, UpperLimbCSTransform, Alpha_Temp);


	//if(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
	//GEngine->AddOnScreenDebugMessage(-1, 0.05f, FColor::Red, " Position of count : "+ Lerped_EndBoneCSTransform.GetLocation().ToString());


	OutBoneTransforms.Add(FBoneTransform(UpperLimbIndex, Lerped_UpperLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(LowerLimbIndex, Lerped_LowerLimbCSTransform));
	OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, Lerped_EndBoneCSTransform));



	if (Affect_Toes_Always)
	{

		for (int fingerx = 0; fingerx < spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index].Num(); fingerx++)
		{

			const FCompactPoseBoneIndex ModifyBoneIndex_Local_Finger = spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].GetCompactPoseIndex(MeshBasesSaved.Pose.GetPose().GetBoneContainer());

			FTransform ComponentBoneTransform_Finger = MeshBasesSaved.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_Finger);





			//	FTransform Inv_FootValue = Original_EndBoneCSTransform.Inverse() * EndBoneCSTransform;
			FTransform Inv_FootValue = Original_EndBoneCSTransform.Inverse() * Lerped_EndBoneCSTransform;




			//FTransform Diff_Vect = (ComponentBoneTransform_Finger *Original_EndBoneCSTransform.Inverse())* EndBoneCSTransform;

			FTransform Diff_Vect = (ComponentBoneTransform_Finger * Inv_FootValue);

			//ComponentBoneTransform_Finger = ;

			feet_fingers_transform_array[spine_index][feet_index][fingerx].SetLocation(Diff_Vect.GetLocation());
			//	feet_fingers_transform_array[spine_index][feet_index][fingerx] = Diff_Vect;

			if (!spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].bBlockingHit)
			{
				//	feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(Diff_Vect.GetRotation());
			}
			else
			{
				/*
				FVector forward_finger_vector = (ComponentBoneTransform_Finger.GetLocation() - Original_EndBoneCSTransform.GetLocation()).GetSafeNormal();

				FVector impact_finger_point = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[spine_index].RV_Associated_Fingers_Hits[feet_index][fingerx].ImpactPoint + FVector(0,0,10));

			//	FVector impact_finger_vector = (impact_finger_point - ComponentBoneTransform_Finger.GetLocation()).GetSafeNormal();
				FVector impact_finger_vector = (impact_finger_point - Original_EndBoneCSTransform.GetLocation()).GetSafeNormal();

				FQuat result = FQuat::FindBetweenNormals(forward_finger_vector, impact_finger_vector);

				feet_fingers_transform_array[spine_index][feet_index][fingerx].SetRotation(result* ComponentBoneTransform_Finger.GetRotation());
				*/

			}


			//feet_fingers_transform_array[spine_index][feet_index][fingerx].AddToTranslation(Diff_Vect);

			//float toe_alpha = Affect_Toes_Always ? 1 : Alpha_Temp;

			//FTransform Lerped_Fingers = UKismetMathLibrary::TLerp(ComponentBoneTransform_Finger, feet_fingers_transform_array[spine_index][feet_index][fingerx], toe_alpha);



			const FTransform Lerped_FingerCSTransform = UKismetMathLibrary::TLerp(Diff_Vect, feet_fingers_transform_array[spine_index][feet_index][fingerx], Alpha_Temp * Finger_Alpha_Velocity_Curve.GetRichCurve()->Eval(Character_Speed));


			OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].CachedCompactPoseIndex, Lerped_FingerCSTransform));


			//	OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].CachedCompactPoseIndex, feet_fingers_transform_array[spine_index][feet_index][fingerx]));



				//	OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index][fingerx].CachedCompactPoseIndex, ComponentBoneTransform_Finger ));


				//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " FEET PRINT!");

		}

	}



}




FVector FAnimNode_DragonFeetSolver::Zero_XY_Vector(FVector Original_Pos, FVector Second_Pos,FTransform mesh_transform,bool xy_mode)
{

	FVector result = Original_Pos;
	result = UKismetMathLibrary::InverseTransformLocation(mesh_transform, result);

//	result.X = Second_Point_Inverse.X;
//	result.Y = Second_Point_Inverse.Y;

	/*
	if (xy_mode)
	{
		result.Z = Second_Point_Inverse.Z;
	}
	else
	{
		result.X = Second_Point_Inverse.X;
		result.Y = Second_Point_Inverse.Y;
	}
	*/

	result = UKismetMathLibrary::TransformLocation(mesh_transform, result);

	return result;

}


void FAnimNode_DragonFeetSolver::Leg_Singleik_Function(FBoneReference ik_footbone, int spine_index, int feet_index, TEnumAsByte<enum EBoneControlSpace> EffectorLocationSpace, TEnumAsByte<enum EBoneControlSpace> JointTargetLocationSpace, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms)
{





	// Get indices of the lower and upper limb bones and check validity.
	bool bInvalidLimb = false;

	FCompactPoseBoneIndex IKBoneCompactPoseIndex = ik_footbone.GetCompactPoseIndex(*SavedBoneContainer);


	const FCompactPoseBoneIndex UpperLimbIndex = (*SavedBoneContainer).GetParentBoneIndex(IKBoneCompactPoseIndex);
	if (UpperLimbIndex == INDEX_NONE)
	{
		bInvalidLimb = true;
	}


	const FVector char_up = character_direction_vector_CS;

	FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);



	const bool bInBoneSpace = (EffectorLocationSpace == BCS_ParentBoneSpace) || (EffectorLocationSpace == BCS_BoneSpace);
	const int32 EffectorBoneIndex = bInBoneSpace ? (*SavedBoneContainer).GetPoseBoneIndexForBoneName("") : INDEX_NONE;
	const FCompactPoseBoneIndex EffectorSpaceBoneIndex = (*SavedBoneContainer).MakeCompactPoseIndex(FMeshPoseBoneIndex(EffectorBoneIndex));


	// If we walked past the root, this controlled is invalid, so return no affected bones.
	if (bInvalidLimb)
	{
		return;
	}




	// Now get those in component space...
	FTransform UpperLimbCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
	FTransform EndBoneCSTransform = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);






	// Get current position of root of limb.
	// All position are in Component space.
	const FVector RootPos = UpperLimbCSTransform.GetTranslation();
	const FVector InitialEndPos = EndBoneCSTransform.GetTranslation();



	FVector EffectorLocation_Point;



	if ((spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit) && atleast_one_hit && enable_solver == true)
	{
		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Feet is hit");



		FTransform eb_wtransform = EndBoneCSTransform;

		FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBasesSaved.Pose, eb_wtransform, EffectorSpaceBoneIndex, EffectorLocationSpace);

		if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit)
		{

			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Feet is not hit");

			EffectorLocation_Point = (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].ImpactPoint + character_direction_vector * FeetRootHeights[spine_index][feet_index]);



			EffectorLocation_Point = owner_skel_w_transform.InverseTransformPosition(EffectorLocation_Point);

			if (interpolate_only_z)
			{
				FVector X_Y_Loc = EndBoneCSTransform.GetLocation();

				EffectorLocation_Point.X = X_Y_Loc.X;
				EffectorLocation_Point.Y = X_Y_Loc.Y;
			}


			//			feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);
		}

		//   feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);



		/*
		//if (Ignore_Location_Lerping == false)
		if (Ignore_Location_Lerping == false && (feet_mod_transform_array[spine_index][feet_index].GetLocation() - EffectorLocation_Point).Size() < 500)
		{
			feet_mod_transform_array[spine_index][feet_index].SetLocation(AnimLocLerp(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit, spine_index, feet_index, feet_mod_transform_array[spine_index][feet_index].GetLocation(), EffectorLocation_Point, delta_seconds_saved * 15 * Location_Lerp_Speed));
		}
		else*/
		{
			feet_mod_transform_array[spine_index][feet_index].SetLocation(EffectorLocation_Point);
		}


		int multi_to_single_index = spine_Feet_pair[spine_index].order_index[feet_index];

		float alpha_multiplier = 1;

		if (multi_to_single_index < feet_alpha_multiplier_array.feet_IK_alpha_array.Num())
		{
			alpha_multiplier = feet_alpha_multiplier_array.feet_IK_alpha_array[multi_to_single_index];
		}



		feet_Alpha_array[spine_index][feet_index] = UKismetMathLibrary::FInterpTo(feet_Alpha_array[spine_index][feet_index], dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Feet_Alpha * alpha_multiplier, 1 - FMath::Exp(-10 * delta_seconds_saved), shift_speed * 0.5f);

	}
	else
	{

		FTransform eb_wtransform = EndBoneCSTransform;


		/*
		//if (Ignore_Location_Lerping == false)
		if (Ignore_Location_Lerping == false && (feet_mod_transform_array[spine_index][feet_index].GetLocation() - eb_wtransform.GetLocation()).Size() < 500)
			feet_mod_transform_array[spine_index][feet_index].SetLocation(AnimLocLerp(spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit, spine_index, feet_index, feet_mod_transform_array[spine_index][feet_index].GetLocation(), eb_wtransform.GetLocation(), delta_seconds_saved * 15 * Location_Lerp_Speed));
		else*/
		feet_mod_transform_array[spine_index][feet_index].SetLocation(eb_wtransform.GetLocation());

		FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBasesSaved.Pose, eb_wtransform, EffectorSpaceBoneIndex, EffectorLocationSpace);
		EffectorLocation_Point = eb_wtransform.GetLocation();


		//	feet_Alpha_array[spine_index][feet_index] = 0;

		feet_Alpha_array[spine_index][feet_index] = UKismetMathLibrary::FInterpTo(feet_Alpha_array[spine_index][feet_index], 0, 1 - FMath::Exp(-10 * delta_seconds_saved), shift_speed * 0.5f);

	}



	//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Feet Root Alpha : " + FString::SanitizeFloat(feet_Alpha_array[spine_index][feet_index]));


		// Transform EffectorLocation from EffectorLocationSpace to ComponentSpace.
	FTransform EffectorTransform(owner_skel_w_transform.TransformPosition(feet_mod_transform_array[spine_index][feet_index].GetLocation()));

	// Transform EffectorLocation from EffectorLocationSpace to ComponentSpace.
	//FTransform EffectorTransform(feet_mod_transform_array[spine_index][feet_index]);

	//	FTransform EffectorTransform(DebugEffectorTransform);

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBasesSaved.Pose, EffectorTransform, EffectorSpaceBoneIndex, EffectorLocationSpace);

	// This is our reach goal.
	FVector DesiredPos = EffectorTransform.GetTranslation();
	FVector DesiredDelta = DesiredPos - RootPos;
	float DesiredLength = DesiredDelta.Size();

	// Check to handle case where DesiredPos is the same as RootPos.
	FVector	DesiredDir;
	if (DesiredLength < (float)KINDA_SMALL_NUMBER)
	{
		DesiredLength = (float)KINDA_SMALL_NUMBER;
		DesiredDir = FVector(1, 0, 0);
	}
	else
	{
		DesiredDir = DesiredDelta / DesiredLength;
	}













	float UpperLimbLength = (InitialEndPos - RootPos).Size();
	float MaxLimbLength = UpperLimbLength;


	FVector OutEndPos = DesiredPos;

	// If we are trying to reach a goal beyond the length of the limb, clamp it to something solvable and extend limb fully.
	if (DesiredLength > MaxLimbLength)
	{
		OutEndPos = RootPos + (MaxLimbLength * DesiredDir);
	}
	else
	{

		OutEndPos = EffectorTransform.GetLocation();

	}


	// Update transform for upper bone.
	{
		// Get difference in direction for old and new joint orientations
		FVector const OldDir = (InitialEndPos - RootPos).GetSafeNormal();
		FVector const NewDir = (OutEndPos - RootPos).GetSafeNormal();
		// Find Delta Rotation take takes us from Old to New dir
		FQuat const DeltaRotation = FQuat::FindBetweenNormals(OldDir, NewDir);
		// Rotate our Joint quaternion by this delta rotation




		UpperLimbCSTransform.SetRotation(DeltaRotation * UpperLimbCSTransform.GetRotation());
		// And put joint where it should be.
		UpperLimbCSTransform.SetTranslation(RootPos);

		// Order important. First bone is upper limb.
	}




	{

		EndBoneCSTransform.SetTranslation(OutEndPos);

		if (spine_hit_pairs[spine_index].RV_Feet_Hits[feet_index].bBlockingHit && atleast_one_hit)
		{

			EndBoneCSTransform.SetRotation(feet_mod_transform_array[spine_index][feet_index].GetRotation());

		}
		else
		{


			FTransform UpperLimbCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
			FTransform EndBoneCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);


			//			feet_mod_transform_array[spine_index][feet_index].SetRotation(UKismetMathLibrary::RLerp(feet_mod_transform_array[spine_index][feet_index].Rotator(), EndBoneCSTransform.Rotator(), delta_seconds_saved * 15, true).Quaternion());


			feet_mod_transform_array[spine_index][feet_index].SetRotation(EndBoneCSTransform.Rotator().Quaternion());


			EndBoneCSTransform = EndBoneCSTransformX;

			UpperLimbCSTransform = UpperLimbCSTransformX;

			EndBoneCSTransform.SetRotation(feet_mod_transform_array[spine_index][feet_index].GetRotation());








		}




	}

	if (ignore_shift_speed)
		feet_Alpha_array[spine_index][feet_index] = 1;



	if (!Work_Outside_PIE)
	{
		if (!owning_skel->GetWorld()->IsGameWorld())
			feet_Alpha_array[spine_index][feet_index] = 0;
	}



	FTransform UpperLimbCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(UpperLimbIndex);
	FTransform EndBoneCSTransformX = MeshBasesSaved.Pose.GetComponentSpaceTransform(IKBoneCompactPoseIndex);

	//feet_Alpha_array[spine_index][feet_index] = 0;


	FTransform Lerped_EndBoneCSTransform = UKismetMathLibrary::TLerp(EndBoneCSTransformX, EndBoneCSTransform, feet_Alpha_array[spine_index][feet_index]);
	FTransform Lerped_UpperLimbCSTransform = UKismetMathLibrary::TLerp(UpperLimbCSTransformX, UpperLimbCSTransform, feet_Alpha_array[spine_index][feet_index]);


	OutBoneTransforms.Add(FBoneTransform(UpperLimbIndex, Lerped_UpperLimbCSTransform));

	OutBoneTransforms.Add(FBoneTransform(IKBoneCompactPoseIndex, Lerped_EndBoneCSTransform));








}






void FAnimNode_DragonFeetSolver::LineTraceControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	if (spine_hit_pairs.Num() > 0 && spine_Feet_pair.Num() > 0 && spine_Transform_pairs.Num() > 0 && !Output.Pose.GetPose().ContainsNaN())
	{

		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{
			if (i < spine_Transform_pairs.Num())
			{

				const FCompactPoseBoneIndex ModifyBoneIndex_Local_i = spine_Feet_pair[i].Spine_Involved.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
				FTransform ComponentBoneTransform_Local_i;
				ComponentBoneTransform_Local_i = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_i);

				spine_Transform_pairs[i].Spine_Involved = ComponentBoneTransform_Local_i * owner_skel_w_transform;

				//spine_Transform_pairs[i].Spine_Involved = FTransform(lerp_data_Local_i);



				for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
				{

					if (j < spine_Transform_pairs[i].Associated_Feet.Num())
					{
						const FCompactPoseBoneIndex ModifyBoneIndex_Local_j = spine_Feet_pair[i].Associated_Feet[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
						FTransform ComponentBoneTransform_Local_j;
						ComponentBoneTransform_Local_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_j);
						//				spine_Transform_pairs[i].Associated_Feet[j] = FTransform(lerp_data_Local_j);

						spine_Transform_pairs[i].Associated_Feet[j] = ComponentBoneTransform_Local_j * owner_skel_w_transform;

						for (int32 finger_k = 0; finger_k < spine_Transform_pairs[i].Associated_Fingers[j].Num(); finger_k++)
						{

							const FCompactPoseBoneIndex ModifyBoneIndex_Finger = spine_Feet_pair[i].Fingers_Name_Array[j][finger_k].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
							FTransform ComponentBoneTransform_Finger;
							ComponentBoneTransform_Finger = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Finger);

							spine_Transform_pairs[i].Associated_Fingers[j][finger_k] = ComponentBoneTransform_Finger * owner_skel_w_transform;
						}

					}

				}
			}
		}
	}



	if (feet_transform_array.Num() > 0)
	{

		for (int32 i = 0; i < feet_bone_array.Num(); i++)
		{
			const FCompactPoseBoneIndex ModifyBoneIndex = feet_bone_array[i].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
			FTransform ComponentBoneTransform;
			ComponentBoneTransform = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex);
			FVector lerp_data = owner_skel_w_transform.TransformPosition(ComponentBoneTransform.GetLocation());
			feet_transform_array[i] = FTransform(lerp_data);

		}


	}
}



bool FAnimNode_DragonFeetSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{


	bool feet_is_true = true;

	for (int i = 0; i < dragon_bone_data.FeetBones.Num(); i++)
	{
		//		if (dragon_bone_data.FeetBones.Num() == dragon_input_data.FeetBones.Num())
		if (dragon_bone_data.FeetBones[i].IsValidToEvaluate(RequiredBones) == false)
		{
			feet_is_true = false;
		}




		if (automatic_leg_make == false)
		{


			if (FBoneReference(dragon_bone_data.KneeBones[i]).IsValidToEvaluate(RequiredBones) == false)
			{
				feet_is_true = false;
			}

			if (FBoneReference(dragon_bone_data.ThighBones[i]).IsValidToEvaluate(RequiredBones) == false)
			{
				feet_is_true = false;
			}


		}

		//			if (dragon_bone_data.FeetBones.Num() == dragon_input_data.FeetBones.Num())

	}

	//	return false;

		//return (feet_is_true &&dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) &&dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones));

		//return false;

	return (solve_should_fail == false && feet_is_true &&
		dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) &&
		dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones) &&
		RequiredBones.BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneIndex, FBoneReference(dragon_bone_data.Pelvis).BoneIndex));



}


void FAnimNode_DragonFeetSolver::Evaluate_AnyThread(FPoseContext& Output)
{
}









void FAnimNode_DragonFeetSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{

	solve_should_fail = false;


	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
	dragon_bone_data.Start_Spine.Initialize(RequiredBones);

	dragon_bone_data.Pelvis = FBoneReference(dragon_input_data.Pelvis);
	dragon_bone_data.Pelvis.Initialize(RequiredBones);

	/*
	if(!owning_skel->BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneName, FBoneReference(dragon_bone_data.Pelvis).BoneName))
	{

	}
	*/

	//if (!RequiredBones.BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneIndex, FBoneReference(dragon_bone_data.Pelvis).BoneIndex))

	if (!owning_skel->BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneName, FBoneReference(dragon_bone_data.Pelvis).BoneName))
	{
		solve_should_fail = true;
	}


	//	if (test_counter < 10)

	if (solve_should_fail == false)
	{

		//GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, " Test Counter : " + FString::SanitizeFloat(test_counter));


		SavedBoneContainer = &RequiredBones;

		feet_bone_array.Empty();

		feet_transform_array.Empty();

		feet_hit_array.Empty();

		EffectorLocationList.Empty();

		//		feet_mod_transform_array.Empty();

		//		feet_Animated_transform_array.Empty();




		FeetRootHeights.Empty();

		FeetTipLocations.Empty();

		FeetStepBools.Empty();
		Feet_Previous_Position.Empty();


		FeetWidthSpacing.Empty();

		FeetFingerHeights.Empty();

		/*SPINE CODE START*/

		Total_spine_bones.Empty();

		spine_Feet_pair.Empty();



		if (test_counter < 10)
		{
			spine_Transform_pairs.Empty();
			spine_AnimatedTransform_pairs.Empty();
			spine_hit_pairs.Empty();

			feet_mod_transform_array.Empty();
			feet_modified_normals.Empty();

			feet_ishit_array.Empty();
			feet_impactpoint_array.Empty();


			feet_Animated_transform_array.Empty();

			knee_Animated_transform_array.Empty();

		}



		solve_should_fail = false;



		Total_spine_bones = BoneArrayMachine(0, dragon_input_data.Start_Spine, dragon_input_data.Pelvis, false);

		Algo::Reverse(Total_spine_bones);


		for (int32 i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{


			for (int32 j = 0; j < dragon_input_data.FeetBones.Num(); j++)
			{
				if (i != j)
				{
					if (dragon_input_data.FeetBones[i].Feet_Bone_Name == dragon_input_data.FeetBones[j].Feet_Bone_Name)
					{
						solve_should_fail = true;
					}
				}
			}


			BoneArrayMachine_Feet(i, dragon_input_data.FeetBones[i].Feet_Bone_Name, dragon_input_data.FeetBones[i].Knee_Bone_Name, dragon_input_data.FeetBones[i].Thigh_Bone_Name, dragon_input_data.Pelvis, true);
		}


		if (dragon_input_data.Pelvis == dragon_input_data.Start_Spine)
		{
			solve_should_fail = true;
		}

		Spine_Indices.Empty();


		for (int32 i = 0; i < Total_spine_bones.Num(); i++)
		{
			FBoneReference bone_ref = FBoneReference(Total_spine_bones[i]);
			bone_ref.Initialize(RequiredBones);
			Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));

		}



		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{
			if (spine_Feet_pair[i].Associated_Feet.Num() == 0)
				spine_Feet_pair.RemoveAt(i, 1, true);

		}
		spine_Feet_pair = Swap_Spine_Pairs(spine_Feet_pair);


		spine_Feet_pair = Swap_Spine_Pairs(spine_Feet_pair);







		for (int32 spine_index = 0; spine_index < spine_Feet_pair.Num(); spine_index++)
		{

			spine_Feet_pair[spine_index].Fingers_Name_Array.Empty();
			spine_Feet_pair[spine_index].Fingers_Chain_Num.Empty();


			spine_Feet_pair[spine_index].Fingers_Name_Array.AddDefaulted(spine_Feet_pair[spine_index].Associated_Feet.Num());
			spine_Feet_pair[spine_index].Fingers_Chain_Num.AddDefaulted(spine_Feet_pair[spine_index].Associated_Feet.Num());


			for (int32 feet_index = 0; feet_index < spine_Feet_pair[spine_index].Associated_Feet.Num(); feet_index++)
			{


				//	if (spine_Feet_pair[spine_index].Fingers_Name_Array.Num() == 0)
				{

					for (int32 finger_index = 0; finger_index < dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Finger_Array.Num(); finger_index++)
					{
						FName fingername = dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Finger_Array[finger_index].Finger_Bone_Name;

						FBoneReference Fingers_Name_Array_ref = FBoneReference(fingername);
						Fingers_Name_Array_ref.Initialize(*SavedBoneContainer);
						spine_Feet_pair[spine_index].Fingers_Name_Array[feet_index].Add(Fingers_Name_Array_ref);


						if (!Fingers_Name_Array_ref.IsValidToEvaluate())
						{
							solve_should_fail = true;
						}


						int chain_index = dragon_input_data.FeetBones[spine_Feet_pair[spine_index].order_index[feet_index]].Finger_Array[finger_index].chain_number;

						spine_Feet_pair[spine_index].Fingers_Chain_Num[feet_index].Add(chain_index);

					}

				}

			}

		}




		if (test_counter < 10)
		{
			spine_Transform_pairs.AddDefaulted(spine_Feet_pair.Num());
			spine_AnimatedTransform_pairs.AddDefaulted(spine_Feet_pair.Num());
			feet_Animated_transform_array.AddDefaulted(spine_Feet_pair.Num());

			knee_Animated_transform_array.AddDefaulted(dragon_input_data.FeetBones.Num());



			feet_mod_transform_array.AddDefaulted(spine_Feet_pair.Num());
			feet_modified_normals.AddDefaulted(spine_Feet_pair.Num());


			feet_ishit_array.AddDefaulted(spine_Feet_pair.Num());
			feet_impactpoint_array.AddDefaulted(spine_Feet_pair.Num());



			feet_fingers_transform_array.AddDefaulted(spine_Feet_pair.Num());


			feet_knee_offset_array.AddDefaulted(spine_Feet_pair.Num());


			feet_Alpha_array.AddDefaulted(spine_Feet_pair.Num());
			spine_hit_pairs.AddDefaulted(spine_Feet_pair.Num());

		}


		FeetRootHeights.AddDefaulted(spine_Feet_pair.Num());
		FeetFingerHeights.AddDefaulted(spine_Feet_pair.Num());
		FeetTipLocations.AddDefaulted(spine_Feet_pair.Num());

		FeetStepBools.AddDefaulted(spine_Feet_pair.Num());
		Feet_Previous_Position.AddDefaulted(spine_Feet_pair.Num());


		FeetWidthSpacing.AddDefaulted(spine_Feet_pair.Num());

		//	Foot_Knee_Array.SetNum(dragon_input_data.FeetBones.Num());

		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{
			/*
			for (int feet_x = 0; feet_x < spine_Feet_pair[i].Associated_Feet.Num(); feet_x++)
			{
				if (spine_Feet_pair[i].Associated_Feet[feet_x].IsValidToEvaluate(*SavedBoneContainer))
				{
					GEngine->AddOnScreenDebugMessage(-1, 10.01f, FColor::Red, " TAKE "+ spine_Feet_pair[i].Associated_Feet[feet_x].BoneName.ToString());
				}

			}
			*/

			if (test_counter < 10)
			{



				spine_hit_pairs[i].RV_Feet_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_FeetFront_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_FeetBack_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_FeetLeft_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_FeetRight_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_Associated_Fingers_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				spine_hit_pairs[i].RV_Original_Associated_Fingers_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());



				for (int hitx = 0; hitx < spine_hit_pairs[i].RV_Associated_Fingers_Hits.Num(); hitx++)
				{
					spine_hit_pairs[i].RV_Associated_Fingers_Hits[hitx].AddDefaulted(spine_Feet_pair[i].Fingers_Name_Array[hitx].Num());
				}


				for (int hitx = 0; hitx < spine_hit_pairs[i].RV_Original_Associated_Fingers_Hits.Num(); hitx++)
				{
					spine_hit_pairs[i].RV_Original_Associated_Fingers_Hits[hitx].AddDefaulted(spine_Feet_pair[i].Fingers_Name_Array[hitx].Num());
				}






				spine_Transform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				spine_Transform_pairs[i].Associated_Temp_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				spine_Transform_pairs[i].Associated_Frozen_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				
				spine_Transform_pairs[i].Associated_Thigh.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());



				spine_Transform_pairs[i].Associated_Sticky_Alpha.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				
				spine_Transform_pairs[i].Associated_Fingers.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				for (int spinex = 0; spinex < spine_Transform_pairs[i].Associated_Fingers.Num(); spinex++)
				{
					spine_Transform_pairs[i].Associated_Fingers[spinex].AddDefaulted(spine_Feet_pair[i].Fingers_Name_Array[spinex].Num());
				}



				spine_AnimatedTransform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				spine_AnimatedTransform_pairs[i].Original_Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				


				spine_AnimatedTransform_pairs[i].Sticky_Feet_Auto.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());



				spine_AnimatedTransform_pairs[i].Sticky_Feet_Input.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				spine_AnimatedTransform_pairs[i].Associated_Sticky_Alpha.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				

				spine_AnimatedTransform_pairs[i].Associated_StickySwitch_Bools.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				


				spine_AnimatedTransform_pairs[i].Associated_Frozen_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				spine_AnimatedTransform_pairs[i].Associated_Knee.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				
				


				spine_AnimatedTransform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				spine_AnimatedTransform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				//////

				feet_mod_transform_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				feet_modified_normals[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				feet_ishit_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				feet_impactpoint_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				feet_fingers_transform_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				for (int spinex = 0; spinex < spine_Feet_pair[i].Fingers_Name_Array.Num(); spinex++)
				{
					feet_fingers_transform_array[i][spinex].AddDefaulted(spine_Feet_pair[i].Fingers_Name_Array[spinex].Num());
				}


				feet_knee_offset_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());




				feet_Animated_transform_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				feet_Alpha_array[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				

			}






			//		spine_Feet_pair[i].Associated_Knees.AddUninitialized(spine_Feet_pair[i].Associated_Feet.Num());

			//		spine_Feet_pair[i].Associated_Thighs.AddUninitialized(spine_Feet_pair[i].Associated_Feet.Num());



			every_foot_dont_have_child = false;


			for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{
				FeetRootHeights[i].Add(0);

				FeetTipLocations[i].Add(FVector::ZeroVector);
				FeetWidthSpacing[i].Add(0);


				FeetStepBools[i].Add(false);
				Feet_Previous_Position[i].Add(FVector::ZeroVector);


				int finger_size = dragon_input_data.FeetBones[spine_Feet_pair[i].order_index[j]].Finger_Array.Num();

				FeetFingerHeights[i].AddDefaulted(finger_size);

				//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, " Feet Root Heights : " + FString::SanitizeFloat(FeetRootHeights[i][j]));

				feet_Alpha_array[i][j] = 1;



				/*
				if (automatic_leg_make == true)
				{
					FBoneReference Knee_Involved = FBoneReference(owning_skel->GetParentBone(spine_Feet_pair[i].Associated_Feet[j].BoneName));
					Knee_Involved.Initialize(*SavedBoneContainer);

					spine_Feet_pair[i].Associated_Knees[j] = Knee_Involved;
				}
				else
				{

					FBoneReference Knee_Involved = FBoneReference(owning_skel->GetParentBone(spine_Feet_pair[i].Associated_Feet[j].BoneName));
					Knee_Involved.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Knees[j] = Knee_Involved;

				}
				*/

			}

		}


		/*SPINE CODE END*/



		for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{
			feet_bone_array.Add(dragon_input_data.FeetBones[i].Feet_Bone_Name);
			feet_bone_array[i].Initialize(RequiredBones);

		}





		bool is_swapped = false;

		do
		{
			is_swapped = false;


			for (int32 i = 1; i < feet_bone_array.Num(); i++)
			{
				if (feet_bone_array[i - 1].BoneIndex < feet_bone_array[i].BoneIndex)
				{
					FBoneReference temp = feet_bone_array[i - 1];
					feet_bone_array[i - 1] = feet_bone_array[i];
					feet_bone_array[i] = temp;

					is_swapped = true;
				}
			}

		} while (is_swapped == true);





		feet_transform_array.AddDefaulted(feet_bone_array.Num());

		feet_Alpha_array.AddDefaulted(feet_bone_array.Num());



		feet_hit_array.AddDefaulted(feet_bone_array.Num());

		EffectorLocationList.AddDefaulted(feet_bone_array.Num());

		//	feet_mod_transform_array.AddDefaulted(feet_bone_array.Num());


		//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, " F Transform size :- " + FString::SanitizeFloat(feet_transform_array.Num()));





		if (dragon_input_data.Start_Spine == dragon_input_data.Pelvis)
			solve_should_fail = true;

		if (spine_Feet_pair.Num() > 0)
		{
		//	if (spine_Feet_pair[0].Spine_Involved.BoneIndex > spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.BoneIndex)
		//		solve_should_fail = true;


		}


		/*
		dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
		dragon_bone_data.Start_Spine.Initialize(RequiredBones);

		dragon_bone_data.Pelvis = FBoneReference(dragon_input_data.Pelvis);
		dragon_bone_data.Pelvis.Initialize(RequiredBones);
		*/



		for (int socket_index = 0; socket_index < sticky_sockets_data.sticky_socket_array.Num(); socket_index++)
		{
			sticky_sockets_data.sticky_socket_array[socket_index].InitializeBoneReferences(RequiredBones);
		}




		dragon_bone_data.FeetBones.Empty();
		dragon_bone_data.KneeBones.Empty();
		dragon_bone_data.ThighBones.Empty();


		for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{

			dragon_bone_data.FeetBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name));
			dragon_bone_data.FeetBones[i].Initialize(RequiredBones);

			if (automatic_leg_make == false)
			{
				dragon_bone_data.KneeBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Knee_Bone_Name));
				dragon_bone_data.KneeBones[i].Initialize(RequiredBones);


				dragon_bone_data.ThighBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Thigh_Bone_Name));
				dragon_bone_data.ThighBones[i].Initialize(RequiredBones);
			}


		}



		is_initialized = true;
	}


}






FName FAnimNode_DragonFeetSolver::GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh)
{

	FName child_bone = skel_mesh->GetBoneName(skel_mesh->GetBoneIndex(BoneName) + 1);

	return child_bone;

}



/*SPINE FUNCS*/





TArray<FDragonData_SpineFeetPair> FAnimNode_DragonFeetSolver::Swap_Spine_Pairs(TArray<FDragonData_SpineFeetPair> test_list)
{



	bool is_swapped = false;

	do
	{
		is_swapped = false;

		for (int32 j = 1; j < test_list.Num(); j++)
		{

			for (int32 i = 1; i < test_list[j].Associated_Feet.Num(); i++)
			{
				if (test_list[j].Associated_Feet[i - 1].BoneIndex < test_list[j].Associated_Feet[i].BoneIndex)
				{
					FBoneReference temp = test_list[j].Associated_Feet[i - 1];
					test_list[j].Associated_Feet[i - 1] = test_list[j].Associated_Feet[i];
					test_list[j].Associated_Feet[i] = temp;

					if (automatic_leg_make == false)
					{

						FBoneReference tempKnees = test_list[j].Associated_Knees[i - 1];
						test_list[j].Associated_Knees[i - 1] = test_list[j].Associated_Knees[i];
						test_list[j].Associated_Knees[i] = tempKnees;


						FBoneReference tempThighs = test_list[j].Associated_Thighs[i - 1];
						test_list[j].Associated_Thighs[i - 1] = test_list[j].Associated_Thighs[i];
						test_list[j].Associated_Thighs[i] = tempThighs;
					}

					int temp_knee_order = test_list[j].order_index[i - 1];
					test_list[j].order_index[i - 1] = test_list[j].order_index[i];
					test_list[j].order_index[i] = temp_knee_order;

					is_swapped = true;
				}
			}
		}

	} while (is_swapped == true);


	return test_list;

}




FVector FAnimNode_DragonFeetSolver::AnimLocLerp(bool is_Hit, int spine_index, int feet_index, FVector start_pos, FVector end_pos, float delta_seconds)
{

	if (current_fps < FPS_Lerp_Treshold)
	{
		return end_pos;
	}

	FVector start_pos_val = start_pos;
	FVector end_pos_val = end_pos;
	FVector vector_difference = (start_pos_val - end_pos_val) / FMath::Clamp<float>(6 - Location_Lerp_Speed, 1, 6);




	if (loc_interp_type == EInterpoLocation_Type_Plugin::ENUM_DivisiveLoc_Interp)
		return start_pos_val - vector_difference;
	else
	{
		//	if(is_Hit)
		return UKismetMathLibrary::VLerp(start_pos_val, end_pos_val, delta_seconds);
		//	else


	}




}

FRotator FAnimNode_DragonFeetSolver::AnimRotLerp(bool is_Hit, int spine_index, int feet_index, FRotator start_pos, FRotator end_pos, float delta_seconds)
{
	return FRotator(0);
}

FQuat FAnimNode_DragonFeetSolver::AnimRotSLerp(bool is_Hit, int spine_index, int feet_index, FQuat start_pos, FQuat end_pos, float delta_seconds)
{


	if (current_fps < FPS_Lerp_Treshold)
	{
		return end_pos;
	}


	FQuat start_pos_val = start_pos;
	FQuat end_pos_val = end_pos;
	//	FQuat rotation_difference = (start_pos_val - end_pos_val)*(1/5);


	FQuat rotation_difference = ((start_pos_val.Inverse() * (end_pos_val * 0.5f).GetNormalized())).GetNormalized();



	//GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Foot Rot " + FString::SanitizeFloat(rotation_difference.GetAngle()) );


	if (rot_interp_type == EInterpoRotation_Type_Plugin::ENUM_DivisiveRot_Interp)
	{
		FQuat result = start_pos_val * (rotation_difference);



		return result;
	}
	else
	{


		//	if (is_Hit)
		return FQuat::Slerp(start_pos_val, end_pos_val, delta_seconds);
		//    else


	}

}



/*
TArray<FName> FAnimNode_DragonFeetSolver::BoneArrayMachine(int32 index, FName starting, FName ending, bool is_foot)
{

	TArray<FName> spine_bones;

	int iteration_count = 0;

	spine_bones.Add(starting);

	if (is_foot == false)
	{
		FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
		data.Spine_Involved = FBoneReference(starting);
		data.Spine_Involved.Initialize(*SavedBoneContainer);
		spine_Feet_pair.Add(data);



	}


	bool finish = false;

	do
	{


		if (is_foot)
		{
			if (Check_Loop_Exist(dragon_input_data.FeetBones[index].Feet_Yaw_Offset, dragon_input_data.FeetBones[index].Feet_Heights, starting,FName(""),FName(""), spine_bones[spine_bones.Num() - 1], Total_spine_bones))
			{
				return spine_bones;
			}
		}

		if (is_foot == false)
		{
			//			GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Spine INIT == " + spine_bones[iteration_count].ToString());
		}

		iteration_count++;
		spine_bones.Add(owning_skel->GetParentBone(spine_bones[iteration_count - 1]));


		if (is_foot == false)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(spine_bones[spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);
			spine_Feet_pair.Add(data);


		}


		if (spine_bones[spine_bones.Num() - 1] == ending  && is_foot == false)
		{
			//			GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Spine INIT == " + spine_bones[spine_bones.Num() - 1].ToString()+" and Ending = "+ending.ToString());


			return spine_bones;
		}

	} while (iteration_count < 50 && finish == false);


	return spine_bones;


}

*/







TArray<FName> FAnimNode_DragonFeetSolver::BoneArrayMachine_Feet(int32 index, FName starting, FName knee, FName thigh, FName ending, bool is_foot)
{

	TArray<FName> spine_bones;

	int iteration_count = 0;

	spine_bones.Add(starting);

	if (is_foot == false)
	{
		FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
		data.Spine_Involved = FBoneReference(starting);
		data.Spine_Involved.Initialize(*SavedBoneContainer);
		spine_Feet_pair.Add(data);



	}


	bool finish = false;

	do
	{


		if (is_foot)
		{
			if (Check_Loop_Exist(index, 0, dragon_input_data.FeetBones[index].Finger_Array, dragon_input_data.FeetBones[index].Feet_Alpha, dragon_input_data.FeetBones[index].Min_Feet_Extension, dragon_input_data.FeetBones[index].Feet_Trace_Offset, dragon_input_data.FeetBones[index].Knee_Direction_Offset, dragon_input_data.FeetBones[index].Feet_Rotation_Limit, dragon_input_data.FeetBones[index].Feet_Rotation_Offset, dragon_input_data.FeetBones[index].Feet_Heights, starting, knee, thigh, spine_bones[spine_bones.Num() - 1], Total_spine_bones))
			{
				return spine_bones;
			}
		}

		if (is_foot == false)
		{
			//			GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Spine INIT == " + spine_bones[iteration_count].ToString());
		}

		iteration_count++;
		spine_bones.Add(owning_skel->GetParentBone(spine_bones[iteration_count - 1]));


		if (is_foot == false)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(spine_bones[spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);
			spine_Feet_pair.Add(data);


		}


		if (spine_bones[spine_bones.Num() - 1] == ending && is_foot == false)
		{

			return spine_bones;
		}

	} while (iteration_count < 50 && finish == false);


	return spine_bones;


}







TArray<FName> FAnimNode_DragonFeetSolver::BoneArrayMachine(int32 index, FName starting, FName ending, bool is_foot)
{

	TArray<FName> spine_bones;

	int iteration_count = 0;

	spine_bones.Add(starting);

	if (is_foot == false)
	{
		FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
		data.Spine_Involved = FBoneReference(starting);
		data.Spine_Involved.Initialize(*SavedBoneContainer);
		spine_Feet_pair.Add(data);



	}


	bool finish = false;

	do
	{


		if (is_foot)
		{
			if (Check_Loop_Exist(index, 0, dragon_input_data.FeetBones[index].Finger_Array, dragon_input_data.FeetBones[index].Feet_Alpha, dragon_input_data.FeetBones[index].Min_Feet_Extension, dragon_input_data.FeetBones[index].Feet_Trace_Offset, dragon_input_data.FeetBones[index].Knee_Direction_Offset, dragon_input_data.FeetBones[index].Feet_Rotation_Limit, dragon_input_data.FeetBones[index].Feet_Rotation_Offset, dragon_input_data.FeetBones[index].Feet_Heights, starting, FName(""), FName(""), spine_bones[spine_bones.Num() - 1], Total_spine_bones))
			{
				return spine_bones;
			}
		}

		if (is_foot == false)
		{
			//			GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Spine INIT == " + spine_bones[iteration_count].ToString());
		}

		iteration_count++;
		spine_bones.Add(owning_skel->GetParentBone(spine_bones[iteration_count - 1]));


		if (is_foot == false)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(spine_bones[spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);
			spine_Feet_pair.Add(data);


		}


		if (spine_bones[spine_bones.Num() - 1] == ending && is_foot == false)
		{

			return spine_bones;
		}

	} while (iteration_count < 50 && finish == false);


	return spine_bones;


}







bool FAnimNode_DragonFeetSolver::Check_Loop_Exist(int order_index, float Feet_Slope_Offset_Multiplier, TArray<FDragonData_FingerData> Finger_Array, float FeetAlpha, float MaxFleetFloat, FVector feet_trace_offset, FVector knee_direction_offset, float feet_rotation_limit, FRotator feet_rotation_offset, float feet_height, FName start_bone, FName knee_bone, FName thigh_bone, FName input_bone, TArray<FName> total_spine_bones)
{

	for (int32 i = 0; i < total_spine_bones.Num(); i++)
	{
		if (input_bone.ToString().TrimStartAndEnd().Equals(total_spine_bones[i].ToString().TrimStartAndEnd()))
		{
			if (spine_Feet_pair.Num() > i) // @tikwon
			{
				FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
				data.Spine_Involved = FBoneReference(total_spine_bones[i]);
				data.Spine_Involved.Initialize(*SavedBoneContainer);

				FBoneReference foot_bone = FBoneReference(start_bone);
				foot_bone.Initialize(*SavedBoneContainer);
				data.Associated_Feet.Add(foot_bone);

				spine_Feet_pair[i].Spine_Involved = data.Spine_Involved;
				spine_Feet_pair[i].Associated_Feet.Add(foot_bone);
				spine_Feet_pair[i].feet_rotation_offset.Add(feet_rotation_offset);

				spine_Feet_pair[i].knee_direction_offset.Add(knee_direction_offset);
				spine_Feet_pair[i].order_index.Add(order_index);

				spine_Feet_pair[i].feet_trace_offset.Add(feet_trace_offset);


				spine_Feet_pair[i].Feet_Heights.Add(feet_height);
				spine_Feet_pair[i].feet_rotation_limit.Add(feet_rotation_limit);


				//spine_Feet_pair[i].FeetAlpha.Add(FeetAlpha);
				//spine_Feet_pair[i].Max_Feet_Float.Add(MaxFleetFloat);


				//spine_Feet_pair[i].Feet_Slope_Offset_Multiplier.Add(Feet_Slope_Offset_Multiplier);

				/*

				TArray<int32> finger_chains = TArray<int32>();
				spine_Feet_pair[i].Fingers_Chain_Num.Add(finger_chains);


				TArray<FBoneReference> finger_names = TArray<FBoneReference>();
				spine_Feet_pair[i].Fingers_Name_Array.Add(finger_names);




				//spine_Feet_pair[i].Fingers_Name_Array.Add(Finger_Array);
				//spine_Feet_pair[i].Fingers_Chain_Num.Add(Finger_Array);


				for (int x = 0; x < Finger_Array.Num(); x++)
				{

					FBoneReference Fingers_Name_Array_ref = FBoneReference(Finger_Array[x].Finger_Bone_Name);
					Fingers_Name_Array_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Fingers_Name_Array[spine_Feet_pair[i].Fingers_Name_Array.Num()-1].Add(Fingers_Name_Array_ref);


				//	int chain_index = spine_Feet_pair[i].Fingers_Chain_Num[x].Num();
					spine_Feet_pair[i].Fingers_Chain_Num[spine_Feet_pair[i].Fingers_Chain_Num.Num() - 1].Add(Finger_Array[x].chain_number);

				}
				*/

				if (automatic_leg_make == false)
				{

					FBoneReference knee_bone_ref = FBoneReference(knee_bone);
					knee_bone_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Knees.Add(knee_bone_ref);


					FBoneReference thigh_bone_ref = FBoneReference(thigh_bone);
					thigh_bone_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Thighs.Add(thigh_bone_ref);





				}



				if (i < 0)
				{
					//		FBoneReference bone_edit = FBoneReference(owning_skel->GetParentBone(spine_Feet_pair[i - 1].Spine_Involved.BoneName));
					//		bone_edit.Initialize(*SavedBoneContainer);
					//	spine_Feet_pair[i - 1].Spine_Involved = bone_edit;
				}

				return true;
			}
		}
	}

	return false;
}




/*SPINE FUNCS END*/






FCollisionQueryParams FAnimNode_DragonFeetSolver::getDefaultColliParams(FName name, AActor* me)
{

	const FName TraceTag(name);

	FCollisionQueryParams RV_TraceParams = FCollisionQueryParams(FName(TEXT("RV_Trace")), true, me);
	RV_TraceParams.bTraceComplex = true;
	//	RV_TraceParams.bTraceAsyncScene = true;
	RV_TraceParams.bReturnPhysicalMaterial = false;
	RV_TraceParams.TraceTag = TraceTag;

	//	me->GetWorld()->DebugDrawTraceTag = TraceTag;


	return RV_TraceParams;
}


void FAnimNode_DragonFeetSolver::line_trace_func(USkeletalMeshComponent* skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag,float trace_radius_val, FHitResult& Output, const FLinearColor& Fdebug_color, bool render_trace, bool is_line)
{

	/*
	skelmesh->GetWorld()->LineTraceSingleByChannel(RV_Ragdoll_Hit,        //result
	startpoint,    //start
	endpoint, //end
	ECC_WorldStatic, //collision channel
	getDefaultParams(trace_tag, skelmesh->GetOwner()));

	TArray<AActor*> selfActor;
	//	selfActor.Add(skelmesh->GetOwner());
	*/


	/*BOX
	FCollisionShape shape = FCollisionShape();

	shape.SetBox(FVector(10,10,5));

	skelmesh->GetWorld()->SweepSingleByChannel(RV_Ragdoll_Hit,        //result
	startpoint,    //start
	endpoint, //end
	FRotator(0,0,0).Quaternion(),
	ECC_WorldStatic, //collision channel
	shape,
	getDefaultParams(trace_tag, skelmesh->GetOwner()));
	*/



	TArray<AActor*> ignoreActors;

	/*
	RV_Ragdoll_Hit.bBlockingHit = true;
	RV_Ragdoll_Hit.TraceStart = startpoint;
	RV_Ragdoll_Hit.TraceEnd = endpoint;
	RV_Ragdoll_Hit.ImpactPoint = startpoint - FVector(0,0,55);
	*/

	//if(false)
	
	//if (RV_Ragdoll_Hit.ImpactNormal.Equals(FVector::ZeroVector))

	if (owning_skel->GetOwner())
	{
		if (trace_timer_count > current_trace_interval && trace_distance_legal)
		{
			ignoreActors.Add(owning_skel->GetOwner());

			//float trace_radius_cs = owner_skel_w_transform.GetScale3D().Z*Trace_Radius;


			float owner_scale = scale_mode;

			FVector character_direction_vector = character_direction_vector_CS;

			if (owning_skel->GetOwner())
			{
				//	owner_scale = owner_skel_w_transform.GetScale3D().Z;


				const FVector char_up = character_direction_vector_CS;

				character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);

			}





			float Selected_Trace_Radius = Trace_Radius;

			if (trace_radius_val > 0)
			{
				Selected_Trace_Radius = trace_radius_val;
			}


			float Scaled_Trace_Radius = Selected_Trace_Radius * owner_scale;



			//	FVector up_dir_ws = owner_skel_w_transform.TransformVector(character_direction_vector_CS);

			FHitResult RV_Anti_Checker;

			if (Use_Anti_Channel)
				UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint - character_direction_vector * line_trace_upper_height * scale_mode, startpoint, Anti_Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Anti_Checker, true, Fdebug_color);





			if (RV_Anti_Checker.bBlockingHit && Use_Anti_Channel)
			{
				//	if (RV_Anti_Checker.GetComponent())
				{
					ECollisionChannel channel_type = UEngineTypes::ConvertToCollisionChannel(Anti_Trace_Channel.GetValue());

					ECollisionResponse response_channel = ECollisionResponse::ECR_Ignore;

					if (RV_Anti_Checker.bBlockingHit && RV_Anti_Checker.GetComponent())
						response_channel = RV_Anti_Checker.GetComponent()->GetCollisionResponseToChannel(channel_type);


					//	if (RV_Ragdoll_Hit.bBlockingHit && RV_Ragdoll_Hit.GetComponent())
					//		response_channel = RV_Ragdoll_Hit.GetComponent()->GetCollisionResponseToChannel(channel_type);





					if (response_channel == ECollisionResponse::ECR_Block)
					{

						//	FVector New_StartPoint = startpoint - character_direction_vector * line_trace_upper_height * scale_mode;

						FVector New_StartPoint = (RV_Anti_Checker.ImpactPoint - character_direction_vector * 5);


						if (trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type || Selected_Trace_Radius < 0.2f || is_line)
							UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), New_StartPoint, endpoint, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);
						else
							if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
							{//(startpoint-endpoint).Size()
								UKismetSystemLibrary::SphereTraceSingle(owning_skel->GetOwner(), New_StartPoint + character_direction_vector * Scaled_Trace_Radius, endpoint + character_direction_vector * Scaled_Trace_Radius, Scaled_Trace_Radius, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);
							}
						/*
							else
								if (trace_type == EIKTrace_Type_Plugin::ENUM_BoxTrace_Type)
									UKismetSystemLibrary::BoxTraceSingle(owning_skel->GetOwner(), New_StartPoint, endpoint, FVector(1, 1, 0) * Scaled_Trace_Radius, FRotator(0, 0, 0), Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);
									*/

									//		GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Anti-Channel FOOT Detected ");
					}
				}
			}
			else
			{

				if ((trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type || Selected_Trace_Radius < 0.2f) || is_line)
				{
					UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);

					//	GEngine->AddOnScreenDebugMessage(-1, 0.05f, FColor::Red, " startpoint : " + startpoint.ToString());

				}
				else
					if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
					{//(startpoint-endpoint).Size()
						UKismetSystemLibrary::SphereTraceSingle(owning_skel->GetOwner(), startpoint + character_direction_vector * Scaled_Trace_Radius, endpoint + character_direction_vector * Scaled_Trace_Radius, Scaled_Trace_Radius, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);
					}
				/*
					else
						if (trace_type == EIKTrace_Type_Plugin::ENUM_BoxTrace_Type)
							UKismetSystemLibrary::BoxTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, FVector(1, 1, 0) * Scaled_Trace_Radius, FRotator(0, 0, 0), Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, Fdebug_color);
							*/


			}




		}
		else
		{


		//RV_Ragdoll_Hit.ImpactPoint.X = startpoint.X;
		//RV_Ragdoll_Hit.ImpactPoint.Y = startpoint.Y;

		}

	}

	if (render_trace)
	{
		TraceStartList.Add(startpoint);
		TraceEndList.Add(endpoint);
		Is_Line_Mode.Add(is_line);
		TraceRadiusList.Add(trace_radius_val);
	}

















	//BoxTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime)
	//SphereTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, EDrawDebugTrace::Type DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime)



	//UKismetSystemLibrary::BoxTraceSingle(owning_skel->GetOwner()->GetWorld(), startpoint, endpoint, FVector(15,15,15), FRotator(0,0,0), Trace_Channel, true, ignoreActors, EDrawDebugTrace::ForOneFrame, RV_Ragdoll_Hit, true, FLinearColor::White, FLinearColor::Black, 0.01f);


	//UKismetSystemLibrary::SphereTraceSingle(owning_skel->GetOwner()->GetWorld(), startpoint, endpoint,25, Trace_Channel, true, ignoreActors, EDrawDebugTrace::ForOneFrame, RV_Ragdoll_Hit, true, FLinearColor::White, FLinearColor::Black, 0.01f);

	/*
	skelmesh->GetWorld()->LineTraceSingleByChannel(RV_Ragdoll_Hit,        //result
	startpoint,    //start
	endpoint, //end
	ECC_WorldStatic, //collision channel
	getDefaultParams(trace_tag, skelmesh->GetOwner()));
	*/

	Output = RV_Ragdoll_Hit;

}




FRotator FAnimNode_DragonFeetSolver::BoneRelativeConversion(FRotator feet_data, FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer& BoneContainer, FCSPose<FCompactPose>& MeshBases)
{


	//FCompactPoseBoneIndex CompactPoseBoneToModify = BoneToModify.GetCompactPoseIndex(BoneContainer);
	FTransform NewBoneTM = MeshBases.GetComponentSpaceTransform(ModifyBoneIndex);
	//	FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
	FTransform ComponentTransform = owner_skel_w_transform;



	// Convert to Bone Space.
	FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);


	FQuat actor_rotation_world(0, 0, 0, 0);

	if (owning_skel->GetOwner() != nullptr)
	{
		actor_rotation_world = owning_skel->GetOwner()->GetActorRotation().Quaternion().Inverse() * FRotator(NewBoneTM.GetRotation()).Quaternion();

		FRotator make_rot = NewBoneTM.Rotator();


		//		FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, MeshBases, EndBoneCSTransform, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);

		//		make_rot.Yaw = EndBoneCSTransform.Rotator().Yaw;
//		make_rot.Yaw = FRotator(actor_rotation_world).Yaw + feet_data;


//		make_rot = FRotator(actor_rotation_world) + FRotator(45,45,45);


		//		make_rot.Yaw = 0;

		//New Mod
		//make_rot.Yaw = NewBoneTM.Rotator().Yaw;

		NewBoneTM.SetRotation(make_rot.Quaternion());

	}

	const FQuat BoneQuat(target_rotation);

	NewBoneTM.SetRotation(BoneQuat * NewBoneTM.GetRotation());

	// Convert back to Component Space.
	FAnimationRuntime::ConvertBoneSpaceTransformToCS(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);



	//	NewBoneTM.SetRotation(FRotator(NewBoneTM.Rotator().Pitch, EndBoneCSTransform.Rotator().Yaw, NewBoneTM.Rotator().Roll).Quaternion());

	return NewBoneTM.Rotator();


}

FRotator FAnimNode_DragonFeetSolver::BoneInverseConversion(FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer& BoneContainer, FCSPose<FCompactPose>& MeshBases)
{

	FTransform NewBoneTM = MeshBases.GetComponentSpaceTransform(ModifyBoneIndex);
	//	FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();
	FTransform ComponentTransform = owner_skel_w_transform;


	// Convert to Bone Space.ConvertBoneSpaceTransformToCS
	FAnimationRuntime::ConvertBoneSpaceTransformToCS(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);
	FQuat actor_rotation_world(0, 0, 0, 0);

	if (owning_skel->GetOwner() != nullptr)
	{
		actor_rotation_world = owning_skel->GetOwner()->GetActorRotation().Quaternion() * FRotator(NewBoneTM.GetRotation()).Quaternion();
		FRotator make_rot = NewBoneTM.Rotator();
		make_rot.Yaw = FRotator(actor_rotation_world).Yaw;
		NewBoneTM.SetRotation(make_rot.Quaternion());
	}
	const FQuat BoneQuat(target_rotation);
	NewBoneTM.SetRotation(BoneQuat * NewBoneTM.GetRotation());
	// Convert back to Component Space.
	FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);
	return NewBoneTM.Rotator();

}





FVector FAnimNode_DragonFeetSolver::GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex)
{
	return MeshBases.GetComponentSpaceTransform(BoneIndex).GetLocation();
}


