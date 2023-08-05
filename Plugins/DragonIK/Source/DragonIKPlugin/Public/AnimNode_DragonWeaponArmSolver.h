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

#include "Animation/InputScaleBias.h"
#include "AnimNode_DragonControlBase.h"

#include "CommonAnimTypes.h"
#include "Curves/CurveFloat.h"
#include "CollisionQueryParams.h"
#include "DragonIKWeaponPhysicsComponent.h"

#include "AnimNode_DragonWeaponArmSolver.generated.h"

/**
 * 
 */

 

class FPrimitiveDrawInterface;
class USkeletalMeshComponent;









//USTRUCT(BlueprintInternalUseOnly)
USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonWeaponArmSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()



public:


	UDragonIKWeaponPhysicsComponent* weapon_handler_component;

	FTransform weapon_object_transform;


	int test_counter = 0;

	int trace_draw_counter = 0;

	virtual int32 GetLODThreshold() const override { return LODThreshold; }

//	UPROPERTY(Transient)
//		float ActualAlpha = 0;


	int Num_Valid_Spines = 0;



	float component_scale = 1;




	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Should solving data persist on fail scenarios", PinHiddenByDefault))
	//		bool should_solving_persist = false;



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Should move down ?", PinHiddenByDefault))
	//		bool should_move_down = true;


	bool atleast_one_hit = false;

	bool feet_is_empty = true;

	



//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
//	FTransform DebugEffectorTransform;



//	/** Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/
//	UPROPERTY(EditAnywhere, Category = LookAtSettings)
//		FBoneSocketTarget LookAtTarget;






	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (DisplayName = "Physweapon Component Tag", PinHiddenByDefault))
		int Physweapon_Component_Tag = 1;



	/*
	* The hand inputs. Used for seperate clamping and restricting of limb movements during body aiming.
	* Uses : Weapon aiming, hand restriction while extreme body bending, wings stability etc
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (DisplayName = "Hands Input (optional)", PinHiddenByDefault))
		TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;

	
	TArray<float> Last_Shoulder_Angles;


	/*
		* Separate aim targets for hands.
		* Break this parameter after exposing to expose the array for dynamic modification.
		*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (DisplayName = "Overrided Arm Aim Target Array", PinHiddenByDefault))
		FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides;




		//UPROPERTY(EditAnywhere, EditFixedSize, Category = DebuggingOnly)
			TArray<FTransform> Hand_Weapon_Relative_Transforms;


			TArray<FTransform> Calculated_Hand_Transforms;


			TArray<bool> Calibration_Status_Array;



	/*
	* If enabled, the overrided arm aim target array is used for the hand aiming.
 	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand aiming/reaching use the override target transforms ?", PinHiddenByDefault))
		bool Use_Separate_Targets = true;





	/*
	* If enabled, the arm rotation is mirrored by the target transform's rotation.
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand rotations use the override target transforms ?", PinHiddenByDefault))
		bool Override_Hand_Rotation = true;











	/*
	* Switching between arm aiming and reaching.
	* Reaching is great when dynamically picking objects of holding something.
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Reach instead of aiming ? (Only for arms)", PinHiddenByDefault))
		bool reach_instead = true;







	/*
* Select the pole system for the arms.
* Only used if reaching mode is used. It's ignored for aiming mode.
*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Arm Pole System Method"))
		EPole_System_DragonIK pole_system_input = EPole_System_DragonIK::ENUM_SinglePoleSystem;



	/*
* Choose the axis of your arm twisting.
* Only used if reaching mode is used. It's ignored for aiming mode.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Arm Twist Axis Technique"))
		ETwist_Type_DragonIK arm_twist_axis = ETwist_Type_DragonIK::ENUM_PoseAxisTwist;




	/*
	* Decide if the hand rotation is additively calculated or directly replaced by the hand transforms.
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand Rotation Method"))
	*/
	ERotation_Type_DragonIK hand_rotation_method = ERotation_Type_DragonIK::ENUM_ReplaceRotation;







	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Enable Arm Interpolation ?"))
	//	bool Enable_Hand_Interpolation = true;


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Arm Interpolation Speed"))
	//	float Hand_Interpolation_Speed = 25;




	/*
	* Choose whether the arm transforms are in world space or component space.
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Hand Target Transform Space", PinHiddenByDefault))
	//	EInputTransformSpace_DragonIK arm_transform_space = EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem;












	bool nsew_pole_method = false;

	bool up_arm_twist_technique = false;





	FTransform Main_Hand_Default_Transform = FTransform::Identity;

	FTransform Main_Hand_New_Transform = FTransform::Identity;


	FTransform Head_Orig_Transform;









	/*
* Maximum separate limbs clamp. Can be used to shrink the max angle or extend the max angle with respect to the body clamp.
*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Limbs Max Clamp", PinHiddenByDefault))
		float Limbs_Clamp = 70;












		bool done_leg_make = false;


	/*
* Toggle this parameter to instantly turn on/off ik.


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ToggleSettings, meta = (DisplayName = "Enable Solver (Instant)", PinShownByDefault))
		bool enable_solver = true;
*/








	/*
* Enable this parameter to make IK work even when not playing in PIE mode
* Useful for recording in sequencer.
*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Work outside gameplay (For Sequencer)", PinShownByDefault))
//		bool Work_Outside_PIE = true;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Should arm twist with hand ?", PinHiddenByDefault))
	bool Let_Arm_Twist_With_Hand = true;





	FHitResult TTS_Aim_Hit;


	float TTS_Height = 0;



//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "TAC Aim Reference ", PinShownByDefault))
//		FTransform Tail_Aim_Location;




	/*
* Select the type of interpolation method.
*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (DisplayName = "Interpolation Type"))
		EInterpoLocation_Type_Plugin loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp;






	float delta_seconds_saved = 1;



	bool is_focus_debugtarget = true;


	int inter_frame_counter = 0;

	bool Internal_Switched_Interpolation_bool = true;


	UPROPERTY(EditAnywhere, Category = Settings, BlueprintReadWrite, meta = (PinHiddenByDefault))
		bool Enable_Interpolation = true;


	UPROPERTY(EditAnywhere, Category = Settings, BlueprintReadWrite, meta = (PinHiddenByDefault))
		float Interpolation_Speed = 15;




	float toggle_alpha = 0;


	float hand_toggle_alpha = 0;



	FVector AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds);



	FVector Lerped_LookatLocation = FVector::ZeroVector;





	TArray<FBoneReference> Hand_Array;
	TArray<FBoneReference> Elbow_Array;
	TArray<FBoneReference> Shoulder_Array;

	TArray<FBoneReference> Actual_Shoulder_Array;


	TArray<FTransform> Frozen_Elbow_Transform;
	TArray<FTransform> Frozen_UpperArm_Transform;
	
	TArray<FTransform> Frozen_Target_Transform;
	



//	UPROPERTY(EditAnywhere, Category = LookAtSettings)
//		FAxis LookAt_Neck_Axis;

	/*
	* The forward direction axis of the character.
	* Characters using the standard unreal directions use the default value.
	*/
	UPROPERTY(EditAnywhere, Category = Settings, meta = (DisplayName = "Forward Axis", PinHiddenByDefault))
		FVector LookAt_Axis = FVector(0,1,0);



	UPROPERTY(EditAnywhere, Category = Settings, meta = (DisplayName = "Upward Axis", PinHiddenByDefault))
		FVector Upward_Axis = FVector(0, 0, 1);





	//  FAxis LookAt_Axis;



//	UPROPERTY(EditAnywhere, Category = LookAtSettings)
//		FAxis LookUp_Axis;




//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Enable Lookat Mode ?", PinHiddenByDefault))
//		bool Enable_LookAtMode = true;





//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Lookat Distance", PinHiddenByDefault))
//		float Lookat_Distance = 700;

	FTransform LookAtLocation_Saved = FTransform::Identity;





//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Limb Rotation Offset", PinHiddenByDefault))
		FRotator Limb_Rotation_Offset;



//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Bipedal Rotation Mode", PinHiddenByDefault))
//		bool Bipedal_Rotation_Mode = false;


//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "LookAt Target (World Space)", PinHiddenByDefault))
//		FVector LookAtTarget = FVector(0,0,0);

	TArray<FBoneTransform> HeadTransforms;

	TArray<FBoneTransform> Ref_HeadTransforms;



	TArray<FBoneTransform> LegIK_Transforms;

	TArray<FBoneTransform> HandIK_Transforms;

	TArray<FBoneTransform> Lerp_HandIK_Transforms;




	float Max_Range_Limit_Lerp = 0;







	TArray<FTransform> knee_Animated_transform_array;

	TArray<FTransform> Elbow_Bone_Transform_Array;

	TArray<FTransform> Hand_Default_Transform_Array;




//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
		float Smooth_Factor = 10;


		bool every_foot_dont_have_child = false;
	



		TArray<float> grab_alpha;

		TArray<float> overriding_hand_position_alpha;
		TArray<float> overriding_hand_rotation_alpha;


		TArray<int> arm_array_index_array;









		/*
* Enable this to render the traces in the animgraph viewports.
* Animbp viewport will be unaltered.
*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DebuggingOnly, meta = (DisplayName = "Display Lines & Widgets", PinHiddenByDefault))
			bool DisplayLineTrace = true;



	UPROPERTY(EditAnywhere, EditFixedSize, Category = DebuggingOnly)
		TArray<FTransform> Debug_Hand_Locations;





	FBoneContainer* SavedBoneContainer;



	float Root_Roll_Value = 0;

	float Root_Pitch_Value = 0;

	float diff_heights[6];







//	TArray<FDragonData_SpineFeetPair_heights> Total_spine_heights;

	float midpoint_height = 0;



	float maximum_spine_length = 0;

	float angle_data = 0;



	FTransform ChestEffectorTransform = FTransform::Identity;

	FTransform RootEffectorTransform = FTransform::Identity;


	int zero_transform_set = 0;

	FTransform Last_RootEffectorTransform = FTransform::Identity;
	FTransform Last_ChestEffectorTransform = FTransform::Identity;





	float spine_median_result = 0;


	/*
	* Enable this to render the traces in the animgraph viewports.
	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Display LineTracing", PinHiddenByDefault))
//		bool DisplayLineTrace = true;





	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Experimental, meta = (DisplayName = "Use FeetTips(if exist)", PinHiddenByDefault))
		bool Use_FeetTips = false;


	FVector SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed);


	FTransform LookAtAroundPoint(FVector origin_point, FVector AxisVector, float AngleAxis, FVector origin);


	void Dragon_VectorCreation(bool isPelvis, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases);

	FVector RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle);


	FName GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh);





	FCollisionQueryParams getDefaultSpineColliParams(FName name, AActor *me, bool debug_mode);



	FComponentSpacePoseContext* saved_pose;

	USkeletalMeshComponent *owning_skel;

	FTransform owner_skel_w_transform = FTransform::Identity;


	int32 tot_len_of_bones;

	void GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);



	

	FRotator HeadRotation_Temp = FRotator();


	FVector GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex);



	void ArmIK_System(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


	void OrthoNormalize(FVector& Normal, FVector& Tangent);

	FQuat LookRotation(FVector lookAt, FVector upDirection);

	bool solve_should_fail = false;

	TArray<FVector> TraceStartList = TArray<FVector>();
	TArray<FVector> TraceEndList = TArray<FVector>();



	bool debug_hands_initialized = false;

//#if WITH_EDITOR
	void ResizeDebugLocations(int32 NewSize);
//#endif


	virtual void ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const;


	//constructor
	//UWheeledVehicleMovementComponent4W::UWheeledVehicleMovementComponent4W(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;

//	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)  override;


	virtual void UpdateInternal(const FAnimationUpdateContext& Context) override;


//	virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;


	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context) override;
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;

	// initialize any bone references you have
	virtual void InitializeBoneReferences(FBoneContainer& RequiredBones) override;



	virtual void Evaluate_AnyThread(FPoseContext& Output);

	FAnimNode_DragonWeaponArmSolver();

protected:

//	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


//	void LineTraceControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	


};

