/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/


#include "AnimNode_DragonSpineSolver.h"
#include "Animation/AnimInstanceProxy.h"
#include "DrawDebugHelpers.h"
#include "AnimationRuntime.h"
#include "AnimationCoreLibrary.h"
#include "Algo/Reverse.h"






FAnimNode_DragonSpineSolver::FAnimNode_DragonSpineSolver()
{


	


	FRichCurve* Interval_Velocity_Curve_CurveData = Interval_Velocity_Curve.GetRichCurve();
	Interval_Velocity_Curve_CurveData->AddKey(0.f, 1.f);
	Interval_Velocity_Curve_CurveData->AddKey(100.f, 0.025f);


	FRichCurve* Pelvis_Height_Multiplier_CurveData = Pelvis_Height_Multiplier_Curve.GetRichCurve();
	Pelvis_Height_Multiplier_CurveData->AddKey(0.f, 1.f);
	Pelvis_Height_Multiplier_CurveData->AddKey(600.f, 0.5f);


	FRichCurve* Chest_Height_Multiplier_CurveData = Chest_Height_Multiplier_Curve.GetRichCurve();
	Chest_Height_Multiplier_CurveData->AddKey(0.f, 1.0f);
	Chest_Height_Multiplier_CurveData->AddKey(600.f, 0.5f);


	FRichCurve* Accurate_Foot_CurveData = Accurate_Foot_Curve.GetRichCurve();
	Accurate_Foot_CurveData->AddKey(0.f, 1.0f);
	Accurate_Foot_CurveData->AddKey(300.f, 0.75f);


	FRichCurve* Interpolation_Multiplier_CurveData = Interpolation_Multiplier_Curve.GetRichCurve();
	Interpolation_Multiplier_CurveData->AddKey(0.f, 1.0f);
	Interpolation_Multiplier_CurveData->AddKey(1500.f, 10.0f);




}


// Initialize the component pose as well as defining the owning skeleton
void FAnimNode_DragonSpineSolver::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	FAnimNode_DragonControlBase::Initialize_AnyThread(Context);
	ComponentPose.Initialize(Context);
	owning_skel = Context.AnimInstanceProxy->GetSkelMeshComponent();

	Character_Actor = Context.AnimInstanceProxy->GetSkelMeshComponent()->GetOwner();

	skeleton_ref = Context.AnimInstanceProxy->GetSkeleton();


	//	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
}


/*
// Cache the bones . Thats it !!
void FAnimNode_DragonSpineSolver::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	FAnimNode_Base::CacheBones_AnyThread(Context);
	ComponentPose.CacheBones(Context);
	InitializeBoneReferences(Context.AnimInstanceProxy->GetRequiredBones());
}
*/


/*
// Main update function . Do not perform any change !!
void FAnimNode_DragonSpineSolver::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	ComponentPose.Update(Context);
	ActualAlpha = 0.f;
	if (IsLODEnabled(Context.AnimInstanceProxy))
	{
		GetEvaluateGraphExposedInputs().Execute(Context);

		//EvaluateGraphExposedInputs.Execute(Context);
		// Apply the skeletal control if it's valid
		ActualAlpha = AlphaScaleBias.ApplyTo(Alpha);
		if (Enable_Solver && FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Context.AnimInstanceProxy->GetSkeleton(), Context.AnimInstanceProxy->GetRequiredBones()))
		{
			UpdateInternal(Context);
		}
	}
}
*/






void FAnimNode_DragonSpineSolver::Make_All_Bones(FCSPose<FCompactPose>& MeshBases)
{


	const FBoneContainer& BoneContainer = MeshBases.GetPose().GetBoneContainer();

	TArray<FCompactPoseBoneIndex> BoneIndices;

	{
		const FCompactPoseBoneIndex RootIndex = spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(BoneContainer);
		FCompactPoseBoneIndex BoneIndex = spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.GetCompactPoseIndex(BoneContainer);
		do
		{
			BoneIndices.Insert(BoneIndex, 0);
			BoneIndex = MeshBases.GetPose().GetParentBoneIndex(BoneIndex);
		} while (BoneIndex != RootIndex);
		BoneIndices.Insert(BoneIndex, 0);
	}

	combined_indices = BoneIndices;
}




// Store the zero pose transform data
void FAnimNode_DragonSpineSolver::GetResetedPoseInfo(FCSPose<FCompactPose>& MeshBases)
{
	//	Make_All_Bones(MeshBases);

	RestBoneTransforms.Reset();

	// Gather transforms
	int32 const NumTransforms = combined_indices.Num();
	RestBoneTransforms.AddUninitialized(NumTransforms);
	//	AnimatedBoneTransforms.AddUninitialized(NumTransforms - 1);

	//	Original_AnimatedBoneTransforms.AddUninitialized(NumTransforms - 1);

	if (initialize_anim_array == false)
		AnimatedBoneTransforms.AddUninitialized(NumTransforms);

	Original_AnimatedBoneTransforms.AddUninitialized(NumTransforms);



	for (int i = 0; i < NumTransforms; i++)
	{
		RestBoneTransforms[i] = (FBoneTransform(combined_indices[i], MeshBases.GetComponentSpaceTransform(combined_indices[i])));

		if ((i < NumTransforms - 1) && initialize_anim_array == false)
			AnimatedBoneTransforms[i] = RestBoneTransforms[i];
	}

	initialize_anim_array = true;

}





void FAnimNode_DragonSpineSolver::Process_Legs_Solving(FComponentSpacePoseContext& MeshBases, TArray<FBoneTransform>& InputBoneTransforms, TArray<FBoneTransform>& OutBoneTransforms)
{
	/*
	OutBoneTransforms.Empty();



	if (Is_ChainOrder_Calculated == false)
	{
		for (int chainindex = 0; chainindex < InputBoneTransforms.Num(); chainindex++)
		{

			for (int spineindex = 0; spineindex < spine_Feet_pair.Num(); spineindex++)
			{

				if (spine_Feet_pair[spineindex].Spine_Involved.CachedCompactPoseIndex == InputBoneTransforms[chainindex].BoneIndex)
					spine_Feet_pair[spineindex].Spine_Chain_Index = chainindex;

			}

		}

		Is_ChainOrder_Calculated = true;

	}


	for (int spineindex = 0; spineindex < spine_Feet_pair.Num(); spineindex++)
	{
		if (InputBoneTransforms.Num() > spine_Feet_pair[spineindex].Spine_Chain_Index)
		{

			FTransform Common_Spine_Calculated_Transform = InputBoneTransforms[spine_Feet_pair[spineindex].Spine_Chain_Index].Transform;

			FTransform Common_Spine_Original_Transform = MeshBases.Pose.GetComponentSpaceTransform(InputBoneTransforms[spine_Feet_pair[spineindex].Spine_Chain_Index].BoneIndex);

			FTransform Inv_Spine_Value = Common_Spine_Original_Transform.Inverse() * Common_Spine_Calculated_Transform;


			spine_Feet_pair[spineindex].inverted_spine_tf = Inv_Spine_Value;

			//Inv_Spine_Value = FTransform::Identity;

			for (int feetindex = 0; feetindex < spine_Feet_pair[spineindex].Associated_Feet.Num(); feetindex++)
			{

				FTransform  Hand_Transform_Default = MeshBases.Pose.GetComponentSpaceTransform(spine_Feet_pair[spineindex].Associated_Feet[feetindex].CachedCompactPoseIndex);
				//	FTransform  Shoulder_Transform_Default = MeshBases.Pose.GetComponentSpaceTransform(spine_Feet_pair[spineindex].Associated_Thighs[feetindex].CachedCompactPoseIndex);
				//	FTransform  Knee_Transform_Default = MeshBases.Pose.GetComponentSpaceTransform(spine_Feet_pair[spineindex].Associated_Knees[feetindex].CachedCompactPoseIndex);

				FTransform  Knee_Transform_Default = MeshBases.Pose.GetComponentSpaceTransform(spine_Feet_pair[spineindex].Associated_Knees[feetindex].CachedCompactPoseIndex);
				FTransform  Shoulder_Transform_Default = MeshBases.Pose.GetComponentSpaceTransform(spine_Feet_pair[spineindex].Associated_Thighs[feetindex].CachedCompactPoseIndex);


				//	FTransform Inv_Shoulder_Value = Shoulder_Transform_Default.Inverse() * Rotated_Shoulder;
				//	FTransform Inv_Shoulder_Value = Shoulder_Transform_Default.Inverse();

					//Inv_Shoulder_Value = FTransform::Identity;

				FTransform Shoulder_Transform_Output = Shoulder_Transform_Default * Inv_Spine_Value;
				FTransform Knee_Transform_Output = Knee_Transform_Default * Inv_Spine_Value;
				FTransform Hand_Transform_Output = Hand_Transform_Default * Inv_Spine_Value;



				//	FTransform ws_inv_spine_const = owner_skel_w_transform*spine_Feet_pair[i].inverted_spine_tf;

				FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, character_direction_vector_CS);


				FTransform modified_feet_transform =  spine_AnimatedTransform_pairs[spineindex].Associated_Feet[feetindex] * Inv_Spine_Value;

				line_trace_func(*owning_skel
					, modified_feet_transform.GetLocation() + character_direction_vector * 500,
					modified_feet_transform.GetLocation() - character_direction_vector * 500,
					spine_hit_pairs[spineindex].RV_SpinalFeet_Hits[feetindex],
					spine_Feet_pair[spineindex].Associated_Feet[feetindex].BoneName,
					spine_Feet_pair[spineindex].Associated_Feet[feetindex].BoneName
					, spine_hit_pairs[spineindex].RV_SpinalFeet_Hits[feetindex], FLinearColor::Red, false);


				if (spine_hit_pairs[spineindex].RV_SpinalFeet_Hits[feetindex].bBlockingHit)
				{
					FTransform Target_Trans = FTransform::Identity;
					Target_Trans.SetLocation(spine_hit_pairs[spineindex].RV_SpinalFeet_Hits[feetindex].ImpactPoint);
					UDragonIK_Library::Evaluate_TwoBoneIK_Spinal_Modified(MeshBases, owning_skel, spine_Feet_pair[spineindex].Associated_Feet[feetindex], spine_Feet_pair[spineindex].Associated_Knees[feetindex], spine_Feet_pair[spineindex].Associated_Thighs[feetindex], Target_Trans, Shoulder_Transform_Output, Knee_Transform_Output, Hand_Transform_Output, FVector(0, 0, 0), FVector(0, 0, 0), OutBoneTransforms);
				}

			}
		}
	}

	for (int i=0; i< OutBoneTransforms.Num();i++ )
	{
		InputBoneTransforms.Add(OutBoneTransforms[i]);
	}
	*/

}


// Store the animated and calculated pose transform data
void FAnimNode_DragonSpineSolver::GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	int32 const NumTransforms = combined_indices.Num();
	OutBoneTransforms.Empty();



	FTransform pelvis_difference = FTransform::Identity;



	//FVector Overall_PostSolved_Offset_Temp = Overall_PostSolved_Offset;

	//Overall_PostSolved_Offset_Temp = owner_skel_w_transform.TransformVector(Overall_PostSolved_Offset_Temp);

	//FVector Overall_PostSolved_Offset = Overall_PostSolved_Offset_Temp;


	if ((owning_skel->GetWorld()->IsGameWorld() || Work_Outside_PIE) && test_counter > 4)
	{


		for (int i = 0; i < Extra_Spine_Indices.Num(); i++)
		{

			if (Extra_Spine_Indices[i].GetInt() < Spine_Indices[0].GetInt())
			{

				FTransform updated_transform = MeshBases.GetComponentSpaceTransform(combined_indices[0]);
				FQuat rotDiff = (AnimatedBoneTransforms[0].Transform.Rotator().Quaternion() * updated_transform.Rotator().Quaternion().Inverse()).GetNormalized();
				FVector delta_pos_diff = updated_transform.GetLocation() - AnimatedBoneTransforms[0].Transform.GetLocation();
				FTransform original_transform = MeshBases.GetComponentSpaceTransform(Extra_Spine_Indices[i]);


				//OG	original_transform.SetLocation(original_transform.GetLocation() - delta_pos_diff + Overall_PostSolved_Offset);

				original_transform.SetLocation(original_transform.GetLocation() - delta_pos_diff);


				original_transform.SetRotation((rotDiff * original_transform.Rotator().Quaternion()));



				OutBoneTransforms.Add(FBoneTransform(Extra_Spine_Indices[i], original_transform));
			}

		}



		FTransform stabilization_pelvis = FTransform::Identity;

		FTransform stabilization_pelvis_plus = FTransform::Identity;


		FTransform stabilization_chest = FTransform::Identity;




		float tip_reduction = 0;

		if (Ignore_End_Points)
			tip_reduction = 2;

		for (int i = 0; i < NumTransforms - 0; i++)
		{

			if ((i < (NumTransforms - tip_reduction)) && (i < Total_spine_alphas.Num()))
			{

				if (atleast_one_hit == true && Enable_Solver)
				{

					//	if (Ignore_Lerping == false)
					Total_spine_alphas[i] = UKismetMathLibrary::FInterpTo(Total_spine_alphas[i], 1, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Shift_Speed * 0.5f);
					//	else
					//		Total_spine_alphas[i] = 1;

				}
				else
				{

					//	if (Ignore_Lerping == false)
					Total_spine_alphas[i] = UKismetMathLibrary::FInterpTo(Total_spine_alphas[i], 0, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Shift_Speed * 0.5f);
					//	else
					//		Total_spine_alphas[i] = 0;

				}



				//Total_spine_alphas[i] = 1;

				Total_spine_alphas[i] = FMath::Clamp<float>(Total_spine_alphas[i], 0, 1);

				FTransform updated_transform = MeshBases.GetComponentSpaceTransform(combined_indices[i]);




				if (!RestBoneTransforms[i].Transform.ContainsNaN() && !AnimatedBoneTransforms[i].Transform.ContainsNaN() && (RestBoneTransforms[i].Transform.GetLocation() - updated_transform.GetLocation()).Size() < 200 * component_scale && (AnimatedBoneTransforms[i].Transform.GetLocation() - updated_transform.GetLocation()).Size() < 10000 * component_scale)
				{

					FQuat rotDiff = (updated_transform.Rotator().Quaternion() * RestBoneTransforms[i].Transform.Rotator().Quaternion().Inverse()).GetNormalized();


					FVector delta_pos_diff = updated_transform.GetLocation() - RestBoneTransforms[i].Transform.GetLocation();



					if (Calculation_To_RefPose == false)
					{
						updated_transform.SetRotation(AnimatedBoneTransforms[i].Transform.Rotator().Quaternion());
						updated_transform.SetLocation(AnimatedBoneTransforms[i].Transform.GetLocation() + Overall_PostSolved_Offset);
					}
					else

					{
						updated_transform.SetRotation((rotDiff * AnimatedBoneTransforms[i].Transform.Rotator().Quaternion()));
						updated_transform.SetLocation(delta_pos_diff + AnimatedBoneTransforms[i].Transform.GetLocation() + Overall_PostSolved_Offset);
					}

				}

				if (is_single_spine)
				{
					//			if(i<NumTransforms-1)

					if (i == 0)
					{
						//	if (Ignore_Lerping == false)
						OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));
						//	else
						//		OutBoneTransforms.Add(FBoneTransform(combined_indices[i], updated_transform));


						if (stabilize_pelvis_legs)
						{

							if (spine_Feet_pair[0].Spine_Involved.CachedCompactPoseIndex == combined_indices[i])
							{
								stabilization_pelvis = MeshBases.GetComponentSpaceTransform(combined_indices[i]).Inverse() * OutBoneTransforms[OutBoneTransforms.Num() - 1].Transform;
							}
						}

					}




				}
				else
				{
					//			if (i<NumTransforms - 1)
					//			if (i == 0)

					if (Only_Root_Solve)
					{
						if (i == 0)
						{



							//	if (Ignore_Lerping == false)
							OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));
							//	else
							//		OutBoneTransforms.Add(FBoneTransform(combined_indices[i], updated_transform));
						}
					}
					else if (complexity_type == ESolverComplexityPluginEnum::VE_Simple && !is_snake)
					{

						if (i == 0)
						{

							pelvis_difference = MeshBases.GetComponentSpaceTransform(combined_indices[i]).Inverse() * updated_transform;

							OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));
						}

						if (i == 1 && i != NumTransforms - 1)
						{

							FVector chest_loc_ref = AnimatedBoneTransforms[NumTransforms - 1].Transform.GetLocation() + Overall_PostSolved_Offset;

							FVector chest_loc_orig = Original_AnimatedBoneTransforms[NumTransforms - 1].Transform.GetLocation() + Overall_PostSolved_Offset;



							FVector body_to_chest_look = (updated_transform.GetLocation() - chest_loc_ref).GetSafeNormal();
							FVector body_to_chest_orig_look = ((Original_AnimatedBoneTransforms[i].Transform.GetLocation() + Overall_PostSolved_Offset) - chest_loc_orig).GetSafeNormal();

							FQuat diff_rot = FQuat::FindBetweenNormals(body_to_chest_orig_look, body_to_chest_look);

							//FQuat diff_rot = body_to_chest_orig_look.Quaternion()* body_to_chest_look.Quaternion().Inverse();

							updated_transform.SetLocation((MeshBases.GetComponentSpaceTransform(combined_indices[i]) * pelvis_difference).GetLocation());

							updated_transform.SetRotation(diff_rot * Original_AnimatedBoneTransforms[i].Transform.GetRotation());

							OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));




						}

						if (i > 0 && i == NumTransforms - 1 && !Ignore_Chest_Solve)
						{

							//updated_transform.SetLocation( (MeshBases.GetComponentSpaceTransform(combined_indices[i])* pelvis_difference).GetLocation() );

							OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));
						}

					}
					else
					{
						//	if (Ignore_Lerping == false)
						OutBoneTransforms.Add(FBoneTransform(combined_indices[i], UKismetMathLibrary::TLerp(MeshBases.GetComponentSpaceTransform(combined_indices[i]), updated_transform, Total_spine_alphas[i])));
						//	else
						//		OutBoneTransforms.Add(FBoneTransform(combined_indices[i], updated_transform));


					}



					if (stabilize_pelvis_legs)
					{

						if (spine_Feet_pair[0].Spine_Involved.CachedCompactPoseIndex == combined_indices[i])
						{
							stabilization_pelvis = MeshBases.GetComponentSpaceTransform(combined_indices[i]).Inverse() * OutBoneTransforms[OutBoneTransforms.Num() - 1].Transform;
						}
					}

					if (stabilize_chest_legs || stabilize_pelvis_legs)
					{


						if (i == 1 && i != NumTransforms - 1)
						{
							stabilization_pelvis_plus = MeshBases.GetComponentSpaceTransform(combined_indices[i]).Inverse() * OutBoneTransforms[OutBoneTransforms.Num() - 1].Transform;
						}


						if (spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.CachedCompactPoseIndex == combined_indices[i])
						{
							stabilization_chest = MeshBases.GetComponentSpaceTransform(combined_indices[i]).Inverse() * OutBoneTransforms[OutBoneTransforms.Num() - 1].Transform;
						}


					}



				}

			}
			else
			{
				//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " OH YEAH! ");

			}


		}





		if ((stabilize_pelvis_legs || stabilize_chest_legs) && OutBoneTransforms.Num() > 0)
		{

			//spine_Feet_pair[i].Associated_Thighs



			for (int spine_index = 0; spine_index < spine_Feet_pair.Num(); spine_index++)
			{

				for (int feet_index = 0; feet_index < spine_Feet_pair[spine_index].Associated_Thighs.Num(); feet_index++)
				{


					if (spine_Feet_pair[spine_index].Associated_Thighs[feet_index].IsValidToEvaluate())
					{

						if (spine_index == 0 && stabilize_pelvis_legs)
						{

							FTransform thigh_transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex) * stabilization_pelvis;

							FQuat const thigh_original_rotation = thigh_transform.GetRotation();

							//float pelvis_slope_direction_clamped = FMath::Clamp<float>(pelvis_slope_direction, (-100 * (component_scale + 0.001f)), (100 * (component_scale + 0.001f))) / (100 * (component_scale + 0.001f));

							//float pelvis_slope_direction_clamped = FMath::Clamp<float>( pelvis_slope_direction,-10*component_scale,10 * component_scale)/10;

							//float pelvis_slope_stab_alpha = FMath::Lerp<float>(Pelvis_DownSlopeStabilization_Alpha, Pelvis_UpSlopeStabilization_Alpha, pelvis_slope_direction_clamped);

							float stab_value = Pelvis_UpSlopeStabilization_Alpha;

							if (pelvis_slope_direction > 0)
								stab_value = Pelvis_UpSlopeStabilization_Alpha;
							else
								stab_value = Pelvis_DownSlopeStabilization_Alpha;


							pelvis_slope_stab_alpha = FMath::FInterpTo(pelvis_slope_stab_alpha, stab_value, delta_seconds_saved, Location_Lerp_Speed / 10);


							thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation(), pelvis_slope_stab_alpha));



							//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " pelvis_slope_direction_clamped : " + FString::SanitizeFloat(pelvis_slope_direction_clamped));



							//if(pelvis_slope_direction > 0)
							//thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation,  MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation() , Pelvis_UpSlopeStabilization_Alpha));
							//else
							//	thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation(), Pelvis_DownSlopeStabilization_Alpha));


							OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex, thigh_transform));




							//				OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex)* stabilization_pelvis));
						}

						if (spine_index > 0 && stabilize_chest_legs)
						{


							//	FTransform thigh_transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex) * stabilization_chest;

							FTransform thigh_transform;

							if (Only_Root_Solve)
								thigh_transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex) * stabilization_pelvis;
							else
								if (Ignore_Chest_Solve)
									thigh_transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex) * stabilization_pelvis_plus;
								else
									thigh_transform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex) * stabilization_chest;


							FQuat const thigh_original_rotation = thigh_transform.GetRotation();

							//	thigh_transform.SetRotation(MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation());


								//float chest_slope_direction_clamped = FMath::Clamp<float>(chest_slope_direction, (-10 * (component_scale + 0.001f)), (10 * (component_scale + 0.001f))) / (10* (component_scale+0.001f) );

								//float chest_slope_stab_alpha = FMath::Lerp<float>(Chest_DownslopeStabilization_Alpha, Chest_UpSlopeStabilization_Alpha, chest_slope_direction_clamped);


							float stab_value = Chest_UpSlopeStabilization_Alpha;

							if (chest_slope_direction > 0)
								stab_value = Chest_DownslopeStabilization_Alpha;
							else
								stab_value = Chest_UpSlopeStabilization_Alpha;


							chest_slope_stab_alpha = FMath::FInterpTo(chest_slope_stab_alpha, stab_value, delta_seconds_saved, Location_Lerp_Speed / 10);



							thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation(), chest_slope_stab_alpha));


							/*
							if (pelvis_slope_direction > 0)
							thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation(), Chest_UpSlopeStabilization_Alpha));
							else
								thigh_transform.SetRotation(FQuat::Slerp(thigh_original_rotation, MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex).GetRotation(), Chest_DownslopeStabilization_Alpha));
								*/

							OutBoneTransforms.Add(FBoneTransform(spine_Feet_pair[spine_index].Associated_Thighs[feet_index].CachedCompactPoseIndex, thigh_transform));
						}

					}
				}


			}



			//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Tail Stabilized : ");

			//Stabilization_Tail_Bone.Initialize(*SavedBoneContainer);

			if (Stabilization_Tail_Bone.IsValidToEvaluate() && stabilize_pelvis_legs)
			{
				FTransform original_tail = MeshBases.GetComponentSpaceTransform(Stabilization_Tail_Bone.CachedCompactPoseIndex);
				FTransform tail_transform = original_tail * stabilization_pelvis;
				//	tail_transform.SetRotation(original_tail.GetRotation());
				tail_transform.SetRotation(FQuat::Slerp(tail_transform.GetRotation(), original_tail.GetRotation(), pelvis_slope_stab_alpha));

				OutBoneTransforms.Add(FBoneTransform(Stabilization_Tail_Bone.CachedCompactPoseIndex, tail_transform));
			}



			if (Stabilization_Head_Bone.IsValidToEvaluate() && stabilize_chest_legs)
			{
				FTransform original_head = MeshBases.GetComponentSpaceTransform(Stabilization_Head_Bone.CachedCompactPoseIndex);

				//FTransform head_transform = original_head * stabilization_chest;

				FTransform head_transform;

				bool is_single_pair = false;
					
				if(spine_Feet_pair.Num() > 0)
					is_single_pair = spine_Feet_pair[spine_Feet_pair.Num()-1].Associated_Feet.Num() == 0;


				if (Only_Root_Solve || (is_single_pair) )
					head_transform = MeshBases.GetComponentSpaceTransform(Stabilization_Head_Bone.CachedCompactPoseIndex) * stabilization_pelvis;
				else
					if (Ignore_Chest_Solve)
						head_transform = MeshBases.GetComponentSpaceTransform(Stabilization_Head_Bone.CachedCompactPoseIndex) * stabilization_pelvis_plus;
					else
						head_transform = MeshBases.GetComponentSpaceTransform(Stabilization_Head_Bone.CachedCompactPoseIndex) * stabilization_chest;





				head_transform.SetRotation(FQuat::Slerp(head_transform.GetRotation(), original_head.GetRotation(), chest_slope_stab_alpha));


				OutBoneTransforms.Add(FBoneTransform(Stabilization_Head_Bone.CachedCompactPoseIndex, head_transform));
			}




		}


	}

}

/*
void FAnimNode_DragonSpineSolver::EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output)
{

	//	checkSlow(Output.Pose.GetPose().IsValid());
	//	ensure(Output.Pose.GetPose().IsValid() == false);


#if DO_CHECK
// this is to ensure Source data does not contain NaN
	ensure(Output.ContainsNaN() == false);
#endif


	// Apply the skeletal control if it's valid
	if (solve_should_fail == false && (FVector(0, 0, 0) - Output.AnimInstanceProxy->GetActorTransform().GetScale3D()).Size() > 0 && spine_Feet_pair.Num() > 0 && FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Output.AnimInstanceProxy->GetSkeleton(), Output.AnimInstanceProxy->GetRequiredBones()) && Output.ContainsNaN() == false)// && owning_skel->GetWorld()->IsGameWorld() )
	{


		ComponentPose.EvaluateComponentSpace(Output);







			EvaluateComponentSpaceInternal(Output, FinalBoneTransforms);


			


			bool is_swapped = false;

			do
			{
				is_swapped = false;
				for (int32 i = 1; i < FinalBoneTransforms.Num(); i++)
				{
					if (FinalBoneTransforms[i - 1].BoneIndex > FinalBoneTransforms[i].BoneIndex)
					{
						FBoneTransform temp = FinalBoneTransforms[i - 1];
						FinalBoneTransforms[i - 1] = FinalBoneTransforms[i];
						FinalBoneTransforms[i] = temp;

						is_swapped = true;
					}
				}

			} while (is_swapped == true);


			checkSlow(!DragonContainsNaN(FinalBoneTransforms));

			if (FinalBoneTransforms.Num() > 0)
			{

				const float BlendWeight = FMath::Clamp<float>(ActualAlpha, 0.f, 1.f);
				Output.Pose.LocalBlendCSBoneTransforms(FinalBoneTransforms, BlendWeight);
			}

		}
		else
			ComponentPose.EvaluateComponentSpace(Output);



}

*/

bool FAnimNode_DragonSpineSolver::DragonContainsNaN(const TArray<FBoneTransform>& BoneTransforms_input)
{
	for (int32 i = 0; i < BoneTransforms_input.Num(); ++i)
	{
		if (BoneTransforms_input[i].Transform.ContainsNaN())
		{
			return true;
		}
	}

	return false;
}



void FAnimNode_DragonSpineSolver::Evaluate_AnyThread(FPoseContext& Output)
{
}





void FAnimNode_DragonSpineSolver::ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const
{

#if WITH_EDITORONLY_DATA
	if (DisplayLineTrace && PreviewSkelMeshComp && PreviewSkelMeshComp->GetWorld())
	{
		for (int i = 0; i < TraceStartList.Num(); i++)
		{

			//	DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], FColor::Green, false, 0.1f);


			if (Use_Ducking_Feature)
			{
			
				if (TraceLinearColor[i] == (FColor::White))
				{

					FVector Vector_Difference = (TraceStartList[i] - TraceEndList[i]);
					Vector_Difference.X = 0;
					Vector_Difference.Y = 0;

					DrawDebugBox(PreviewSkelMeshComp->GetWorld(), TraceStartList[i] - FVector(0, 0, Vector_Difference.Z * 0.5f), FVector(3, 3, Vector_Difference.Size() * 0.5f), TraceLinearColor[i], false, 0.1f);

				}

			}



			float owner_scale = 1;

			if (PreviewSkelMeshComp->GetOwner())
			{
				owner_scale = PreviewSkelMeshComp->GetComponentTransform().GetScale3D().Z * virtual_scale;
			}

			//for (int i = 0; i < TraceStartList.Num(); i++)
			{

				if (trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type)
					DrawDebugLine(PreviewSkelMeshComp->GetWorld(), TraceStartList[i], TraceEndList[i], TraceLinearColor[i], false, 0.1f);
				else
					if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
					{
						FVector Vector_Difference = (TraceStartList[i] - TraceEndList[i]);
						Vector_Difference.X = 0;
						Vector_Difference.Y = 0;


						DrawDebugCapsule(PreviewSkelMeshComp->GetWorld(), TraceStartList[i] - FVector(0, 0, Vector_Difference.Z * 0.5f), Vector_Difference.Size() * 0.5f + (Trace_Radius * owner_scale), Trace_Radius * owner_scale, FRotator(0, 0, 0).Quaternion(), TraceLinearColor[i], false, 0.1f);


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
							DrawDebugBox(PreviewSkelMeshComp->GetWorld(), TraceStartList[i] - FVector(0, 0, Vector_Difference.Z * 0.5f), FVector(Trace_Radius * owner_scale, Trace_Radius * owner_scale, Vector_Difference.Size() * 0.5f), TraceLinearColor[i], false, 0.1f);
						}
						*/
			}
		}

	}
#endif

}

//Perform update operations inside this
void FAnimNode_DragonSpineSolver::UpdateInternal(const FAnimationUpdateContext& Context)
{
	FAnimNode_DragonControlBase::UpdateInternal(Context);

	TraceStartList.Empty();
	TraceEndList.Empty();
	TraceLinearColor.Empty();



	owner_skel_w_transform = owning_skel->GetComponentTransform();


	component_scale = owner_skel_w_transform.GetScale3D().Z;


	float start_const = (line_trace_upper_height * component_scale * virtual_scale);

	float end_const = (line_trace_downward_height * component_scale * virtual_scale);

	const FVector char_up = character_direction_vector_CS;

	FVector character_direction_vector = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, char_up);

	//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " spine size : " + FString::SanitizeFloat(spine_Feet_pair.Num()));

	if (test_counter < 500)
		test_counter++;



	trace_draw_counter++;

	if (trace_draw_counter > 5)
		trace_draw_counter = 0;




	Shift_Speed = FMath::Clamp<float>(Shift_Speed, 0, 100);



	Location_Lerp_Speed = FMath::Clamp<float>(Location_Lerp_Speed, 0, 100);







	


	//	if (is_snake)
	//		GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " is snake spine.. ");



	

	if (Character_Actor)
	{
		if (Override_Curve_Velocity)
			Character_Speed = custom_velocity;
		else
			Character_Speed = Character_Actor->GetVelocity().Size();


		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds * Character_Actor->CustomTimeDilation;

	}
	else
	{
		if(owning_skel!=nullptr)
		delta_seconds_saved = owning_skel->GetWorld()->DeltaTimeSeconds;
	}

	if (test_counter < 10)
	{

		Formatted_Shift_Speed = 100;

	}
	else
	{

		Formatted_Shift_Speed = Shift_Speed;
	}



	Maximum_Formated_Dip_Height = Pelvis_Height_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed) * Maximum_Dip_Height;

	Maximum_Formated_Dip_Height_Chest = Chest_Height_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed) * Maximum_Dip_Height_Chest;


	Formatted_Location_Lerp = Location_Lerp_Speed * Interpolation_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed);

	Formatted_Rotation_Lerp = Rotation_Lerp_Speed * Interpolation_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed);

	Formatted_Trace_Lerp = Trace_Lerp_Speed * Interpolation_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed);

	Formatted_Snake_Lerp = Snake_Joint_Speed * Interpolation_Multiplier_Curve.GetRichCurve()->Eval(Character_Speed);


	//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Character_Speed " + FString::SanitizeFloat(Character_Speed) );



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






	if (spine_Transform_pairs.Num() > 0)
	{

		//		if(is_snake)
		//			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " spine size : " + FString::SanitizeFloat(spine_Feet_pair.Num()));



		maximum_spine_length = (spine_Transform_pairs[0].Spine_Involved.GetLocation() - spine_Transform_pairs[(spine_hit_pairs).Num() - 1].Spine_Involved.GetLocation()).Size();



		//FVector dir_forward = -1 * (spine_Transform_pairs[0].Spine_Involved.GetLocation() - spine_Transform_pairs[spine_Transform_pairs.Num() - 1].Spine_Involved.GetLocation()).GetSafeNormal();


		//FVector dir_forward = owner_skel_w_transform.TransformVector(Forward_Direction_Vector);




		if (SolverReferencePose == ERefPosePluginEnum::VE_Animated)
		{
			//	dir_forward = -1 * (spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation() - spine_AnimatedTransform_pairs[spine_AnimatedTransform_pairs.Num() - 1].Spine_Involved.GetLocation()).GetSafeNormal();
		}

		//dir_forward = Forward_Direction_Vector.GetSafeNormal();


		FVector dir_forward = owner_skel_w_transform.TransformVector(Forward_Direction_Vector);

		//		dir_forward = owner_skel_w_transform.TransformVector(dir_forward);


		FVector feet_mid_point = FVector::ZeroVector;
		FVector back_feet_mid_point = FVector::ZeroVector;


		if (is_single_spine == false && spine_Transform_pairs.Num() > 0 && spine_Feet_pair.Num() > 1)
		{

			for (int j = 0; j < spine_Feet_pair[1].Associated_Feet.Num(); j++)
			{
				if (spine_Transform_pairs[1].Associated_Feet.Num() > j)
					feet_mid_point += spine_Transform_pairs[1].Associated_Feet[j].GetLocation();
			}

			feet_mid_point = feet_mid_point / 2;
			feet_mid_point.Z = spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation().Z;



			for (int j = 0; j < spine_Feet_pair[0].Associated_Feet.Num(); j++)
			{
				back_feet_mid_point += spine_Transform_pairs[0].Associated_Feet[j].GetLocation();
			}


			back_feet_mid_point = back_feet_mid_point / 2;
			back_feet_mid_point.Z = spine_AnimatedTransform_pairs[spine_AnimatedTransform_pairs.Num() - 1].Spine_Involved.GetLocation().Z;

		}
		else
		{

			feet_mid_point = spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation();
			back_feet_mid_point = spine_AnimatedTransform_pairs[spine_AnimatedTransform_pairs.Num() - 1].Spine_Involved.GetLocation();
		}






		FVector f_offset_local = dir_forward * extra_forward_trace_Offset;

		//			if (i < spine_hit_pairs.Num() - 1)
		//				f_offset = f_offset * 0;


		feet_mid_point = feet_mid_point + f_offset_local;

		if (is_snake)
		{
			for (int i = 0; i < spine_hit_between.Num(); i++)
			{

				FString string_between = "SpineBetween";

				string_between.AppendInt(i);




				line_trace_func(*owning_skel
					, spine_between_transforms[i] + character_direction_vector * start_const,
					spine_between_transforms[i] - character_direction_vector * end_const,
					spine_hit_between[i],
					FName(*string_between),
					FName(*string_between),
					spine_hit_between[i], FLinearColor::Red,
					false);


				//spine_between_points


				if (spine_hit_between[i].bBlockingHit)
				{

					//	spine_hit_pairs[i].Parent_Spine_Point = spine_hit_pairs[i].Parent_Spine_Hit.ImpactPoint;
					//|| !Enable_Snake_Interpolation
					if (spine_between_points[i] == FVector::ZeroVector || test_counter < 10 || !Enable_Snake_Interpolation)
						spine_between_points[i] = spine_hit_between[i].ImpactPoint;
					else
					{

						//if (is_snake)
						{
							FVector spinal_point = spine_between_points[i];
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

							FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_between[i].ImpactPoint);
							spinal_point.X = impact_point_inv.X;
							spinal_point.Y = impact_point_inv.Y;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							spine_between_points[i] = spinal_point;
						}


						//	spine_between_points[i] = UKismetMathLibrary::VInterpTo(spine_between_points[i], spine_hit_between[i].ImpactPoint, owning_skel->GetWorld()->GetDeltaSeconds(), Snake_Joint_Speed * 10);

						spine_between_points[i] = UKismetMathLibrary::VInterpTo(spine_between_points[i], spine_hit_between[i].ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Snake_Lerp);


						//	spine_between_points[i] = UKismetMathLibrary::VInterpTo(spine_between_points[i], spine_hit_between[i].ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);

							//1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.05f
					}

				}
				else
				{
					FVector spinal_point = spine_between_transforms[i];

					spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
					spinal_point.Z = 0;
					spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);

					spine_between_points[i] = spinal_point;

				}


			}
		}




		for (int32 i = 0; i < spine_hit_pairs.Num(); i++)
		{
			if (spine_Feet_pair.Num() > i)
			{
				for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
				{

					//	FTransform ws_inv_spine_const = owner_skel_w_transform*spine_Feet_pair[i].inverted_spine_tf;

					FTransform modified_feet_transform = spine_AnimatedTransform_pairs[i].Associated_Feet[j];

					line_trace_func(*owning_skel
						, modified_feet_transform.GetLocation() + character_direction_vector * start_const,
						modified_feet_transform.GetLocation() - character_direction_vector * end_const,
						spine_hit_pairs[i].RV_Feet_Hits[j],
						spine_Feet_pair[i].Associated_Feet[j].BoneName,
						spine_Feet_pair[i].Associated_Feet[j].BoneName
						, spine_hit_pairs[i].RV_Feet_Hits[j], FLinearColor::Red, false);




					if (spine_hit_pairs[i].RV_Feet_Hits[j].bBlockingHit)
					{
						if (spine_hit_pairs[i].RV_FeetHit_Points[j] == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
							spine_hit_pairs[i].RV_FeetHit_Points[j] = spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint;
						else
						{

							FVector spinal_point = spine_hit_pairs[i].RV_FeetHit_Points[j];
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

							FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint);
							spinal_point.X = impact_point_inv.X;
							spinal_point.Y = impact_point_inv.Y;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							spine_hit_pairs[i].RV_FeetHit_Points[j] = spinal_point;


							spine_hit_pairs[i].RV_FeetHit_Points[j] = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].RV_FeetHit_Points[j], spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
						}

						//hit_point_pairs[i][j] = spine_hit_pairs[i].RV_FeetHit_Points[j].ImpactPoint;

					}
					else
					{

						FVector feet_zeroed_point = modified_feet_transform.GetLocation();

						feet_zeroed_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, feet_zeroed_point);
						feet_zeroed_point.Z = 0;
						feet_zeroed_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, feet_zeroed_point);


						//feet_zeroed_point.Z = owner_skel_w_transform.GetLocation().Z;

						//hit_point_pairs[i][j] = UKismetMathLibrary::VInterpTo(hit_point_pairs[i][j], feet_zeroed_point, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f);

						spine_hit_pairs[i].RV_FeetHit_Points[j] = feet_zeroed_point;


					}

					//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "RV_FeetHit_Points " + spine_hit_pairs[i].RV_Feet_Hits[j].ImpactPoint.ToString());


				}





				FVector feet_centre_point = FVector(0, 0, 0);

				for (int j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
				{

					if (SolverReferencePose == ERefPosePluginEnum::VE_Animated)
						feet_centre_point += spine_AnimatedTransform_pairs[i].Associated_Feet[j].GetLocation();
					else
						feet_centre_point += spine_Transform_pairs[i].Associated_Feet[j].GetLocation();
				}


				feet_centre_point /= spine_AnimatedTransform_pairs[i].Associated_Feet.Num();


				if (is_snake || dragon_bone_data.FeetBones.Num() == 0)
				{
					feet_centre_point = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();
				}
				else //if (accurate_feet_placement)
				{

					if (accurate_feet_placement)
					feet_centre_point = FMath::Lerp<FVector>(spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation(), feet_centre_point, Accurate_Foot_Curve.GetRichCurve()->Eval(Character_Speed));
					else
						feet_centre_point = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();


					//	feet_centre_point = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();
				}

				//feet_centre_point = spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation();







				//	if (SolverReferencePose == ERefPosePluginEnum::VE_Animated)
				{

					line_trace_func(*owning_skel, feet_centre_point + character_direction_vector * start_const, feet_centre_point - character_direction_vector * end_const, spine_hit_pairs[i].Parent_Spine_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Spine_Hit, FLinearColor::Red, false);

					if (spine_hit_pairs[i].Parent_Spine_Hit.bBlockingHit)
					{

						//	spine_hit_pairs[i].Parent_Spine_Point = spine_hit_pairs[i].Parent_Spine_Hit.ImpactPoint;

						if (spine_hit_pairs[i].Parent_Spine_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
							spine_hit_pairs[i].Parent_Spine_Point = spine_hit_pairs[i].Parent_Spine_Hit.ImpactPoint;
						else
						{

							if (is_snake)
							{
								FVector spinal_point = spine_hit_pairs[i].Parent_Spine_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].Parent_Spine_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								spine_hit_pairs[i].Parent_Spine_Point = spinal_point;
							}


							spine_hit_pairs[i].Parent_Spine_Point = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].Parent_Spine_Point, spine_hit_pairs[i].Parent_Spine_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
						}

					}
					else
					{
						FVector spinal_point = feet_centre_point;

						spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
						spinal_point.Z = 0;
						spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);

						spine_hit_pairs[i].Parent_Spine_Point = spinal_point;

					}


					FVector forward_dir = owner_skel_w_transform.TransformVector(Forward_Direction_Vector).GetSafeNormal();

					FVector right_dir = FVector::CrossProduct(character_direction_vector, forward_dir).GetSafeNormal();


					


					//if (Use_Fake_Chest_Rotations || Use_Fake_Pelvis_Rotations || bUse_Four_Cross_Lines)
					{


						FVector spinal_left_upper = feet_centre_point + character_direction_vector * (line_trace_upper_height * component_scale * virtual_scale ) + (right_dir * component_scale * virtual_scale * virtual_leg_width);
						FVector spinal_right_upper = feet_centre_point + character_direction_vector * (line_trace_upper_height * component_scale * virtual_scale) - (right_dir * component_scale * virtual_scale * virtual_leg_width);
						FVector spinal_front_upper = feet_centre_point + character_direction_vector * (line_trace_upper_height * component_scale * virtual_scale) + (forward_dir * component_scale * virtual_scale * virtual_leg_width);
						FVector spinal_back_upper = feet_centre_point + character_direction_vector * (line_trace_upper_height * component_scale * virtual_scale) - (forward_dir * component_scale * virtual_scale * virtual_leg_width);


						line_trace_func(*owning_skel, spinal_left_upper, feet_centre_point - character_direction_vector * (line_trace_downward_height * component_scale * virtual_scale) + (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Left_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Left_Hit, FLinearColor::Green, true);
						line_trace_func(*owning_skel, spinal_right_upper, feet_centre_point - character_direction_vector * (line_trace_downward_height * component_scale * virtual_scale) - (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Right_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Right_Hit, FLinearColor::Green, true);

						line_trace_func(*owning_skel, spinal_front_upper, feet_centre_point - character_direction_vector * (line_trace_downward_height * component_scale * virtual_scale) + (forward_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Front_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Front_Hit, FLinearColor::Green, true);
						line_trace_func(*owning_skel, spinal_back_upper, feet_centre_point - character_direction_vector * (line_trace_downward_height * component_scale * virtual_scale) - (forward_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Back_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Back_Hit, FLinearColor::Green, true);




						if (spine_hit_pairs[i].Parent_Left_Hit.bBlockingHit)
						{





							if (spine_hit_pairs[i].Parent_Left_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								spine_hit_pairs[i].Parent_Left_Point = spine_hit_pairs[i].Parent_Left_Hit.ImpactPoint;
							else
							{

								FVector spinal_point = spine_hit_pairs[i].Parent_Left_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].Parent_Left_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								spine_hit_pairs[i].Parent_Left_Point = spinal_point;


								spine_hit_pairs[i].Parent_Left_Point = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].Parent_Left_Point, spine_hit_pairs[i].Parent_Left_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}

						}
						else
						{
							FVector spinal_point = spinal_left_upper;

							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
							spinal_point.Z = 0;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);

							spine_hit_pairs[i].Parent_Left_Point = spinal_point;

						}


						if (spine_hit_pairs[i].Parent_Right_Hit.bBlockingHit)
						{






							if (spine_hit_pairs[i].Parent_Right_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								spine_hit_pairs[i].Parent_Right_Point = spine_hit_pairs[i].Parent_Right_Hit.ImpactPoint;
							else
							{

								FVector spinal_point = spine_hit_pairs[i].Parent_Right_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].Parent_Right_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								spine_hit_pairs[i].Parent_Right_Point = spinal_point;


								spine_hit_pairs[i].Parent_Right_Point = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].Parent_Right_Point, spine_hit_pairs[i].Parent_Right_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}

						}
						else
						{
							FVector spinal_point = spinal_right_upper;
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
							spinal_point.Z = 0;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);

							spine_hit_pairs[i].Parent_Right_Point = spinal_point;

						}




						if (spine_hit_pairs[i].Parent_Front_Hit.bBlockingHit)
						{

							if (spine_hit_pairs[i].Parent_Front_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								spine_hit_pairs[i].Parent_Front_Point = spine_hit_pairs[i].Parent_Front_Hit.ImpactPoint;
							else
							{


								FVector spinal_point = spine_hit_pairs[i].Parent_Front_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].Parent_Front_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								spine_hit_pairs[i].Parent_Front_Point = spinal_point;


								spine_hit_pairs[i].Parent_Front_Point = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].Parent_Front_Point, spine_hit_pairs[i].Parent_Front_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}


						}
						else
						{
							FVector spinal_point = spinal_front_upper;
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
							spinal_point.Z = 0;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							spine_hit_pairs[i].Parent_Front_Point = spinal_point;

						}


						if (spine_hit_pairs[i].Parent_Back_Hit.bBlockingHit)
						{


							if (spine_hit_pairs[i].Parent_Back_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								spine_hit_pairs[i].Parent_Back_Point = spine_hit_pairs[i].Parent_Back_Hit.ImpactPoint;
							else
							{

								FVector spinal_point = spine_hit_pairs[i].Parent_Back_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spine_hit_pairs[i].Parent_Back_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								spine_hit_pairs[i].Parent_Back_Point = spinal_point;


								spine_hit_pairs[i].Parent_Back_Point = UKismetMathLibrary::VInterpTo(spine_hit_pairs[i].Parent_Back_Point, spine_hit_pairs[i].Parent_Back_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}


						}
						else
						{
							FVector spinal_point = spinal_back_upper;

							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);
							spinal_point.Z = 0;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							spine_hit_pairs[i].Parent_Back_Point = spinal_point;

						}



					}

					//					line_trace_func(*owning_skel, spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() + f_offset_i + FVector(0, 0, line_trace_upper_height*component_scale * virtual_scale) + (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() - FVector(0, 0, line_trace_downward_height * 1 * component_scale * virtual_scale) + (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Left_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Left_Hit, FLinearColor::Green);
					//					line_trace_func(*owning_skel, spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() + f_offset_i + FVector(0, 0, line_trace_upper_height*component_scale * virtual_scale) - (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_AnimatedTransform_pairs[i].Spine_Involved.GetLocation() - FVector(0, 0, line_trace_downward_height * 1 * component_scale * virtual_scale) - (right_dir * component_scale * virtual_scale * virtual_leg_width), spine_hit_pairs[i].Parent_Right_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, spine_hit_pairs[i].Parent_Right_Hit, FLinearColor::Green);

				}

				if (Use_Ducking_Feature)
				{


					FTransform Temp_Zero_Transform = owner_skel_w_transform;

					Temp_Zero_Transform.SetRotation(FRotator::ZeroRotator.Quaternion());

				//	FTransform Temp_Diff_Transform = Temp_Zero_Transform* owner_skel_w_transform.Inverse();

					FTransform Temp_Diff_Transform =  owner_skel_w_transform* Temp_Zero_Transform.Inverse();



					if (i == 0)
					{


					
									
						//Temp_Duck_Pelvis_Offset = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Temp_Duck_Pelvis_Offset);
						//Temp_Duck_Pelvis_Offset = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, Temp_Duck_Pelvis_Offset);


						line_trace_func(*owning_skel, feet_centre_point + Temp_Diff_Transform.TransformPosition(Duck_Pelvis_Trace_Offset), feet_centre_point + (character_direction_vector * Pelvis_Crouch_Height * component_scale * virtual_scale) + Temp_Diff_Transform.TransformPosition(Duck_Pelvis_Trace_Offset), Duck_Pelvis_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, Duck_Pelvis_Hit, FLinearColor::White, false, true);

					//	line_trace_func(*owning_skel, feet_centre_point + character_direction_vector*Temp_Duck_Pelvis_Offset, feet_centre_point + (character_direction_vector * Pelvis_Crouch_Height) + character_direction_vector*Temp_Duck_Pelvis_Offset, Duck_Pelvis_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, Duck_Pelvis_Hit, FLinearColor::White, false, true);

						Duck_Pelvis_Highest_Point = feet_centre_point + (character_direction_vector * Pelvis_Crouch_Height * component_scale) + Temp_Diff_Transform.TransformPosition(Duck_Pelvis_Trace_Offset);


						if (Duck_Pelvis_Hit.bBlockingHit)
						{

							if (Duck_Pelvis_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								Duck_Pelvis_Point = Duck_Pelvis_Hit.ImpactPoint;
							else
							{

								FVector spinal_point = Duck_Pelvis_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Duck_Pelvis_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								Duck_Pelvis_Point = spinal_point;

								Duck_Pelvis_Point = UKismetMathLibrary::VInterpTo(Duck_Pelvis_Point, Duck_Pelvis_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}

						}
						else
						{

							FVector spinal_point = Duck_Pelvis_Point;
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);


							FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Duck_Pelvis_Highest_Point);
							spinal_point.X = impact_point_inv.X;
							spinal_point.Y = impact_point_inv.Y;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							Duck_Pelvis_Point = spinal_point;

							Duck_Pelvis_Point = UKismetMathLibrary::VInterpTo(Duck_Pelvis_Point, Duck_Pelvis_Highest_Point, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);


							//Duck_Pelvis_Point = Duck_Pelvis_Highest_Point;
						}


					}
					else
					{



						line_trace_func(*owning_skel, feet_centre_point + Temp_Diff_Transform.TransformPosition(Duck_Chest_Trace_Offset), feet_centre_point  + (character_direction_vector * Chest_Crouch_Height * component_scale * virtual_scale) + Temp_Diff_Transform.TransformPosition(Duck_Chest_Trace_Offset), Duck_Chest_Hit, spine_Feet_pair[i].Spine_Involved.BoneName, spine_Feet_pair[i].Spine_Involved.BoneName, Duck_Chest_Hit, FLinearColor::White, false, true);

						Duck_Chest_Highest_Point = feet_centre_point + (character_direction_vector * Chest_Crouch_Height * component_scale) + Temp_Diff_Transform.TransformPosition(Duck_Chest_Trace_Offset);



						if (Duck_Chest_Hit.bBlockingHit)
						{

							if (Duck_Chest_Point == FVector::ZeroVector || test_counter < 10 || Ignore_Lerping)
								Duck_Chest_Point = Duck_Chest_Hit.ImpactPoint;
							else
							{

								FVector spinal_point = Duck_Chest_Point;
								spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);

								FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Duck_Chest_Hit.ImpactPoint);
								spinal_point.X = impact_point_inv.X;
								spinal_point.Y = impact_point_inv.Y;
								spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
								Duck_Chest_Point = spinal_point;

								Duck_Chest_Point = UKismetMathLibrary::VInterpTo(Duck_Chest_Point, Duck_Chest_Hit.ImpactPoint, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);
							}

						}
						else
						{

							FVector spinal_point = Duck_Chest_Point;
							spinal_point = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, spinal_point);


							FVector impact_point_inv = UKismetMathLibrary::InverseTransformLocation(owner_skel_w_transform, Duck_Pelvis_Highest_Point);
							spinal_point.X = impact_point_inv.X;
							spinal_point.Y = impact_point_inv.Y;
							spinal_point = UKismetMathLibrary::TransformLocation(owner_skel_w_transform, spinal_point);
							Duck_Chest_Point = spinal_point;

							Duck_Chest_Point = UKismetMathLibrary::VInterpTo(Duck_Chest_Point, Duck_Chest_Highest_Point, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Trace_Lerp * 0.1f);


						//	Duck_Chest_Point = Duck_Chest_Highest_Point;
						}



					}

				}

			}




		}

	}


	if (trace_timer_count > current_trace_interval && trace_distance_legal)
		trace_timer_count = 0;


}






FName FAnimNode_DragonSpineSolver::GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh)
{

	FName child_bone = skel_mesh->GetBoneName(skel_mesh->GetBoneIndex(BoneName) + 1);

	return child_bone;

}





void FAnimNode_DragonSpineSolver::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	CoreEvaluation(Output, OutBoneTransforms);

}

void FAnimNode_DragonSpineSolver::EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Output)
{
	Super::EvaluateComponentSpaceInternal(Output);

}



//Nothing would be needed here
void FAnimNode_DragonSpineSolver::CoreEvaluation(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	if (solve_should_fail == false && (FVector(0, 0, 0) - Output.AnimInstanceProxy->GetActorTransform().GetScale3D()).Size() > 0 && spine_Feet_pair.Num() > 0 && FAnimWeight::IsRelevant(ActualAlpha) && IsValidToEvaluate(Output.AnimInstanceProxy->GetSkeleton(), Output.AnimInstanceProxy->GetRequiredBones()) && Output.ContainsNaN() == false)
	{



		if (is_snake)
		{
			for (int i = 1; i < combined_indices.Num() - 1; i++)
			{
				if (combined_indices.Num() > 0 && spine_between_transforms.Num() > 0)
				{
					const FCompactPoseBoneIndex ModifyBoneIndex_Local_i = combined_indices[i];
					FTransform ComponentBoneTransform_Local_i = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_i);


					spine_between_transforms[i - 1] = ((ComponentBoneTransform_Local_i)*owner_skel_w_transform).GetLocation();


					FTransform RoottraceTransform = FTransform::Identity;

					//			FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, bonetraceTransform, FCompactPoseBoneIndex(spine_Feet_pair[i].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);

					FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, RoottraceTransform, ModifyBoneIndex_Local_i, EBoneControlSpace::BCS_WorldSpace);


					float chest_distance = FMath::Abs(spine_between_transforms[i - 1].Z - RoottraceTransform.GetLocation().Z);

					spine_between_heights[i - 1] = chest_distance;
				}
			}

		}

		if (spine_AnimatedTransform_pairs.Num() > 0 && spine_Feet_pair.Num() > 0)
		{

			for (int i = 0; i < spine_Feet_pair.Num(); i++)
			{
				if (spine_AnimatedTransform_pairs.Num() > i)
				{

					const FCompactPoseBoneIndex ModifyBoneIndex_Local_i = spine_Feet_pair[i].Spine_Involved.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
					FTransform ComponentBoneTransform_Local_i = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_i);

					spine_AnimatedTransform_pairs[i].Spine_Involved = (ComponentBoneTransform_Local_i)*owner_skel_w_transform;

					spine_AnimatedTransform_pairs[i].Spine_Involved.SetRotation(owner_skel_w_transform.GetRotation() * ComponentBoneTransform_Local_i.GetRotation());

					//			FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, ComponentBoneTransform_Temp, FCompactPoseBoneIndex(spine_Feet_pair[i].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);




					//			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " spine rot 2 : " + FRotator(ComponentBoneTransform.GetRotation()).ToString());


					for (int j = 0; j < spine_AnimatedTransform_pairs[i].Associated_Feet.Num(); j++)
					{
						if (spine_Feet_pair[i].Associated_Feet.Num() > j)
						{

							const FCompactPoseBoneIndex ModifyBoneIndex_Local_j = spine_Feet_pair[i].Associated_Feet[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
							FTransform ComponentBoneTransform_Local_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_j);
							//				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Local_j.GetLocation());

							spine_AnimatedTransform_pairs[i].Associated_Feet[j] = (ComponentBoneTransform_Local_j)*owner_skel_w_transform;

							spine_AnimatedTransform_pairs[i].Associated_Feet[j].AddToTranslation((UKismetMathLibrary::TransformDirection(owner_skel_w_transform, spine_Feet_pair[i].feet_trace_offset[j])));

							//	FVector Feet_Offseted_Location = spine_AnimatedTransform_pairs[i].Associated_Feet[j].GetLocation() + (UKismetMathLibrary::TransformDirection(owner_skel_w_transform, spine_Feet_pair[i].feet_trace_offset[j]));


							const FCompactPoseBoneIndex ModifyBoneIndex_Knee_j = spine_Feet_pair[i].Associated_Knees[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
							FTransform ComponentBoneTransform_Knee_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Knee_j);
							//				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Knee_j.GetLocation());

							spine_AnimatedTransform_pairs[i].Associated_Knee[j] = (ComponentBoneTransform_Knee_j)*owner_skel_w_transform;


						}

					}

				}

			}




			if (Calculation_To_RefPose == true)
				Output.ResetToRefPose();


			bool fresh = true;

			if (Total_spine_heights.Num() > 0)
				fresh = false;



			for (int i = 0; i < spine_Feet_pair.Num(); i++)
			{

				FTransform bonetraceTransform = Output.Pose.GetComponentSpaceTransform(spine_Feet_pair[i].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));
				FVector lerp_data = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());
				FBoneReference root_bone_ref = FBoneReference(owning_skel->GetBoneName(0));
				root_bone_ref.Initialize(*SavedBoneContainer);

				FTransform RoottraceTransform = Output.Pose.GetComponentSpaceTransform(root_bone_ref.GetCompactPoseIndex(*SavedBoneContainer));


				RoottraceTransform.SetLocation(FVector(0, 0, 0));

				FVector root_lerp_data = owner_skel_w_transform.TransformPosition(RoottraceTransform.GetLocation());

				root_location_saved = root_lerp_data;

				//				FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, bonetraceTransform, FCompactPoseBoneIndex(spine_Feet_pair[i].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);

				//				FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, Output.Pose, RoottraceTransform, FCompactPoseBoneIndex(spine_Feet_pair[i].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);

				float chest_distance = FMath::Abs((bonetraceTransform.GetLocation().Z - RoottraceTransform.GetLocation().Z));







				if (fresh)
				{
					Total_spine_heights.Add(chest_distance);

					spine_LocDifference[i] = lerp_data;
				}
				else
					Total_spine_heights[i] = chest_distance;



			}
		}

		//	ComponentPose.EvaluateComponentSpace(Output);

		LineTraceControl_AnyThread(Output, BoneTransforms);

		//	Output.ResetToRefPose();


		///////////////////////

		///

		Original_AnimatedBoneTransforms.Reset(AnimatedBoneTransforms.Num());

		//		FinalBoneTransforms.Reset(FinalBoneTransforms.Num());


		//Get Initial Pose data
		GetResetedPoseInfo(Output.Pose);
		//Reset Bone Transform array
		BoneTransforms.Reset(BoneTransforms.Num());
		saved_pose = &Output;



		EvaluateSkeletalControl_Internal(Output, BoneTransforms);

		ComponentPose.EvaluateComponentSpace(Output);


		GetAnimatedPoseInfo(Output.Pose, OutBoneTransforms);

		Process_Legs_Solving(Output, OutBoneTransforms, LegTransforms);


	}

}



void FAnimNode_DragonSpineSolver::EvaluateSkeletalControl_Internal(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	if (spine_hit_pairs.Num() > 0)
	{




		atleast_one_hit = false;


		if (is_snake)
			for (int k = 0; k < spine_hit_between.Num(); k++)
			{
				//-2.5f

				//			if ((spine_hit_between[k].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > 0* FMath::Abs(Vertical_Solver_downward_Scale)*component_scale)




				if ((spine_between_points[k].Z - (owning_skel->GetComponentLocation().Z)) > -Minimum_Feet_Distance * component_scale * virtual_scale)
				{
					if (spine_hit_between[k].bBlockingHit)
						atleast_one_hit = true;


				}
			}


		for (int k = 0; k < spine_hit_pairs.Num(); k++)
		{



			//			if ((spine_hit_pairs[k].Parent_Spine_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > 0* FMath::Abs(Vertical_Solver_downward_Scale)*component_scale * virtual_scale)


			//if (!spine_hit_pairs[k].Parent_Spine_Hit.bBlockingHit)
			//	atleast_one_hit = false;

			if ((spine_hit_pairs[k].Parent_Spine_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > -Minimum_Feet_Distance * component_scale * virtual_scale)
			{


				if (spine_hit_pairs[k].Parent_Spine_Hit.bBlockingHit)
					atleast_one_hit = true;





			}

			for (int i = 0; i < spine_hit_pairs[k].RV_Feet_Hits.Num(); i++)
			{

				//				if ((spine_hit_pairs[k].RV_Feet_Hits[i].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > 0 * FMath::Abs(Vertical_Solver_downward_Scale)*component_scale * virtual_scale)




				if ((spine_hit_pairs[k].RV_Feet_Hits[i].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > -Minimum_Feet_Distance * component_scale * virtual_scale)
				{
					if (spine_hit_pairs[k].RV_Feet_Hits[i].bBlockingHit)
						atleast_one_hit = true;

				}



			}
		}


		for (int k = 0; k < spine_hit_pairs.Num(); k++)
		{
			for (int i = 0; i < spine_hit_pairs[k].RV_Feet_Hits.Num(); i++)
			{
				//				if (FMath::Abs(spine_hit_pairs[k].RV_Feet_Hits[i].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Total_spine_heights[k] * Vertical_Solver_downward_Scale*component_scale * virtual_scale)




				if (FMath::Abs(spine_hit_pairs[k].RV_Feet_Hits[i].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Maximum_Feet_Distance * component_scale * virtual_scale)
				{
					if (spine_hit_pairs[k].RV_Feet_Hits[i].bBlockingHit)
						atleast_one_hit = false;
				}


				if (!spine_hit_pairs[k].RV_Feet_Hits[i].bBlockingHit)
					atleast_one_hit = false;



			}






			if (use_crosshair_trace_also_for_fail_distance)
			{

				for (int i = 0; i < spine_hit_pairs[k].RV_Feet_Hits.Num(); i++)
				{
					//				if (FMath::Abs(spine_hit_pairs[k].RV_Feet_Hits[i].ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Total_spine_heights[k] * Vertical_Solver_downward_Scale*component_scale * virtual_scale)

					if (FMath::Abs(spine_hit_pairs[k].Parent_Back_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Maximum_Feet_Distance * component_scale * virtual_scale)
					{
						//	if (spine_hit_pairs[k].Parent_Back_Hit.bBlockingHit)
						atleast_one_hit = false;
					}


					if (FMath::Abs(spine_hit_pairs[k].Parent_Front_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Maximum_Feet_Distance * component_scale * virtual_scale)
					{
						//	if (spine_hit_pairs[k].Parent_Front_Hit.bBlockingHit)
						atleast_one_hit = false;
					}


					if (FMath::Abs(spine_hit_pairs[k].Parent_Left_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Maximum_Feet_Distance * component_scale * virtual_scale)
					{
						//	if (spine_hit_pairs[k].Parent_Left_Hit.bBlockingHit)
						atleast_one_hit = false;
					}


					if (FMath::Abs(spine_hit_pairs[k].Parent_Right_Hit.ImpactPoint.Z - (owning_skel->GetComponentLocation().Z)) > Maximum_Feet_Distance * component_scale * virtual_scale)
					{
						//	if (spine_hit_pairs[k].Parent_Right_Hit.bBlockingHit)
						atleast_one_hit = false;
					}



				}

			}


		}








		if (Force_Activation)
			atleast_one_hit = true;


		//		if(!atleast_one_hit)
		//			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "At least NOT hit ");


		FABRIK_BodySystem(Output, spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved, Output.Pose, OutBoneTransforms);

	}


}




bool LineTraceInitialized = false;

void FAnimNode_DragonSpineSolver::LineTraceControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{

	LineTraceInitialized = false;

	if (spine_hit_pairs.Num() > 0)
	{

		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{
			const FCompactPoseBoneIndex ModifyBoneIndex_Local_i = spine_Feet_pair[i].Spine_Involved.GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
			FTransform ComponentBoneTransform_Local_i;
			ComponentBoneTransform_Local_i = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_i);
			FVector lerp_data_local_i = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Local_i.GetLocation());


			spine_Transform_pairs[i].Spine_Involved = FTransform(lerp_data_local_i);

			for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{
				const FCompactPoseBoneIndex ModifyBoneIndex_Local_j = spine_Feet_pair[i].Associated_Feet[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
				FTransform ComponentBoneTransform_Local_j;
				ComponentBoneTransform_Local_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Local_j);
				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Local_j.GetLocation());
				spine_Transform_pairs[i].Associated_Feet[j] = FTransform(lerp_data_local_j);


				spine_Transform_pairs[i].Associated_Feet[j].AddToTranslation((UKismetMathLibrary::TransformDirection(owner_skel_w_transform, spine_Feet_pair[i].feet_trace_offset[j])));



				const FCompactPoseBoneIndex ModifyBoneIndex_Knee_j = spine_Feet_pair[i].Associated_Knees[j].GetCompactPoseIndex(Output.Pose.GetPose().GetBoneContainer());
				FTransform ComponentBoneTransform_Knee_j = Output.Pose.GetComponentSpaceTransform(ModifyBoneIndex_Knee_j);
				//				FVector lerp_data_local_j = owner_skel_w_transform.TransformPosition(ComponentBoneTransform_Knee_j.GetLocation());

				spine_Transform_pairs[i].Associated_Knee[j] = (ComponentBoneTransform_Knee_j)*owner_skel_w_transform;







				//	if (j == spine_Feet_pair[i].Associated_Feet.Num() - 1)
				{
					LineTraceInitialized = true;
				}

			}

		}
	}
}



bool FAnimNode_DragonSpineSolver::IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones)
{

	bool feet_is_true = true;



	for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
	{
		//dragon_bone_data.FeetBones[i] = FBoneReference(dragon_input_data.FeetBones[i]);
		//dragon_bone_data.FeetBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name));
		//dragon_bone_data.FeetBones[i].Initialize(RequiredBones);


		//GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Is single spine "+ dragon_input_data.FeetBones[i].Feet_Bone_Name.ToString());


		FBoneReference foot_bone_ref = FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name);
		foot_bone_ref.Initialize(RequiredBones);


		//if (dragon_bone_data.FeetBones.Num() == dragon_input_data.FeetBones.Num())
		if (foot_bone_ref.IsValidToEvaluate(RequiredBones) == false)
			feet_is_true = false;


	}

	/*
	for (int i = 0; i < dragon_bone_data.FeetBones.Num(); i++)
	{

		if (dragon_bone_data.FeetBones.Num() == dragon_input_data.FeetBones.Num())
			if (FBoneReference(dragon_bone_data.FeetBones[i]).IsValidToEvaluate(RequiredBones) == false)
			{
				feet_is_true = false;
			}

	}*/

	if (is_snake || dragon_bone_data.FeetBones.Num() == 0)
	{
		feet_is_true = true;

		feet_is_empty = false;

		solve_should_fail = false;
	}

	//feet_is_empty = false;


	FBoneReference Pelvis_ref = FBoneReference(dragon_input_data.Pelvis);
	Pelvis_ref.Initialize(RequiredBones);


	FBoneReference Chest_ref = FBoneReference(dragon_input_data.Start_Spine);
	Chest_ref.Initialize(RequiredBones);


	return (RequiredBones.IsValid() && solve_should_fail == false && feet_is_true && dragon_input_data.FeetBones.Num() % 2 == 0 &&
		feet_is_empty == false && Chest_ref.IsValidToEvaluate(RequiredBones) &&
		Pelvis_ref.IsValidToEvaluate(RequiredBones) &&
		RequiredBones.BoneIsChildOf(FBoneReference(Chest_ref).BoneIndex, FBoneReference(Pelvis_ref).BoneIndex));


	//return false;

}







void FAnimNode_DragonSpineSolver::InitializeBoneReferences(FBoneContainer& RequiredBones)
{

	solve_should_fail = false;

	if (dragon_input_data.Start_Spine == dragon_input_data.Pelvis)
	{
		solve_should_fail = true;
	}

	//if(!IsValidToEvaluate(skeleton_ref, RequiredBones))

	dragon_bone_data.Start_Spine = FBoneReference(dragon_input_data.Start_Spine);
	dragon_bone_data.Start_Spine.Initialize(RequiredBones);

	dragon_bone_data.Pelvis = FBoneReference(dragon_input_data.Pelvis);
	dragon_bone_data.Pelvis.Initialize(RequiredBones);



	Stabilization_Tail_Bone.Initialize(RequiredBones);
	Stabilization_Head_Bone.Initialize(RequiredBones);


	if (!RequiredBones.BoneIsChildOf(FBoneReference(dragon_bone_data.Start_Spine).BoneIndex, FBoneReference(dragon_bone_data.Pelvis).BoneIndex))
	{
		solve_should_fail = true;
	}

	//if (test_counter < 10 && solve_should_fail==false)

	if (solve_should_fail == false)
	{

		SavedBoneContainer = &RequiredBones;

		spine_Feet_pair.Empty();
		Total_spine_bones.Empty();



		//if (spine_AnimatedTransform_pairs.Num() == 0)
		if (test_counter < 10)
		{

			spine_Transform_pairs.Empty();

			spine_AnimatedTransform_pairs.Empty();

			spine_hit_pairs.Empty();
			//	hit_point_pairs.Empty();

			spine_LocDifference.Empty();

			spine_RotDifference.Empty();


			Total_spine_heights.Empty();

			Total_spine_alphas.Empty();

			spine_hit_between.Empty();

			spine_hit_edges.Empty();

		}


		Total_spine_bones = BoneArrayMachine(0, dragon_input_data.Start_Spine, dragon_input_data.Pelvis, "", false);

		Algo::Reverse(Total_spine_bones);

		solve_should_fail = false;

		//	spine_Feet_pair.AddDefaulted(Total_spine_bones.Num());





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

			BoneArrayMachine(i, dragon_input_data.FeetBones[i].Feet_Bone_Name, dragon_input_data.Pelvis, dragon_input_data.FeetBones[i].Thigh_Bone_Name, true);

		}
		Spine_Indices.Empty();





		Total_spine_angles.Empty();
		Total_Terrain_Locations.Empty();

		const TArray<FDragonData_SpineFeetPair> const_feet_pair = spine_Feet_pair;

		if (test_counter < 10)
			Total_spine_alphas.AddDefaulted(const_feet_pair.Num());

		for (int32 i = 0; i < const_feet_pair.Num(); i++)
		{
			if (test_counter < 10)
				Total_spine_alphas[i] = 0;

			if (const_feet_pair[i].Associated_Feet.Num() == 0 && i < const_feet_pair.Num())
				spine_Feet_pair.Remove(const_feet_pair[i]);



		}

		spine_Feet_pair.Shrink();

		if (spine_Feet_pair.Num() == 1)
		{

			FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
			data.Spine_Involved = FBoneReference(Total_spine_bones[Total_spine_bones.Num() - 1]);
			data.Spine_Involved.Initialize(*SavedBoneContainer);






			spine_Feet_pair.Add(data);

			is_single_spine = true;

			//		GEngine->AddOnScreenDebugMessage(-1, 5.01f, FColor::Red, "Is single spine");


			bool is_swapped = false;

			do
			{
				is_swapped = false;

				const TArray< FDragonData_SpineFeetPair > spine_Feet_pair_const = spine_Feet_pair;


				for (int32 j = 0; j < spine_Feet_pair.Num(); j++)
				{

					for (int32 i = 1; i < spine_Feet_pair[j].Associated_Feet.Num(); i++)
					{
						if (spine_Feet_pair[j].Associated_Feet[i - 1].BoneIndex < spine_Feet_pair[j].Associated_Feet[i].BoneIndex)
						{
							FBoneReference temp = spine_Feet_pair[j].Associated_Feet[i - 1];
							spine_Feet_pair[j].Associated_Feet[i - 1] = spine_Feet_pair[j].Associated_Feet[i];
							spine_Feet_pair[j].Associated_Feet[i] = temp;

							is_swapped = true;

						}
					}
				}

			} while (is_swapped == true);

		}
		else
		{
			is_single_spine = false;
			spine_Feet_pair = Swap_Spine_Pairs(spine_Feet_pair);

		}






		if (spine_Feet_pair.Num() == 0)
		{

			if ((is_snake || dragon_bone_data.FeetBones.Num() == 0) && dragon_bone_data.Pelvis.IsValidToEvaluate() && dragon_bone_data.Start_Spine.IsValidToEvaluate())
			{

				spine_Feet_pair.AddDefaulted(2);

				spine_Feet_pair[0].Spine_Involved = dragon_bone_data.Pelvis;

				if (spine_Feet_pair.Num() > 1)
					spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved = dragon_bone_data.Start_Spine;

				/*
				FDragonData_SpineFeetPair pelvisdata = FDragonData_SpineFeetPair();
				pelvisdata.Spine_Involved = FBoneReference(dragon_input_data.Pelvis);
				pelvisdata.Spine_Involved.Initialize(*SavedBoneContainer);
				if(pelvisdata.Spine_Involved.IsValidToEvaluate())
				spine_Feet_pair.Add(pelvisdata);


				FDragonData_SpineFeetPair Chestdata = FDragonData_SpineFeetPair();
				Chestdata.Spine_Involved = FBoneReference(dragon_input_data.Start_Spine);
				Chestdata.Spine_Involved.Initialize(*SavedBoneContainer);
				if (Chestdata.Spine_Involved.IsValidToEvaluate())
					spine_Feet_pair.Add(Chestdata);
					*/

			}

		}




		if (test_counter < 10)
		{
			spine_hit_pairs.AddDefaulted(spine_Feet_pair.Num());

			//	hit_point_pairs.AddDefaulted(spine_Feet_pair.Num());

				//if (spine_Transform_pairs.Num() == 0)
			spine_Transform_pairs.AddDefaulted(spine_Feet_pair.Num());

			//if(spine_AnimatedTransform_pairs.Num() == 0)
			spine_AnimatedTransform_pairs.AddDefaulted(spine_Feet_pair.Num());

			Total_spine_angles.AddDefaulted(spine_Feet_pair.Num());
			Total_Terrain_Locations.AddDefaulted(spine_Feet_pair.Num());
			spine_LocDifference.AddDefaulted(spine_Feet_pair.Num());
			spine_RotDifference.AddDefaulted(spine_Feet_pair.Num());
		}



		//	Total_spine_alphas.AddDefaulted(spine_Feet_pair.Num());



	//	spine_hit_between.AddDefaulted(7);










		for (int32 i = 0; i < spine_Feet_pair.Num(); i++)
		{


			spine_Feet_pair[i].Associated_Knees.SetNum(spine_Feet_pair[i].Associated_Feet.Num());

			spine_Feet_pair[i].Associated_Thighs.SetNum(spine_Feet_pair[i].Associated_Feet.Num());



			if (spine_Feet_pair[i].Associated_Feet.Num() % 2 != 0)
			{
				if (is_snake == false && dragon_bone_data.FeetBones.Num() != 0)
					solve_should_fail = true;
			}


			every_foot_dont_have_child = false;
			feet_is_empty = true;



			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Child Bone " + GetChildBone(spine_Feet_pair[i].Associated_Feet[j].BoneName, owning_skel).ToString());

			for (int32 j = 0; j < spine_Feet_pair[i].Associated_Feet.Num(); j++)
			{




				FBoneReference Knee_Involved = FBoneReference(owning_skel->GetParentBone(spine_Feet_pair[i].Associated_Feet[j].BoneName));
				Knee_Involved.Initialize(*SavedBoneContainer);

				spine_Feet_pair[i].Associated_Knees[j] = Knee_Involved;


				if (!spine_Feet_pair[i].Associated_Thighs[j].IsValidToEvaluate())
				{

					FName thigh_name = owning_skel->GetParentBone(Knee_Involved.BoneName);


					FBoneReference Thigh_Involved = FBoneReference(thigh_name);
					Thigh_Involved.Initialize(*SavedBoneContainer);

					spine_Feet_pair[i].Associated_Thighs[j] = Thigh_Involved;
				}


			}


			spine_Feet_pair[i].Feet_Heights.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());



			if (test_counter < 10)
			{
				spine_hit_pairs[i].RV_Feet_Hits.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

				spine_hit_pairs[i].RV_FeetHit_Points.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


				//	hit_point_pairs[i].AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());


					//if (spine_Transform_pairs.Num() == 0)
				{
					spine_Transform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_Transform_pairs[i].Associated_Knee.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_Transform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				}

				//if (spine_AnimatedTransform_pairs.Num() == 0)
				{
					spine_AnimatedTransform_pairs[i].Associated_Feet.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_AnimatedTransform_pairs[i].Associated_Knee.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());

					spine_AnimatedTransform_pairs[i].Associated_FeetBalls.AddDefaulted(spine_Feet_pair[i].Associated_Feet.Num());
				}
			}

			if (spine_Feet_pair[i].Associated_Feet.Num() > 0)
			{
				feet_is_empty = false;
			}

		}






		if (dragon_input_data.Start_Spine == dragon_input_data.Pelvis)
			solve_should_fail = true;

		if (spine_Feet_pair.Num() > 0)
		{
			if (spine_Feet_pair[0].Spine_Involved.BoneIndex > spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.BoneIndex)
				solve_should_fail = true;
		}

		if (!dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) || !dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones))
			solve_should_fail = true;

		initialize_anim_array = false;


		Extra_Spine_Indices.Empty();


		if (spine_Feet_pair.Num() > 0 && Spine_Feet_Connect == false)
		{
			spine_Feet_pair[0].Spine_Involved = dragon_bone_data.Pelvis;

			if (spine_Feet_pair.Num() > 1)
				spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved = dragon_bone_data.Start_Spine;
		}




		for (int32 i = 0; i < Total_spine_bones.Num(); i++)
		{
			FBoneReference bone_ref = FBoneReference(Total_spine_bones[i]);
			bone_ref.Initialize(RequiredBones);

			if (spine_Feet_pair.Num() > 0)
			{
				if (bone_ref.BoneIndex >= spine_Feet_pair[0].Spine_Involved.BoneIndex && bone_ref.BoneIndex <= spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.BoneIndex)
					Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));
				else
				{
					Extra_Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));

					//				GEngine->AddOnScreenDebugMessage(-1, 4.01f, FColor::Red, "Extra Bone " + FString::SanitizeFloat(Extra_Spine_Indices[i].GetInt()) );

				}


			}
			else
			{
				Spine_Indices.Add(bone_ref.GetCompactPoseIndex(RequiredBones));

			}

		}


		if (test_counter < 10)
		{
			spine_between_transforms.Empty();

			spine_between_heights.Empty();
		}

		combined_indices.Empty();

		if (spine_Feet_pair.Num() > 1 && solve_should_fail == false)
		{

			TArray<FCompactPoseBoneIndex> BoneIndices;

			{

				const FCompactPoseBoneIndex RootIndex = spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer);
				FCompactPoseBoneIndex BoneIndex = spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer);

				int while_counter = 0;

				do
				{
					BoneIndices.Insert(BoneIndex, 0);

					while_counter++;

					//owning_skel->GetBoneIndex( owning_skel->GetParentBone(owning_skel->GetBoneName(BoneIndex.GetInt())));
					BoneIndex = FCompactPoseBoneIndex(owning_skel->GetBoneIndex(owning_skel->GetParentBone(owning_skel->GetBoneName(BoneIndex.GetInt()))));

				} while (BoneIndex != RootIndex && while_counter < 500);

				if (while_counter > 450)
				{
					solve_should_fail = true;
				}

				BoneIndices.Insert(BoneIndex, 0);
			}



			combined_indices = BoneIndices;

			if (test_counter < 10)
			{
				spine_between_transforms.AddDefaulted(combined_indices.Num() - 2);
				spine_hit_edges.AddDefaulted(combined_indices.Num() - 2);
				spine_between_offseted_transforms.AddDefaulted(combined_indices.Num() - 2);

				spine_between_heights.AddDefaulted(combined_indices.Num() - 2);

				snake_spine_positions.AddDefaulted(combined_indices.Num());
			}

		}

		for (int s_i = 0; s_i < snake_spine_positions.Num(); s_i++)
		{
			snake_spine_positions[s_i] = FVector::ZeroVector;
		}

		if (test_counter < 10)
		{
			spine_hit_between.AddDefaulted(spine_between_transforms.Num());

			spine_between_points.AddDefaulted(spine_between_transforms.Num());
		}


		if (dragon_input_data.Pelvis == dragon_input_data.Start_Spine)
		{
			solve_should_fail = true;
		}

		if (!dragon_bone_data.Start_Spine.IsValidToEvaluate(RequiredBones) || !dragon_bone_data.Pelvis.IsValidToEvaluate(RequiredBones))
			solve_should_fail = true;

		//	dragon_bone_data.FeetBones.Add(dragon_input_data.FeetBones.Num() );
		dragon_bone_data.FeetBones.Empty();

		for (int i = 0; i < dragon_input_data.FeetBones.Num(); i++)
		{
			//dragon_bone_data.FeetBones[i] = FBoneReference(dragon_input_data.FeetBones[i]);
			dragon_bone_data.FeetBones.Add(FBoneReference(dragon_input_data.FeetBones[i].Feet_Bone_Name));
			dragon_bone_data.FeetBones[i].Initialize(RequiredBones);

			if (dragon_bone_data.FeetBones[i].IsValidToEvaluate(RequiredBones))
				feet_is_empty = false;


		}


	}
}

TArray<FDragonData_SpineFeetPair> FAnimNode_DragonSpineSolver::Swap_Spine_Pairs(TArray<FDragonData_SpineFeetPair>& test_list)
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

					is_swapped = true;
				}
			}
		}

	} while (is_swapped == true);


	return test_list;

}


TArray<FName> FAnimNode_DragonSpineSolver::BoneArrayMachine(int32 index, FName starting, FName ending, FName thigh_bone_ref, bool is_foot)
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
			if (Check_Loop_Exist(dragon_input_data.FeetBones[index].Feet_Trace_Offset, dragon_input_data.FeetBones[index].Feet_Heights, starting, spine_bones[spine_bones.Num() - 1], thigh_bone_ref, Total_spine_bones))
			{
				return spine_bones;
			}
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


bool FAnimNode_DragonSpineSolver::Check_Loop_Exist(FVector feet_trace_offset, float feet_height, FName start_bone, FName input_bone, FName thigh_bone, TArray<FName>& total_spine_bones)
{

	for (int32 i = 0; i < total_spine_bones.Num(); i++)
	{
		if (input_bone.ToString().TrimStartAndEnd().Equals(total_spine_bones[i].ToString().TrimStartAndEnd()))
		{

			{
				FDragonData_SpineFeetPair data = FDragonData_SpineFeetPair();
				data.Spine_Involved = FBoneReference(total_spine_bones[i]);
				data.Spine_Involved.Initialize(*SavedBoneContainer);

				FBoneReference foot_bone = FBoneReference(start_bone);
				foot_bone.Initialize(*SavedBoneContainer);
				data.Associated_Feet.Add(foot_bone);

				spine_Feet_pair[i].Spine_Involved = data.Spine_Involved;
				spine_Feet_pair[i].Associated_Feet.Add(foot_bone);
				spine_Feet_pair[i].Feet_Heights.Add(feet_height);
				spine_Feet_pair[i].feet_trace_offset.Add(feet_trace_offset);






				if (!thigh_bone.IsEqual("None"))
				{

					FBoneReference thigh_bone_ref = FBoneReference(thigh_bone);
					thigh_bone_ref.Initialize(*SavedBoneContainer);
					spine_Feet_pair[i].Associated_Thighs.Add(thigh_bone_ref);
				}




				return true;
			}
		}
	}

	return false;
}







FCollisionQueryParams FAnimNode_DragonSpineSolver::getDefaultSpineColliParams(FName name, AActor* me, bool debug_mode)
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


void FAnimNode_DragonSpineSolver::line_trace_func(USkeletalMeshComponent& skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode, bool ducking_mode)
{


	TArray<AActor*> ignoreActors;



	//if (RV_Ragdoll_Hit.ImpactNormal.Equals(FVector::ZeroVector))
	if (owning_skel->GetOwner() && (trace_timer_count > current_trace_interval && trace_distance_legal))
	{
		ignoreActors.Add(owning_skel->GetOwner());


		//UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, false, debug_color, FLinearColor::Yellow);

		float owner_scale = component_scale * virtual_scale;

		if (owning_skel->GetOwner())
		{
			//	owner_scale = owner_skel_w_transform.GetScale3D().Z;
		}






		FVector up_dir_ws = owner_skel_w_transform.TransformVector(character_direction_vector_CS).GetSafeNormal();

		FHitResult RV_Anti_Checker;


		FVector Origin_Point = startpoint - up_dir_ws * line_trace_upper_height * component_scale * virtual_scale;

		if (Use_Anti_Channel)
			UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), Origin_Point, startpoint, Anti_Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Anti_Checker, true, debug_color);



		ECollisionChannel channel_type = UEngineTypes::ConvertToCollisionChannel(Anti_Trace_Channel.GetValue());

		if (RV_Anti_Checker.bBlockingHit && Use_Anti_Channel)
		{
			//	if (RV_Anti_Checker.GetComponent())
			{

				ECollisionResponse response_channel = ECollisionResponse::ECR_Ignore;

				if (RV_Anti_Checker.bBlockingHit && RV_Anti_Checker.GetComponent())
					response_channel = RV_Anti_Checker.GetComponent()->GetCollisionResponseToChannel(channel_type);


				//if (RV_Ragdoll_Hit.bBlockingHit && RV_Ragdoll_Hit.GetComponent())
				//	response_channel = RV_Ragdoll_Hit.GetComponent()->GetCollisionResponseToChannel(channel_type);





				if (response_channel == ECollisionResponse::ECR_Block)
				{

					FVector New_StartPoint = (RV_Anti_Checker.ImpactPoint - up_dir_ws * 5);




					if (trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type)
						UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), New_StartPoint, endpoint, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
					else
						if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
						{//(startpoint-endpoint).Size()
							UKismetSystemLibrary::SphereTraceSingle(owning_skel->GetOwner(), New_StartPoint, endpoint, Trace_Radius * owner_scale, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
						}
					/*
						else
							if (trace_type == EIKTrace_Type_Plugin::ENUM_BoxTrace_Type)
								UKismetSystemLibrary::BoxTraceSingle(owning_skel->GetOwner(), New_StartPoint, endpoint, FVector(1, 1, 0) * Trace_Radius * owner_scale, FRotator(0, 0, 0), Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
								*/

					//	GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Red, " Anti-Channel Detected ");
				}
			}
		}
		else
		{

			if (ducking_mode)
			{
				UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Ducking_Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);

			}
			else
			{


				if (trace_type == EIKTrace_Type_Plugin::ENUM_LineTrace_Type)
					UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
				else
					if (trace_type == EIKTrace_Type_Plugin::ENUM_SphereTrace_Type)
					{//(startpoint-endpoint).Size()
						UKismetSystemLibrary::SphereTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, Trace_Radius * owner_scale, Trace_Channel, line_trace_hit_complex, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
					}
				/*
					else
						if (trace_type == EIKTrace_Type_Plugin::ENUM_BoxTrace_Type)
							UKismetSystemLibrary::BoxTraceSingle(owning_skel->GetOwner(), startpoint, endpoint, FVector(1, 1, 0) * Trace_Radius * owner_scale, FRotator(0, 0, 0), Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color);
							*/
			}




		}


		//	UKismetSystemLibrary::LineTraceSingle

	}
	else
	{




	}


	//RV_Ragdoll_Hit.GetComponent()->GetCollisionResponseToChannel;


	//	if(debug_mode)
	//	UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner()->GetWorld(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::Persistent, RV_Ragdoll_Hit, false, debug_color, FLinearColor::Yellow);
	//	else


	TraceStartList.Add(startpoint);
	TraceEndList.Add(endpoint);
	TraceLinearColor.Add(debug_color.ToFColor(true));


	//UKismetSystemLibrary::LineTraceSingle(owning_skel->GetOwner()->GetWorld(), startpoint, endpoint, Trace_Channel, true, ignoreActors, EDrawDebugTrace::None, RV_Ragdoll_Hit, true, debug_color, FLinearColor::Yellow, 0.01f);



	/*
	skelmesh->GetWorld()->LineTraceSingleByChannel(RV_Ragdoll_Hit,        //result
	startpoint,    //start
	endpoint, //end
	ECC_WorldStatic, //collision channel
	getDefaultParams(trace_tag, skelmesh->GetOwner(), debug_mode));
	*/

	Output = RV_Ragdoll_Hit;

}











void FAnimNode_DragonSpineSolver::FABRIK_BodySystem(FComponentSpacePoseContext& Output, FBoneReference TipBone, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{





	spine_median_result = 10;



	//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Median = " + FString::SanitizeFloat(spine_median_result)+" for scale "+FString::SanitizeFloat(owner_skel_w_transform.GetScale3D().Z));


	if (spine_Feet_pair.Num() > 0)
	{

		if (is_snake == false)//&& dragon_bone_data.FeetBones.Num()!=0)
		{
			/*
			if (is_single_spine)
			{
				Dragon_ImpactRotation(0, RootEffectorTransform, MeshBases, false);
			}
			else*/
			Dragon_ImpactRotation(0, RootEffectorTransform, MeshBases, false);
		}
		else
		{
			Snake_ImpactRotation(0, RootEffectorTransform, MeshBases);
		}
	}


	if (spine_Feet_pair.Num() > (spine_hit_pairs.Num() - 1))
	{

		if (is_snake == false)//&& dragon_bone_data.FeetBones.Num() != 0)
		{
			/*
			if (is_single_spine)
			{
				Dragon_ImpactRotation(spine_hit_pairs.Num() - 1, ChestEffectorTransform, MeshBases, false);
			}
			else*/
			Dragon_ImpactRotation(spine_hit_pairs.Num() - 1, ChestEffectorTransform, MeshBases, false);


		}
		else
		{
			Snake_ImpactRotation(spine_hit_pairs.Num() - 1, ChestEffectorTransform, MeshBases);
		}
	}


	//	1,2,3,4,5,6,7
	//	2,3,4,5,6


	for (int i = 0; i < combined_indices.Num(); i++)
	{

		if (i > 0 && i < combined_indices.Num() - 1)
		{

			FTransform result = FTransform::Identity;
			FTransform bonetraceTransform = MeshBases.GetComponentSpaceTransform(combined_indices[i]);
			FVector lerp_data = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());


			


			result.SetLocation(lerp_data);



			if (spine_hit_between[i - 1].bBlockingHit)
				result.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_between_points[i - 1].Z));





			spine_between_offseted_transforms[i - 1] = owner_skel_w_transform.InverseTransformPosition(result.GetLocation());

			spine_between_offseted_transforms[i - 1] += character_direction_vector_CS * spine_between_heights[i - 1]/(component_scale);


		}

	}


	/*
	if(spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation().Z!=0)
	RootEffectorTransform.SetLocation(spine_AnimatedTransform_pairs[0].Spine_Involved.GetLocation());

	//	if (DebugEffectorTransform.GetLocation().Z > 0 && DebugEffectorTransform.ContainsNaN() == false)
	//		RootEffectorTransform.SetLocation(DebugEffectorTransform.GetLocation());

	RootEffectorTransform.SetRotation(FRotator(0, RootEffectorTransform.Rotator().Yaw,0).Quaternion());



	if (spine_AnimatedTransform_pairs[spine_AnimatedTransform_pairs.Num()-1].Spine_Involved.GetLocation().Z != 0)
	ChestEffectorTransform.SetLocation(spine_AnimatedTransform_pairs[spine_AnimatedTransform_pairs.Num()-1].Spine_Involved.GetLocation());

	//	if (DebugEffectorTransformTwo.GetLocation().Z > 0 && DebugEffectorTransformTwo.ContainsNaN() == false)
	//		ChestEffectorTransform.SetLocation(DebugEffectorTransformTwo.GetLocation());


	ChestEffectorTransform.SetRotation(FRotator(0, ChestEffectorTransform.Rotator().Yaw, 0).Quaternion());
	*/

	DragonSpineOutput output_test;



	//	if (!ignore_between_rotations)
	{

		if (is_snake == false)
		{

			if (is_single_spine == false)
			{

				//if (Use_Fake_Rotations)

				if (Use_Automatic_Fabrik_Selection == false)
				{
					if (reverse_fabrik)
						output_test = DragonSpineProcessor(RootEffectorTransform, MeshBases, OutBoneTransforms);
					else
						output_test = DragonSpineProcessor_Direct(ChestEffectorTransform, MeshBases, OutBoneTransforms);
				}
				else
				{
					if (spine_hit_pairs[0].Parent_Spine_Point.Z > spine_hit_pairs[spine_hit_pairs.Num() - 1].Parent_Spine_Point.Z)
						output_test = DragonSpineProcessor(RootEffectorTransform, MeshBases, OutBoneTransforms);
					else
						output_test = DragonSpineProcessor_Direct(ChestEffectorTransform, MeshBases, OutBoneTransforms);
				}

			}
			else
			{
				output_test = DragonSpineProcessor_Direct(ChestEffectorTransform, MeshBases, OutBoneTransforms);
			}

		}
		else
		{
			output_test = DragonSpineProcessor_Snake(ChestEffectorTransform, MeshBases, OutBoneTransforms);

		}

	}

	output_test.SpineFirstEffectorTransform = ChestEffectorTransform;

	output_test.PelvicEffectorTransform = RootEffectorTransform;



	TArray<DragonChainLink> Chain = output_test.chain_data;


	TArray<FCompactPoseBoneIndex> BoneIndices = output_test.BoneIndices;




	output_test = Dragon_Transformation(output_test, MeshBases, OutBoneTransforms);



	TArray<FBoneTransform> finalised_bone_transforms;

	TArray<FCompactPoseBoneIndex> finalised_bone_indices;


	//	for (int32 LinkIndex = 0; LinkIndex < output_test.NumChainLinks - 1; LinkIndex++)
	for (int32 LinkIndex = 0; LinkIndex < output_test.NumChainLinks; LinkIndex++)
	{
		DragonChainLink const& CurrentLink = output_test.chain_data[LinkIndex];

		FTransform const& CurrentBoneTransform = output_test.temp_transforms[CurrentLink.TransformIndex].Transform;

		//		FTransform LerpBoneTransform = CurrentBoneTransform;

		//		LerpBoneTransform.SetLocation(UKismetMathLibrary::VInterpTo(AnimatedBoneTransforms[CurrentLink.TransformIndex].Transform.GetLocation(), CurrentBoneTransform.GetLocation(), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()),Formatted_Location_Lerp));

				//	const FTransform& BoneCSTransform = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);




		if (CurrentLink.TransformIndex < AnimatedBoneTransforms.Num())
			AnimatedBoneTransforms[CurrentLink.TransformIndex].Transform = CurrentBoneTransform;

		if (CurrentLink.TransformIndex < Original_AnimatedBoneTransforms.Num())
			Original_AnimatedBoneTransforms[CurrentLink.TransformIndex].Transform = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);



		// Update zero length children if any
		int32 const NumChildren = CurrentLink.ChildZeroLengthTransformIndices.Num();
		for (int32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
		{

			//			DragonChainLink const & CurrentLink = output_test.chain_data[LinkIndex];

			//			FTransform& CurrentBoneTransform = output_test.temp_transforms[CurrentLink.TransformIndex].Transform;


			FTransform& ChildBoneTransform = output_test.temp_transforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform;
			ChildBoneTransform.NormalizeRotation();



			//FTransform LerpBoneTransform = CurrentBoneTransform;

			//LerpBoneTransform.SetLocation(UKismetMathLibrary::VInterpTo(AnimatedBoneTransforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform.GetLocation(), CurrentBoneTransform.GetLocation(), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp));


			AnimatedBoneTransforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform = CurrentBoneTransform;

			Original_AnimatedBoneTransforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);


		}


	}


	/*
	TArray<FBoneTransform> LegList;

	for (int spineindex = 0; spineindex < spine_Feet_pair.Num(); spineindex++)
	{
		for (int feetindex = 0; feetindex < spine_Feet_pair[spineindex].Associated_Feet.Num(); feetindex++)
		{
			UDragonIK_Library::Evaluate_TwoBoneIK_Spinal_Modified(Output, owning_skel, spine_Feet_pair[spineindex].Associated_Feet[feetindex], spine_Feet_pair[spineindex].Associated_Knees[feetindex], spine_Feet_pair[spineindex].Associated_Thighs[feetindex], DebugEffectorTransform, spine_AnimatedTransform_pairs[spineindex].Associated_FeetBalls[feetindex], spine_AnimatedTransform_pairs[spineindex].Associated_Knee[feetindex], spine_AnimatedTransform_pairs[spineindex].Associated_Feet[feetindex], FVector(0, 0, 0),FVector(0,0,0), LegTransforms);
		}
	}*/


}





void FAnimNode_DragonSpineSolver::Dragon_VectorCreation(bool isPelvis, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases)
{

	int spine_feet_index = 0;

	if (isPelvis == false)
		spine_feet_index = spine_Feet_pair.Num() - 1;

	FTransform bonetraceTransform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[spine_feet_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));
	FVector bone_world_location = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());

	FRotator bone_rotation = owning_skel->GetComponentRotation();

	if (owning_skel->GetOwner())
	{
		bone_rotation = owning_skel->GetOwner()->GetActorRotation();
	}


	FTransform final_output_transform = FTransform::Identity;

	final_output_transform.SetLocation(bone_world_location);

	final_output_transform.SetRotation(FRotator(0, bone_rotation.Yaw, 0).Quaternion());



	if (atleast_one_hit)
	{
		if (spine_hit_pairs[spine_feet_index].RV_Feet_Hits.Num() % 2 == 0 && spine_hit_pairs[spine_feet_index].RV_Feet_Hits.Num() > 0)
		{

			FVector lowest_leg_hit = FVector(0, 0, 0);


			//lowest_leg_hit = spine_hit_pairs[spine_feet_index].RV_FeetHit_Points[0].ImpactPoint;

			lowest_leg_hit = spine_hit_pairs[spine_feet_index].Parent_Spine_Point;



			//			if(isPelvis==false)
			//				GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Chest : " + FString::SanitizeFloat(Total_spine_heights[spine_feet_index]));


			FVector lifted_position = lowest_leg_hit + (character_direction_vector_CS * Total_spine_heights[spine_feet_index]);


			//			FVector lifted_position = lowest_leg_hit;

			if (isPelvis == false)
			{
				//				lifted_position = DebugEffectorTransform.GetLocation();

				//	final_output_transform.SetLocation(DebugEffectorTransform.GetLocation());
			}

			//			if (isPelvis == false)
			//				lifted_position.Z = lowest_leg_hit.Z;


			final_output_transform.SetLocation(FVector(final_output_transform.GetLocation().X, final_output_transform.GetLocation().Y, lifted_position.Z));


		}
	}




	OutputTransform = final_output_transform;


}








void FAnimNode_DragonSpineSolver::Snake_ImpactRotation(int origin_point_index, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases)
{



	FTransform bonetraceTransform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[origin_point_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));

	FVector lerp_data = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());

	//test conversion
	lerp_data = owner_skel_w_transform.InverseTransformPosition(lerp_data);



	FRotator bone_rotation = FRotator(owning_skel->GetComponentRotation());

	if (owning_skel->GetOwner() != nullptr)
	{
		bone_rotation = FRotator(owning_skel->GetOwner()->GetActorRotation());
	}


	FRotator final_rot = FRotator(0, bone_rotation.Yaw, 0);



	//	result.SetLocation(lerp_data);




	float Chest_ForwardRotation_Intensity_INPUT = Chest_ForwardRotation_Intensity;

	float Pelvis_ForwardRotation_Intensity_INPUT = Pelvis_ForwardRotation_Intensity;



	float Pelvis_SideRotation_Intensity_INPUT = Body_Rotation_Intensity;

	float Chest_SideRotation_Intensity_INPUT = Chest_SidewardRotation_Intensity;



	if (flip_forward_and_right)
	{

		float pelvis_swap_value = Pelvis_ForwardRotation_Intensity_INPUT;
		Pelvis_ForwardRotation_Intensity_INPUT = Pelvis_SideRotation_Intensity_INPUT;
		Pelvis_SideRotation_Intensity_INPUT = pelvis_swap_value;


		float chest_swap_value = Chest_ForwardRotation_Intensity_INPUT;
		Chest_ForwardRotation_Intensity_INPUT = Chest_SideRotation_Intensity_INPUT;
		Chest_SideRotation_Intensity_INPUT = chest_swap_value;



	}





	FVector pointing_to_transformpoint = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Spine_Point + (character_direction_vector_CS * Total_spine_heights[origin_point_index]));

	FRotator position_Based_rot = final_rot;

	FVector Feet_Mid_Point = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Spine_Point);







	if (origin_point_index == 0)
	{




		FVector forward_direction = FVector();
		FVector right_direction = FVector();
		float Intensifier_forward = 0;

		float Intensifier_side = 0;


		if (owning_skel->GetOwner())
		{



			if (spine_hit_pairs[origin_point_index].Parent_Front_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Back_Hit.bBlockingHit)
				Intensifier_forward = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Pelvis_ForwardRotation_Intensity_INPUT;
			else
				Intensifier_forward = 0;








			



			//					Intensifier_side = (spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z)*direction* Body_Rotation_Intensity *-1;



			if (spine_hit_pairs[origin_point_index].Parent_Left_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Right_Hit.bBlockingHit)
				Intensifier_side = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z) * Pelvis_SideRotation_Intensity_INPUT * 0.5f;
			else
				Intensifier_side = 0;






			forward_direction = (owning_skel->GetOwner()->GetActorForwardVector()) * Intensifier_forward;

			//right_direction = owner_skel_w_transform.InverseTransformPosition(owning_skel->GetOwner()->GetActorRightVector())*Intensifier_side;

			right_direction = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, FVector::CrossProduct(character_direction_vector_CS, Forward_Direction_Vector)) * Intensifier_side;




		}




		//final_transformation.TransformVector(owning_skel->GetForwardVector() )
		FVector relativeUp = (owning_skel->GetForwardVector() * -1);

		//FVector relativePos = (pointing_to_transformpoint - (Feet_Mid_Point + forward_direction)).GetSafeNormal();


		FVector relativePos = (owner_skel_w_transform.TransformPosition(pointing_to_transformpoint) - (owner_skel_w_transform.TransformPosition(Feet_Mid_Point) + forward_direction)).GetSafeNormal();


		relativePos = (owner_skel_w_transform.GetLocation() - DebugEffectorTransform.GetLocation());

		//Roll_relativeUp = FVector(0, 0, 1);


		//				FVector relativePos = (lerp_data - DebugEffectorTransform.GetLocation()).GetSafeNormal();



		FRotator look_rot = FRotator(UDragonIK_Library::CustomLookRotation(relativePos, relativeUp));



		position_Based_rot = look_rot;


		position_Based_rot.Yaw = final_rot.Yaw;







		Root_Roll_Value = position_Based_rot.Roll;

		Root_Pitch_Value = position_Based_rot.Pitch;




		FVector Roll_relativeUp = (owning_skel->GetForwardVector() * -1);


		FVector Roll_relativePos = (pointing_to_transformpoint - (Feet_Mid_Point + right_direction)).GetSafeNormal();




		//FVector Roll_relativePos = (pointing_to_transformpoint - DebugEffectorTransform.GetLocation()).GetSafeNormal();



		FRotator Roll_look_rot = FRotator(UDragonIK_Library::CustomLookRotation(Roll_relativePos, Roll_relativeUp));


		position_Based_rot.Roll = Roll_look_rot.Roll;


		spine_RotDifference[origin_point_index].Yaw = position_Based_rot.Yaw;

		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Intensifier_forward : " + FString::SanitizeFloat(Intensifier_forward));


		position_Based_rot.Pitch = Intensifier_side * -1;
		position_Based_rot.Roll = Intensifier_forward * -1;


		//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Pos Rot : " + (position_Based_rot).ToString());




		if (atleast_one_hit)
		{

			if (atleast_one_hit && position_Based_rot.Pitch < MaximumPitch && position_Based_rot.Pitch > MinimumPitch)
				spine_RotDifference[origin_point_index].Pitch = position_Based_rot.Pitch;
			else if (position_Based_rot.Pitch > MaximumPitch)
			{
				spine_RotDifference[origin_point_index].Pitch = MaximumPitch;
			}
			else if (position_Based_rot.Pitch < MinimumPitch)
			{
				spine_RotDifference[origin_point_index].Pitch = MinimumPitch;
			}




			if (atleast_one_hit && position_Based_rot.Roll < MaximumRoll && position_Based_rot.Roll > MinimumRoll)
				spine_RotDifference[origin_point_index].Roll = position_Based_rot.Roll;
			else if (position_Based_rot.Roll > MaximumRoll)
			{

				/*
				if(position_Based_rot.Roll>0)
				spine_RotDifference[origin_point_index].Roll = MaximumRoll;
				else
				spine_RotDifference[origin_point_index].Roll = MaximumRoll*-1;
				*/

				spine_RotDifference[origin_point_index].Roll = MaximumRoll;
			}
			else if (position_Based_rot.Roll < MinimumRoll)
			{
				spine_RotDifference[origin_point_index].Roll = MinimumRoll;
			}



		}



		//				OutputTransform.SetRotation(UKismetMathLibrary::RLerp(FRotator(OutputTransform.Rotator().Pitch, position_Based_rot.Yaw, OutputTransform.Rotator().Roll), spine_RotDifference[origin_point_index], delta_seconds_saved * Body_Rotation_Interpolation_Speed, true).Quaternion());


	}
	else if (origin_point_index == spine_Transform_pairs.Num() - 1)
	{
		FVector forward_direction = FVector();



		float forward_intensity = 0;

		float right_intensity = 0;



		if (owning_skel->GetOwner())
		{














			//					forward_intensity = FMath::Clamp<float>(((Feet_Opposite_Mid_Point.Z) - Feet_Mid_Point.Z) * Chest_ForwardRotation_Intensity, -10000, 10000)  *-1;

			//					forward_intensity = FMath::Lerp<float>(forward_intensity, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));





			if (spine_hit_pairs[origin_point_index].Parent_Front_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Back_Hit.bBlockingHit)
				forward_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Chest_ForwardRotation_Intensity_INPUT;
			else
				forward_intensity = 0;






			int direction = 1;

			if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 0)
			{
				if (owner_skel_w_transform.InverseTransformPosition(spine_Transform_pairs[origin_point_index].Associated_Feet[0].GetLocation()).X > 0)
					direction = 1;
				else
					direction = -1;
			}




			//						right_intensity = (spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z)*direction* Body_Rotation_Intensity *-1;



			if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || Use_Fake_Chest_Rotations || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
			{

				if (spine_hit_pairs[origin_point_index].Parent_Left_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Right_Hit.bBlockingHit)
					right_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z) * Chest_SideRotation_Intensity_INPUT * 0.5f;
				else
					right_intensity = 0;

			}
			else
			{
				if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 0)
					right_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0]).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1]).Z) * direction * Chest_SideRotation_Intensity_INPUT * -1 * 0.5f;


			}







			forward_direction = owning_skel->GetOwner()->GetActorForwardVector() * forward_intensity;





			//	forward_direction.Z = 0;
		}


		FVector relativeUp = (owning_skel->GetForwardVector() * -1);
		FVector relativePos = (pointing_to_transformpoint - (Feet_Mid_Point + forward_direction)).GetSafeNormal();


		//FVector relativePos = (pointing_to_transformpoint - DebugEffectorTransform.GetLocation()).GetSafeNormal();


		FRotator look_rot = FRotator(UDragonIK_Library::CustomLookRotation(relativePos, relativeUp));

		position_Based_rot = look_rot;

		position_Based_rot.Yaw = final_rot.Yaw;
		//				position_Based_rot.Roll = final_rot.Roll;









		//	position_Based_rot.Roll = Roll_look_rot.Roll;


		position_Based_rot.Pitch = right_intensity * -1;
		position_Based_rot.Roll = forward_intensity * -1;




		spine_RotDifference[origin_point_index].Yaw = position_Based_rot.Yaw;
		//			position_Based_rot = UKismetMathLibrary::RLerp(FRotator(0, final_rot.Yaw, 0), position_Based_rot, atleast_one_hit, true);





		if (atleast_one_hit)
		{

			if (atleast_one_hit && position_Based_rot.Pitch < MaximumPitch && position_Based_rot.Pitch > MinimumPitch)
				spine_RotDifference[origin_point_index].Pitch = position_Based_rot.Pitch;
			else if (position_Based_rot.Pitch > MaximumPitch)
			{
				spine_RotDifference[origin_point_index].Pitch = MaximumPitch;
			}
			else if (position_Based_rot.Pitch < MinimumPitch)
			{
				spine_RotDifference[origin_point_index].Pitch = MinimumPitch;
			}




			if (atleast_one_hit && position_Based_rot.Roll < MaximumRoll && position_Based_rot.Roll > MinimumRoll)
				spine_RotDifference[origin_point_index].Roll = position_Based_rot.Roll;
			else if (position_Based_rot.Roll > MaximumRoll)
			{

				/*
				if(position_Based_rot.Roll>0)
				spine_RotDifference[origin_point_index].Roll = MaximumRoll;
				else
				spine_RotDifference[origin_point_index].Roll = MaximumRoll*-1;
				*/

				spine_RotDifference[origin_point_index].Roll = MaximumRoll;
			}
			else if (position_Based_rot.Roll < MinimumRoll)
			{
				spine_RotDifference[origin_point_index].Roll = MinimumRoll;
			}


		}


	}




	//OG			FRotator current_rot = FRotator(OutputTransform.Rotator().Pitch, final_rot.Yaw, OutputTransform.Rotator().Roll).GetNormalized();



	//FRotator target_rot = FRotator(spine_RotDifference[origin_point_index].Pitch, final_rot.Yaw, spine_RotDifference[origin_point_index].Roll).GetNormalized();



//			FRotator target_rot = FRotator(UKismetMathLibrary::Lerp<float>( spine_RotDifference[origin_point_index].Pitch, spine_RotDifference[origin_point_index].Pitch,0,adapt), final_rot.Yaw, spine_RotDifference[origin_point_index].Roll).GetNormalized();

		//OG	FRotator target_rot = FRotator(UKismetMathLibrary::Lerp(0, spine_RotDifference[origin_point_index].Pitch, Adaptive_Alpha), final_rot.Yaw, UKismetMathLibrary::Lerp(0, spine_RotDifference[origin_point_index].Roll,Adaptive_Alpha) ).GetNormalized();


	FRotator target_rot = spine_RotDifference[origin_point_index].GetNormalized();


	{
		if (atleast_one_hit && Enable_Solver == true)
		{
			//if (Enable_Snake_Interpolation)
			//	OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(current_rot, target_rot, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Rotation_Lerp * 0.05f).Quaternion().GetNormalized());
			//else
			OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

		}
		else
		{
			target_rot = FRotator(0, target_rot.Yaw, 0);
			//					OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

			//if (Enable_Snake_Interpolation)
			//	OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(current_rot, target_rot, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Rotation_Lerp * 0.05f).Quaternion().GetNormalized());
			//else
			OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

		}
	}




	//OG	FVector lerp_data_temp = lerp_data;
	//	lerp_data = owner_skel_w_transform.TransformPosition(lerp_data_temp);




	if (spine_hit_pairs.Num() > origin_point_index - 1)
	{






		//		FVector right_dir_vector = FVector::CrossProduct(forward_dir_forward, FVector(0, 0, 1));




		//		FVector spine_position = FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]);



		//		FVector pitch_based_location = RotateAroundPoint(spine_position, right_dir_vector, spine_hit_pairs[origin_point_index].Parent_Spine_Point, OutputTransform.Rotator().Pitch);






				/*
				for (int32 i = 0; i < spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num(); i++)
				{

					if (spine_hit_pairs[origin_point_index].RV_FeetHit_Points[i].ImpactPoint.Z < Z_Offset)
					{
							Z_Offset = spine_hit_pairs[origin_point_index].RV_FeetHit_Points[i].ImpactPoint.Z;
					}

				}
				*/
				//float component_scale * virtual_scale = owning_skel->GetComponentScale().Z;

			//	float Z_Offset = 10000000000;
		FVector Z_Offset = FVector(0, 0, 10000000000);


		//	if (Z_Offset == 10000000000)
		{
			if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit)
				Z_Offset = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Spine_Point);
			else
				Z_Offset = lerp_data - character_direction_vector_CS * (Total_spine_heights[origin_point_index]);

		}


		Z_Offset += character_direction_vector_CS * (Pelvis_Base_Offset);
		Z_Offset.X = bonetraceTransform.GetLocation().X;
		Z_Offset.Y = bonetraceTransform.GetLocation().Y;

		lerp_data.X = bonetraceTransform.GetLocation().X;
		lerp_data.Y = bonetraceTransform.GetLocation().Y;


		FVector lerp_data_temp = lerp_data + character_direction_vector_CS * Total_spine_heights[origin_point_index];
		lerp_data = owner_skel_w_transform.TransformPosition(lerp_data_temp);

		FVector Z_Offset_temp = Z_Offset + character_direction_vector_CS * Total_spine_heights[origin_point_index];
		Z_Offset = owner_skel_w_transform.TransformPosition(Z_Offset_temp);




		FVector location_reset = lerp_data;

		location_reset = owner_skel_w_transform.TransformPosition(location_reset);

		//	final_transformation = owner_skel_w_transform*final_transformation;

		if (OutputTransform.GetLocation() == FVector(0, 0, 0))
			OutputTransform.SetLocation(location_reset);


		//		if (all_feets_hitting)
		{
			//			if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Spine_Point.ContainsNaN() == false && spine_hit_pairs.Num() > origin_point_index - 1)
			//				result.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z+Total_spine_heights[origin_point_index] ));


			if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit && atleast_one_hit && Enable_Solver)
			{
				//OutputTransform.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]));


//				if ((  (FVector(lerp_data.X, lerp_data.Y, Z_Offset + Total_spine_heights[origin_point_index]* component_scale * virtual_scale)) - lerp_data).Size() > 10000*component_scale * virtual_scale)
//					OutputTransform.SetLocation(FVector(lerp_data.X, lerp_data.Y, Z_Offset + Total_spine_heights[origin_point_index]*component_scale * virtual_scale));
//				OutputTransform.SetLocation(lerp_data + Z_Offset + character_direction_vector*Total_spine_heights[origin_point_index] * component_scale * virtual_scale);
//				else
				{

					//FVector result_vec = Z_Offset + character_direction_vector_CS * Total_spine_heights[origin_point_index] * component_scale;

					FVector result_vec = Z_Offset;



					//if (Enable_Snake_Interpolation)
					//	OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(result_vec.X, result_vec.Y, OutputTransform.GetLocation().Z), Z_Offset + character_direction_vector_CS * Total_spine_heights[origin_point_index] * component_scale, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
					//else
					OutputTransform.SetLocation(result_vec);

				}


				//OutputTransform.SetLocation(lerp_data);


				//					GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Impact Hit " + OutputTransform.GetLocation().ToString());

			}
			else
			{
				//if (Enable_Snake_Interpolation)
				//	OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), lerp_data, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
				//else
				OutputTransform.SetLocation(lerp_data);


			}


		}

	}
	else
	{
		//if (Enable_Snake_Interpolation)
		//	OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), lerp_data, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
		//else
		OutputTransform.SetLocation(lerp_data);


	}




	//	OutputTransform.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]));




		//OutputTransform.SetRotation(new_rotator.Quaternion());

		//	OutputTransform = result;
}


/*
void FAnimNode_DragonSpineSolver::Snake_ImpactRotation(int origin_point_index, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases)
{

	FTransform result = FTransform::Identity;

	FVector new_location = (spine_hit_pairs[origin_point_index].Parent_Spine_Point + FVector(0, 0, Total_spine_heights[origin_point_index]));

	FTransform bonetraceTransform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[origin_point_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));

	FVector lerp_data = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());




	FRotator bone_rotation = FRotator(owning_skel->GetComponentRotation());

	if (owning_skel->GetOwner() != nullptr)
	{
		bone_rotation = FRotator(owning_skel->GetOwner()->GetActorRotation());
	}


	FRotator new_rotator = FRotator(0, bone_rotation.Yaw,0);



//	result.SetLocation(lerp_data);



	if (spine_hit_pairs.Num() > origin_point_index - 1)
	{

//		if (all_feets_hitting)
		{
//			if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Spine_Point.ContainsNaN() == false && spine_hit_pairs.Num() > origin_point_index - 1)
//				result.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z+Total_spine_heights[origin_point_index] ));


			if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit && atleast_one_hit && Enable_Solver)
			{
				OutputTransform.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]));

		//		GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Impact Hit "+ );

//				if ((OutputTransform.GetLocation() - lerp_data).Size() > 10000)
//					OutputTransform.SetLocation(FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]));
//				else
//					OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f));

//				result.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), FVector(lerp_data.X, lerp_data.Y, spine_hit_pairs[origin_point_index].Parent_Spine_Point.Z + Total_spine_heights[origin_point_index]), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f));


//					GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Impact Hit " + OutputTransform.GetLocation().ToString());

			}
			else
			{

				OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), lerp_data, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f));
			}


		}

	}
	else
	{

		OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(lerp_data.X, lerp_data.Y, OutputTransform.GetLocation().Z), lerp_data, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f));
	}







//	OutputTransform.SetLocation(lerp_data);
//	result.SetLocation(new_location);

//	OutputTransform.SetRotation(spine_RotDifference[origin_point_index].Quaternion());


	OutputTransform.SetRotation(new_rotator.Quaternion());

//	OutputTransform = result;
}

*/




void FAnimNode_DragonSpineSolver::Dragon_ImpactRotation(int origin_point_index, FTransform& OutputTransform, FCSPose<FCompactPose>& MeshBases, bool is_reverse)
{
	TArray<FBoneTransform> TempBoneTransforms;


	FTransform bonetraceTransform = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[origin_point_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));

	FVector lerp_data = owner_skel_w_transform.TransformPosition(bonetraceTransform.GetLocation());

	//test conversion
	lerp_data = owner_skel_w_transform.InverseTransformPosition(lerp_data);








	/*

	if (flip_forward_and_right)
	{
		float pelvis_swap_value = Pelvis_ForwardRotation_Intensity_INPUT;
		Pelvis_ForwardRotation_Intensity_INPUT = Pelvis_SideRotation_Intensity_INPUT;
		Pelvis_SideRotation_Intensity_INPUT = pelvis_swap_value;


		float chest_swap_value = Chest_ForwardRotation_Intensity_INPUT;
		Chest_ForwardRotation_Intensity_INPUT = Chest_SideRotation_Intensity_INPUT;
		Chest_SideRotation_Intensity_INPUT = chest_swap_value;
	}

	*/




	//	FBoneReference root_bone_ref = FBoneReference(owning_skel->GetBoneName(0));
	//	root_bone_ref.Initialize(*SavedBoneContainer);

	//	FTransform RoottraceTransform = MeshBases.GetComponentSpaceTransform(root_bone_ref.GetCompactPoseIndex(*SavedBoneContainer));
	//	RoottraceTransform.SetLocation(FVector(0, 0, 0));

	//	FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBases, RoottraceTransform, FCompactPoseBoneIndex(root_bone_ref.BoneIndex), EBoneControlSpace::BCS_WorldSpace);





	//	Total_spine_heights[origin_point_index] = 100;

	//	float chest_distance = Total_spine_heights[origin_point_index];



	FRotator final_rot = FRotator(0);


	/*
	for (int i = 0; i<spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num(); i++)
	{
		if (spine_hit_pairs[origin_point_index].RV_Feet_Hits[i].bBlockingHit == false)
		{
			all_feets_hitting = false;
		}
	}


	if (spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit == false)
	{
		all_feets_hitting = false;
	}

	if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
		all_feets_hitting = false;
*/

//FVector character_direction_vector = FVector(0,0,1);

	if (spine_hit_pairs.Num() > origin_point_index - 1)
	{

		//if (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].bBlockingHit && spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].bBlockingHit)

		//		if (all_feets_hitting)
		if (atleast_one_hit && spine_hit_pairs[origin_point_index].Parent_Spine_Hit.bBlockingHit)
		{



			/*
			FRotator input_rotation_axis;

			FRotator XZ_rot = UKismetMathLibrary::MakeRotFromXZ(owning_skel->GetForwardVector(), (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactNormal + spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactNormal) / 2);
			FRotator YZ_rot = UKismetMathLibrary::MakeRotFromYZ(owning_skel->GetRightVector(), (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactNormal + spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactNormal) / 2);
			FRotator bone_rotation = FRotator(owning_skel->GetComponentRotation());

			if (owning_skel->GetOwner() != nullptr)
			{
				XZ_rot = UKismetMathLibrary::MakeRotFromXZ(owning_skel->GetOwner()->GetActorForwardVector(), (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactNormal + spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactNormal) / 2);
				YZ_rot = UKismetMathLibrary::MakeRotFromYZ(owning_skel->GetOwner()->GetActorRightVector(), (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactNormal + spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactNormal) / 2);
				bone_rotation = FRotator(owning_skel->GetOwner()->GetActorRotation());
			}


			input_rotation_axis = FRotator((YZ_rot.Pitch), bone_rotation.Yaw, XZ_rot.Roll);
			*/


			//FVector impact_difference = (spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactPoint - spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactPoint).GetSafeNormal();



			//int multiplier = 1;

			//if (FVector::DotProduct(impact_difference, owning_skel->GetForwardVector()) < 0)
			//	multiplier = -1;


			//impact_difference = FVector(impact_difference.X * multiplier, impact_difference.Y * multiplier, impact_difference.Z * multiplier);


			//FVector cross_x = FVector::CrossProduct(impact_difference, owning_skel->GetForwardVector().GetSafeNormal());
			/*
			FRotator Feet_XZ_rot = UKismetMathLibrary::MakeRotFromXZ(owning_skel->GetForwardVector(), cross_x);
			FRotator Feet_YZ_rot = UKismetMathLibrary::MakeRotFromYZ(owning_skel->GetRightVector(), cross_x);
			FRotator final_bone_rotation = FRotator(owning_skel->GetComponentRotation());

			//final_bone_rotation.Yaw = owner_skel_w_transform.Rotator().Yaw;

			if (owning_skel->GetOwner() != nullptr)
			{

				final_bone_rotation = FRotator(owning_skel->GetOwner()->GetActorRotation());

				cross_x = FVector::CrossProduct(impact_difference, UKismetMathLibrary::RotateAngleAxis(owning_skel->GetOwner()->GetActorRightVector(), owning_skel->GetRelativeTransform().Rotator().Yaw, owning_skel->GetOwner()->GetActorUpVector()));

				Feet_XZ_rot = UKismetMathLibrary::MakeRotFromXZ(owning_skel->GetOwner()->GetActorForwardVector(), cross_x);
				Feet_YZ_rot = UKismetMathLibrary::MakeRotFromYZ(owning_skel->GetOwner()->GetActorRightVector(), cross_x);

			}

		//	final_rot = FRotator((YZ_rot.Pitch), final_bone_rotation.Yaw, XZ_rot.Roll);

			final_rot = FRotator(0, final_bone_rotation.Yaw, 0);
			*/

			FTransform input_bone_transform_cs = MeshBases.GetComponentSpaceTransform(spine_Feet_pair[origin_point_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer));
			input_bone_transform_cs.SetRotation((owning_skel->GetRelativeTransform().Rotator() + FRotator(0, 180, 0)).Quaternion());
			FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBases, input_bone_transform_cs, FCompactPoseBoneIndex(spine_Feet_pair[origin_point_index].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);



			FTransform final_transformation = FTransform::Identity;


			FVector Feet_Mid_Point = FVector(0, 0, 0);


			FVector Feet_Opposite_Mid_Point = FVector(0, 0, 0);



			int32 opposite_index = 0;

			if (origin_point_index == 0)
				opposite_index = spine_hit_pairs.Num() - 1;
			else
				opposite_index = 0;



			FVector parent_spine_hit_CS = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Spine_Point);




			float feet_difference_offset = parent_spine_hit_CS.Z;

			float Duck_Z = 0;


			//if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 2)
			{











				//				float Z_Offset = 10000000000;

				FVector Z_Offset = FVector(0, 0, 10000000000);

				FVector Z_Reverse_Offset = FVector(0, 0, -10000000000);

				



				float reversed_gravity = -1;

				if (origin_point_index == 0)
				{
					reversed_gravity = pelvis_adaptive_gravity;
				}
				else
				{
					reversed_gravity = chest_adaptive_gravity;
				}

				reversed_gravity = FMath::Clamp<float>((reversed_gravity * 0.5f) + 0.5f, 0, 1);

				//if (origin_point_index == 0)


				//if(reversed_gravity)





				if (dragon_bone_data.FeetBones.Num() == 0)
				{

					FTransform inv_transform = FTransform();
					inv_transform.SetLocation(spine_hit_pairs[origin_point_index].Parent_Spine_Point);
					inv_transform.SetLocation(owner_skel_w_transform.InverseTransformPosition(inv_transform.GetLocation()));
					Z_Offset = inv_transform.GetLocation();


					

				}

				{


					for (int32 i = 0; i < spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num(); i++)
					{

						FTransform inv_transform = FTransform();

						inv_transform.SetLocation(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[i]);

						inv_transform.SetLocation(owner_skel_w_transform.InverseTransformPosition(inv_transform.GetLocation()));

						if (inv_transform.GetLocation().Z < Z_Offset.Z)
						{
							Z_Offset = inv_transform.GetLocation();
						}

						//if (reversed_gravity)
						{
							if (inv_transform.GetLocation().Z > Z_Reverse_Offset.Z)
							{
								Z_Reverse_Offset = inv_transform.GetLocation();
							}
						}



					}

					//	Z_Offset = owner_skel_w_transform.TransformPosition(Z_Offset);

					//   if (atleast_one_hit)
					//	 GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "spine is hit " + FString::SanitizeFloat(Total_spine_heights[origin_point_index]));


				}

				//if(reversed_gravity)
				Z_Offset = FMath::Lerp<FVector>(Z_Offset, Z_Reverse_Offset, reversed_gravity);

				//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Elevation_ratio " + FString::SanitizeFloat(Elevation_ratio));


				//	Z_Offset = FVector(Z_Offset.X, Z_Offset.Y, FMath::Clamp(Z_Offset.Z, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z - Maximum_Formated_Dip_Height, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z + Maximum_Formated_Dip_Height));


				

				/*
				if (Use_Ducking_Feature)
				{
					if (origin_point_index == 0)
					{
						Duck_Z = (Duck_Pelvis_Highest_Point - Duck_Pelvis_Point).Size();
						Z_Offset.Z -= Duck_Z;
					}
					else
					{
						Duck_Z = (Duck_Chest_Highest_Point - Duck_Chest_Point).Size();
						Z_Offset.Z -= Duck_Z;
					}
				}
				*/

				if (Use_Ducking_Feature)
				{

					if (origin_point_index == 0)
					{
						Duck_Z = (Duck_Pelvis_Highest_Point - Duck_Pelvis_Point).Size() / component_scale;
					}
					else if (origin_point_index == (spine_Feet_pair.Num() - 1))
					{
						Duck_Z = (Duck_Chest_Highest_Point - Duck_Chest_Point).Size() / component_scale;
					}

					Duck_Z = FMath::Clamp<float>(Duck_Z, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z - Ducking_Limit, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z + Ducking_Limit);

				}


				if (origin_point_index == 0)
					Z_Offset = FVector(Z_Offset.X, Z_Offset.Y, FMath::Clamp(Z_Offset.Z, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z - Maximum_Formated_Dip_Height, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z + Maximum_Formated_Dip_Height));
				else
					Z_Offset = FVector(Z_Offset.X, Z_Offset.Y, FMath::Clamp(Z_Offset.Z, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z - Maximum_Formated_Dip_Height_Chest, owner_skel_w_transform.InverseTransformPosition(owning_skel->GetComponentLocation()).Z + Maximum_Formated_Dip_Height_Chest));


				

				//				Z_Offset = character_direction_vector*FMath::Clamp(Z_Offset.Z, owning_skel->GetComponentLocation().Z - Maximum_Formated_Dip_Height * component_scale, owning_skel->GetComponentLocation().Z);


				

				//feet_difference_offset = Z_Offset.Z;

				feet_difference_offset = FMath::Lerp<float>(feet_difference_offset, Z_Offset.Z, Accurate_Foot_Curve.GetRichCurve()->Eval(Character_Speed));


			}




			Feet_Mid_Point = parent_spine_hit_CS;


			if (accurate_feet_placement)
			{
				Feet_Mid_Point.Z = FMath::Lerp<float>(Feet_Mid_Point.Z, feet_difference_offset, Accurate_Foot_Curve.GetRichCurve()->Eval(Character_Speed));
			}







			float feet_difference_offset_opp = parent_spine_hit_CS.Z;





			if (spine_hit_pairs[opposite_index].RV_Feet_Hits.Num() == 2)
			{

				if (spine_hit_pairs[opposite_index].RV_FeetHit_Points[0].Z > spine_hit_pairs[opposite_index].RV_FeetHit_Points[1].Z)
					feet_difference_offset_opp = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[opposite_index].RV_FeetHit_Points[1]).Z;
				else
					feet_difference_offset_opp = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[opposite_index].RV_FeetHit_Points[0]).Z;

				//	if (atleast_one_hit)
				//		GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "spine is hit" + FString::SanitizeFloat(individual_feet_diff));

			}

			//PROBLEM CODE

			if (spine_hit_pairs[opposite_index].RV_Feet_Hits.Num() == 0)
				Feet_Opposite_Mid_Point = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Spine_Hit.ImpactPoint);
			else
				Feet_Opposite_Mid_Point = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[opposite_index].Parent_Spine_Point);

			//	if (accurate_feet_placement)
			//		Feet_Opposite_Mid_Point.Z = FMath::Lerp<float>(feet_difference_offset_opp, Feet_Opposite_Mid_Point.Z, FMath::Clamp<float>(FMath::Abs(spine_RotDifference[origin_point_index].Pitch * 0.05f), 0, 1));


			if (accurate_feet_placement)
			{

				float Feet_Opp_Temp = FMath::Lerp<float>(feet_difference_offset_opp, Feet_Opposite_Mid_Point.Z, FMath::Clamp<float>(FMath::Abs(spine_RotDifference[origin_point_index].Pitch * 0.05f), 0, 1));


				Feet_Opposite_Mid_Point.Z = FMath::Lerp<float>(Feet_Opposite_Mid_Point.Z, Feet_Opp_Temp, Accurate_Foot_Curve.GetRichCurve()->Eval(Character_Speed));
			}



			FRotator rotation_offset;

			if (origin_point_index == 0)
				rotation_offset = Pelvis_Rotation_Offset_Rotator;
			else if (origin_point_index == spine_Feet_pair.Num() - 1)
				rotation_offset = Chest_Rotation_Offset_Rotator;




			FVector new_location = FVector();


			FVector location_output = FVector();









			float Slanted_Height_Offset = 0;


			//			if (Root_Pitch_Value > 0)



		//	FVector feet_mid_world = owner_skel_w_transform.TransformPosition( Feet_Mid_Point);

		//	FVector feet_opp_world = owner_skel_w_transform.TransformPosition(Feet_Opposite_Mid_Point);



			float AC_Cross_Value = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z);

			if (flip_forward_and_right)
			{

				AC_Cross_Value = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z);


			}



			float OG_Cross_Value = (Feet_Opposite_Mid_Point.Z - Feet_Mid_Point.Z);






			//	if (origin_point_index == 0)
			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Mid Point Difference for " +FString::SanitizeFloat(OG_Cross_Value));


			if (-OG_Cross_Value > 0)
			{
				if (origin_point_index == 0)
				{
					Slanted_Height_Offset = Slanted_Height_Down_Offset;
				}
				else
				{
					Slanted_Height_Offset = Chest_Slanted_Height_Up_Offset;
				}

			}
			else
			{
				if (origin_point_index == 0)
				{
					Slanted_Height_Offset = -Slanted_Height_Up_Offset;
				}
				else
				{
					Slanted_Height_Offset = -Chest_Slanted_Height_Down_Offset;
				}



			}


			bool is_this_biped = false;


			if (spine_Feet_pair.Num() > 0)
			{

				if (spine_Feet_pair[0].Associated_Feet.Num() > 0 && spine_Feet_pair[1].Associated_Feet.Num() == 0)
				{

					is_this_biped = true;

				}

			}



			//	if ((Use_Fake_Chest_Rotations || Use_Fake_Pelvis_Rotations))

			if (AC_Cross_Value > 0)
			{
				if (origin_point_index == 0)
				{
					if (Use_Fake_Pelvis_Rotations || is_this_biped)
						Slanted_Height_Offset = Slanted_Height_Down_Offset * -1;
				}
				else
				{
					if (Use_Fake_Chest_Rotations)
						Slanted_Height_Offset = Chest_Slanted_Height_Down_Offset * -1;
				}
			}
			else
			{
				if (origin_point_index == 0)
				{
					if (Use_Fake_Pelvis_Rotations || is_this_biped)
						Slanted_Height_Offset = Slanted_Height_Up_Offset;
				}
				else
				{
					if (Use_Fake_Chest_Rotations)
						Slanted_Height_Offset = Chest_Slanted_Height_Up_Offset;
				}
			}


			if (!atleast_one_hit)
				Slanted_Height_Offset = 0;



			float pevlis_rot_temp = Pelvis_UpwardForwardRotation_Intensity * 0.5;
			float chest_rot_temp = Chest_ForwardRotation_Intensity * 0.5;


			if (AC_Cross_Value > 0)
			{
				if (Use_Fake_Pelvis_Rotations && origin_point_index == 0)
					pevlis_rot_temp = Pelvis_ForwardRotation_Intensity * 0.5;

				if (Use_Fake_Chest_Rotations && origin_point_index != 0)
					chest_rot_temp = Chest_ForwardRotation_Intensity * 0.5;
			}
			else
			{

				if (Use_Fake_Chest_Rotations && origin_point_index != 0)
					chest_rot_temp = Chest_UpwardForwardRotation_Intensity * 0.5;


			}

			if (OG_Cross_Value < 0)
			{
				if (!Use_Fake_Pelvis_Rotations && origin_point_index == 0)
					pevlis_rot_temp = Pelvis_ForwardRotation_Intensity * 0.5;

				if (!Use_Fake_Chest_Rotations && origin_point_index != 0)
					chest_rot_temp = Chest_UpwardForwardRotation_Intensity * 0.5;

			}



			if (origin_point_index == 0)
			{

				if (Use_Fake_Pelvis_Rotations || is_this_biped)
					pelvis_slope_direction = -AC_Cross_Value;
				else
					pelvis_slope_direction = OG_Cross_Value;
			}
			else
			{
				if (Use_Fake_Chest_Rotations || is_this_biped)
					chest_slope_direction = -AC_Cross_Value;
				else
					chest_slope_direction = OG_Cross_Value;

			}





			float Pelvis_ForwardRotation_Intensity_INPUT = pevlis_rot_temp;
			float Chest_ForwardRotation_Intensity_INPUT = chest_rot_temp;


			//	float Chest_ForwardRotation_Intensity_INPUT = Chest_ForwardRotation_Intensity;

			//	float Pelvis_ForwardRotation_Intensity_INPUT = Pelvis_ForwardRotation_Intensity;



			float Pelvis_SideRotation_Intensity_INPUT = Body_Rotation_Intensity;

			float Chest_SideRotation_Intensity_INPUT = Chest_SidewardRotation_Intensity;





			//	if(origin_point_index==0)
			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "slanted pelvis value " + FString::SanitizeFloat(Slanted_Height_Offset));



				/*
				if (origin_point_index == 0)
				{
					Slanted_Height_Offset = Slanted_Height_Up_Offset;
				}
				else
				{
					Slanted_Height_Offset = Chest_Slanted_Height_Up_Offset;
				}
				*/

				//	if(Use_Fake_Chest_Rotations)
				//		Slanted_Height_Offset = 



					//			GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Mid Point Difference for " + FString::SanitizeFloat(origin_point_index)+" = "+ FString::SanitizeFloat((Feet_Mid_Point.Z - Feet_Opposite_Mid_Point.Z)));



			float slop_tolerance = 0;

			if (origin_point_index == 0)
				slop_tolerance = Slope_Detection_Strength;
			else
				slop_tolerance = Chest_Slope_Detection_Strength;



			if (atleast_one_hit)
			{

				/*
				float across_ratio = 0;


				if (origin_point_index == 0)
				{
					across_ratio = FMath::Clamp<float>(FMath::Abs<float>(owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Pelvis_Slope_Detection_Strength, 0, 1);

					if (flip_forward_and_right)
					{
						across_ratio = FMath::Clamp<float>(FMath::Abs<float>(owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z) * Pelvis_Slope_Detection_Strength, 0, 1);

					}

				}
				else
				{

					across_ratio = FMath::Clamp<float>(FMath::Abs<float>(owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Chest_Slope_Detection_Strength, 0, 1);

					if (flip_forward_and_right)
					{
						across_ratio = FMath::Clamp<float>(FMath::Abs<float>(owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z) * Chest_Slope_Detection_Strength, 0, 1);

					}

				}


				Slanted_Height_Offset = Slanted_Height_Offset * across_ratio;
				*/


				//				GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Executing ImpactRotation..");


				if (origin_point_index == 0)
				{
					new_location = (Feet_Mid_Point + (character_direction_vector_CS * Total_spine_heights[origin_point_index]));




					if (Use_Fake_Pelvis_Rotations || is_this_biped)
					{

						new_location += character_direction_vector_CS * ((-AC_Cross_Value) * Slanted_Height_Offset);

					}
					else
					{
						new_location += character_direction_vector_CS * ((-OG_Cross_Value) * Slanted_Height_Offset);

						//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Slanted_Height_Offset " + FString::SanitizeFloat(Slanted_Height_Offset));

					}




					//	new_location = FVector(new_location.X, new_location.Y, FMath::Clamp(new_location.Z, (lerp_data).Z - Maximum_Formated_Dip_Height, (lerp_data).Z + Maximum_Formated_Dip_Height));


				}
				else
				{

					new_location = (Feet_Mid_Point + (character_direction_vector_CS * Total_spine_heights[origin_point_index]));

					if (Use_Fake_Chest_Rotations == false)
					{

						new_location += character_direction_vector_CS * (Feet_Mid_Point.Z - Feet_Opposite_Mid_Point.Z) * Slanted_Height_Offset * FMath::Clamp<float>((spine_median_result / 10) * slop_tolerance, 0, 1);



						FVector opposite_root_transform = owner_skel_w_transform.TransformPosition(MeshBases.GetComponentSpaceTransform(spine_Feet_pair[opposite_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer)).GetLocation());

						opposite_root_transform = owner_skel_w_transform.InverseTransformPosition(opposite_root_transform);

						FVector relative_root_offset = opposite_root_transform - owner_skel_w_transform.InverseTransformPosition(RootEffectorTransform.GetLocation());


						new_location = FVector(new_location.X, new_location.Y, FMath::Lerp<float>((lerp_data - relative_root_offset).Z, new_location.Z, Chest_Influence_Alpha));
					}
					else
					{
						//	float AC_Cross_Value = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z);
						new_location += character_direction_vector_CS * ((-AC_Cross_Value) * Slanted_Height_Offset * FMath::Clamp<float>((spine_median_result / 10) * slop_tolerance, 0, 1));
					}


					//	new_location = FVector(new_location.X, new_location.Y, FMath::Clamp(new_location.Z, (lerp_data).Z - Maximum_Formated_Dip_Height_Chest, (lerp_data).Z + Maximum_Formated_Dip_Height_Chest));




				}





				if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 2)
				{
					float individual_feet_diff = 0;


					/*
					if(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z > spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z)
					individual_feet_diff = spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z;
					else
						individual_feet_diff = spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z;
						*/


					FVector feet_0_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0]);

					FVector feet_1_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1]);

					//owner_skel_w_transform.InverseTransformPosition

					if ((origin_point_index == 0 && (Use_Fake_Pelvis_Rotations || is_this_biped)) || (origin_point_index > 0 && Use_Fake_Chest_Rotations))
					{
						feet_0_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point);
						feet_1_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point);
					}

					if (accurate_feet_placement == false)
					{
						feet_0_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point);
						feet_1_impact_cs = owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point);

					}


					if (feet_0_impact_cs.Z > feet_1_impact_cs.Z)
						individual_feet_diff = feet_0_impact_cs.Z - feet_1_impact_cs.Z;
					else
						individual_feet_diff = feet_1_impact_cs.Z - feet_0_impact_cs.Z;



					if (origin_point_index == 0)
						new_location = new_location - (character_direction_vector_CS * individual_feet_diff * -dip_multiplier);
					else
						new_location = new_location - (character_direction_vector_CS * individual_feet_diff * -chest_side_dip_multiplier);



				}



				new_location.Z = FMath::Lerp<float>(lerp_data.Z, new_location.Z, FMath::Clamp<float>(Adaptive_Alpha, 0, 1));

				if (Enable_Solver == false)
					new_location.Z = lerp_data.Z;




				//new_location.Z = lerp_data.Z;


				FVector saved_pos = new_location;




				//	FVector virtual_pelvic_position = (Feet_Mid_Point + character_direction_vector*(chest_distance) ) + character_direction_vector*FMath::Abs(lerp_data.Z - (Feet_Mid_Point.Z + chest_distance))*0.25F;



				FTransform mesh_transformy = FTransform::Identity;
				mesh_transformy.SetLocation(saved_pos);




				spine_LocDifference[origin_point_index] = character_direction_vector_CS * (owner_skel_w_transform.GetLocation().Z - mesh_transformy.GetLocation().Z);


				FTransform mesh_transform = FTransform::Identity;

				mesh_transform.SetLocation(spine_LocDifference[origin_point_index]);

				location_output = mesh_transformy.GetLocation();


			}
			else
			{


				new_location = (Feet_Mid_Point + character_direction_vector_CS * (Total_spine_heights[origin_point_index]));
				new_location.Z = lerp_data.Z;



				//				FTransform mesh_transform = FTransform::Identity;
				//				mesh_transform.SetLocation(FVector(lerp_data.X, lerp_data.Y, owning_skel->GetComponentLocation().Z - spine_LocDifference[origin_point_index].Z));


				location_output = lerp_data;

				/*
				FTransform mesh_transform = FTransform::Identity;
				mesh_transform.SetLocation(FVector(lerp_data.X, lerp_data.Y, owning_skel->GetComponentLocation().Z - spine_LocDifference[origin_point_index].Z));

				bool should_solving_persist = true;

				if (should_solving_persist)
				location_output = mesh_transform.GetLocation();
				else
				location_output = lerp_data;
				*/
			}



			final_transformation.SetLocation(location_output);



			new_location.X = lerp_data.X;
			new_location.Y = lerp_data.Y;

			final_transformation.SetLocation(FVector(new_location.X, new_location.Y, final_transformation.GetLocation().Z));


			FRotator position_Based_rot = FRotator(0);






			if (origin_point_index == 0)
			{





				float Intensifier_forward = 0;

				float Intensifier_side = 0;





				if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || (Use_Fake_Pelvis_Rotations || is_this_biped) || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
				{
					if (flip_forward_and_right)
					{
						float pelvis_swap_value = Pelvis_ForwardRotation_Intensity_INPUT;
						Pelvis_ForwardRotation_Intensity_INPUT = Pelvis_SideRotation_Intensity_INPUT;
						Pelvis_SideRotation_Intensity_INPUT = pelvis_swap_value;


					}
				}





				if (owning_skel->GetOwner())
				{


					//					Intensifier_forward = FMath::Clamp<float>((Feet_Mid_Point.Z - (Feet_Opposite_Mid_Point.Z)) * Pelvis_ForwardRotation_Intensity, -10000, 10000)  *-1;

					//					Intensifier_forward = FMath::Lerp<float>(Intensifier_forward, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));



					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || (Use_Fake_Pelvis_Rotations || is_this_biped) || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
					{

						if (spine_hit_pairs[origin_point_index].Parent_Front_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Back_Hit.bBlockingHit)
						{

							/*	if (flip_forward_and_right)
								{

									Intensifier_forward = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z)* Pelvis_SideRotation_Intensity_INPUT*0.5f;

								}
								else
							*/ {
								Intensifier_forward = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Pelvis_ForwardRotation_Intensity_INPUT;
							}


							//Intensifier_forward = ((spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - (spine_hit_pairs[origin_point_index].Parent_Back_Point).Z)* Pelvis_ForwardRotation_Intensity;

							//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "slante fake pelvis value " + FString::SanitizeFloat( Intensifier_forward) );

						}
						else
							Intensifier_forward = 0;



					}
					else
					{



						Intensifier_forward = FMath::Clamp<float>((Feet_Mid_Point.Z - (Feet_Opposite_Mid_Point.Z)) * Pelvis_ForwardRotation_Intensity_INPUT, -10000, 10000) * -1;


						

						//	Intensifier_forward = FMath::Lerp<float>(Intensifier_forward, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));


					}



					if (Use_Ducking_Feature)
					{
						Intensifier_forward -= Duck_Z* Pelvis_Crouch_Rotation_Intensity;
					}


					//	forward_direction = owner_skel_w_transform.InverseTransformPosition(owning_skel->GetOwner()->GetActorForwardVector()) * Intensifier_forward;



					//forward_direction = (owning_skel->GetOwner()->GetActorRightVector()) * Intensifier_forward;


					//forward_direction = UKismetMathLibrary::TransformDirection(owner_skel_w_transform, Forward_Direction_Vector) * Intensifier_forward;



					int direction = 1;


					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 0)
					{

						if (owner_skel_w_transform.InverseTransformPosition(spine_Transform_pairs[origin_point_index].Associated_Feet[0].GetLocation()).X > 0)
							direction = 1;
						else
							direction = -1;
					}



					//					Intensifier_side = (spine_hit_pairs[origin_point_index].RV_Feet_Hits[0].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_Feet_Hits[1].ImpactPoint.Z)*direction* Body_Rotation_Intensity *-1;



					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || (Use_Fake_Pelvis_Rotations || is_this_biped) || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
					{

						if (spine_hit_pairs[origin_point_index].Parent_Left_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Right_Hit.bBlockingHit)
						{
							/*if (flip_forward_and_right)
							{
								Intensifier_side = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z)* Pelvis_SideRotation_Intensity_INPUT*0.5f;
							}
							else
							*/
							{
								Intensifier_side = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z) * Pelvis_SideRotation_Intensity_INPUT * 0.5f;
							}

						}
						else
							Intensifier_side = 0;

					}
					else
					{
						//						Intensifier_side = FMath::Clamp<float>((Feet_Mid_Point.Z - (Feet_Opposite_Mid_Point.Z)) * Pelvis_ForwardRotation_Intensity, -10000, 10000)  *-1;

						Intensifier_side = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0]).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1]).Z) * direction * Pelvis_SideRotation_Intensity_INPUT * -1 * 0.5f;


						//	Intensifier_side = FMath::Lerp<float>(Intensifier_side, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));

					}


					//right_direction = owner_skel_w_transform.InverseTransformPosition(owning_skel->GetOwner()->GetActorRightVector())*Intensifier_side;





				}





				position_Based_rot.Yaw = final_rot.Yaw;





				spine_RotDifference[origin_point_index].Yaw = position_Based_rot.Yaw;

				//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Intensifier_forward : " + FString::SanitizeFloat(Intensifier_forward));



				if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || (Use_Fake_Pelvis_Rotations || is_this_biped) || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
				{

					position_Based_rot.Pitch = (Intensifier_side * -1);
					position_Based_rot.Roll = (Intensifier_forward * -1);

					//	position_Based_rot.Pitch = Intensifier_forward * -1;
					//	position_Based_rot.Roll =  Intensifier_side * -1;

				}
				else
				{

					if (flip_forward_and_right)
					{
						position_Based_rot.Pitch = (Intensifier_forward * 1) ;
						position_Based_rot.Roll = (Intensifier_side * 1);
					}
					else
					{
						position_Based_rot.Pitch = (Intensifier_side * -1) ;
						position_Based_rot.Roll = (Intensifier_forward * -1);
					}
				}



				position_Based_rot = FRotator(position_Based_rot.Quaternion() * rotation_offset.Quaternion());


				//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Pos Rot : " + (position_Based_rot).ToString());




				if (atleast_one_hit)
				{

					if (atleast_one_hit && position_Based_rot.Pitch < MaximumPitch && position_Based_rot.Pitch > MinimumPitch)
						spine_RotDifference[origin_point_index].Pitch = position_Based_rot.Pitch;
					else if (position_Based_rot.Pitch > MaximumPitch)
					{
						spine_RotDifference[origin_point_index].Pitch = MaximumPitch;
					}
					else if (position_Based_rot.Pitch < MinimumPitch)
					{
						spine_RotDifference[origin_point_index].Pitch = MinimumPitch;
					}




					if (atleast_one_hit && position_Based_rot.Roll < MaximumRoll && position_Based_rot.Roll > MinimumRoll)
						spine_RotDifference[origin_point_index].Roll = position_Based_rot.Roll;
					else if (position_Based_rot.Roll > MaximumRoll)
					{

						/*
						if(position_Based_rot.Roll>0)
						spine_RotDifference[origin_point_index].Roll = MaximumRoll;
						else
						spine_RotDifference[origin_point_index].Roll = MaximumRoll*-1;
						*/

						spine_RotDifference[origin_point_index].Roll = MaximumRoll;
					}
					else if (position_Based_rot.Roll < MinimumRoll)
					{
						spine_RotDifference[origin_point_index].Roll = MinimumRoll;
					}



				}



				//				OutputTransform.SetRotation(UKismetMathLibrary::RLerp(FRotator(OutputTransform.Rotator().Pitch, position_Based_rot.Yaw, OutputTransform.Rotator().Roll), spine_RotDifference[origin_point_index], delta_seconds_saved * Body_Rotation_Interpolation_Speed, true).Quaternion());


			}
			else if (origin_point_index == spine_Transform_pairs.Num() - 1)
			{



				float forward_intensity = 0;

				float right_intensity = 0;



				if (owning_skel->GetOwner())
				{








					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || Use_Fake_Chest_Rotations || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
					{
						if (flip_forward_and_right)
						{
							float chest_swap_value = Chest_ForwardRotation_Intensity_INPUT;
							Chest_ForwardRotation_Intensity_INPUT = Chest_SideRotation_Intensity_INPUT;
							Chest_SideRotation_Intensity_INPUT = chest_swap_value;


						}
					}








					//					forward_intensity = FMath::Clamp<float>(((Feet_Opposite_Mid_Point.Z) - Feet_Mid_Point.Z) * Chest_ForwardRotation_Intensity_INPUT, -10000, 10000)  *-1;

					//					forward_intensity = FMath::Lerp<float>(forward_intensity, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));




					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || Use_Fake_Chest_Rotations || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
					{

						if (spine_hit_pairs[origin_point_index].Parent_Front_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Back_Hit.bBlockingHit)
							forward_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Front_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Back_Point).Z) * Chest_ForwardRotation_Intensity_INPUT;
						else
							forward_intensity = 0;

					}
					else
					{


						forward_intensity = FMath::Clamp<float>(((Feet_Opposite_Mid_Point.Z) - Feet_Mid_Point.Z) * Chest_ForwardRotation_Intensity_INPUT, -10000, 10000) * -1;

						//	forward_intensity = FMath::Lerp<float>(forward_intensity, 0, FMath::Clamp<float>((spine_median_result / (10 * Slope_Detection_Strength)), 0, 1));



					}



					if (Use_Ducking_Feature)
					{
						forward_intensity -= Duck_Z * Chest_Crouch_Rotation_Intensity;
					}





					int direction = 1;

					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 0)
					{
						if (owner_skel_w_transform.InverseTransformPosition(spine_Transform_pairs[origin_point_index].Associated_Feet[0].GetLocation()).X > 0)
							direction = 1;
						else
							direction = -1;
					}




					//						right_intensity = (spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0].ImpactPoint.Z - spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1].ImpactPoint.Z)*direction* Body_Rotation_Intensity *-1;



					if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || Use_Fake_Chest_Rotations || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
					{

						if (spine_hit_pairs[origin_point_index].Parent_Left_Hit.bBlockingHit && spine_hit_pairs[origin_point_index].Parent_Right_Hit.bBlockingHit)
							right_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Left_Point).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].Parent_Right_Point).Z) * Chest_SideRotation_Intensity_INPUT * 0.5f;
						else
							right_intensity = 0;

					}
					else if(spine_hit_pairs[origin_point_index].RV_FeetHit_Points.Num() >= 2)
					{

						right_intensity = (owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[0]).Z - owner_skel_w_transform.InverseTransformPosition(spine_hit_pairs[origin_point_index].RV_FeetHit_Points[1]).Z) * direction * Chest_SideRotation_Intensity_INPUT * -1 * 0.5f;


					}

					//					right_direction = owner_skel_w_transform.InverseTransformVector(owning_skel->GetRightVector()) ;

					//right_direction = owning_skel->GetOwner()->GetActorRightVector()*right_intensity;





					//	forward_direction.Z = 0;
				}




				position_Based_rot.Yaw = final_rot.Yaw;
				//				position_Based_rot.Roll = final_rot.Roll;




			//	position_Based_rot.Roll = Roll_look_rot.Roll;



				if (spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() > 2 || Use_Fake_Chest_Rotations || spine_hit_pairs[origin_point_index].RV_Feet_Hits.Num() == 0)
				{

					position_Based_rot.Pitch = right_intensity * -1;
					position_Based_rot.Roll = forward_intensity * -1;

				}
				else
				{

					if (flip_forward_and_right)
					{
						position_Based_rot.Pitch = (forward_intensity * 1) ;
						position_Based_rot.Roll = (right_intensity * 1);
					}
					else
					{
						position_Based_rot.Pitch = (right_intensity * -1) ;
						position_Based_rot.Roll = (forward_intensity * -1);
					}
				}


				position_Based_rot = FRotator(position_Based_rot.Quaternion() * rotation_offset.Quaternion());



				spine_RotDifference[origin_point_index].Yaw = position_Based_rot.Yaw;
				//			position_Based_rot = UKismetMathLibrary::RLerp(FRotator(0, final_rot.Yaw, 0), position_Based_rot, atleast_one_hit, true);





				if (atleast_one_hit)
				{

					if (position_Based_rot.Pitch < MaximumPitch && position_Based_rot.Pitch > MinimumPitch)
						spine_RotDifference[origin_point_index].Pitch = position_Based_rot.Pitch;
					else if (position_Based_rot.Pitch > MaximumPitch)
					{
						spine_RotDifference[origin_point_index].Pitch = MaximumPitch;
					}
					else if (position_Based_rot.Pitch < MinimumPitch)
					{
						spine_RotDifference[origin_point_index].Pitch = MinimumPitch;
					}






					if (position_Based_rot.Roll < MaximumRoll && position_Based_rot.Roll > MinimumRoll)
						spine_RotDifference[origin_point_index].Roll = position_Based_rot.Roll;
					else if (position_Based_rot.Roll > MaximumRoll)
					{
						spine_RotDifference[origin_point_index].Roll = MaximumRoll;
					}
					else if (position_Based_rot.Roll < MinimumRoll)
					{
						spine_RotDifference[origin_point_index].Roll = MinimumRoll;
					}



				}


			}




			//OG			FRotator current_rot = FRotator(OutputTransform.Rotator().Pitch, final_rot.Yaw, OutputTransform.Rotator().Roll).GetNormalized();
			FRotator current_rot = FRotator(OutputTransform.Rotator().Pitch, OutputTransform.Rotator().Yaw, OutputTransform.Rotator().Roll).GetNormalized();



			//FRotator target_rot = FRotator(spine_RotDifference[origin_point_index].Pitch, final_rot.Yaw, spine_RotDifference[origin_point_index].Roll).GetNormalized();



//			FRotator target_rot = FRotator(UKismetMathLibrary::Lerp<float>( spine_RotDifference[origin_point_index].Pitch, spine_RotDifference[origin_point_index].Pitch,0,adapt), final_rot.Yaw, spine_RotDifference[origin_point_index].Roll).GetNormalized();

		//OG	FRotator target_rot = FRotator(UKismetMathLibrary::Lerp(0, spine_RotDifference[origin_point_index].Pitch, Adaptive_Alpha), final_rot.Yaw, UKismetMathLibrary::Lerp(0, spine_RotDifference[origin_point_index].Roll,Adaptive_Alpha) ).GetNormalized();


			FRotator target_rot = spine_RotDifference[origin_point_index].GetNormalized();


			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "target_rot Rot : " + (target_rot).ToString());


			//	target_rot = UKismetMathLibrary::RLerp(target_rot, FRotator(0, target_rot.Yaw, 0).GetNormalized(),Adaptive_Alpha,true);



				//			if (spine_RotDifference[origin_point_index].ContainsNaN() == false && current_rot.ContainsNaN() == false && target_rot.ContainsNaN() == false)
			{
				if (atleast_one_hit && Enable_Solver == true)
				{

					if (!(Ignore_Lerping || test_counter < 10))
						OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(current_rot, target_rot, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Rotation_Lerp * 0.05f).Quaternion().GetNormalized());
					else
						OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

				}
				else
				{
					target_rot = FRotator(0, target_rot.Yaw, 0);
					//					OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

					if (!(Ignore_Lerping || test_counter < 10))
						OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(current_rot, target_rot, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Rotation_Lerp * 0.05f).Quaternion().GetNormalized());
					else
						OutputTransform.SetRotation(target_rot.Quaternion().GetNormalized());

				}
			}


			//	OutputTransform.SetRotation(FRotator(0, target_rot.Yaw, 0).Quaternion());

				/*else
				{
				OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(current_rot, target_rot, owning_skel->GetWorld()->GetDeltaSeconds(), Shift_Speed).Quaternion().GetNormalized() );
				}*/

				//			OutputTransform.NormalizeRotation();


				//if (LineTraceInitialized == true)
			{

				//				FVector right_dir = UKismetMathLibrary::GetRightVector((spine_Transform_pairs[0].Spine_Involved.GetLocation() - spine_Transform_pairs[spine_Transform_pairs.Num() - 1].Spine_Involved.GetLocation()).GetSafeNormal().Rotation()) * 1;


				//				FVector right_dir = UKismetMathLibrary::GetRightVector((spine_Transform_pairs[0].Spine_Involved.GetLocation() - spine_Transform_pairs[spine_Transform_pairs.Num() - 1].Spine_Involved.GetLocation()).GetSafeNormal().Rotation()) * 1;


				FVector forward_dir_forward = owner_skel_w_transform.TransformVector(Forward_Direction_Vector);


				//	FVector forward_dir_forward = Forward_Direction_Vector;


				FVector right_dir_vector = FVector::CrossProduct(forward_dir_forward, owner_skel_w_transform.TransformVector(character_direction_vector_CS));

				//				FVector right_dir_vector = FVector::CrossProduct(forward_dir_forward, character_direction_vector);




				final_transformation.AddToTranslation(character_direction_vector_CS * (FMath::Abs(spine_RotDifference[origin_point_index].Roll * upward_push_side_rotation) * component_scale));





				final_transformation.SetLocation(owner_skel_w_transform.TransformPosition(final_transformation.GetLocation()));



				FVector spine_position = final_transformation.GetLocation();




				FVector roll_based_location = RotateAroundPoint(spine_position, right_dir_vector * -1, spine_hit_pairs[origin_point_index].Parent_Spine_Point, OutputTransform.Rotator().Roll);


				//	if(roll_based_location.Z< pitch_based_location.Z)


				//	if(Use_Fake_Pelvis_Rotations == false && origin_point_index == 0)
				//	final_transformation.SetLocation(roll_based_location);

				//	if (Use_Fake_Chest_Rotations == false && origin_point_index > 0)
				//		final_transformation.SetLocation(roll_based_location);

				if (Rotate_Around_Translate && complexity_type == ESolverComplexityPluginEnum::VE_Complex)
				{
					if (!(Use_Fake_Pelvis_Rotations || is_this_biped) && !Use_Fake_Chest_Rotations)
						final_transformation.SetLocation(roll_based_location);
				}







				float base_offset = 0;

				if (origin_point_index == 0)
					base_offset = Pelvis_Base_Offset;
				else if (origin_point_index == spine_Feet_pair.Num() - 1)
					base_offset = Chest_Base_Offset;




				if (Use_Ducking_Feature)
				{
						if (origin_point_index == 0)
						{
						//	float Duck_Z = (Duck_Pelvis_Highest_Point - Duck_Pelvis_Point).Size();
							base_offset -= Duck_Z;
						}
						else if(origin_point_index == (spine_Feet_pair.Num()-1) )
						{
						//	float Duck_Z = (Duck_Chest_Highest_Point - Duck_Chest_Point).Size();
							base_offset -= Duck_Z;							
						}
				}
				


				//	OutputTransform.SetRotation(OutputTransform.GetRotation()*FRotator(0, rotation_offset,0).Quaternion() );



				FVector offset_worldspace = owner_skel_w_transform.TransformVector(character_direction_vector_CS * (base_offset));


				FVector location_reset = lerp_data + offset_worldspace;


				if (origin_point_index == 0)
					final_transformation.SetLocation(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, FMath::Clamp(final_transformation.GetLocation().Z, (owner_skel_w_transform.TransformPosition(lerp_data)).Z - Maximum_Formated_Dip_Height, owner_skel_w_transform.TransformPosition(lerp_data).Z + Maximum_Formated_Dip_Height)));
				else
					final_transformation.SetLocation(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, FMath::Clamp(final_transformation.GetLocation().Z, (owner_skel_w_transform.TransformPosition(lerp_data)).Z - Maximum_Formated_Dip_Height_Chest, owner_skel_w_transform.TransformPosition(lerp_data).Z + Maximum_Formated_Dip_Height_Chest)));




				location_reset = owner_skel_w_transform.TransformPosition(location_reset);

				//	final_transformation = owner_skel_w_transform*final_transformation;

				if (OutputTransform.GetLocation() == FVector(0, 0, 0))
					OutputTransform.SetLocation(location_reset);


				if (atleast_one_hit)
				{


					//GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Inside Bounds.. ");



					if ((OutputTransform.GetLocation() - final_transformation.GetLocation()).Size() > 10000 * component_scale)
						OutputTransform.SetLocation(final_transformation.GetLocation() + offset_worldspace);
					else
						//						OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, OutputTransform.GetLocation().Z), final_transformation.GetLocation() + FVector(0, 0, base_offset), 1 - FMath::Exp(-2 * owning_skel->GetWorld()->GetDeltaSeconds()), FMath::Clamp<float>(1/FMath::Abs(OutputTransform.GetLocation().Z - final_transformation.GetLocation().Z) , 0.1,1)* Formatted_Location_Lerp * 20));
					{




						if (!(Ignore_Lerping || test_counter < 10))
							OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, OutputTransform.GetLocation().Z), final_transformation.GetLocation() + offset_worldspace, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
						else
							OutputTransform.SetLocation(final_transformation.GetLocation() + offset_worldspace);





					}


					//	`transform.position = Vector3.Lerp(transform.position, point, 1 - Mathf.Exp(-2 * Time.deltaTime)); `

					//						if (origin_point_index == 0)
					//							GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, "Executing ImpactRotation...... "+FString::SanitizeFloat(FMath::Clamp<float>(1 / FMath::Abs(OutputTransform.GetLocation().Z - final_transformation.GetLocation().Z), 0.001, 1)));
				}
				else
				{


					if ((OutputTransform.GetLocation() - location_reset).Size() > 10000 * component_scale)
						OutputTransform.SetLocation(location_reset);
					else
					{
						if (!(Ignore_Lerping || test_counter < 10))
							OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(OutputTransform.GetLocation()), location_reset, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
						else
						{
							OutputTransform.SetLocation(location_reset);
						}

					}



					//OutputTransform.SetLocation(lerp_data + FVector(0, 0, base_offset));
					//						OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo_Constant(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, OutputTransform.GetLocation().Z), lerp_data + FVector(0, 0, base_offset), owning_skel->GetWorld()->GetDeltaSeconds(), Formatted_Location_Lerp *10 ));
				}
			}



			/*Debug

			OutputTransform.SetRotation(FRotator(0, final_rot.Yaw, 0).Quaternion());
			if (origin_point_index == 0)
			OutputTransform.SetLocation(DebugEffectorTransform.GetLocation());
			else
			OutputTransform.SetLocation(DebugEffectorTransformTwo.GetLocation());
			*/
		}
		else
		{


			FTransform mesh_transform = owner_skel_w_transform;

			mesh_transform.SetLocation(MeshBases.GetComponentSpaceTransform(spine_Feet_pair[origin_point_index].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer)).GetLocation());

			FAnimationRuntime::ConvertCSTransformToBoneSpace(owner_skel_w_transform, MeshBases, mesh_transform, FCompactPoseBoneIndex(spine_Feet_pair[origin_point_index].Spine_Involved.BoneIndex), EBoneControlSpace::BCS_WorldSpace);


			float owner_bone_yaw = 0;

			if (owning_skel->GetOwner() != nullptr)
			{
				owner_bone_yaw = FRotator(owning_skel->GetOwner()->GetActorRotation()).Yaw;
			}

			float base_offset = 0;

			if (origin_point_index == 0)
				base_offset = Pelvis_Base_Offset * component_scale;
			else if (origin_point_index == spine_Feet_pair.Num() - 1)
				base_offset = Chest_Base_Offset * component_scale;

			FVector location_reset = lerp_data + character_direction_vector_CS * (base_offset);

			location_reset = owner_skel_w_transform.TransformPosition(location_reset);

			//	GEngine->AddOnScreenDebugMessage(-1, 0.01f, FColor::Red, " Outside Bounds.. ");


			if ((OutputTransform.GetLocation() - location_reset).Size() > 10000)
				OutputTransform.SetLocation(location_reset);
			else
			{
				if (!(Ignore_Lerping || test_counter < 10))
					OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(OutputTransform.GetLocation().X, OutputTransform.GetLocation().Y, OutputTransform.GetLocation().Z), location_reset, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp * 0.05f));
				else
					OutputTransform.SetLocation(location_reset);
			}


			if (!(Ignore_Lerping || test_counter < 10))
				OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(OutputTransform.Rotator(), FRotator(0, owner_bone_yaw, 0), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Rotation_Lerp * 0.05f).Quaternion().GetNormalized());
			else
				OutputTransform.SetRotation(FRotator(0, owner_bone_yaw, 0).Quaternion().GetNormalized());



			//			OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(OutputTransform.GetLocation(), mesh_transform.GetLocation(), delta_seconds_saved, Shift_Speed));
			//			OutputTransform.SetRotation(UKismetMathLibrary::RInterpTo(OutputTransform.Rotator(), FRotator(0, owner_bone_yaw, 0), delta_seconds_saved, Shift_Speed).Quaternion());

		}
	}
}





FVector FAnimNode_DragonSpineSolver::SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed)
{
	float t = delta_seconds_saved * speed;
	FVector v = (targetPosition - pastTargetPosition) / t;
	FVector f = pastPosition - pastTargetPosition + v;
	return targetPosition - v + f * FMath::Exp(-t);
}

FVector FAnimNode_DragonSpineSolver::RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle)
{
	FVector orbit_direction;

	orbit_direction = input_point - origin_point;

	FVector axis_dir = UKismetMathLibrary::RotateAngleAxis(orbit_direction, angle, forward_vector);

	FVector result_vector = input_point + (axis_dir - orbit_direction);

	return result_vector;

}


DragonSpineOutput FAnimNode_DragonSpineSolver::DragonSpineProcessor(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{

	//Declare output
	DragonSpineOutput output = DragonSpineOutput();

	FTransform CSEffectorTransform = EffectorTransform;
	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, CSEffectorTransform, spine_Feet_pair[spine_Feet_pair.Num() - 1].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_WorldSpace);

	FVector CSEffectorLocation = CSEffectorTransform.GetLocation();


	// Gather all bone indices between root and tip.
	const TArray<FCompactPoseBoneIndex> BoneIndices = Spine_Indices;


	//Supply bone indices array to output struct
	output.BoneIndices = BoneIndices;

	// Maximum length of skeleton segment at full extension . Default set to 0
	float MaximumReach = 0;
	//	float MaximumSecReach = 0;

	// Gather transforms and define total num of bones present
	int32 const NumTransforms = BoneIndices.Num();
	//	int32 const Num2Transforms = BoneSecIndices.Num();


	//Temp transform is the actual bone data used
	//Initialize numTransform amount of dummy data to temp_transforms
	output.temp_transforms.AddUninitialized(NumTransforms);


	//Declare are initialize dummy data for the chain struct array
	TArray<DragonChainLink> Chain;
	Chain.Reserve(NumTransforms);














	const FCompactPoseBoneIndex& TipBoneIndex = BoneIndices[BoneIndices.Num() - 1];
	const FTransform& BoneCSTransform_Local = MeshBases.GetComponentSpaceTransform(TipBoneIndex);

	FTransform offseted_Transform_Local = BoneCSTransform_Local;
	offseted_Transform_Local.SetLocation(owner_skel_w_transform.InverseTransformPosition(ChestEffectorTransform.GetLocation()));


	//Set root transform to 0th temp transform
	output.temp_transforms[BoneIndices.Num() - 1] = FBoneTransform(TipBoneIndex, offseted_Transform_Local);


	Chain.Add(DragonChainLink(offseted_Transform_Local.GetLocation(), 0.f, TipBoneIndex, (BoneIndices.Num() - 1) * 1));

	output.PelvicEffectorTransform = RootEffectorTransform;



	const FVector relative_diff = (Chain[0].Position - MeshBases.GetComponentSpaceTransform(TipBoneIndex).GetLocation());


	// starting from spine_01 to effector point , loop around ...
	for (int32 TransformIndex = NumTransforms - 2; TransformIndex > -1; TransformIndex--)
	{




		const FCompactPoseBoneIndex& BoneIndex = BoneIndices[TransformIndex];

		const FTransform& BoneCSTransform_T_Index = MeshBases.GetComponentSpaceTransform(BoneIndex);


		FTransform offseted_Transform_T_Index = BoneCSTransform_T_Index;
		offseted_Transform_T_Index.SetLocation(BoneCSTransform_T_Index.GetLocation() + relative_diff);


		FVector const BoneCSPosition = offseted_Transform_T_Index.GetLocation();

		output.temp_transforms[TransformIndex] = FBoneTransform(BoneIndex, offseted_Transform_T_Index);

		// Calculate the combined length of this segment of skeleton



		float const BoneLength = FVector::Dist(BoneCSPosition, output.temp_transforms[TransformIndex + 1].Transform.GetLocation());


		if (!FMath::IsNearlyZero(BoneLength))
		{
			//Then add chain link with the respective bone
			Chain.Add(DragonChainLink(BoneCSPosition, BoneLength, BoneIndex, TransformIndex));

			//Update maximum reach
			MaximumReach += BoneLength;

		}
		else
		{
			// Mark this transform as a zero length child of the last link.
			// It will inherit position and delta rotation from parent link.

			//Otherwise if bone length is zero , then add it to child zero indice array
			DragonChainLink& ParentLink = Chain[Chain.Num() - 1];
			ParentLink.ChildZeroLengthTransformIndices.Add(TransformIndex);
		}
	}


	float const Pelvic_Chest_distance = FVector::Dist(Chain[Chain.Num() - 1].Position, Chain[0].Position);



	//	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.2f;


	/*
	if (full_extend == false)
	{

	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) > (Pelvic_Chest_distance))
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(Pelvic_Chest_distance);
	}
	else
	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) < (MaximumReach)*0.80f)
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(MaximumReach)*0.80f;
	}

	}
	else*/
	{



		float MaximumReach_Temp = MaximumReach;

		if (complexity_type == ESolverComplexityPluginEnum::VE_Simple)
		{
			MaximumReach_Temp = Pelvic_Chest_distance;
		}


		//	if(Full_Extended_Spine)
		//	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.05f;
		//	else
		{

			float Max_Range_Limit = FMath::Clamp<float>((CSEffectorLocation - Chain[0].Position).Size() / MaximumReach_Temp, min_extension_ratio, max_extension_ratio);

			//float Max_Range_Limit = MaximumReach * min_extension_ratio;

			if (Full_Extended_Spine)
			{
				Max_Range_Limit = max_extension_ratio;
			}


			if (owning_skel->GetWorld())
			{
				//1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f)
				//Max_Range_Limit_Lerp = FMath::Lerp<float>(Max_Range_Limit_Lerp, Max_Range_Limit, delta_seconds_saved*5);

				if (Full_Extended_Spine)
				{
					Max_Range_Limit_Lerp = Max_Range_Limit;

				}
				else
				{
					Max_Range_Limit_Lerp = UKismetMathLibrary::FInterpTo(Max_Range_Limit_Lerp, Max_Range_Limit, owning_skel->GetWorld()->GetDeltaSeconds(), extension_switch_speed);

				}

			}

			CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal() * MaximumReach_Temp * Max_Range_Limit_Lerp;
		}



	}



	output.is_moved = false;
	int32 const NumChainLinks = Chain.Num();
	output.NumChainLinks = NumChainLinks;


	int customized_iterations = MaxIterations;

	if (complexity_type == ESolverComplexityPluginEnum::VE_Simple)
	{
		customized_iterations = 1;
	}



	//if(!ignore_between_rotations)
	{
		//TipBoneLink index is total number of bones minus 1 .... i dont know why...
		int32 const TipBoneLinkIndex = NumChainLinks - 1;

		// DISTANCE BW  TIP TO EFFECTOR LOCATION
		float Slop = FVector::Dist(Chain[TipBoneLinkIndex].Position, CSEffectorLocation);

		// IF SLOP > PRECISION (EG:- 0.5) THEN PROCEED WITH THE CALCULATION
		if (Slop > Precision)
		{
			// Set tip bone at end effector location.
			Chain[TipBoneLinkIndex].Position = CSEffectorLocation;

			int32 IterationCount = 0;
			while ((Slop > Precision) && (IterationCount++ < customized_iterations))
			{
				// "Forward Reaching" stage - adjust bones from end effector.
				for (int32 LinkIndex = TipBoneLinkIndex - 1; LinkIndex > 0; LinkIndex--)
				{

					//IN THE FR-STAGE , WE TRAVEL FROM TIP POINT INDEX TILL THE ROOT

					DragonChainLink& CurrentLink = Chain[LinkIndex];
					DragonChainLink const& ChildLink = Chain[LinkIndex + 1];


					//Current link position = child position + (direction from child to current link)*boneLength
					CurrentLink.Position = (ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);

				}

				// "Backward Reaching" stage - adjust bones from root.
				for (int32 LinkIndex = 1; LinkIndex < TipBoneLinkIndex; LinkIndex++)
				{

					//IN THE BR-STAGE , WE TRAVEL FROM SPINE_01 TO TIP BONE INDEX


					DragonChainLink const& ParentLink = Chain[LinkIndex - 1];

					DragonChainLink& CurrentLink = Chain[LinkIndex];

					{
						CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
					}

				}

				// Re-check distance between tip location and effector location
				// Since we're keeping tip on top of effector location, check with its parent bone.
				Slop = FMath::Abs(Chain[TipBoneLinkIndex].Length - FVector::Dist(Chain[TipBoneLinkIndex - 1].Position, CSEffectorLocation));
			}

			// Place tip bone based on how close we got to target.
			{
				DragonChainLink const& ParentLink = Chain[TipBoneLinkIndex - 1];
				DragonChainLink& CurrentLink = Chain[TipBoneLinkIndex];

				CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
			}

			output.is_moved = true;
		}
	}


	output.chain_data = Chain;


	return output;

}

DragonSpineOutput FAnimNode_DragonSpineSolver::DragonSpineProcessor_Direct(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	//Declare output
	DragonSpineOutput output = DragonSpineOutput();

	FTransform CSEffectorTransform = EffectorTransform;


	//GEngine->AddOnScreenDebugMessage(-1, 0.025f, FColor::Red, " Spine[0] : " + spine_Feet_pair[0].Spine_Involved.BoneName.ToString()+" Spine[1] : "+ spine_Feet_pair[spine_Feet_pair.Num()-1].Spine_Involved.BoneName.ToString());

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, CSEffectorTransform, spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_WorldSpace);

	FVector CSEffectorLocation = CSEffectorTransform.GetLocation();


	// Gather all bone indices between root and tip.
	const TArray<FCompactPoseBoneIndex> BoneIndices = Spine_Indices;


	//Supply bone indices array to output struct
	output.BoneIndices = BoneIndices;

	// Maximum length of skeleton segment at full extension . Default set to 0
	float MaximumReach = 0;
	//	float MaximumSecReach = 0;

	// Gather transforms and define total num of bones present
	int32 const NumTransforms = BoneIndices.Num();
	//	int32 const Num2Transforms = BoneSecIndices.Num();


	//Temp transform is the actual bone data used
	//Initialize numTransform amount of dummy data to temp_transforms
	output.temp_transforms.AddUninitialized(NumTransforms);


	//Declare are initialize dummy data for the chain struct array
	TArray<DragonChainLink> Chain;
	Chain.Reserve(NumTransforms);















	float Original_Height_Val = 0;


	float Terrain_Height_Val = 0;


	// Start with Root Bone
	{
		const FCompactPoseBoneIndex& RootBoneIndex = BoneIndices[0];
		const FTransform& BoneCSTransform = MeshBases.GetComponentSpaceTransform(RootBoneIndex);

		FVector Bone_World = owner_skel_w_transform.TransformPosition(BoneCSTransform.GetLocation());

		FVector Bone_World_Root = owner_skel_w_transform.TransformPosition(FVector(BoneCSTransform.GetLocation().X, BoneCSTransform.GetLocation().Y, 0));


		Original_Height_Val = (Bone_World - Bone_World_Root).Size();


		//	Terrain_Height_Val = (RootEffectorTransform.GetLocation() - spine_hit_pairs[0].Parent_Spine_Point).Size();
		Terrain_Height_Val = (Bone_World - spine_hit_pairs[0].Parent_Spine_Point).Size();



		//Set root transform to 0th temp transform
		output.temp_transforms[0] = FBoneTransform(RootBoneIndex, BoneCSTransform);

		//	if (spine_hit_pairs[0].RV_FeetHit_Points[0].bBlockingHit && spine_hit_pairs[0].RV_FeetHit_Points[1].bBlockingHit)
		{

			Chain.Add(DragonChainLink(owner_skel_w_transform.InverseTransformPosition(RootEffectorTransform.GetLocation()), 0.f, RootBoneIndex, 0));


			output.PelvicEffectorTransform = RootEffectorTransform;

		}

	}


	float Fabrik_Height_Offet = Terrain_Height_Val - Original_Height_Val;


	//	GEngine->AddOnScreenDebugMessage(-1, 0.025f, FColor::Red, " Fabrik_Height_Offet " + FString::SanitizeFloat(Fabrik_Height_Offet));

	//	GEngine->AddOnScreenDebugMessage(-1, 0.025f, FColor::Red, " Terrain_Height_Val "+ FString::SanitizeFloat(Terrain_Height_Val)+" Original_Height_Val "+ FString::SanitizeFloat(Original_Height_Val) );

		// starting from spine_01 to effector point , loop around ...
	for (int32 TransformIndex = 1; TransformIndex < NumTransforms; TransformIndex++)
	{


		const FCompactPoseBoneIndex& BoneIndex = BoneIndices[TransformIndex];

		const FTransform& BoneCSTransform = MeshBases.GetComponentSpaceTransform(BoneIndex);
		FVector const BoneCSPosition = BoneCSTransform.GetLocation();

		FTransform parent_trans = MeshBases.GetComponentSpaceTransform(BoneIndices[TransformIndex - 1]);

		parent_trans = MeshBases.GetComponentSpaceTransform(BoneIndices[TransformIndex - 1]);


		const FTransform& ParentCSTransform = parent_trans;


		output.temp_transforms[TransformIndex] = FBoneTransform(BoneIndex, BoneCSTransform);


		/*
		* Calculate total distance from current bone to parent bone
		*/
		float const BoneLength = FVector::Dist(BoneCSPosition, ParentCSTransform.GetLocation());

		//if bone length is not zero
		if (!FMath::IsNearlyZero(BoneLength))
		{
			//Then add chain link with the respective bone
			Chain.Add(DragonChainLink(BoneCSPosition - FVector(0, 0, Fabrik_Height_Offet), BoneLength, BoneIndex, TransformIndex));

			//Update maximum reach
			MaximumReach += BoneLength;

		}
		else
		{
			// Mark this transform as a zero length child of the last link.
			// It will inherit position and delta rotation from parent link.

			//Otherwise if bone length is zero , then add it to child zero indice array
			DragonChainLink& ParentLink = Chain[Chain.Num() - 1];
			ParentLink.ChildZeroLengthTransformIndices.Add(TransformIndex);
		}
	}

	//	float const Pelvic_Chest_distance = FVector::Dist(MeshBases.GetComponentSpaceTransform(BoneIndices[0]).GetLocation() , MeshBases.GetComponentSpaceTransform(BoneIndices[BoneIndices.Num()-1]).GetLocation());

	float const Pelvic_Chest_distance = FVector::Dist(Chain[Chain.Num() - 1].Position, Chain[0].Position);



	//	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.2f;


	/*
	if (full_extend == false)
	{

	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) > (Pelvic_Chest_distance))
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(Pelvic_Chest_distance);
	}
	else
	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) < (MaximumReach)*0.80f)
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(MaximumReach)*0.80f;
	}

	}
	else*/
	{



		float MaximumReach_Temp = MaximumReach;

		if (complexity_type == ESolverComplexityPluginEnum::VE_Simple)
		{
			MaximumReach_Temp = Pelvic_Chest_distance;
		}


		//	if(Full_Extended_Spine)
		//	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.05f;
		//	else
		{

			float Max_Range_Limit = FMath::Clamp<float>((CSEffectorLocation - Chain[0].Position).Size() / MaximumReach_Temp, min_extension_ratio, max_extension_ratio);

			//float Max_Range_Limit = MaximumReach * min_extension_ratio;

			if (Full_Extended_Spine)
			{
				Max_Range_Limit = max_extension_ratio;
			}


			if (owning_skel->GetWorld())
			{
				//1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f)
				//Max_Range_Limit_Lerp = FMath::Lerp<float>(Max_Range_Limit_Lerp, Max_Range_Limit, delta_seconds_saved*5);

				if (Full_Extended_Spine)
				{
					Max_Range_Limit_Lerp = Max_Range_Limit;

				}
				else
				{
					Max_Range_Limit_Lerp = UKismetMathLibrary::FInterpTo(Max_Range_Limit_Lerp, Max_Range_Limit, owning_skel->GetWorld()->GetDeltaSeconds(), extension_switch_speed);

				}

			}

			CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal() * MaximumReach_Temp * Max_Range_Limit_Lerp;
		}



	}


	output.is_moved = false;
	int32 const NumChainLinks = Chain.Num();
	output.NumChainLinks = NumChainLinks;


	//	GEngine->AddOnScreenDebugMessage(-1, 0.025f, FColor::Red, " DIRECT ");

	int customized_iterations = MaxIterations;

	if (complexity_type == ESolverComplexityPluginEnum::VE_Simple || is_single_spine)
	{
		customized_iterations = 1;
	}


	if (NumChainLinks > 1)
	{
		//TipBoneLink index is total number of bones minus 1 .... i dont know why...
		int32 const TipBoneLinkIndex = NumChainLinks - 1;

		// DISTANCE BW  TIP TO EFFECTOR LOCATION
		float Slop = FVector::Dist(Chain[TipBoneLinkIndex].Position, CSEffectorLocation);

		// IF SLOP > PRECISION (EG:- 0.5) THEN PROCEED WITH THE CALCULATION
		if (Slop > Precision && (TipBoneLinkIndex > 0))
		{
			// Set tip bone at end effector location.
			Chain[TipBoneLinkIndex].Position = CSEffectorLocation;

			int32 IterationCount = 0;
			while ((Slop > Precision) && (IterationCount++ < customized_iterations))
			{
				// "Forward Reaching" stage - adjust bones from end effector.
				for (int32 LinkIndex = TipBoneLinkIndex - 1; LinkIndex > 0; LinkIndex--)
				{

					//IN THE FR-STAGE , WE TRAVEL FROM TIP POINT INDEX TILL THE ROOT

					DragonChainLink& CurrentLink = Chain[LinkIndex];
					DragonChainLink const& ChildLink = Chain[LinkIndex + 1];


					//Current link position = child position + (direction from child to current link)*boneLength
					CurrentLink.Position = (ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);

				}

				// "Backward Reaching" stage - adjust bones from root.
				for (int32 LinkIndex = 1; LinkIndex < TipBoneLinkIndex; LinkIndex++)
				{

					//IN THE BR-STAGE , WE TRAVEL FROM SPINE_01 TO TIP BONE INDEX


					DragonChainLink const& ParentLink = Chain[LinkIndex - 1];

					DragonChainLink& CurrentLink = Chain[LinkIndex];

					{
						CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
					}

				}

				// Re-check distance between tip location and effector location
				// Since we're keeping tip on top of effector location, check with its parent bone.
				Slop = FMath::Abs(Chain[TipBoneLinkIndex].Length - FVector::Dist(Chain[TipBoneLinkIndex - 1].Position, CSEffectorLocation));
			}

			// Place tip bone based on how close we got to target.
			{
				DragonChainLink const& ParentLink = Chain[TipBoneLinkIndex - 1];
				DragonChainLink& CurrentLink = Chain[TipBoneLinkIndex];

				CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
			}

			output.is_moved = true;
		}
	}


	output.chain_data = Chain;


	return output;
}





















DragonSpineOutput FAnimNode_DragonSpineSolver::DragonSpineProcessor_Snake(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{
	//Declare output
	DragonSpineOutput output = DragonSpineOutput();

	FTransform CSEffectorTransform = EffectorTransform;


	//GEngine->AddOnScreenDebugMessage(-1, 0.025f, FColor::Red, " Spine[0] : " + spine_Feet_pair[0].Spine_Involved.BoneName.ToString()+" Spine[1] : "+ spine_Feet_pair[spine_Feet_pair.Num()-1].Spine_Involved.BoneName.ToString());

	FAnimationRuntime::ConvertBoneSpaceTransformToCS(owner_skel_w_transform, MeshBases, CSEffectorTransform, spine_Feet_pair[0].Spine_Involved.GetCompactPoseIndex(*SavedBoneContainer), EBoneControlSpace::BCS_WorldSpace);

	FVector CSEffectorLocation = CSEffectorTransform.GetLocation();


	// Gather all bone indices between root and tip.
	const TArray<FCompactPoseBoneIndex> BoneIndices = Spine_Indices;


	//Supply bone indices array to output struct
	output.BoneIndices = BoneIndices;

	// Maximum length of skeleton segment at full extension . Default set to 0
	float MaximumReach = 0;
	//	float MaximumSecReach = 0;

	// Gather transforms and define total num of bones present
	int32 const NumTransforms = BoneIndices.Num();
	//	int32 const Num2Transforms = BoneSecIndices.Num();


	//Temp transform is the actual bone data used
	//Initialize numTransform amount of dummy data to temp_transforms
	output.temp_transforms.AddUninitialized(NumTransforms);


	//Declare are initialize dummy data for the chain struct array
	TArray<DragonChainLink> Chain;
	Chain.Reserve(NumTransforms);














	// Start with Root Bone
	{
		const FCompactPoseBoneIndex& RootBoneIndex = BoneIndices[0];
		const FTransform& BoneCSTransform = MeshBases.GetComponentSpaceTransform(RootBoneIndex);


		//Set root transform to 0th temp transform
		output.temp_transforms[0] = FBoneTransform(RootBoneIndex, BoneCSTransform);

		//	if (spine_hit_pairs[0].RV_FeetHit_Points[0].bBlockingHit && spine_hit_pairs[0].RV_FeetHit_Points[1].bBlockingHit)
		{

			Chain.Add(DragonChainLink(owner_skel_w_transform.InverseTransformPosition(RootEffectorTransform.GetLocation()), 0.f, RootBoneIndex, 0));

			output.PelvicEffectorTransform = RootEffectorTransform;

			//	snake_spine_positions[0] = root_cs_position;


		}

	}


	// starting from spine_01 to effector point , loop around ...
	for (int32 TransformIndex = 1; TransformIndex < NumTransforms; TransformIndex++)
	{


		const FCompactPoseBoneIndex& BoneIndex = BoneIndices[TransformIndex];

		const FTransform& BoneCSTransform = MeshBases.GetComponentSpaceTransform(BoneIndex);
		FVector const BoneCSPosition = BoneCSTransform.GetLocation();

		FTransform parent_trans = MeshBases.GetComponentSpaceTransform(BoneIndices[TransformIndex - 1]);

		parent_trans = MeshBases.GetComponentSpaceTransform(BoneIndices[TransformIndex - 1]);


		const FTransform& ParentCSTransform = parent_trans;


		output.temp_transforms[TransformIndex] = FBoneTransform(BoneIndex, BoneCSTransform);


		/*
		* Calculate total distance from current bone to parent bone
		*/
		float const BoneLength = FVector::Dist(BoneCSPosition, ParentCSTransform.GetLocation());

		//if bone length is not zero
		if (!FMath::IsNearlyZero(BoneLength))
		{
			//Then add chain link with the respective bone
			Chain.Add(DragonChainLink(BoneCSPosition, BoneLength, BoneIndex, TransformIndex));

			//	snake_spine_positions[TransformIndex] = BoneCSPosition;


				//Update maximum reach
			MaximumReach += BoneLength;

		}
		else
		{
			// Mark this transform as a zero length child of the last link.
			// It will inherit position and delta rotation from parent link.

			//Otherwise if bone length is zero , then add it to child zero indice array
			DragonChainLink& ParentLink = Chain[Chain.Num() - 1];
			ParentLink.ChildZeroLengthTransformIndices.Add(TransformIndex);
		}
	}

	//	float const Pelvic_Chest_distance = FVector::Dist(MeshBases.GetComponentSpaceTransform(BoneIndices[0]).GetLocation() , MeshBases.GetComponentSpaceTransform(BoneIndices[BoneIndices.Num()-1]).GetLocation());

	float const Pelvic_Chest_distance = FVector::Dist(Chain[Chain.Num() - 1].Position, Chain[0].Position);



	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal() * Pelvic_Chest_distance;



	//	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.2f;


	/*
	if (full_extend == false)
	{

	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) > (Pelvic_Chest_distance))
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(Pelvic_Chest_distance);
	}
	else
	if (FVector::Dist(Chain[0].Position, CSEffectorLocation) < (MaximumReach)*0.80f)
	{
	CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*(MaximumReach)*0.80f;
	}

	}
	else*/
	{
		//		CSEffectorLocation = Chain[0].Position + (CSEffectorLocation - Chain[0].Position).GetSafeNormal()*MaximumReach*1.05f;
	}


	output.is_moved = false;
	int32 const NumChainLinks = Chain.Num();
	output.NumChainLinks = NumChainLinks;



	int customized_iterations = MaxIterations;
	/*
	if (complexity_type == ESolverComplexityPluginEnum::VE_Simple)
	{
		customized_iterations = 1;
	}
	*/

	if (NumChainLinks > 1)
	{
		//TipBoneLink index is total number of bones minus 1 .... i dont know why...
		int32 const TipBoneLinkIndex = NumChainLinks - 1;

		// DISTANCE BW  TIP TO EFFECTOR LOCATION
		float Slop = FVector::Dist(Chain[TipBoneLinkIndex].Position, CSEffectorLocation);

		// IF SLOP > PRECISION (EG:- 0.5) THEN PROCEED WITH THE CALCULATION
		if (Slop > Precision && TipBoneLinkIndex > 0)
		{
			// Set tip bone at end effector location.
			Chain[TipBoneLinkIndex].Position = CSEffectorLocation;

			int32 IterationCount = 0;
			while ((Slop > Precision) && (IterationCount++ < customized_iterations))
			{
				// "Forward Reaching" stage - adjust bones from end effector.
				for (int32 LinkIndex = TipBoneLinkIndex - 1; LinkIndex > 0; LinkIndex--)
				{

					//IN THE FR-STAGE , WE TRAVEL FROM TIP POINT INDEX TILL THE ROOT

					DragonChainLink& CurrentLink = Chain[LinkIndex];
					DragonChainLink const& ChildLink = Chain[LinkIndex + 1];


					//Current link position = child position + (direction from child to current link)*boneLength
				//	CurrentLink.Position = (ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);

					//CurrentLink.Position = (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);





					if (atleast_one_hit && Enable_Solver)
					{

						/*
						if (((ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length) - snake_spine_positions[LinkIndex]).Size() > 1000 * component_scale)
						{

							CurrentLink.Position = (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);
							snake_spine_positions[LinkIndex] = CurrentLink.Position;

						}
						else
						{
							if (!Enable_Snake_Interpolation || (test_counter < 200))
								snake_spine_positions[LinkIndex] = (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);
							else
							{

								FVector const lerp_result = (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);

								snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(snake_spine_positions[LinkIndex], lerp_result, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Snake_Joint_Speed * 0.05f);


								//	snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(snake_spine_positions[LinkIndex], (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Snake_Joint_Speed * 0.05f);

							}



							CurrentLink.Position = snake_spine_positions[LinkIndex];

						}
						*/

						CurrentLink.Position = (ChildLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);

					}
					else
					{
						CurrentLink.Position = (ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length);
						//	snake_spine_positions[LinkIndex] = CurrentLink.Position;


					}


					//						snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(snake_spine_positions[LinkIndex], CurrentLink.Position = (ChildLink.Position + (CurrentLink.Position - ChildLink.Position).GetUnsafeNormal() * ChildLink.Length), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Snake_Joint_Speed* 0.05f);

				//	CurrentLink.Position = spine_between_offseted_transforms[LinkIndex-1];

				}

				// "Backward Reaching" stage - adjust bones from root.
				for (int32 LinkIndex = 1; LinkIndex < TipBoneLinkIndex; LinkIndex++)
				{

					//IN THE BR-STAGE , WE TRAVEL FROM SPINE_01 TO TIP BONE INDEX


					DragonChainLink const& ParentLink = Chain[LinkIndex - 1];

					DragonChainLink& CurrentLink = Chain[LinkIndex];

					{
						//	CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
					}



					if (atleast_one_hit && Enable_Solver)
					{
						/*
						if (((ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length) - snake_spine_positions[LinkIndex]).Size() > 1000 * component_scale)
						{

							CurrentLink.Position = (ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
							snake_spine_positions[LinkIndex] = CurrentLink.Position;

						}
						else
						{

							//!snake_spine_positions[LinkIndex].Equals(FVector(-1.0101f, -1.0f, -1.0f))


							if (!Enable_Snake_Interpolation || (test_counter < 200))
								snake_spine_positions[LinkIndex] = (ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
							else
							{


								FVector const lerp_result = (ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);

								snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(snake_spine_positions[LinkIndex], lerp_result, 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Snake_Joint_Speed * 0.05f);

								//	snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(snake_spine_positions[LinkIndex], (ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Snake_Joint_Speed * 0.05f);

							}

							CurrentLink.Position = snake_spine_positions[LinkIndex];
						}
						*/

						CurrentLink.Position = (ParentLink.Position + (spine_between_offseted_transforms[LinkIndex - 1] - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);


					}
					else
					{

						CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
						//	snake_spine_positions[LinkIndex] = CurrentLink.Position;



					}



					//					OutputTransform.SetLocation(UKismetMathLibrary::VInterpTo(FVector(final_transformation.GetLocation().X, final_transformation.GetLocation().Y, OutputTransform.GetLocation().Z), final_transformation.GetLocation() + FVector(0, 0, base_offset), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()), Formatted_Location_Lerp* 0.05f));


										//CurrentLink.Position = spine_between_offseted_transforms[LinkIndex-1];

				}

				// Re-check distance between tip location and effector location
				// Since we're keeping tip on top of effector location, check with its parent bone.
				Slop = FMath::Abs(Chain[TipBoneLinkIndex].Length - FVector::Dist(Chain[TipBoneLinkIndex - 1].Position, CSEffectorLocation));
			}

			// Place tip bone based on how close we got to target.
			{
				DragonChainLink const& ParentLink = Chain[TipBoneLinkIndex - 1];
				DragonChainLink& CurrentLink = Chain[TipBoneLinkIndex];

				CurrentLink.Position = (ParentLink.Position + (CurrentLink.Position - ParentLink.Position).GetUnsafeNormal() * CurrentLink.Length);
			}

			output.is_moved = true;
		}






	}


	//	if( !(!Enable_Snake_Interpolation || (test_counter < 200) ))
	{
		for (int32 LinkIndex = 0; LinkIndex < Chain.Num(); LinkIndex++)
		{

			//if (Enable_Snake_Interpolation)
			//	snake_spine_positions[LinkIndex] = UKismetMathLibrary::VInterpTo(FVector(Chain[LinkIndex].Position.X, Chain[LinkIndex].Position.Y, snake_spine_positions[LinkIndex].Z), Chain[LinkIndex].Position, owning_skel->GetWorld()->GetDeltaSeconds(), Snake_Joint_Speed*10);
			//else
			snake_spine_positions[LinkIndex] = Chain[LinkIndex].Position;
			//spine_between_offseted_transforms[i - 1] += character_direction_vector_CS*spine_between_heights[i - 1];

			//	Chain[LinkIndex].Position = snake_spine_positions[LinkIndex];
		}
	}

	output.chain_data = Chain;


	return output;
}









void FAnimNode_DragonSpineSolver::OrthoNormalize(FVector& Normal, FVector& Tangent)
{
	Normal = Normal.GetSafeNormal();
	Tangent = Tangent - (Normal * FVector::DotProduct(Tangent, Normal));
	Tangent = Tangent.GetSafeNormal();
}

FQuat FAnimNode_DragonSpineSolver::LookRotation(FVector lookAt, FVector upDirection) {

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


DragonSpineOutput FAnimNode_DragonSpineSolver::Dragon_Transformation(DragonSpineOutput& input, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms)
{



	//	if (input.is_moved)
	{
		// First step: update bone transform positions from chain links.
		for (int32 LinkIndex = 0; LinkIndex < input.NumChainLinks; LinkIndex++)
		{
			//		if (LinkIndex != 0)
			{

				DragonChainLink const& ChainLink = input.chain_data[LinkIndex];






				FTransform chainTransform = FTransform::Identity;


				if (is_snake)
				{

					chainTransform.SetLocation(snake_spine_positions[LinkIndex]);
				}
				else
				{
					chainTransform.SetLocation(ChainLink.Position);

				}


				//FVector transposed_position = ComponentBoneTransform.InverseTransformPosition(ChainLink.Position);

				//				OutBoneTransforms[ChainLink.TransformIndex].Transform.SetTranslation(chainTransform.GetLocation());

				input.temp_transforms[ChainLink.TransformIndex].Transform.SetTranslation(chainTransform.GetLocation());


				//input.temp_transforms[ChainLink.TransformIndex].Transform.SetTranslation(UKismetMathLibrary::VInterpTo( input.temp_transforms[ChainLink.TransformIndex].Transform.GetLocation(),chainTransform.GetLocation(), 1 - FMath::Exp(-Smooth_Factor * owning_skel->GetWorld()->GetDeltaSeconds()),Formatted_Location_Lerp));


//				input.temp_transforms[ChainLink.TransformIndex].Transform.SetTranslation(chainTransform.GetLocation());

				// If there are any zero length children, update position of those
				int32 const NumChildren = ChainLink.ChildZeroLengthTransformIndices.Num();
				for (int32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
				{
					//					OutBoneTransforms[ChainLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform.SetTranslation(ChainLink.Position);
					input.temp_transforms[ChainLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform.SetTranslation(ChainLink.Position);
				}

			}

		}




		bool is_chain_swapped = false;

		do
		{
			is_chain_swapped = false;

			for (int i = 1; i < input.chain_data.Num(); i++)
			{
				if (input.chain_data[i - 1].BoneIndex > input.chain_data[i].BoneIndex)
				{
					DragonChainLink temp = input.chain_data[i - 1];
					input.chain_data[i - 1] = input.chain_data[i];
					input.chain_data[i] = temp;

					is_chain_swapped = true;
				}

			}
		} while (is_chain_swapped);



		// FABRIK algorithm - re-orientation of bone local axes after translation calculation
		for (int32 LinkIndex = 0; LinkIndex < input.NumChainLinks - 1; LinkIndex++)
		{
			DragonChainLink const& CurrentLink = input.chain_data[LinkIndex];
			DragonChainLink const& ChildLink = input.chain_data[LinkIndex + 1];

			// Calculate pre-translation vector between this bone and child
			FVector const OldDir = (GetCurrentLocation(MeshBases, ChildLink.BoneIndex) - GetCurrentLocation(MeshBases, CurrentLink.BoneIndex)).GetUnsafeNormal();

			// Get vector from the post-translation bone to it's child
			FVector const NewDir = (ChildLink.Position - CurrentLink.Position).GetUnsafeNormal();

			// Calculate axis of rotation from pre-translation vector to post-translation vector
			FVector const RotationAxis = FVector::CrossProduct(OldDir, NewDir).GetSafeNormal();
			float const RotationAngle = FMath::Acos(FVector::DotProduct(OldDir, NewDir));
			FQuat const DeltaRotation = FQuat(RotationAxis, RotationAngle);
			// We're going to multiply it, in order to not have to re-normalize the final quaternion, it has to be a unit quaternion.
			checkSlow(DeltaRotation.IsNormalized());


			// Calculate absolute rotation and set it
			//			FTransform& CurrentBoneTransform = OutBoneTransforms[CurrentLink.TransformIndex].Transform;
			FTransform& CurrentBoneTransform = input.temp_transforms[CurrentLink.TransformIndex].Transform;



			//			if (LinkIndex == 0 || Total_spine_bones[LinkIndex] == spine_Feet_pair[0].Spine_Involved.BoneName)

			//			if (LinkIndex == 0 && is_snake == false)
						// && feet_is_empty==false

			if (LinkIndex == 0 && feet_is_empty == false)
			{

				/*
				if (is_snake)
				{

					FTransform Rotation_Tip = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);

					input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(Rotation_Tip.GetRotation());
				}
				else*/
				{
					FRotator direction_rot = BoneRelativeConversion(CurrentLink.BoneIndex, input.PelvicEffectorTransform.Rotator(), *SavedBoneContainer, MeshBases);

					input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(direction_rot.Quaternion());
				}

			}
			else
			{

				//				FTransform Rotation_Tip = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);

				//				input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(Rotation_Tip.GetRotation());



				CurrentBoneTransform.SetRotation(FQuat::Slerp(CurrentBoneTransform.GetRotation(), (DeltaRotation * 1.0f) * CurrentBoneTransform.GetRotation(), rotation_power_between));


				input.temp_transforms[CurrentLink.TransformIndex].Transform = CurrentBoneTransform;
			}



			//			FTransform Rotation_Tip = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);
			//			input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(Rotation_Tip.GetRotation());



						// Update zero length children if any
			int32 const NumChildren = CurrentLink.ChildZeroLengthTransformIndices.Num();
			for (int32 ChildIndex = 0; ChildIndex < NumChildren; ChildIndex++)
			{

				FTransform& ChildBoneTransform = input.temp_transforms[CurrentLink.ChildZeroLengthTransformIndices[ChildIndex]].Transform;
				ChildBoneTransform.NormalizeRotation();

			}
		}


		//FINAL LINK TRANSFORMATION
		if (input.chain_data.Num() > 0)
		{
			DragonChainLink const& CurrentLink = input.chain_data[input.NumChainLinks - 1];




			FRotator direction_rot = BoneRelativeConversion(CurrentLink.BoneIndex, input.SpineFirstEffectorTransform.Rotator(), *SavedBoneContainer, MeshBases);

			/*
					if (feet_is_empty)
					{
						FTransform Rotation_Tip = MeshBases.GetComponentSpaceTransform(CurrentLink.BoneIndex);
						input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(Rotation_Tip.GetRotation());
					}
					else*/
			{
				input.temp_transforms[CurrentLink.TransformIndex].Transform.SetRotation(direction_rot.Quaternion());
			}

		}



	}




	return input;

}







FRotator FAnimNode_DragonSpineSolver::BoneRelativeConversion_LEGACY(FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer& BoneContainer, FCSPose<FCompactPose>& MeshBases)
{
	FTransform NewBoneTM = MeshBases.GetComponentSpaceTransform(ModifyBoneIndex);

	FTransform ComponentTransform = owner_skel_w_transform;



	// Convert to Bone Space.
	FAnimationRuntime::ConvertCSTransformToBoneSpace(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);


	FQuat actor_rotation_world(0, 0, 0, 0);

	if (owning_skel->GetOwner() != nullptr)
	{
		actor_rotation_world = owning_skel->GetOwner()->GetActorRotation().Quaternion().Inverse() * FRotator(NewBoneTM.GetRotation()).Quaternion();

		FRotator make_rot = NewBoneTM.Rotator();

		make_rot.Yaw = FRotator(actor_rotation_world).Yaw;



		NewBoneTM.SetRotation(make_rot.Quaternion());

	}

	const FQuat BoneQuat(target_rotation);

	NewBoneTM.SetRotation(BoneQuat * NewBoneTM.GetRotation());

	// Convert back to Component Space.
	FAnimationRuntime::ConvertBoneSpaceTransformToCS(ComponentTransform, MeshBases, NewBoneTM, ModifyBoneIndex, EBoneControlSpace::BCS_WorldSpace);

	return NewBoneTM.Rotator();
}




FRotator FAnimNode_DragonSpineSolver::BoneRelativeConversion(FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer& BoneContainer, FCSPose<FCompactPose>& MeshBases)
{
	//FCompactPoseBoneIndex CompactPoseBoneToModify = BoneToModify.GetCompactPoseIndex(BoneContainer);
	FTransform NewBoneTM_Legacy = MeshBases.GetComponentSpaceTransform(ModifyBoneIndex);
	//	FTransform ComponentTransform = Output.AnimInstanceProxy->GetComponentTransform();


	FRotator rot_result = target_rotation;
	rot_result.Yaw = 0;

	return FRotator(rot_result.Quaternion() * NewBoneTM_Legacy.Rotator().Quaternion());

	


	//	return FRotator();
}





FVector FAnimNode_DragonSpineSolver::GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex)
{
	return MeshBases.GetComponentSpaceTransform(BoneIndex).GetLocation();
}

