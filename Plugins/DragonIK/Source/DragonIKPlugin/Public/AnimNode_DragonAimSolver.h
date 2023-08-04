/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once



#include "DragonIK_Library.h"
#include "CoreMinimal.h"



#include "Kismet/KismetMathLibrary.h"

#include "Animation/InputScaleBias.h"
#include "AnimNode_DragonControlBase.h"


#include "Curves/CurveFloat.h"
#include "CollisionQueryParams.h"

#include "AnimNode_DragonAimSolver.generated.h"

/**
 * 
 */

 

class FPrimitiveDrawInterface;
class USkeletalMeshComponent;




//USTRUCT(BlueprintInternalUseOnly)
USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()



public:




	UPROPERTY(EditAnywhere, Category = CoreInputData, BlueprintReadWrite, meta = (DisplayName = "Use FName bone input", PinHiddenByDefault))
		bool Use_FName_Bone_Input = false;



		/*
* The head bone.
*/
UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "Start Bone (Eg:- Head)", EditCondition = "!Use_FName_Bone_Input", PinHiddenByDefault))
FBoneReference EndSplineBone;

	/*
	* The last bone to be influenced. (Eg:- Pelvis or chest)
	*/
	UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "End Bone", EditCondition = "!Use_FName_Bone_Input", PinHiddenByDefault))
		FBoneReference StartSplineBone;




	/*
* The head bone.
*/
	UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "(FNAME) Start Bone (Eg:- Head)", EditCondition = "Use_FName_Bone_Input", PinHiddenByDefault))
		FName Name_EndSpline_Bone;

	/*
	* The last bone to be influenced. (Eg:- Pelvis or chest)
	*/
	UPROPERTY(EditAnywhere, Category = CoreInputData, meta = (DisplayName = "(FNAME) End Bone", EditCondition = "Use_FName_Bone_Input", PinHiddenByDefault))
		FName Name_StartSpline_Bone;






	/** Target location transform in world space*/
	UPROPERTY(EditAnywhere, Category = CoreInputData, BlueprintReadWrite, meta = (PinShownByDefault))
		FTransform LookAtLocation;


		/*
* Type the input bones used by the solver - pelvis,spine-start and feets
* Pull this pin to create a "make struct" and easily type out the bones.
* Optionally you can type the bones directly inside the solver. Doing so is slightly more recommended because it activates fast path.
*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OptionalInputData, meta = (DisplayName = "Dragon Input Data (optional)", PinHiddenByDefault))
		FDragonData_MultiInput dragon_input_data;

	FDragonData_BoneStruct dragon_bone_data;








	/*
	* Component Pose Input.
	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
//		FComponentSpacePoseLink ComponentPose;

	/*
	* Alpha of the entire solver. 0 means no solving and 1 means maximum solving. 
	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (PinShownByDefault))
//		mutable float Alpha = 1;




	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings)
//		FInputScaleBias AlphaScaleBias;

		

	/*
	* Max LOD that this node is allowed to run
	* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
	* when the component LOD becomes 3, it will stop update/evaluate
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "LOD Threshold"))
	//	int32 LODThreshold = -1;





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






	/*
	* The hand inputs. Used for seperate clamping and restricting of limb movements during body aiming.
	* Uses : Weapon aiming, hand restriction while extreme body bending, wings stability etc
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OptionalInputData, meta = (DisplayName = "Hands Input (optional)", PinHiddenByDefault))
		TArray<FDragonData_ArmsData> Aiming_Hand_Limbs;

	
	TArray<float> Last_Shoulder_Angles;


	/*
		* Separate aim targets for hands.
		* Break this parameter after exposing to expose the array for dynamic modification.
		*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Overrided Arm Aim Target Array", PinHiddenByDefault))
		FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides;


	/*
	* If enabled, the overrided arm aim target array is used for the hand aiming.
 	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand aiming/reaching use the override target transforms ?", PinHiddenByDefault))
		bool Use_Separate_Targets = false;





	/*
	* If enabled, the arm rotation is mirrored by the target transform's rotation.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand rotations use the override target transforms ?", PinHiddenByDefault))
		bool Override_Hand_Rotation = false;




	/*
	* If enabled, head and body aim works as usual.
	* If disabled, head and body aim is disabled but arms will still work as usual.
	* This parameter is only used if using the "reaching mode" and enabling the 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Enable Head Aim ?", PinShownByDefault))
		bool enable_head_aim = true;



	/*
	* If enabled, the arms can stretch beyond its original bone length constraints.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Allow hand stretching ?", PinHiddenByDefault))
		bool bAllowHandStretching = false;





	/*
* You can use this to easily offset your auto-calculated elbow pole offset.
* Eg:- If you want to make the elbow poles an bit up during gameplay at certain points, then make this (0,0,X) where X is a positive number.
* The offset is done in component space and not in world space.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "(optional) Extra Offset on the elbow poles", PinHiddenByDefault))
		TArray<FVector> Extra_Elbow_Pole_Array;




	/*
	* Switching between arm aiming and reaching.
	* Reaching is great when dynamically picking objects of holding something.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Reach instead of aiming ? (Only for arms)", PinHiddenByDefault))
		bool reach_instead = false;

	/*
	* If enabled, the body rotation is influenced by the arm target locations.
	* Only if reaching mode is enabled.
	* Recommended to enable if reaching.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Make hands positions influence body ?  (If multi-arm aiming) ", PinHiddenByDefault))
		bool Aggregate_Hand_Body = false;




	/*
* You can completely ignore arm twisting and just twist the hands alone.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Should arm twist when hand rotates ? (If separate reaching mode)"))
		bool Let_Arm_Twist_With_Hand = true;



	/*
* Select the pole system for the arms.
* Only used if reaching mode is used. It's ignored for aiming mode.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Arm Pole System Method"))
		EPole_System_DragonIK pole_system_input = EPole_System_DragonIK::ENUM_SinglePoleSystem;



	/*
* Choose the axis of your arm twisting.
* Only used if reaching mode is used. It's ignored for aiming mode.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Arm Twist Axis Technique"))
		ETwist_Type_DragonIK arm_twist_axis = ETwist_Type_DragonIK::ENUM_PoseAxisTwist;




	/*
	* Decide if the hand rotation is additively calculated or directly replaced by the hand transforms.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand Rotation Method"))
	ERotation_Type_DragonIK hand_rotation_method = ERotation_Type_DragonIK::ENUM_AdditiveRotation;


	/*
* If this is enabled, then the head rotation uses the rotation of the look target transform instead of aiming at the target.
* It can be used to set the hmd rotation into the head bone, to get the head tilt in all angles.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Override head rotation to use the look transform rotation ? (Good for VR)", PinHiddenByDefault))
		bool Override_Head_Rotation = false;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Enable Arm Interpolation ?"))
		bool Enable_Hand_Interpolation = true;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Arm Interpolation Speed"))
		float Hand_Interpolation_Speed = 25;



	/*
	* This is only for very specialized use cases.
	* Helps set custom forearm and upper arm lengths at runtime.
	* Example use case : Setting the character arm lengths during character creation of a VR game, to better tailor the 3D character to the player's real arms.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Custom Arm Length Data (Optional)", PinHiddenByDefault))
	 FDragonData_CustomArmLengths custom_arm_lengths;



	/*
	* Choose whether the arm transforms are in world space or component space.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingAndSeparateAim, meta = (DisplayName = "Hand Target Transform Space", PinHiddenByDefault))
		EInputTransformSpace_DragonIK arm_transform_space = EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem;









	bool nsew_pole_method = false;

	bool up_arm_twist_technique = false;


//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ReachingMode, meta = (DisplayName = "Use reverse IK on arms against the body for tighter results ?", PinHiddenByDefault))
//		bool Strict_Arm_IK = true;

	/*
	* The index of the main hand within the "Hands Input" array for which other hands follow relatively with respect to the main hand.
	* -1 means no main arm. All arms aim independently.
	* Useful to strictly adjust hands on a gun. Eg:- Make the hand holding the gun be the main arm.
	* This is ignored is using reaching mode.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = OptionalInputData, meta = (DisplayName = "Main Arm Index", PinHiddenByDefault))
		int Main_Arm_Index = -1;


	FTransform Main_Hand_Default_Transform = FTransform::Identity;

	FTransform Main_Hand_New_Transform = FTransform::Identity;


	FTransform Head_Orig_Transform;






	/*
* The maximum allowed body chain rotation.
* Uses the body clamp curve as a multiplier for the final result.
*/
	UPROPERTY(EditAnywhere, Category = AdvancedClampingSettings, BlueprintReadWrite, meta = (DisplayName = "Max Body Lookat Clamp", PinHiddenByDefault))
		float Lookat_Radius = 110;



	/*
	* Within these pitch-yaw-roll angles, the body will avoid rotation, but the head will rotate freely.
	* Good when you want the body to only rotate after a certain treshold.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedClampingSettings, meta = (DisplayName = "Inner Body Lookat Threshold", PinHiddenByDefault))
		FRotator Inner_Body_Clamp = FRotator(0,0,0);


	/*
* Maximum separate limbs clamp. Can be used to shrink the angle or extend the angle with respect to the body clamp. 
* Ignored if seperate head clamp bool is disabled.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedClampingSettings, meta = (DisplayName = "Head Max Clamp", PinHiddenByDefault))
		float Lookat_Clamp = 70;




	/*
* Maximum separate limbs clamp. Can be used to shrink the max angle or extend the max angle with respect to the body clamp.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedClampingSettings, meta = (DisplayName = "Limbs Max Clamp", PinHiddenByDefault))
		float Limbs_Clamp = 70;


	/*
	* The extra dip downwards if character is looking vertically upwards.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Downward translation when aiming upwards (Multiplier)", PinHiddenByDefault))
		float Downward_Dip_Multiplier = -0.01f;



	/*
* The extra dip downwards if character is looking vertically downwards.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Downward translation when aiming downwards (Multiplier)", PinHiddenByDefault))
		float Inverted_Dip_Multiplier = -0.01f;




	/*
	* This is the "gap" until the body starts to dip when aiming downwards.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Vertical Dip Treshold", PinHiddenByDefault))
		float Vertical_Dip_Treshold = 1;




	/*
	* The extra offset of the root bone in left/right if character's end bone is rotating towards the same direction.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Sideward translation when aiming sideways (Multiplier)", PinHiddenByDefault))
		float Side_Move_Multiplier = 0.01f;



	/*
* The extra offset of the root bone in left/right if character's root bone is rotate towards the same direction.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Downward translation when aiming sideways (Multiplier)", PinHiddenByDefault))
		float Side_Down_Multiplier = -0.01f;




	/*
* Tweak this if you want the clamp intensity to be different in the vertical axis. It is a multiplier ratio, and clamp is relative to existing setup.
* 0 = Absolutley no vertical body bending/aiming.
* 1 = Full Vertical body bending/aiming.
* Only applies to body chain. Ignores arms and head.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MultiplierSettings, meta = (DisplayName = "Vertical aim clamp ratio for body (0 = No influence, 1 = Full influence)", PinHiddenByDefault))
		float Up_Rot_Clamp = 0.5f;


	/*
	* Max global vertical rotation clamp.
	* Beyond these clamps, the aiming reverses.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedClampingSettings, meta = (DisplayName = "Max Vertical Angle Range (Degrees)", PinHiddenByDefault))
		FVector2D Verticle_Range_Angles = FVector2D(-75, 75);



	/*
	* Max global horizontal rotation clamp.
	* Beyond these clamps, the aiming reverses.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedClampingSettings, meta = (DisplayName = "Max Horizontal Angle Range (Degrees)", PinHiddenByDefault))
		FVector2D Horizontal_Range_Angles = FVector2D(-90, 90);





	/*
* Curve clamp used to tweak the body bending limits. Works as a multiplier and is part of the total solving calculation.
* 0th value in X-axis denotes the clamp intensity of the end bone (eg:- if max body clamp is 100, and the 0th value is 0.1, then the final clamp of pelvis/end bone is 10)
* All values until the 1st value in the X-axis are multipliers for all the bone chains from End to Start bones.
* Exact 1st X-axis value is ignored, as the head clamp is solely determined by the separate head clamp parameter.
*/
	UPROPERTY(EditAnywhere, Category = CurveInputSettings, meta = (DisplayName = "Bone Clamp Curve (0 = End Bone, 1 = Head Bone)", PinHiddenByDefault))
		FRuntimeFloatCurve Look_Bending_Curve;


	/*
	* Curve multiplier to tweak the rotation multiplier in the body chain.
	* Default set to 1 always. No need for modification in most cases.
	*/
	UPROPERTY(EditAnywhere, Category = CurveInputSettings, meta = (DisplayName = "Body Rotation Multiplier Curve (0 = End Bone, 1 = Head Bone)",PinHiddenByDefault))
		FRuntimeFloatCurve Look_Multiplier_Curve;




	/*
* Choose whether the head and body transforms are in world space or component space.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ToggleSettings, meta = (DisplayName = "Head/Body Target Transform Space", PinHiddenByDefault))
		EInputTransformSpace_DragonIK look_transform_space = EInputTransformSpace_DragonIK::ENUM_WorldSpaceSystem;



	/*
	* Lock legs to its original position using IK as the body moves and rotates. Only works with valid dragon input data.
	*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Should feets be locked using IK ? (uses dragon input data)", PinHiddenByDefault))
		bool Lock_Legs = true;



	/*
* Only rotate the shoulder towards the target, and ignore the wrist and elbow in the solving.
*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Ignore Elbow Compression", PinHiddenByDefault))
		bool ignore_elbow_modification = false;


	/*
	* Turn off separate limbs aiming.
	*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Ignore Seperate Hand solving",  PinHiddenByDefault))
		bool ignore_separate_hand_solving = false;



	/*
	* Switch between two different rotation algorithm for different type of results.
	* [enabled] = Relative rotation algorithm provides greater degree of freedom of movement and stable poses. Favours pose stability over accuracy.
	* [disabled] = Non-Relative rotation algorthm provides a more direct and natural aiming but with limit in the range of motion. Favours accuracy over pose stability.
	*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Use Relative Rotation Algorithm ?", PinHiddenByDefault))
		bool Use_Natural_Method = true;



	/*
* If enabled, the heads clamp is determined by the separate max head clamp parameter.
* If disabled, the head clamp is determined by the value in the clamp curve graph along with the rest of the body. Also influenced by max body clamp parameter.
* Eg:- If using the aim solver for tails, keep it disabled.
*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Use Separate independent clamping for head ?", PinHiddenByDefault))
		bool Head_Use_Separate_Clamp = true;




	/*
	* If enabled, head aims exactly at the target regardless of the rest of the body chain.
	* If disabled, head aims while adjusting itself with respect to the rest of the body chain. Can result in a bit more stable but offseted aiming.
	*/
	UPROPERTY(EditAnywhere, Category = ToggleSettings, meta = (DisplayName = "Head use exact accurate aiming ?", PinHiddenByDefault))
		bool Is_Head_Accurate = true;




//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Automatic Thigh-Knee-Foot Detection", PinHiddenByDefault))
//		bool automatic_leg_make = false;


		/*
* Parameter to choose between automatic feet bone detection or manual method.
* If enabled, solvers only uses the feet bones, and automatically assumes the next 2 parent bones as knees and thighs.
* If disabled, solvers uses the feet bones, knee bones and thigh bones typed in the feet array.
* If disabled, all bones need to be valid. Any invalid bones will not activate the ik.
* Very useful to keep it disabled on DAZ rigs and certain animal characters, where the thigh-knee-foot are not in a straight linear hierarchy.
*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Automatic Foot-Knee-Thigh detection", PinHiddenByDefault))
			bool automatic_leg_make = false;


		bool done_leg_make = false;


	/*
* Toggle this parameter to instantly turn on/off ik.
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ToggleSettings, meta = (DisplayName = "Enable Solver (Instant)", PinShownByDefault))
		bool enable_solver = true;









	/*
* Enable this parameter to make IK work even when not playing in PIE mode
* Useful for recording in sequencer.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Work outside gameplay (For Sequencer)", PinShownByDefault))
		bool Work_Outside_PIE = false;




	/*
	 * If using physical animation or in ragdoll state, if you want the aim solver to adapt to it and still target the correct targets, enable this.
	 */
	UPROPERTY(EditAnywhere, Category = AdvancedSettings, meta = (DisplayName = "Should solver adapt to physical animations ?", PinHiddenByDefault))
	bool Use_Physics_Adaptation = false;
	

	UPROPERTY(EditAnywhere, Category = AdvancedSettings, meta = (DisplayName = "Physics root reference bone (eg:- pelvis)",EditCondition="Use_Physics_Adaptation", PinHiddenByDefault))
	FName physics_root_reference = "pelvis";

	


	/*
* Enable this to turn this solver into an automatic terrain adaptive chain.
* The lookatlocation parameter is disabled here, in favour of the debuglooklocation as the base reference of the height.
* The viewport look widget will be used as reference for the in-game terrain adaption.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "Is it a terrain adaptive chain ? (like tails)", PinHiddenByDefault))
		bool Adaptive_Terrain_Tail = false;


	/*
* Trace channel used by the solver traces. Recommended to create a new dedicated trace channel for the ik through project settings.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "TAC Collision Channel", PinHiddenByDefault))
		TEnumAsByte<ETraceTypeQuery> Trace_Channel = ETraceTypeQuery::TraceTypeQuery1;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "Trace Up Height", PinHiddenByDefault))
		float Trace_Up_Height = 250;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "Trace Down Height", PinHiddenByDefault))
		float Trace_Down_Height = 250;



	FHitResult TTS_Aim_Hit;


	float TTS_Height = 0;



//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TailTerrainSettings, meta = (DisplayName = "TAC Aim Reference ", PinShownByDefault))
//		FTransform Tail_Aim_Location;




	/*
* Select the type of interpolation method.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InterpolationSettings, meta = (DisplayName = "Interpolation Type"))
		EInterpoLocation_Type_Plugin loc_interp_type = EInterpoLocation_Type_Plugin::ENUM_LegacyLoc_Interp;






	float delta_seconds_saved = 1;



	bool is_focus_debugtarget = true;




	UPROPERTY(EditAnywhere, Category = InterpolationSettings, BlueprintReadWrite, meta = (PinHiddenByDefault))
		bool Enable_Interpolation = true;


	UPROPERTY(EditAnywhere, Category = InterpolationSettings, BlueprintReadWrite, meta = (PinHiddenByDefault))
		float Interpolation_Speed = 15;



	UPROPERTY(EditAnywhere, Category = InterpolationSettings, BlueprintReadWrite, meta = (PinHiddenByDefault))
		float Toggle_Interpolation_Speed = 5;


	float toggle_alpha = 0;


	float hand_toggle_alpha = 0;



	FVector AnimLocLerp(FVector start_pos, FVector end_pos, float delta_seconds);



	FVector Lerped_LookatLocation = FVector::ZeroVector;





	TArray<FBoneReference> Hand_Array;
	TArray<FBoneReference> Elbow_Array;
	TArray<FBoneReference> Shoulder_Array;

	TArray<FBoneReference> Actual_Shoulder_Array;






//	UPROPERTY(EditAnywhere, Category = LookAtSettings)
//		FAxis LookAt_Neck_Axis;

	/*
	* The forward direction axis of the character.
	* Characters using the standard unreal directions use the default value.
	*/
	UPROPERTY(EditAnywhere, Category = LookAtSettings, meta = (DisplayName = "Forward Axis", PinHiddenByDefault))
		FVector LookAt_Axis = FVector(0,1,0);



	UPROPERTY(EditAnywhere, Category = LookAtSettings, meta = (DisplayName = "Upward Axis", PinHiddenByDefault))
		FVector Upward_Axis = FVector(0, 0, 1);



	/*
* Useful for tweaking the aiming offset of arms/limbs.
* Popular use is for weapons aiming and accuracy.
* Offset works in component space.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LookAtSettings, meta = (DisplayName = "Target Offset (only for limbs)", PinHiddenByDefault))
		FVector TargetOffset = FVector(0, 0, 0);



	/*
	* If using mocap or any use case that involves altering the forward axis during gameplay, this can be enabled to dynamically alter the arm and leg poles along with the along with the change in axis.
	* The forward axis is compared with the reference forward axis to calculate the offset of the poles. If they are the same, then nothing happens.
	*/
	UPROPERTY(EditAnywhere, Category = LookAtSettings, meta = (DisplayName = "Use Reference Forward Axis Logic ? (Good for Mocap)", PinHiddenByDefault))
	bool Use_Reference_Forward_Axis = false;



	/*
* This parameter is mainly useful when using mocap animations that involves the character rotating its root bone in multiple directions.
* It is the default forward vector of your character in component space. The dynamic forward vector is compared with the default forward vector to appropriately alter
* the knee poles and elbow poles and correcting them.
* If your character is setup in standard unreal forward axis, then there is no need to alter this.
*/

	UPROPERTY(EditAnywhere, Category = LookAtSettings, meta = (DisplayName = "Reference Forward Axis", PinHiddenByDefault))
		FVector Reference_Constant_Forward_Axis = FVector(0, 1, 0);


	FVector Reference_Constant_Forward_Temp = FVector(0,1,0);


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
	


	/*
	*The up direction vector of the character in component space.
	* 99% cases, this should not be altered.
	* Only needed to alter on characters that do not follow the standard unreal character orientations.
    */
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings, meta = (DisplayName = "Up Direction Vector", PinHiddenByDefault))
//		FVector character_direction_vector_CS = FVector(0, 0, 1);



	/*
	*The forward direction vector of the character in component space.
	* 99% cases, this should not be altered.
	* Only needed to alter on characters that do not follow the standard unreal character orientations.
	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings, meta = (DisplayName = "Forward Direction Vector", PinHiddenByDefault))
//		FVector Forward_Direction_Vector = FVector(0, 1, 0);




			/*
	* Enable this to render the traces in the animgraph viewports.
	* Animbp viewport will be unaltered.
	*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DebuggingOnly, meta = (DisplayName = "Display Lines & Widgets", PinHiddenByDefault))
			bool DisplayLineTrace = true;


	/*
	* Used for internal animation blueprint viewport for debugging. Real gameworld uses "LookAtLocation".
	* If Tail Terrain Adaptive mode is enabled, then this is turned into a constant height reference point. Still operates the widget.
    */
	UPROPERTY(EditAnywhere, Category = DebuggingOnly)
	 FTransform Debug_LookAtLocation;


	UPROPERTY(EditAnywhere, EditFixedSize, Category = DebuggingOnly)
		TArray<FTransform> Debug_Hand_Locations;








	

	FBoneContainer* SavedBoneContainer;



	float Root_Roll_Value = 0;

	float Root_Pitch_Value = 0;

	float diff_heights[6];


	TArray<FDragonData_SpineFeetPair> spine_Feet_pair;
	TArray<FHitResult> spine_hit_between;
	TArray<FName> Total_spine_bones;
	TArray<FDragonData_HitPairs> spine_hit_pairs;
	TArray<FHitResult> spine_hit_edges;
	TArray<FVector> spine_vectors_between;
	TArray<FVector> Full_Spine_OriginalLocations;
	TArray<float> Full_Spine_Heights;
	TArray<float> Total_spine_heights;
	TArray<float> Total_spine_alphas;
	TArray<float> Total_spine_angles;
	TArray<FVector> Total_Terrain_Locations;

	TArray<FCompactPoseBoneIndex> Spine_Indices;



	TArray<FCompactPoseBoneIndex> Extra_Spine_Indices;

	TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE> spine_Transform_pairs;
	TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE> spine_AnimatedTransform_pairs;

	TArray<FVector> spine_between_transforms;


	TArray<FVector> spine_between_offseted_transforms;
	TArray<float> spine_between_heights;


	TArray<FVector> snake_spine_positions;
	TArray<FTransform> spine_ChangeTransform_pairs_Obsolete;
	TArray<FVector> spine_LocDifference;
	TArray<FRotator> spine_RotDifference;
	TArray<FBoneTransform> RestBoneTransforms;
	TArray<FBoneTransform> AnimatedBoneTransforms;
	TArray<FBoneTransform> Original_AnimatedBoneTransforms;
	TArray<FBoneTransform> FinalBoneTransforms;
	TArray<FBoneTransform> BoneTransforms;
	TArray<FCompactPoseBoneIndex> combined_indices;



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








	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Experimental, meta = (DisplayName = "Use FeetTips(if exist)", PinHiddenByDefault))
		bool Use_FeetTips = false;


	FVector SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed);


	FTransform LookAtAroundPoint(FVector origin_point, FVector AxisVector, float AngleAxis, FVector origin);


	void Dragon_VectorCreation(bool isPelvis, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases);

	FVector RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle);


	FName GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh);


	TArray<FName> BoneArrayMachine(int32 index, FName starting,FName knee,FName thigh, FName ending, bool is_foot = false);

	bool Check_Loop_Exist(int index,FVector feet_trace_offset, float feet_height,FVector knee_pole, FName start_bone, FName knee_bone, FName thigh_bone, FName input_bone, TArray<FName>& total_spine_bones);

	TArray<FDragonData_SpineFeetPair> Swap_Spine_Pairs(TArray<FDragonData_SpineFeetPair>& test_list);


	FCollisionQueryParams getDefaultSpineColliParams(FName name, AActor *me, bool debug_mode);

	void line_trace_func(USkeletalMeshComponent* skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode = false);


	FComponentSpacePoseContext* saved_pose;

	USkeletalMeshComponent *owning_skel;

	FTransform owner_skel_w_transform = FTransform::Identity;


	int32 tot_len_of_bones;

	void GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);



	void Make_All_Bones(FCSPose<FCompactPose>& MeshBases);

	FBoneTransform LookAt_Processor(FCSPose<FCompactPose>& MeshBases, FVector Offset_Vector, FName bone_name, int index, float Lookat_Clamp);


	FRotator HeadRotation_Temp = FRotator();


	FVector GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex);



	void FABRIK_BodySystem(FCSPose<FCompactPose>& MeshBases, FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


	void OrthoNormalize(FVector& Normal, FVector& Tangent);

	FQuat LookRotation(FVector lookAt, FVector upDirection);

	bool solve_should_fail = false;

	TArray<FVector> TraceStartList = TArray<FVector>();
	TArray<FVector> TraceEndList = TArray<FVector>();



	FTransform PhysicsAdaptTransform(FCSPose<FCompactPose>& MeshBases,FTransform const Input_Transform) const;

	
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

	FAnimNode_DragonAimSolver();

protected:

//	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


//	void LineTraceControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	


};

