/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
//#include "Engine.h"
#include "BoneContainer.h"
#include "UObject/ObjectMacros.h"
#include "BonePose.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BoneContainer.h"

#include "UObject/NoExportTypes.h"

#include "Animation/AnimNodeBase.h"
#include "CommonAnimTypes.h"
#include "Curves/CurveFloat.h"

#include <BoneControllers/AnimNode_SkeletalControlBase.h>


#include "DragonIK_Library.generated.h"








UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ETwist_Type_DragonIK : uint8
{

	ENUM_PoseAxisTwist	UMETA(DisplayName = "Twist arms relative to arm pose axis"),
	ENUM_UpAxisTwist 	UMETA(DisplayName = "Twist arms relative to vertical axis"),

};



UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EPole_System_DragonIK : uint8
{

	ENUM_SinglePoleSystem UMETA(DisplayName = "Single Pole System"),
	ENUM_NSEWPoleSystem 	UMETA(DisplayName = "Advanced NSEW pole system (Good for VR)"),
	ENUM_PoseBendSystem 	UMETA(DisplayName = "Pose-based direction Bending + S.P.S"),

};





UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EInputTransformSpace_DragonIK : uint8
{

	ENUM_WorldSpaceSystem UMETA(DisplayName = "World Space"),
	ENUM_ComponentSpaceSystem 	UMETA(DisplayName = "Component Space"),

};






UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ERotation_Type_DragonIK : uint8
{
	/*
	* Using this ensure rotation is consistent with the pose.
	* Characters with different skeleton, but who share the same pose such as a T-pose will have very similar hand rotations.
	*/
	ENUM_AdditiveRotation UMETA(DisplayName = "Use Additive Rotation"),
	/*
	* Using this ensure rotation is consistent with the skeleton joint orientations.
	* No fancy tricks, just use the rotation directly and use it for your hands.
	*/
	ENUM_ReplaceRotation 	UMETA(DisplayName = "Use Replace Rotation"),

};




UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EIKTrace_Type_Plugin : uint8
{
	ENUM_LineTrace_Type 	UMETA(DisplayName = "Line Trace"),
	ENUM_SphereTrace_Type 	UMETA(DisplayName = "Sphere Trace")
	//ENUM_BoxTrace_Type 	UMETA(DisplayName = "Box Trace")


};



UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EInterpoLocation_Type_Plugin : uint8
{
	ENUM_DivisiveLoc_Interp 	UMETA(DisplayName = "Divisive Interpolation Method"),
	ENUM_LegacyLoc_Interp 	UMETA(DisplayName = "Normal (Location)Interpolation Method")
};



UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EInterpoRotation_Type_Plugin : uint8
{
	ENUM_DivisiveRot_Interp 	UMETA(DisplayName = "Divisive Interpolation Method"),
	ENUM_LegacyRot_Interp 	UMETA(DisplayName = "Normal (Rotation)Interpolation Method")
};


USTRUCT(BlueprintType)
struct FDragonData_StickyFeetStruct
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Sticky Feet Array", PinHiddenByDefault))
	TArray<bool> sticky_feet_array;

};





USTRUCT(BlueprintType)
struct FDragonData_FeetAlpha_Struct
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet IK Alpha", PinHiddenByDefault))
		TArray<float> feet_IK_alpha_array;

};




USTRUCT(BlueprintType)
struct FDragonData_FeetOffset_Struct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet Extra Offset Array", PinHiddenByDefault))
	TArray<FVector> feet_extra_offset_array;

};






USTRUCT(BlueprintType)
struct FDragonData_StickySocketStruct
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Sticky Socket Array", PinHiddenByDefault))
		TArray<FBoneSocketTarget> sticky_socket_array;

};





USTRUCT(BlueprintType)
struct FDragonData_ArmSizeStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Use Custom Arm Sizes ?", PinHiddenByDefault))
	 bool Use_Custom_Arm_Sizes = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Custom Upper Arm Length", PinHiddenByDefault))
	 float custom_upperArm_length = 0;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Custom Lower Arm Length", PinHiddenByDefault))
	 float custom_lowerArm_length = 0;

};


USTRUCT(BlueprintType)
struct FDragonData_CustomArmLengths
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Custom Arm Length Data", PinHiddenByDefault))
		TArray<FDragonData_ArmSizeStruct> CustomArmSizeArray;

};




struct FDragonData_BoneStruct
{

	FBoneReference Start_Spine;
	FBoneReference Pelvis;

	FBoneReference Head_Bone;
	FBoneReference LookLimit_Bone;

	TArray<FBoneReference> FeetBones;
	TArray<FBoneReference> KneeBones;
	TArray<FBoneReference> ThighBones;

};



struct FDragonData_HitPairs
{
	FHitResult Parent_Spine_Hit;
	FVector Parent_Spine_Point;

	FHitResult Parent_Left_Hit;
	FVector Parent_Left_Point;

	FHitResult Parent_Right_Hit;
	FVector Parent_Right_Point;

	FHitResult Parent_Front_Hit;
	FVector Parent_Front_Point;
	
	FHitResult Parent_Back_Hit;
	FVector Parent_Back_Point;


	TArray<FHitResult> RV_Feet_Hits;
	TArray<FVector> RV_FeetHit_Points;


	TArray<TArray<FHitResult>> RV_Associated_Fingers_Hits;

	TArray<TArray<FHitResult>> RV_Original_Associated_Fingers_Hits;



	TArray<FHitResult> RV_FeetFront_Hits;

	TArray<FHitResult> RV_FeetBack_Hits;

	TArray<FHitResult> RV_FeetLeft_Hits;

	TArray<FHitResult> RV_FeetRight_Hits;




};



struct FDragonData_SpineFeetPair_TRANSFORM_WSPACE
{

	FTransform Spine_Involved = FTransform::Identity;

	FVector last_spine_location = FVector(0,0,0);

	FVector last_target_location = FVector(0, 0, 0);


	float Z_Offset = 0;


	TArray<FTransform> Associated_Feet = TArray<FTransform>();

	TArray<FTransform> Original_Associated_Feet = TArray<FTransform>();




	TArray<bool> Sticky_Feet_Auto = TArray<bool>();

	TArray<bool> Sticky_Feet_Input = TArray<bool>();



	TArray<FTransform> Associated_Frozen_Feet = TArray<FTransform>();



	TArray<FTransform> Associated_Temp_Feet = TArray<FTransform>();



	TArray<float> Associated_Sticky_Alpha = TArray<float>();

	TArray<FVector> Associated_StickySwitch_Bools = TArray<FVector>();



	TArray<TArray<FTransform>> Associated_Fingers = TArray<TArray<FTransform>>();



	TArray<FTransform> Associated_FeetBalls = TArray<FTransform>();


	TArray<FTransform> Associated_Knee = TArray<FTransform>();
	TArray<FTransform> Associated_Thigh = TArray<FTransform>();



};






struct FDragonData_SpineFeetPair_heights
{

	float Spine_Involved = 0;

	TArray<float> Associated_Feet = TArray<float>();

};





/** Transient structure for FABRIK node evaluation */
struct DragonChainLink
{
public:
	/** Position of bone in component space. */
	FVector Position;

	/** Distance to its parent link. */
	float Length;

	/** Bone Index in SkeletalMesh */
	FCompactPoseBoneIndex BoneIndex;

	/** Transform Index that this control will output */
	int32 TransformIndex;

	/** Child bones which are overlapping this bone.
	* They have a zero length distance, so they will inherit this bone's transformation. */
	TArray<int32> ChildZeroLengthTransformIndices;

	DragonChainLink()
		: Position(FVector::ZeroVector)
		, Length(0.f)
		, BoneIndex(INDEX_NONE)
		, TransformIndex(INDEX_NONE)
	{
	}

	DragonChainLink(const FVector& InPosition, const float& InLength, const FCompactPoseBoneIndex& InBoneIndex, const int32& InTransformIndex)
		: Position(InPosition)
		, Length(InLength)
		, BoneIndex(InBoneIndex)
		, TransformIndex(InTransformIndex)
	{
	}
};




struct ArmIKParamStruct
{
public :

	FTransform mesh_component_transform;
	FBoneReference FeetBone;
	FBoneReference KneeBone;
	FBoneReference ThighBone;
	FBoneReference twist_elbow_bone;
	FBoneReference twist_shoulder_bone;
	FTransform ThighTransform;
	FTransform Shoulder_Trans;
	FTransform Knee_Trans;
	FTransform Hand_Trans;
	FVector JointLocation;
	FVector Knee_Pole_Offset;
	FTransform transform_offset;
	FTransform Common_Spine_Modified_Transform;
	FRotator Limb_Rotation_Offset;

	float Hand_Clamp_Value;
	FTransform Extra_Hand_Offset;
	FVector Elbow_Pole_Offset;
	bool override_hand_rotation;
	FTransform Knee_Transform_Default;
	FVector LookAt_Axis_Input;
	FVector Reference_Constant_Forward_Axis_Input;

	bool Use_NSEW_Poles;
	bool up_arm_twist_technique;
	FVector Up_Vector_Val;
	bool Separate_Arms_Logic_Used;
	bool is_reach_mode;
	bool bAllowHandStretching;
	bool Let_Arm_Twist_With_Hand;
	ERotation_Type_DragonIK rotation_method;
	float arm_alpha;
	FDragonData_ArmSizeStruct custom_arm_size;

	bool Auto_Calculated_Poles = false;

	FVector Extra_Elbow_Pole_Offset = FVector::ZeroVector;
    bool Is_Frozen_Elbow = false;

	FTransform Frozen_UpperArm_Transform = FTransform::Identity;
	FTransform Frozen_Elbow_Transform = FTransform::Identity;
	FTransform Frozen_Hand_Transform = FTransform::Identity; 

};



struct DragonSpineOutput
{
public:
	/** Position of bone in component space. */
	TArray<DragonChainLink> chain_data;
	TArray<FCompactPoseBoneIndex> BoneIndices;
	TArray<FBoneTransform> temp_transforms;
	FTransform SpineFirstEffectorTransform;
	FTransform PelvicEffectorTransform;
	FVector RootDifference;
	bool is_moved;
	int32 NumChainLinks;
};




struct FDragonData_SpineFeetPair
{

	FBoneReference Spine_Involved;

	TArray<FBoneReference> Associated_Feet;

	TArray<FBoneReference> Associated_Knees;

	TArray<FBoneReference> Associated_Thighs;

	int32 Spine_Chain_Index = 0;

	FTransform inverted_spine_tf;

	TArray<float> Feet_Heights;

//	TArray<float> feet_yaw_offset;

	TArray<FRotator> feet_rotation_offset;

	TArray<float> feet_rotation_limit;

//	TArray<float> FeetAlpha;

//	TArray<float> Max_Feet_Float;

//	TArray<float> Feet_Slope_Offset_Multiplier;

	TArray<FVector> knee_direction_offset;


	TArray<TArray<FBoneReference>> Fingers_Name_Array;

	TArray<TArray<int32>> Fingers_Chain_Num;


	TArray<int> order_index;


	TArray<FVector> feet_trace_offset;



	int solver_count = 0;

	FVector total_spine_locdata;

	bool operator == (const FDragonData_SpineFeetPair &pair) const
	{

		if (Spine_Involved.BoneIndex == pair.Spine_Involved.BoneIndex && Associated_Feet.Num() == 0)
		{
			return true;
		}
		else
			return false;


	}

};





USTRUCT(BlueprintType)
struct FDragonData_WarpLimbsData
{
	GENERATED_BODY()




	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Foot_Bone_Name;

	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Knee_Bone_Name;

	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Thigh_Bone_Name;


	/*
	* Controls the blue disc widgets in the viewport.
	* Place the disc just at the "floor" value of the feets/arms, which is the maximum point at which the feets/arms will go down in a walking animation.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
	 float Warp_Lift_Reference_Location = 0;


	/*
	* Extra warp value offset for the limb.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Warp_Param_Adder = 0;



	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Minimum Maximum Warp" , PinHiddenByDefault))
		FVector2D Min_Max_Warp = FVector2D(0,2);



	/*
	* The maximum height of the extra compression of the limbs in an animation.
	* Higher values means more extra inward compression when in an animation such as walking/jogging.
	* Lower values means less arm/leg compression exaggeration in an animation.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float max_extra_compression_height = 35;

};





struct FDragonData_WarpLimbStruct
{

		UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Thigh_Bone_Name;

	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Knee_Bone_Name;

	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Foot_Bone_Name;


	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Warp_Lift_Reference_Location = 0;


	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Warp_Param_Adder = 0;


};




USTRUCT(BlueprintType)
struct FDragonData_SingleArmElement
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Arm Target Transform", PinHiddenByDefault))
		FTransform Overrided_Arm_Transform = FTransform::Identity;


	/*
* This scales the finger line trace relative to the size of the foot trace heights.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Alpha", PinHiddenByDefault))
		float Arm_Alpha = 1;


	/*
* This scales the finger line trace relative to the size of the foot trace heights.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Hand Rotation Offset", PinHiddenByDefault))
		FRotator rotation_offset = FRotator(0,0,0);

};


USTRUCT(BlueprintType)
struct FDragonData_Overrided_Location_Data
{
	GENERATED_BODY()

		/*
		* This array is for separate aim targets for hands.
		* It is only used if separate arm targets is enabled.
		*/
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Separate Arm Target Array Override", PinHiddenByDefault))
		TArray<FDragonData_SingleArmElement> Arm_TargetLocation_Overrides;

	    
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl)
	//	FDragonData_Overrided_SingleArmElement test;

};

USTRUCT(BlueprintType)
struct FDragonData_ArmsData
{
	GENERATED_BODY()



		/*
		* This is the clavicle bone. The bone that connects the shoulder to the spine.
		* This is only used if separate hand aim/reaching is enabled. Will not be used for normal aiming.
		*/
		UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Clavicle Bone (optional)", PinHiddenByDefault))
		FBoneReference Clavicle_Bone;


	/*
* This is your shoulder bone.
*/

		UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Shoulder_Bone_Name;


		/*
* This is your elbow bone.
*/
	   UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Elbow_Bone_Name;







	/*
	* This is your hand bone.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FBoneReference Hand_Bone_Name;



	/*
	* Make sure to un-check this to fix inversions of poles and twists for left arms.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Is this right hand ?", PinHiddenByDefault))
		bool is_this_right_hand = true;


	/*
	* Enable this if forearm twisting alone needs to be inverted.
	*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Invert lower arm twist ?", PinHiddenByDefault))
		bool invert_lower_twist = false;



	/*
* Enable this if upperarm twisting alone needs to be inverted.
*/
	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Invert upper arm twist ?", PinHiddenByDefault))
		bool invert_upper_twist = false;





	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Twist Forearm Bone (optional)", PinHiddenByDefault))
		FBoneReference Twist_Forearm_Bone;


	UPROPERTY(EditAnywhere, Category = SkeletalControl, meta = (DisplayName = "Twist Shoulder Bone (optional)", PinHiddenByDefault))
		FBoneReference Twist_Shoulder_Bone;




	/*
	* This is only used if accurate hand rotation is enabled.
	* This is the local axis of rotation the hand should rotate towards.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Local Hand Axis (If accurate hand rotation)", PinHiddenByDefault))
		FVector Local_Direction_Axis = FVector(0, 1, 0);


	/*
* This can be used to offset the arm target.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FVector Arm_Aiming_Offset = FVector::ZeroVector;

	/*
	* Enable this if you want the hand to directly aim towards the target, independent of the arm.
	* Might be good for pistol aiming.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		bool accurate_hand_rotation = false;


//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
//		float overridden_limb_clamp = 0;


	/*
	* This is to decide if the axis of accurate rotation is relative to local bone transforms.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		bool relative_axis = true;

	/*
	* This is the maximum ratio the arm can extend towards the target. 1 means it will not extend beyond the animated arm pose.
	* 1.25 means the arm can extend an additional 25% compared to its original pose.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Maximum_Extension = 1.75f;



	/*
* This is the minimum ratio the arm can compress towards the shoulder.
* 0.3 means the arm can compress only upto 30% of its original pose.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Minimum_Extension = 0.3f;


	/*
	* This is different from the maximum extension.
	* If maximum extension reaches its physical bone limits, then the max stretch ratio takes over.
	* It controls how far additionally you want your arms to reach by stretching the forerarms.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Max_Stretch_Ratio = 1.25f;



	/*
	* Tweak this parameter to control whether the fore arm or the upper needs to stretch when the arm is being stretched.
	* A value of 1 means the entire stretching is handled by the upper arm, leaving the forearm to be unstretched.
	* A value of 0 means the entire stretching is handled by the lower arm, leaving the upper arm to be unstretched.
	* A value between them gives a blended result.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Stretch_lower_arm_Priorty = 0.9f;




//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
//		bool Use_NSEW_Poles = false;


	/*
	* This is the elbow pole if using single pole method.
	* This can be controlled using the pole widget.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Elbow Pole Offset (SINGLE POLE METHOD)", PinHiddenByDefault))
		FVector Elbow_Pole_Offset = FVector::ZeroVector;


	/*
	* This is the north pole used in the (NSEW)North-South-East-West advanced pole system.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "North Pole (NSEW POLE METHOD)", PinHiddenByDefault))
		FVector North_Pole_Offset = FVector(0,100,0);


	/*
	* This is the south pole used in the (NSEW)North-South-East-West advanced pole system.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "South Pole (NSEW POLE METHOD)", PinHiddenByDefault))
		FVector South_Pole_Offset = FVector(0,-100,0);


	/*
* This is the west pole used in the (NSEW)North-South-East-West advanced pole system.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "West Pole (NSEW POLE METHOD)", PinHiddenByDefault))
		FVector West_Pole_Offset = FVector(100,0, 0);


	/*
* This is the east pole used in the (NSEW)North-South-East-West advanced pole system.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "East Pole (NSEW POLE METHOD)", PinHiddenByDefault))
		FVector East_Pole_Offset = FVector(-100,0, 0);




	/*
* Enable this to override the clamp limits of the arm. The default limb clamp value will be ignored.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided clamp limits ?", PinHiddenByDefault))
		bool override_limits = false;



	/*
* It is the overrided horizontal clamp value of the arms
* Only used if overrided limits is used.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided (Horizontal Clamp)", PinHiddenByDefault))
		FVector2D Max_Arm_H_Angle = FVector2D(45,45);


//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided (Max Right Horizontal Clamp)", PinHiddenByDefault))
//		float Max_Arm_R_H_Angle = 45.0f;


		/*
* It is the overrided vertical clamp value of the arms
* Only used if overrided limits is used.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided (Vertical Clamp)", PinHiddenByDefault))
		FVector2D Max_Arm_V_Angle = FVector2D(45, 45);




	/*
	* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.
	* Negative value comes for Y.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Clavicle Inner Rotation limit (Sideways)", PinHiddenByDefault))
		FVector2D Inner_Clavicle_Side_Limit = FVector2D(45, 45);


	/*
* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle rotate.
* Negative value comes for Y.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Clavicle Inner Rotation limit (Vertical)", PinHiddenByDefault))
		FVector2D Inner_Clavicle_Vertical_Limit = FVector2D(45, 45);




	/*
* This is the inner angle where rotation is nullified. It is only when the rotation breaches this angle, does the clavicle start to rotate.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Clavicle Total Rotation limit (Sideways)", PinHiddenByDefault))
		FVector2D Outer_Clavicle_Side_Limit = FVector2D(45, 45);


	/*
* This is the outer total clamp. The clavicle stop twisting if the twist breaches these clamps.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Clavicle Total Rotation limit (Vertical)", PinHiddenByDefault))
		FVector2D Outer_Clavicle_Vertical_Limit = FVector2D(45, 45);






	/*
* This is the inner twist angle where rotation is nullified. It is only when the rotation breaches this angle, does the shoulder start to twist.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Shoulder Inner Twist limit", PinHiddenByDefault))
		FVector2D Shoulder_Inner_Clamp = FVector2D(5, 5);



	/*
* This is the outer total clamp of the shoulder. The shoulder stop twisting if the twist breaches these clamps.
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Shoulder Outer Twist limit", PinHiddenByDefault))
		FVector2D Shoulder_Outer_Clamp = FVector2D(25, 25);

	
	/*
* This is the outer total clamp of the forearm. The forearm stop twisting if the twist breaches these clamps.
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Forearm Outer Twist limit", PinHiddenByDefault))
		FVector2D ForeArm_Angle_Limit = FVector2D(180, 180);


	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "(optional) Twist Forearm Outer Twist limit", PinHiddenByDefault))
		FVector2D TwistForeArm_Angle_Limit = FVector2D(-180, 180);
		*/

	/*
	* This is the optional twist offset if hands have twisted in the opposite direction towards the forearm.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Twist Offset when hand is directly towards arm", PinHiddenByDefault))
		float Twist_Offset_Reverse = 180;



	float last_shoulder_angle = 0;

	float last_forarm_angle = 0;

	FRotator last_clavicle_rotation = FRotator(0,0,0);

	FRotator last_hand_rotation = FRotator(0,0,0);

//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided (Max Down Vertical Clamp)", PinHiddenByDefault))
//		float Max_Arm_D_V_Angle = 45.0f;


};



USTRUCT(BlueprintType)
struct FDragonData_FingerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
	 FName Finger_Bone_Name;



	/*
* This scales the finger line trace relative to the size of the foot trace heights.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Trace size scale", PinHiddenByDefault))
		float Trace_Scale = 0.5f;


	/*
* Tweak this to offset the trace lines from its original calculated position.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FVector Trace_Offset = FVector(0,0,0);


/*
* If finger is pointing backwards relative to the forward vector, enable this.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Is finger pointing backwards ?", PinHiddenByDefault))
		bool Is_Finger_Backward = false;


//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
	 float chain_number = 2;



};

USTRUCT(BlueprintType)
struct FDragonData_FootData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Feet_Bone_Name;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Knee_Bone_Name;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Thigh_Bone_Name;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FRotator Feet_Rotation_Offset = FRotator(0,0,0);



	/*
	* If fixed pole is disabled, then pole is calculated related to the knee animations.
	* If fixed pole is enabled, then pole is calculated strictly in component space fixed locations.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Fixed Pole ?",PinHiddenByDefault))
		bool Fixed_Pole = false;

	/*
	* Tweak this to control the knee poles. Visually controls the blue ball widgets in the graph viewport.
	* If fixed pole is disabled, then location is relative to the knee bones.
	* If fixed pole is enabled, then location is relative to component space of the skeletal mesh.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Knee Pole Offset",PinHiddenByDefault))
		FVector Knee_Direction_Offset = FVector(0,0,0);





	/*
	* Tweak this to offset the trace lines from its original calculated position.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FVector Feet_Trace_Offset = FVector(0, 0, 0);


	/*
	* This is only used in the foot solver and if 4-point feet rotation is enabled
	* This tweaks the length of the feet.
	* Visualize the size using the animbp viewport widgets.
	* The length of the yellow cylinder widget on the feet.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Frontal spacing (4-point feets)",PinHiddenByDefault))
		float Front_Trace_Point_Spacing = 20;


	/*
* This is only used in the foot solver and if 4-point feet rotation is enabled
* This tweaks the width of the feet.
* Visualize the width using the animbp viewport widgets.
* The yellow cylindrical widget's radius denotes the width.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Side spacing (4-point feets)", PinHiddenByDefault))
		float Side_Traces_Spacing = 5;

	
	/*
	* Maximum foot rotation in all axes
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Feet_Rotation_Limit = 45;


	/*
	* Use constant fixed height for feet instead of automatically calculated depending on animation.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Fixed Foot Height ?"))
		bool Fixed_Foot_Height = false;

	/*
	* If fixed foot height is disabed, this will provide an offset to the automatic feet height.
	* If fixed foot height is disabled, this will set the fixed feet height.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet Height Offset / Fixed Feet Height"))
		float Feet_Heights = 0;



	/*
	* The influence of IK.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		float Feet_Alpha = 1;

	/*
	* This is the minimum length the feet can extend inwards, from the thigh to feet axis.
	* Value of 0 means the feet doesn't have any constraint, and can reach upto the thigh bone.
	* Value of 0.5 means the leg can compress upto 50% of its original length.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Minimum Feet extension ratio", PinHiddenByDefault))
		float Min_Feet_Extension = 0.35f;


	/*
	* This is the max length the feet can extend up to, from the thigh to feet axis.
	* Value of 1 means the feet will not extend beyond the original pose length of the thigh and feet.
	* Value of 1.25 means the leg can extend upto 125% of its original length.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Maximum Feet extension ratio", PinHiddenByDefault))
		float Max_Feet_Extension = 1.25f;


	/*
	* Lift/Dip the feet as it rotates on upper slopes.
	* Use small values like 0.1f, because this is a multiplier which increases/decreases the lift depending on the pitch/roll difference of the feet as it touches steep slopes.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet Extra Up-Slope Offset Multiplier", PinHiddenByDefault))
		float Feet_Upslope_Offset_Multiplier = 0.0f;


	/*
		* Lift/Dip the feet as it rotates on lower slopes.
		* Use small values like 0.1f, because this is a multiplier which increases/decreases the lift depending on the pitch/roll difference of the feet as it touches steep slopes.
		*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet Extra Down-Slope Offset Multiplier", PinHiddenByDefault))
	float Feet_Downslope_Offset_Multiplier = 0.0f;


	/*
	 * The maximum feet offset limit caused by the above two slope related offsets.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Feet Slope Multiplier Clamp Radius", PinHiddenByDefault))
	float Feet_Slope_Offset_Clamp_Radius = 15.0f;
	



	/*
	* This is the max height the feet can lift up to on a terrain, in the upward axis.
	* 0 means the feet lifting is not constrained to any limit.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Max Feet Lift Height in UP Axis", PinHiddenByDefault))
		float Max_Feet_Lift = 0.f;



	/*
* if value is above 0, the trace radius is overrided.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Overrided trace radius (if capsule trace used)", PinHiddenByDefault))
		float Overrided_Trace_Radius = 0.0f;




	/*
	* Finger arrays. Include just the first bone in each finger chain.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Finger Array (optional)",  PinHiddenByDefault))
		TArray<FDragonData_FingerData> Finger_Array;

};


USTRUCT(Blueprintable)
struct FDragonData_MultiInput
{
	GENERATED_USTRUCT_BODY()

public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (DisplayName = "Start Spine / Chest",PinHiddenByDefault))
		FName Start_Spine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		FName Pelvis;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SkeletalControl, meta = (PinHiddenByDefault))
		TArray<FDragonData_FootData> FeetBones;

};


///////////







USTRUCT()
struct FCCDIK_Modified_ChainLink
{
	GENERATED_BODY()
public:
	/** Position of bone in component space. */
	FVector Position;

	/** Local Solver Positions */
	FVector solverLocalPositions;

	/** Rotation of bone in component space. */
	FQuat BoneRotation;

	/** Distance to its parent link. */
	float Length;

	/** Axis of rotation **/
	FVector axis;

	/** Bone Index in SkeletalMesh */
	int32 BoneIndex;

	/** Transform Index that this control will output */
	int32 TransformIndex;

	/** Default Direction to Parent */
	FVector DefaultDirToParent;

	/** Child bones which are overlapping this bone.
	* They have a zero length distance, so they will inherit this bone's transformation. */
	TArray<int32> ChildZeroLengthTransformIndices;

	FCCDIK_Modified_ChainLink()
		: Position(FVector::ZeroVector)
		, Length(0.f)
		, BoneIndex(INDEX_NONE)
		, TransformIndex(INDEX_NONE)
		, DefaultDirToParent(FVector(-1.f, 0.f, 0.f))
	{
	}

	FCCDIK_Modified_ChainLink(const FVector& InPosition, const FVector& LocalPosition, const FQuat& InRotation, const float InLength, const FCompactPoseBoneIndex& InBoneIndex, const int32& InTransformIndex)
		: Position(InPosition)
		, solverLocalPositions(LocalPosition)
		, BoneRotation(InRotation)
		, Length(InLength)
		, BoneIndex(InBoneIndex.GetInt())
		, TransformIndex(InTransformIndex)
		, DefaultDirToParent(FVector(-1.f, 0.f, 0.f))
	{
	}

	FCCDIK_Modified_ChainLink(const FVector& InPosition, const float InLength, const FCompactPoseBoneIndex& InBoneIndex, const int32& InTransformIndex, const FVector& InDefaultDirToParent)
		: Position(InPosition)
		, Length(InLength)
		, BoneIndex(InBoneIndex.GetInt())
		, TransformIndex(InTransformIndex)
		, DefaultDirToParent(InDefaultDirToParent)
	{
	}

	FCCDIK_Modified_ChainLink(const FVector& InPosition, const float InLength, const int32 InBoneIndex, const int32 InTransformIndex)
		: Position(InPosition)
		, Length(InLength)
		, BoneIndex(InBoneIndex)
		, TransformIndex(InTransformIndex)
		, DefaultDirToParent(FVector(-1.f, 0.f, 0.f))
	{
	}
};






void Solve_Modified_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, FVector& OutJointPos, FVector& OutEndPos, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
void Solve_Modified_TwoBoneIK_2(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
void Solve_Modified_TwoBoneIK_3(FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
void Solve_Modified_TwoBoneIK_4(FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, const FVector& ThighEffector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);









UCLASS(Blueprintable, BlueprintType)
class DRAGONIKPLUGIN_API UDragonIK_Library : public UObject
{
	GENERATED_BODY()



		static UDragonIK_Library* Constructor();


public :

	UFUNCTION(BlueprintPure, Category = "SolverFunctions")
		static FRotator CustomLookRotation(FVector lookAt, FVector upDirection);

	static FQuat UnityLookRotation(FVector forward, FVector upward);


	static FQuat UnityRotateTowards(FQuat from, FQuat to, float maxDegreesDelta);

	static FQuat SafeFromToRotation(FVector v1, FVector v2, FVector up);

	static FQuat QuatFromToRotation(FQuat from, FQuat to);




	static void Solve_Modified_Direct_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float Forearm_Stretch_Priority);
	static void Solve_Modified_Direct_TwoBoneIK_2(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float Forearm_Stretch_Priority);
	static void Solve_Modified_Direct_TwoBoneIK_3(FTransform comp_transform, float wrist_rotation, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float stretch_arm_priority, bool up_arm_twist_tech);
	static void Solve_Modified_Direct_TwoBoneIK_4(FDragonData_ArmSizeStruct arm_size_data, FTransform comp_transform,float wrist_rotation, FTransform& InOutRootTransform, FTransform& InOutJointTransform, FTransform& InOutEndTransform, const FVector& JointTarget, const FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, float stretch_arm_priority, bool up_arm_twist_tech);


	static void RemoveTwist(const FTransform& InParentTransform, FTransform& InOutTransform, const FTransform& OriginalLocalTransform, const FVector& InAlignVector);


	static FRotator GetHandYaw(bool is_hand_arm, FDragonData_ArmsData& HandData, FTransform Body_Transform, FTransform original_arm_transform, FTransform original_hand_transform, FTransform current_arm_transform, FTransform current_hand_transform, FTransform unmodified_hand_transform, FVector Up_Vector_CS);

	static FTransform SetArmYaw(bool invert_twist, bool is_right_hand, float roll, FTransform Body_Transform, FTransform original_arm_transform, FTransform original_hand_transform, FTransform current_arm_transform, FTransform current_hand_transform);

	static float GetBoneLengthBetweenBones(USkeletalMeshComponent* SkeletalMeshComponent, FName StartBoneName, FName EndBoneName);

	static bool IsBonePhysicsEnabled(USkeletalMeshComponent* SkeletalMeshComponent, FName BoneName);

    

	//FABRIK RELEVANT FUNCTIONS

	 static FVector SolveJoint(FVector pos1, FVector pos2, float length);

	 static void SolverMove(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FVector offset);

	 static void SolverRotate(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation, bool recursive);

	 static void SolverRotateChildren(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation);

	 static void SolverMoveChildrenAroundPoint(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index, FQuat rotation);

	 static FQuat GetParentSolverRotation(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index);

	 static FVector GetParentSolverPosition(TArray<FCCDIK_Modified_ChainLink>& InOutChain, int index);

	 static FQuat GetLimitedRotation(TArray<FCCDIK_Modified_ChainLink>& InOutChain, FQuat OriginalBoneRotation, int index, FQuat q, bool &changed);
	 static FQuat GetLimitedLocalRotation(FQuat defaultLocalRotation, FQuat localRotation, bool& changed);

	 static FQuat LimitTwist(FQuat rotation, FVector axis, FVector orthoAxis, float twistLimit);
	 static FQuat LimitRotation(FQuat rotation, FVector axis, FVector secondaryAxis, float general_limit, float twistLimit);
	 static FQuat LimitSwing(FQuat rotation, FVector axis, float general_limit);

	 static void LimitForward(int rotateBone, int limitBone, TArray<FCCDIK_Modified_ChainLink>& InOutChain);

	 static void BackwardReachLimited(FVector position, TArray<FCCDIK_Modified_ChainLink>& InOutChain);

	//

	UFUNCTION(BlueprintPure, Category = "SolverFunctions")
		static FRotator LookAtVector_V2(FVector Source_Location, FVector lookAt, FVector upDirection);



	static FTransform QuatLookXatLocalDirection(const FTransform& LookAtFromTransform, const FVector& LookAtLocalDirection);

	UFUNCTION(BlueprintPure, Category = "SolverFunctions")
		static FTransform QuatLookXatLocation(const FTransform& LookAtFromTransform, const FVector& LookAtTarget);

	UFUNCTION(BlueprintPure, Category = "SolverFunctions")
	static FRotator LookAtRotation_V3(FVector source, FVector target,FVector upvector);



	static FRotator LookAt_Function(FTransform transform, FVector worldPosition, FVector up_direction, FVector rotationOffset);


	static bool Solve_Modified_CCDIK(TArray<FCCDIK_Modified_ChainLink>& InOutChain, const FVector& TargetPosition, float MaximumReach, float Precision, int32 MaxIteration);

	

	//FTransform GetTargetTransform_Modified(const FTransform& InComponentTransform, FCSPose<FCompactPose>& MeshBases, FBoneSocketTarget& InTarget, const FVector& InOffset);


	static void Evaluate_CCDIK_Modified(bool First_Start, FComponentSpacePoseContext& Output, USkeletalMeshComponent *owning_skel, FBoneReference RootBone, FBoneReference TipBone, float Precision, int32 MaxIteration, bool bStartFromTail, bool bEnableRotationLimit, FTransform EffectorTransform, TArray<FBoneTransform>& OutBoneTransforms, TArray<FBoneTransform>& Dulicate_OutBoneTransforms);

	static void Evaluate_ConsecutiveBoneRotations(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FTransform mesh_component_transform,TArray<FDragonData_SpineFeetPair> spine_feet_pair, FRuntimeFloatCurve Look_Bending_Curve, FBoneReference RootBone_Input, FBoneReference TipBone_Input, float Lookat_Radius, FRotator Inner_Body_Clamp, FTransform EffectorTransform, FAxis LookAt_Axis, float Lookat_Clamp,float Vertical_Dip_Treshold,float Downward_Dip_Multiplier,float Inverted_Dip_Multiplier, float Side_Multiplier,float Side_Down_Multiplier,bool alter_pelvis,FTransform PelvisLocTarget, FRuntimeFloatCurve Bending_Multiplier_Curve,float Up_Rot_Clamp,bool Use_Natural_Method, bool separate_head_clamp, float head_clamp_value,FTransform HeadTransf,bool head_rot_override, EInputTransformSpace_DragonIK transform_space, TArray<FBoneTransform>& OutBoneTransforms);

	bool Lock_Forward_Axis = true;




//	static void Solve_Modified_TwoBoneIK(const FVector& RootPos, const FVector& JointPos, const FVector& EndPos, const FVector& JointTarget, const FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, float UpperLimbLength, float LowerLimbLength, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	static void Evaluate_TwoBoneIK_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FTransform mesh_component_transform, FBoneReference FeetBone, FBoneReference KneeBone, FBoneReference ThighBone, FTransform ThighTransform, FVector JointLocation, FVector Knee_Pole_Offset, FVector character_forward_direction_vector_CS, FVector poles_forward_direction_vector_CS, TArray<FBoneTransform>& OutBoneTransforms);


	//static void Evaluate_TwoBoneIK_Direct_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FTransform mesh_component_transform, FBoneReference FeetBone, FBoneReference KneeBone, FBoneReference ThighBone, FBoneReference twist_elbow_bone, FBoneReference twist_shoulder_bone, FTransform ThighTransform , FTransform Shoulder,FTransform Knee,FTransform Hand, FVector JointLocation, FVector Knee_Pole_Offset, FTransform transform_offset , FTransform Common_Spine_Modified_Transform, FRotator Limb_Rotation_Offset, FDragonData_ArmsData& HandData,float Hand_Clamp_Value, FTransform Extra_Hand_Offset,FVector Elbow_Pole_Offset , bool override_hand_rotation,FTransform Knee_Transform_Default, FVector LookAt_Axis, FVector Reference_Constant_Forward_Axis, float& last_shoulder_angle,bool Use_NSEW_Poles,bool Use_Up_Arm_Twist,FVector Up_Vector_Val, bool Separate_Arms_Logic_Used, bool is_reach_mode,bool bAllowHandStretching,bool Let_Arm_Twist_With_Hand, ERotation_Type_DragonIK rotation_method, float arm_alpha, FDragonData_ArmSizeStruct custom_arm_sizes, TArray<FBoneTransform>& OutBoneTransforms);
	
	static void Evaluate_TwoBoneIK_Direct_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, ArmIKParamStruct arm_ik_params, FDragonData_ArmsData& HandData, float& last_shoulder_angle, TArray<FBoneTransform>& OutBoneTransforms);

	
	//OLD static void Evaluate_TwoBoneIK_Direct_Modified(FComponentSpacePoseContext& Output, USkeletalMeshComponent* owning_skel, FBoneReference FeetBone, FBoneReference KneeBone, FBoneReference ThighBone, FTransform ThighTransform, FTransform Shoulder, FTransform Knee, FTransform Hand, FVector JointLocation, FVector Knee_Pole_Offset, FTransform transform_offset, FTransform Common_Spine_Modified_Transform, FRotator Limb_Rotation_Offset, FVector HandAxis, bool is_relative_axis, float Hand_Clamp_Value, bool accurate_hand_rotation, FTransform Extra_Hand_Offset, FVector Elbow_Pole_Offset, bool override_hand_rotation, FTransform Knee_Transform_Default, TArray<FBoneTransform>& OutBoneTransforms);




	static FTransform LookAt_Processor(FTransform ComponentBoneTransform, FVector HeadLocation, FVector Offset_Vector, FAxis LookAt_Axis, float Lookat_Clamp,FRotator Inner_Body_Clamp, bool Use_Natural_Method, float Up_Rotation_Clamp, float intensity);

	static FVector LookAt_Fabrik_Processor(FTransform ComponentBoneTransform, FVector Offset_Vector, FVector LookAt_Axis, float Lookat_Clamp);

	static void LimitFabrikBoneRotations(TArray<FCCDIK_Modified_ChainLink>& InOutChain);


	static void OrthoNormalize(FVector& Normal, FVector& Tangent);

};





/**
 * 

UCLASS()
class DRAGONIKPLUGIN_API UDragonIK_Library : public UObject
{
	GENERATED_BODY()
	
	
	
	
};
*/