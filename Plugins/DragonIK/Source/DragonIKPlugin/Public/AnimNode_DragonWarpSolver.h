/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once



#include "DragonIK_Library.h"
#include "CoreMinimal.h"

#include "DragonIKPlugin.h"

#include "Kismet/KismetMathLibrary.h"

#include "CollisionQueryParams.h"
#include "Curves/CurveFloat.h"

#include "Animation/InputScaleBias.h"
#include "AnimNode_DragonControlBase.h"
#include "AnimNode_DragonWarpSolver.generated.h"
/**
 * 
 */


class USkeletalMeshComponent;







//USTRUCT(BlueprintInternalUseOnly)

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()

public:




		/*
		* Type the legs/arm bone inputs.
  */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (PinHiddenByDefault))
			TArray<FDragonData_WarpLimbsData> dragon_limb_input;

		/*
		* Choose either the pelvis/hip bone or the root bone.
		* Used for offseting the location using the warp constants and warp curve datas.
		*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (PinHiddenByDefault))
			FName Hip_Bone_Name;


		float delta_seconds_saved = 1;


		FBoneReference Hip_Bone_Ref;

		float Hip_Offset = 0;


		TArray<FDragonData_WarpLimbStruct> dragon_limb_data;

		TArray<FVector> original_foot_array;




	FAnimNode_DragonWarpSolver();

	int test_counter = 0;

	int trace_draw_counter = 0;





	float scale_mode = 1;



	/*
* Toggle this parameter to turn on/off ik.
* Example use case : Disable it when character is jumping or flying in the air.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Enable Solver (Instant)", PinShownByDefault))
		bool enable_solver = true;


	


	/*
* Max LOD that this node is allowed to run
* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
* when the component LOD becomes 3, it will stop update/evaluate
*/

	virtual int32 GetLODThreshold() const override { return LODThreshold; }




	FBoneContainer* SavedBoneContainer;


	FTransform ChestEffectorTransform = FTransform::Identity;

	FTransform RootEffectorTransform = FTransform::Identity;


	TArray<FBoneReference> feet_bone_array;

	TArray<FTransform> feet_transform_array;


	TArray<float> feet_Alpha_array;


	TArray<FTransform> feet_mod_transform_array;


	TArray<TArray<TArray<FTransform>>> feet_fingers_transform_array;



	TArray<TArray<FVector>> feet_knee_offset_array;


	TArray<TArray<FTransform>> feet_Animated_transform_array;
	TArray<FTransform> knee_Animated_transform_array;



	bool atleast_one_hit = false;

	TArray<FHitResult> feet_hit_array;

	bool solve_should_fail = false;





//	TArray<FDragonData_SpineFeetPair> spine_Feet_pair;
	TArray<FName> Total_spine_bones;

	bool every_foot_dont_have_child = false;


	void Leg_ik_Function(FBoneReference ik_footbone, int feet_index, TEnumAsByte<enum EBoneControlSpace> EffectorLocationSpace, TEnumAsByte<enum EBoneControlSpace> JointTargetLocationSpace, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms);

	void Leg_Full_Function(FName foot_name, int feet_index, FComponentSpacePoseContext& MeshBasesSaved, TArray<FBoneTransform>& OutBoneTransforms);









	bool is_initialized = false;




	/*
*The up direction vector of the character in component space.
* 99% cases, this should not be altered.
* Only needed to alter on characters that do not follow the standard unreal character orientations.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Character Up Direction Vector (Local space)", PinHiddenByDefault))
		FVector character_direction_vector_CS = FVector(0,0,1);



	/*
*The forward direction vector of the character in component space.
* 99% cases, this should not be altered.
* Only needed to alter on characters that do not follow the standard unreal character orientations.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Character Forward Vector (Local space)", PinHiddenByDefault))
		FVector forward_vector_CS = FVector(0, 1, 0);






	/*
	* Tweak this to warp your character arms/legs so they become exaggerated and de-exaggerated.
	* 1 means the default non-warped result. 
	* Lower than a 1 value will warp inwards. Values above 1 will warp outwards.
	* This input does nothing if automatic slope warping is enabled. The automatic slope warp speed warping constant will be used instead.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ManualWarpSettings, meta = (DisplayName = "Manual Speed warping parameter", PinShownByDefault))
		float speed_warping_const = 1;




	/*
* This will enable slope warping and disable manual warping.
* If enabled, the manual speed warping parameter will not affect anything.
* If enabled, the automatic speed warping constant will be used along with the respective curve datas.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Use Automatic Slope Warp ? ", PinHiddenByDefault))
		bool enable_slope_warp = false;

	/*
	* Tweak this to warp your character arms/legs so they become exaggerated and de-exaggerated on slopes. 
	* This value is used for the curve datas.
	* This parameter is disabled if automatic slope warping is disabled.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Automatic Speed warping constant", PinHiddenByDefault))
		float automatic_speed_warping_const = 1;

	/*
	* Increase this value to warp more on slopes.
	* Decrease this value to warp less on slopes.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Slope Detection Tolerance", PinHiddenByDefault))
		float slope_detection_tolerance = 0.01f;

	/*
	* The interpolation speed of the slope detection and related warping process.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Warp Slope Interpolation Speed", PinHiddenByDefault))
		float Warp_Slope_Interpolation = 25;




	FTransform Hip_Transform_Value = FTransform::Identity;

	/*
* Trace channel used by the solver traces. Recommended to create a new dedicated trace channel for the ik through project settings.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings)
		TEnumAsByte<ETraceTypeQuery> Trace_Channel = ETraceTypeQuery::TraceTypeQuery1;

	/*
* The size of the line traces below the hips */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Trace Downward Height", PinHiddenByDefault))
		float line_trace_downward_height = 200;


	/*
	* The size of the line traces above the hips */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Trace Upward Height", PinHiddenByDefault))
		float line_trace_upper_height = 200;


	/*
* The spacing width of the two line traces responsible for detecting slopes.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings, meta = (DisplayName = "Trace Gap Size", PinHiddenByDefault))
		float virtual_leg_width = 25;



	/*
* Virtual scale multiplier of the ik
* Increase this value if your mesh is super big by default and you are too lazy to increase all parameters one by one.
* Uniformly increases all trace related parameters.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Global trace scale multiplier", PinHiddenByDefault))
		float virtual_scale = 1;


	float internal_slope_diff = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AutomaticSlopeWarpSettings)
		bool DisplayLineTrace = true;




	/*
	* The intensity of the extra limb compression when warping.
	* Used as a multiplier for the extra limb compression curve.
	* 0 means no extra compression.
	* The blue disc widgets in the viewport below the feets is responsible for determining the reference point for compression.
	* The blue discs need to be tweaked accordingly to avoid offsets.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CommonWarpSettings, meta = (DisplayName = "Extra limb compression multiplier with respect to warp", PinHiddenByDefault))
		float Limb_Compression_Intensity = 0.0f;

	/*
	* The extra compression of the arms/legs when changing warp value.
	* The X-axis is the warp value that goes from 0 to n-value.
	* The Y-axis is the intensity of the compression. This multiplies with the extra limb compression intensity parameter.
	*/
	UPROPERTY(EditAnywhere, Category = CommonWarpSettings, meta = (DisplayName = "Extra limb Compression Curve. X-axis is speed warp parameter.", PinHiddenByDefault))
		FRuntimeFloatCurve Limb_Lifting_Curve;


	/*
	* A multiplier value that is used for offseting the hips when changing warp value.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CommonWarpSettings, meta = (DisplayName = "Hip Lift multiplier. Multiplies with the hip lift curve.", PinHiddenByDefault))
		float Hip_Change_Intensity = 5;

	/*
	* The curve input that multiplies with the hip lift constant.
	* The X-axis is the warp value that goes from 0 to n-value
	* The Y-axis is the intensity of the extra lift of the hips and limbs.
	* Example use case is pushing the character down when at high warp values.
	*/
	UPROPERTY(EditAnywhere, Category = CommonWarpSettings, meta = (DisplayName = "Hip Lifting Curve. X-axis is speed warp parameter.", PinHiddenByDefault))
		FRuntimeFloatCurve Hip_Lifting_Curve;





	FHitResult front_hit_result;
	FHitResult back_hit_result;


	TArray<FVector> EffectorLocationList;


	TArray<float> Total_spine_heights;
	TArray<FDragonData_HitPairs> spine_hit_pairs;

	TArray<FCompactPoseBoneIndex> Spine_Indices;



	USkeletalMeshComponent *owning_skel;



	TArray<FVector> TraceStartList = TArray<FVector>();
	TArray<FVector> TraceEndList = TArray<FVector>();


	virtual void ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const;

	void line_trace_func(USkeletalMeshComponent& skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode);






	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
//	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)  override;
	//virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;

	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;

	//virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;

	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;


	virtual void Evaluate_AnyThread(FPoseContext& Output);



	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	// initialize any bone references you have
	virtual void InitializeBoneReferences(FBoneContainer& RequiredBones) override;



protected:


};

