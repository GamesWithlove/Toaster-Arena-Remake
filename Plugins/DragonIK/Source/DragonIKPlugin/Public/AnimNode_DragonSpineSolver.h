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
#include "Animation/AnimNodeBase.h"
#include "GameFramework/PlayerController.h"
#include "AnimNode_DragonControlBase.h"
#include "GraphColor/Private/appconst.h"

#include "AnimNode_DragonSpineSolver.generated.h"
/**
 *
 */



class FPrimitiveDrawInterface;
class USkeletalMeshComponent;
class APlayerController;


UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ERefPosePluginEnum : uint8
{
	VE_Animated 	UMETA(DisplayName = "Animated Pose"),
	VE_Rest 	UMETA(DisplayName = "Rest Pose")

};




UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ESolverComplexityPluginEnum : uint8
{
	/*
	* This is the newer method of solving that provides a more simpler and more stable body solving.
	* Ensures all bones between the pelvis and chest remain the same.
	*/
	VE_Simple 	UMETA(DisplayName = "Simpler Solving Method"),
	/*
	* Legacy fabrik method is the original previous method of solving.
	* Fabrik ensures all bones are transformed, but its pitfalls is that it might cause undesired deformations.
	*/
	VE_Complex 	UMETA(DisplayName = "Legacy Fabrik Method")

};





//USTRUCT(BlueprintInternalUseOnly)
USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonSpineSolver : public FAnimNode_DragonControlBase
{
	//	GENERATED_USTRUCT_BODY()
	GENERATED_BODY()


		/*
* Type the input bones used by the solver - pelvis,spine-start and feets
* Pull this pin to create a "make struct" and easily type out the bones.
* Optionally you can type the bones directly inside the solver. Doing so is slightly more recommended because it activates fast path.
*/
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InputData, meta = (PinHiddenByDefault))
FDragonData_MultiInput dragon_input_data;

	FDragonData_BoneStruct dragon_bone_data;





public:




	/** Tolerance for final tip location delta from EffectorLocation*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		float Precision = 0.1f;



	/*
  * Maximum pitch of the pelvis and chest bones
  * If the pelvis and chest needs to rotate more, then increase this value.
  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		float MaximumPitch = 45;

	/*
  * Minimum pitch of the pelvis and chest bones
  * If the pelvis and chest needs to rotate more, then decrease this value.
  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		float MinimumPitch = -45;



	/*
  * Maximum roll of the pelvis and chest bones
  * If the pelvis and chest needs to rotate more, then increase this value.
  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		float MaximumRoll = 45;

	/*
  * Minimum roll of the pelvis and chest bones
  * If the pelvis and chest needs to rotate more, then decrease this value.
  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		float MinimumRoll = -45;




	/*
	  * Maximum number of iterations allowed.
	  * Best left untouched. Higher values can be more costly. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Solver)
		int32 MaxIterations = 15;


	/*
	* Component Pose Input.
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Links)
	//	FComponentSpacePoseLink ComponentPose;

	/*
	* Alpha of the entire solver. 0 means no solving and 1 means maximum solving.
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (PinShownByDefault))
	//	mutable float Alpha = 1;



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (PinShownByDefault))
	mutable float Adaptive_Alpha = 1;




	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings, meta = (PinShownByDefault))
	//		mutable float Vertical_Solver_Upper_Scale = 1;


		/*
		 * The transistion speed between solve and unsolve state (eg:- when character jumps and falls back to ground).
		 * Lower values means slower but smoother transition.
		 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (PinShownByDefault))
		mutable float Shift_Speed = 1;



	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings)
	//FInputScaleBias AlphaScaleBias;


	/*
	* Trace channel used by the solver traces. Recommended to create a new dedicated trace channel for the ik through project settings.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings)
		TEnumAsByte<ETraceTypeQuery> Trace_Channel = ETraceTypeQuery::TraceTypeQuery1;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings)
	    TEnumAsByte<ETraceTypeQuery> Anti_Trace_Channel = ETraceTypeQuery::TraceTypeQuery2;


	/*
	* Choose Trace type - Line,Sphere and Box.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Trace Type"))
		EIKTrace_Type_Plugin trace_type = EIKTrace_Type_Plugin::ENUM_LineTrace_Type;

	/*
	* If trace type is box or sphere, its radius is controlled using the Trace Radius */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Trace Radius", PinHiddenByDefault))
		float Trace_Radius = 20;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Trace Hit Complex ? (True for complex, False for simple)"))
		bool line_trace_hit_complex = true;







	float trace_timer_count = 1000;

	bool trace_distance_legal = false;


	float current_trace_interval = 0.1f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "Trace Firing Interval Constant (Performance)", EditCondition = "!Use_LOD_Specific_Intervals", PinHiddenByDefault))
		float trace_interval_duration = 0.1f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "Use LOD specific intervals ?", PinHiddenByDefault))
		bool Use_LOD_Specific_Intervals = false;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "LOD0 Interval", EditCondition = "Use_LOD_Specific_Intervals", PinHiddenByDefault))
		float LOD0_Interval = 0.1f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "LOD1 Interval", EditCondition = "Use_LOD_Specific_Intervals", PinHiddenByDefault))
		float LOD1_Interval = 0.2f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "LOD2 Interval", EditCondition = "Use_LOD_Specific_Intervals", PinHiddenByDefault))
		float LOD2_Interval = 0.5f;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "Turn off traces after a distance from the camera ?", PinHiddenByDefault))
		bool Use_Trace_Distance_Adapting = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "Max distance until traces are turned off", EditCondition = "Use_Trace_Distance_Adapting", PinHiddenByDefault))
		float Trace_Max_Distance = 5000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = TracePerformance, meta = (DisplayName = "Use trace interval-velocity multiplier curve function ?", PinHiddenByDefault))
		bool Use_Interval_Velocity_Curve = true;


	/*
	* The value from this curve at the proportional velocity is multiplied with the trace interval constant or the LOD intervals
	*/
	UPROPERTY(EditAnywhere, Category = TracePerformance, meta = (DisplayName = "Trace interval-velocity multiplier curve", EditCondition = "Use_Interval_Velocity_Curve", PinHiddenByDefault))
		FRuntimeFloatCurve Interval_Velocity_Curve;







	/*
* If enabled, the velocity that drives the curves is the custom velocity parameter instead of calculating from the character blueprint movement component.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MasterCurveSettings, meta = (DisplayName = "Use custom velocity instead of automatic character blueprint velocity for curves ?", PinHiddenByDefault))
		bool Override_Curve_Velocity = false;


	/*
	* Used as the velocity for curves if enabled.
	* Overrides the automatic velocity calculation, useful for non-Character blueprints that doesn't have a movement component.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MasterCurveSettings, meta = (DisplayName = "Custom Curve Velocity", PinHiddenByDefault))
		float custom_velocity = 0;



	/*
	* Max LOD that this node is allowed to run
	* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
	* when the component LOD becomes 3, it will stop update/evaluate
	*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "LOD Threshold", PinHiddenByDefault))
	//	int32 LODThreshold = -1;






	/*
	* Internally disabled if using simple solving method.
	* Enable this to rotate the pelvis and chest in perfect perpendicular fashion.
	* Good for general purpose, but can cause extreme rotation and translations in wild,sharp and uneven surfaces.
	* Recommended to experiment between this enabled and disabled.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Rotate and move bone around terrain ? (Disabling gives more stable but slightly inaccurate solving)", PinHiddenByDefault))
		bool Rotate_Around_Translate = true;



	/*
* "Simple Solving Method" is the newer method of solving only the bones that matter.
* SSM Ensures all bones between the pelvis and chest remain the same.
* "Legacy fabrik method" is the original previous method of solving until 2.2.6.
* LFM ensures all bones are transformed and solved, but it might cause undesired deformations on complex rigs.
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Solving Method for bones between pelvis and chest", PinHiddenByDefault))
		ESolverComplexityPluginEnum complexity_type = ESolverComplexityPluginEnum::VE_Complex;


	/*
	* Enable this to bypass interpolation and use instant solving data! */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Ignore Lerping", PinHiddenByDefault))
		bool Ignore_Lerping = false;


	int test_counter = 0;

	int trace_draw_counter = 0;

	virtual int32 GetLODThreshold() const override { return LODThreshold; }

	//UPROPERTY(Transient)
	//	float ActualAlpha = 0;


	int Num_Valid_Spines = 0;



	float component_scale = 1;



	/*
* Virtual scale multiplier of the ik
* Increase this value if your mesh is super big by default and you are too lazy to increase all parameters one by one.
* Uniformly increases all trace related parameters.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Global trace scale multiplier", PinHiddenByDefault))
		float virtual_scale = 1;









	/*
	* Line trace height below the spines/feets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Trace Downward Height", PinHiddenByDefault))
		float line_trace_downward_height = 350;


	/*
	* Line trace height above the spines/feets */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Trace Upward Height", PinHiddenByDefault))
		float line_trace_upper_height = 350;




	/*
* Use the anti-channel in the solving logic. Use meshes with the anti-channel set to "block" to repel the traces from touching ceilings and closed spaces.
* Also useful when under stairs or narrow multi-storied buildings. Cover the ceilings and under stairs with anti-channel blocked meshes.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Use Anti-Channel Functionality", PinHiddenByDefault))
		bool Use_Anti_Channel = false;





	float pelvis_slope_direction = 0;

	float chest_slope_direction = 0;

	float pelvis_slope_stab_alpha = 1;

	float chest_slope_stab_alpha = 1;


	/*
	* Enabling this will make the legs connected to the pelvis to avoid any deformations and be independent.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = ( DisplayName = "Stabilize legs connected to pelvis during body bending ?", PinHiddenByDefault))
		bool stabilize_pelvis_legs = true;


	/*
	* Stabilization alpha of pelvis legs in an upward facing slope
	* 1 = Full leg stabilization.
	* 0 = No leg stabilization
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", DisplayName = "(Upslope) Pelvic legs stabilization alpha", PinHiddenByDefault))
		float Pelvis_UpSlopeStabilization_Alpha = 0.75f;


	/*
	* Stabilization alpha of pelvis legs in an downward facing slope
	* 1 = Full leg stabilization.
	* 0 = No leg stabilization
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", DisplayName = "(Downslope) Pelvic legs stabilization alpha", PinHiddenByDefault))
		float Pelvis_DownSlopeStabilization_Alpha = 0;


	/*
	* Enabling this will make the legs connected to the chest/spine-start to avoid any deformations and be independent.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = (DisplayName = "Stabilize legs connected to chest during body bending ?", PinHiddenByDefault))
		bool stabilize_chest_legs = false;


	/*
* Stabilization alpha of chest legs in an upward facing slope
* 1 = Full leg stabilization.
* 0 = No leg stabilization
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", DisplayName = "(Upslope) Chest legs stabilization alpha", PinHiddenByDefault))
		float Chest_UpSlopeStabilization_Alpha = 1;


	/*
* Stabilization alpha of chest legs in an downward facing slope
* 1 = Full leg stabilization.
* 0 = No leg stabilization
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LegStabilization, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", DisplayName = "(Downslope) Chest legs stabilization alpha", PinHiddenByDefault))
		float Chest_DownslopeStabilization_Alpha = 1;




	UPROPERTY(EditAnywhere, Category = LegStabilization, meta = (DisplayName = "(optional) Head bone to be stabilized"))
		FBoneReference Stabilization_Head_Bone;


	UPROPERTY(EditAnywhere, Category = LegStabilization, meta = (DisplayName = "(optional) Tail bone to be stabilized"))
		FBoneReference Stabilization_Tail_Bone;




	/*
	* This is completely enable/disable the ducking functionality.
	*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (DisplayName = "(optional) Use Ducking/Crouching feature ?"))
		bool Use_Ducking_Feature = false;
	
	/*
	* Trace channel only used for the ducking/crouching logic.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature") )
		TEnumAsByte<ETraceTypeQuery> Ducking_Trace_Channel = ETraceTypeQuery::TraceTypeQuery1;



	/*
* Height of ducking trace starting from the pelvis bone position.
*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature",DisplayName = "Max Ducking Height Limit"))
		float Ducking_Limit = 100;



	/*
	* Height of ducking trace starting from the pelvis bone position.
	*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Pelvis Ducking Trace Height"))
		float Pelvis_Crouch_Height = 170;
	


	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Pelvis Ducking Rotation Intensity"))
		float Pelvis_Crouch_Rotation_Intensity = 0.5f;


	/*
	* Vertical offset of the pelvis ducking trace.
	*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Pelvis Ducking Trace Offset"))
		FVector Duck_Pelvis_Trace_Offset = FVector(0,0,0);

	/*
	* Height of ducking trace starting from the chest bone position.
	* Not used on bipeds and single body spiders.
	*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Chest Ducking Trace Height"))
		float Chest_Crouch_Height = 170;


	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Chest Ducking Rotation Intensity"))
		float Chest_Crouch_Rotation_Intensity = 0.5f;


	/*
	* Vertical offset of the chest ducking trace
	* Not used on bipeds and single body spiders.
	*/
	UPROPERTY(EditAnywhere, Category = DuckingSettings, meta = (EditCondition = "Use_Ducking_Feature", DisplayName = "Chest Ducking Trace Offset"))
		FVector Duck_Chest_Trace_Offset = FVector(0, 0, 0);



	FHitResult Duck_Pelvis_Hit;
	FVector Duck_Pelvis_Point;
	FVector Duck_Pelvis_Highest_Point;


	FHitResult Duck_Chest_Hit;
	FVector Duck_Chest_Point;
	FVector Duck_Chest_Highest_Point;




	/*
	* Extra dip when pelvis is on an upward slope*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Extra dip When going up slopes", PinHiddenByDefault))
		float Slanted_Height_Up_Offset = 0;


	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Slope Detection Tolerance", PinHiddenByDefault))
	float Slope_Detection_Strength = 25;


	/*
	* Extra dip when pelvis is on a downward slope*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Extra dip When going down slopes", PinHiddenByDefault))
		float Slanted_Height_Down_Offset = 0;



	/*
* If your character isn't dipping enough to touch the ground during slopes, slightly increase this value.
* Only handles dipping based on the pairs of feet and the difference between their respective trace hit location.
* Will not dip on flat surfaces.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Extra dip multiplier relative to feet lift difference", PinHiddenByDefault))
		float dip_multiplier = 0;


	/*
	* Blend between a low elevation priority (-1) to a high elevation priority (1) when calculating the dip.
	* -1 means dipping the body to the lowest leg.
	* +1 means rising the body to the highest leg.
	* Any value in between is a blend between the highest and lowest point.
	* Useful to control over-dipping of creatures on challenging terrains. Such as dragons with small limbs but giant body on a steep slope.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (ClampMin = "-1.0", ClampMax = "1.0", UIMin = "-1.0", UIMax = "1.0", DisplayName = "Pelvis gravity priority", PinHiddenByDefault))
		float pelvis_adaptive_gravity = -1;



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Slanted height downwards offseting", PinHiddenByDefault))
	//		bool full_extend = true;



	/*
	* Enable this to prioritise chest over the pelvis.
	* The normal fabrik mode prioritises the pelvis transformation location when on extreme terrains.
	* The reverse fabrik mode ensures chest is given priority.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Reverse Fabrik", PinHiddenByDefault))
		bool reverse_fabrik = false;






	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Upward Push When Side Rotation", PinHiddenByDefault))
	float upward_push_side_rotation = 0;



	/*
	* Should solver calculation be based on the default reference pose or the current animated pose ?*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Calculation Relative To Ref Pose", PinHiddenByDefault))
		bool Calculation_To_RefPose = false;


	/*
	* Extra dip when chest is on an upward slope*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Extra dip When going up slopes", PinHiddenByDefault))
		float Chest_Slanted_Height_Up_Offset = 0;


	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Slope Detection Tolerance", PinHiddenByDefault))
	//		float Chest_Slope_Detection_Strength = 25;

		/*
		* Extra dip when chest is on a downward slope*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Extra dip When going down slopes", PinHiddenByDefault))
		float Chest_Slanted_Height_Down_Offset = 0;




	/*
* If your character isn't dipping enough to touch the ground during slopes, slightly increase this value.
* Only handles dipping based on the pairs of feet and the difference between their respective trace hit location.
* Will not dip on flat surfaces.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Extra chest dip multiplier relative to feet lift difference", PinHiddenByDefault))
		float chest_side_dip_multiplier = 0;


	/*
* Blend between a low elevation priority (-1) to a high elevation priority (1) when calculating the dip.
* -1 means dipping the body to the lowest leg.
* +1 means rising the body to the highest leg.
* Any value in between is a blend between the highest and lowest point.
* Useful to control over-dipping of creatures on challenging terrains. Such as dragons with small limbs but giant body on a steep slope.
*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (ClampMin = "-1.0", ClampMax = "1.0", UIMin = "-1.0", UIMax = "1.0",DisplayName = "Chest gravity priority", PinHiddenByDefault))
		float chest_adaptive_gravity = -1;



	/*
	* Optional additional Z offset for the chest*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Chest Z Offset", PinHiddenByDefault))
		float Chest_Base_Offset = 0;


	/*
	* Optional additional Z offset for the pelvis*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Pelvis Z Offset", PinHiddenByDefault))
		float Pelvis_Base_Offset = 0;





    /*
     * Use this for more robust solving with the use of 4 cross shaped line traces around the pelvis and chest bone.
     * Previous versions had this enabled by default internally. This is added as an option in-case it's not required in niche cases, such as using the spine solver for tail IK solving.
     */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Use 4-cross lines logic ?", PinHiddenByDefault))
	 //   bool bUse_Four_Cross_Lines = true;

	

	/*
	* This is the spacing width of the 4 green trace lines arranged in a cross pattern, around both pelvis and chest bones
	*  Ensure the spacing radius is tweaked to the spacing of the feet
	*  This is used for important subtle calculations, such as detecting slopes/flat surfaces.
	*  Used for rotation calculation for pelvis and chest if "Alternate cross based rotation" is enabled.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Alternate Cross Radius (4 green trace lines)", PinHiddenByDefault))
		float virtual_leg_width = 25;








	/*
	* Maximum height the pelvis can dip below the base pose. Lower values means pelvis will dip less.
	* For biped (2 feet) characters, this is only used.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Maximum Dip Height - Pelvis", PinHiddenByDefault))
		float Maximum_Dip_Height = 100;

	float Maximum_Formated_Dip_Height = 100;


	UPROPERTY(EditAnywhere, Category = PelvisControl, meta = (DisplayName = "(Pelvis) Dip height multiplier relative to velocity", PinHiddenByDefault))
		FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve;



	FAnimNode_DragonSpineSolver();


	/*
	* Maximum height the chest can dip below the base pose. Lower value means chest will dip less.
	* Not applicable for biped (2 feet) characters.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Maximum Dip Height - Chest", PinHiddenByDefault))
		float Maximum_Dip_Height_Chest = 100;

	float Maximum_Formated_Dip_Height_Chest = 100;







	UPROPERTY(EditAnywhere, Category = ChestControl, meta = (DisplayName = "(Chest) Dip height multiplier relative to velocity", PinHiddenByDefault))
		FRuntimeFloatCurve Chest_Height_Multiplier_Curve;



	/*
	* Differentiate between flat planar terrains and rotate terrains
	*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Differentiate between hard flat and rotated slopes", PinHiddenByDefault))
//		bool Pelvis_Flat_Slope_Detection = false;


	/*
* Differentiate between flat planar terrains and rotate terrains
*/
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Differentiate between hard flat and rotated slopes", PinHiddenByDefault))
//		bool Chest_Flat_Slope_Detection = false;


	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Slope Detection Strength - Pelvis", PinHiddenByDefault))
	float Pelvis_Slope_Detection_Strength = 50;


	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Slope Detection Strength - Chest", PinHiddenByDefault))
	float Chest_Slope_Detection_Strength = 50;




	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Extra Forward Trace Offset", PinHiddenByDefault))
	float extra_forward_trace_Offset = 0;




	/*
	* This is the rotation alpha value of all the bones between the pelvis and chest.
	* 1 value means full solved state, while 0 means 0 solved state.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Rotation alpha between end points", PinHiddenByDefault))
		float rotation_power_between = 1;











	/*
	* An experimental feature, where the solver automatically switch between fabrik and reverse fabrik mode depending on the slope.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Experimental, meta = (DisplayName = "Automatic Fabrik Selection (Development)", PinHiddenByDefault))
		bool Use_Automatic_Fabrik_Selection = false;



	bool initialize_anim_array = false;




	/*
	* A new parameter.
	* Responsible for interpolating the trace hit data.
	* Tweaking this affects the entire ik speed and smoothness.
	* Works along with the location lerp speed.
	* Doesn't work on snake mode. Snake mode uses the snake speed.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Trace Interpolation Speed", PinHiddenByDefault))
		float Trace_Lerp_Speed = 10;



	/*
	* Controls the location interpolation speed of the body.
	*   Higher values means faster interpolation.
	*   Slower values means slower but also smoother interpolation.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Body Location Interpolation Speed", PinHiddenByDefault))
		float Location_Lerp_Speed = 15;


	float Formatted_Location_Lerp = 15;

	float Formatted_Trace_Lerp = 15;


	float Formatted_Snake_Lerp = 2;

	float Formatted_Shift_Speed = 100;

	/*
	* Controls the rotation interpolation speed of the body.
	*   Higher values means faster interpolation.
	*   Slower values means slower but also smoother interpolation.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Body Rotation Interpolation Speed", PinHiddenByDefault))
		float Rotation_Lerp_Speed = 5;

	float Formatted_Rotation_Lerp = 5;


	/*
	* The existing interpolations (location and rotation) gets multiplied with respect to the speed of your character.
	*/
	UPROPERTY(EditAnywhere, Category = AdvancedSettings, meta = (DisplayName = "Interpolation multiplier relative to velocity", PinHiddenByDefault))
		FRuntimeFloatCurve Interpolation_Multiplier_Curve;




	/*
	* The location alpha value for the chest.
	*   1 means full solving of the chest transformation.
	*   0 means no solving of the chest transformation.
	*   Chest rotation still works regardless.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Chest Influence Alpha", PinHiddenByDefault))
		float Chest_Influence_Alpha = 1;









	/*
	* Controls the intensity of the pelvis forward rotation with respect to the downward slopes.
	* 0 means no rotation applied.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Down slope pelvis Forward Rotation Intensity", PinHiddenByDefault))
		float Pelvis_ForwardRotation_Intensity = 0.7f;



	/*
* Controls the intensity of the pelvis forward rotation with respect to upward slopes.
* 0 means no rotation applied.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Up slope Pelvis Forward Rotation Intensity", PinHiddenByDefault))
		float Pelvis_UpwardForwardRotation_Intensity = 0.7f;


	/*
	* Controls the intensity of the pelvis sideward rotation with respect to the slopes.
	* 0 means no rotation applied.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Pelvis Sideward Rotation Intensity on slopes", PinHiddenByDefault))
		float Body_Rotation_Intensity = 0.1f;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Pelvis Post Rotation Offset", PinHiddenByDefault))
		FRotator Pelvis_Rotation_Offset_Rotator = FRotator(0,0,0);






	/*
	* Controls the intensity of the chest forward rotation with respect to the downward slopes.
	* 0 means no rotation applied.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Down slope chest Forward Rotation Intensity", PinHiddenByDefault))
		float Chest_ForwardRotation_Intensity = 0.7f;



	/*
* Controls the intensity of the chest forward rotation with respect to the upward slopes.
* 0 means no rotation applied.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Up slope chest Forward Rotation Intensity", PinHiddenByDefault))
		float Chest_UpwardForwardRotation_Intensity = 0.7f;



	/*
	 * Controls the intensity of the chest sideward rotation with respect to the slopes.
	 * 0 means no rotation applied.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Chest Sideward Rotation Intensity on slopes", PinHiddenByDefault))
		float Chest_SidewardRotation_Intensity = 0.1f;



	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Chest Post Rotation Offset", PinHiddenByDefault))
		FRotator Chest_Rotation_Offset_Rotator = FRotator(0,0,0);



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Should solving data persist on fail scenarios", PinHiddenByDefault))
	//		bool should_solving_persist = false;



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Should move down ?", PinHiddenByDefault))
	//		bool should_move_down = true;


	bool atleast_one_hit = false;

	bool feet_is_empty = true;



	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
	FTransform DebugEffectorTransform;




	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
	//	FTransform DebugEffectorTransformTwo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpineAdvancedTweaks, meta = (DisplayName = "Is spine always fully extended ?", PinHiddenByDefault))
		bool Full_Extended_Spine = true;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpineAdvancedTweaks, meta = (DisplayName = "Fully extended ratio", PinHiddenByDefault))
		float max_extension_ratio = 1.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpineAdvancedTweaks, meta = (DisplayName = "Non extended ratio", PinHiddenByDefault))
		float min_extension_ratio = 0.97f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpineAdvancedTweaks, meta = (DisplayName = "Extension Switch Speed", PinHiddenByDefault))
		float extension_switch_speed = 2.0f;



	float Max_Range_Limit_Lerp = 1.05f;

	/*
	* Toggle this parameter to turn on/off ik.
	* Example use case : Disable it when character is jumping or flying in the air.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinShownByDefault))
		bool Enable_Solver = true;



	/*
* Enable this parameter to make IK work even when not playing in PIE mode
* Useful for recording in sequencer.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Work outside gameplay (For Sequencer)", PinHiddenByDefault))
		bool Work_Outside_PIE = false;



	/*
	* Enable this to use the 4 cross-based trace lines to determine the rotation of the chest instead of the default normal method
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ChestControl, meta = (DisplayName = "Use Alternate Cross-Based Chest Rotation (for bipeds and spiders)", PinHiddenByDefault))
		bool Use_Fake_Chest_Rotations = false;



	/*
	* Enable this to use the 4 cross-based trace lines to determine the rotation of the pelvis instead of the default normal method
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PelvisControl, meta = (DisplayName = "Use Alternate Cross-Based Pelvis Rotation (for bipeds and spiders)", PinHiddenByDefault))
		bool Use_Fake_Pelvis_Rotations = false;


	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
	float True_Rotation_Alpha = 1;


	/*
	*This will force the ik to work at all times. Animals will not be able to jump if this is enabled.
	*Only recommended for testing and debugging purposes.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
		bool Force_Activation = false;


	/*
	*Enable this to use proper accurate feet placement logic. But it might provide jumpy nature for certain quadrupeds like horses when they are moving on slopes.
	*Recommended use case is to disable this when a quadruped animal is moving, but enable it when it is idle.
	*Recommended to always turn it on for bipeds like humans.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
		bool accurate_feet_placement = true;


	/*
	* Control the alpha between "Accurate but maybe jumpy" and "Simple but stable" solving.
	*/
	UPROPERTY(EditAnywhere, Category = AdvancedSettings, meta = (DisplayName = "Accurate-Simple foot placement curve relative to velocity. 0 = Simple. 1 = Accurate.", PinHiddenByDefault))
		FRuntimeFloatCurve Accurate_Foot_Curve;




	/*
	 *Enable this to use the 4 cross based traces to turn off the ik, if any of the trace hits are too far.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
		bool use_crosshair_trace_also_for_fail_distance = true;


	/*
	*Enable this to only solve the pelvis bone, while the remaining bones remain unchanged.
	*Recommended to enable it for bipeds like humans and raptors.
	* Also recommended for single root spiders.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Solve only pelvis bone (useful for bipeds and spiders)", PinHiddenByDefault))
		bool Only_Root_Solve = false;


	/*
	* This can be used to ignore the custom chest bone modifications, while retaining all other bone modifications.
	* Helps avoid deformations but ignores the chest rotation controls.
	* Forward and sideward rotation intensities will be completely ignored and the bone rotates naturally with respect to the rest of the body.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (DisplayName = "Avoid solving chest bone (useful when custom rotation controls aren't needed)", PinHiddenByDefault))
		bool Ignore_Chest_Solve = false;









	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
	float Smooth_Factor = 10;


	bool every_foot_dont_have_child = false;


	/*
	*Additional offset parameters to the overall bones
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AdvancedSettings, meta = (PinHiddenByDefault))
		FVector Overall_PostSolved_Offset = FVector(0, 0, 0);



	/*
	*The up direction vector of the character in component space.
	* 99% cases, this should not be altered.
	* Only needed to alter on characters that do not follow the standard unreal character orientations.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings, meta = (DisplayName = "Up Direction Vector", PinHiddenByDefault))
		FVector character_direction_vector_CS = FVector(0, 0, 1);



	/*
	*The forward direction vector of the character in component space.
	* 99% cases, this should not be altered.
	* Only needed to alter on characters that do not follow the standard unreal character orientations.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings, meta = (DisplayName = "Forward Direction Vector", PinHiddenByDefault))
		FVector Forward_Direction_Vector = FVector(0, 1, 0);


	/*
	*If character is rigged and animated in the opposite direction to the standard unreal forward/right directions, then enable this.
	* 99% cases, this should not be altered.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ComponentDirectionSettings, meta = (DisplayName = "Flip forward and right rotation", PinHiddenByDefault))
		bool flip_forward_and_right = false;




	FVector root_location_saved;

	/*
	*Whether to use the reference pose or animated pose for calculations.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Miscellaneous, meta = (DisplayName = "Solver Reference Pose"))
		ERefPosePluginEnum SolverReferencePose = ERefPosePluginEnum::VE_Animated;

	/*
	*Automatically correct the spine and feet bone pairing with respect to the typed bone names in the input settings.
	*  If correct bone names are typed, it makes no difference in the end.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Miscellaneous, meta = (DisplayName = "Strict Spine-Feet pair finding", PinHiddenByDefault))
		bool Spine_Feet_Connect = true;







	bool Is_ChainOrder_Calculated = false;


	FBoneContainer* SavedBoneContainer;



	float Root_Roll_Value = 0;

	float Root_Pitch_Value = 0;

	float diff_heights[6];


	TArray<FDragonData_SpineFeetPair> spine_Feet_pair;
	TArray<FHitResult> spine_hit_between;
	TArray<FVector> spine_between_points;


	TArray<FName> Total_spine_bones;
	
	TArray<FDragonData_HitPairs> spine_hit_pairs;
	//TArray<TArray<FVector>> hit_point_pairs;

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

	TArray<FBoneTransform> LegTransforms;

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







	/**Spine interpolation speed if snake mode is enabled.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnakeSettings, meta = (DisplayName = "Snake Joint Speed (If snake true)", EditCondition = "is_snake", PinHiddenByDefault))
		float Snake_Joint_Speed = 1;



	/*
* Toggle this parameter to turn on/off snake ik interpolation.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnakeSettings, meta = (EditCondition = "is_snake", PinHiddenByDefault))
		bool Enable_Snake_Interpolation = true;



	/*
	* Enable snake mode.
	* If character is either a snake or a worm, enable this.
	* Can also be turned on for biped characters sleeping or laying on the ground.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnakeSettings, meta = (DisplayName = "Is it a snake ?", PinHiddenByDefault))
		bool is_snake = false;



	/*
* Useful for snake tails.
*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnakeSettings, meta = (DisplayName = "Ignore tip bone modification.", EditCondition = "is_snake", PinHiddenByDefault))
		bool Ignore_End_Points = false;




	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Experimental, meta = (DisplayName = "Use FeetTips(if exist)", PinHiddenByDefault))
	bool Use_FeetTips = false;


	/*
	 * Maximum distance from feet to terrain to allow the solving to happen.
	 * Higher value makes the ik to solve even on terrains far below the character.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Maximum Feet-Terrain Fail Distance", PinHiddenByDefault))
		float Maximum_Feet_Distance = 250;




	/*
	* The minimum distance between feet and terrain to allow solving to happen.
	* Increase this value if ik is turning off easilly on slopes.
	* Too high of a value can make the ik to "stick" to the ground more, which can be undesirable.
	* Recommended to tweak this value until it feels right
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Minimum Terrain-Capsule Activation Distance", PinHiddenByDefault))
		float Minimum_Feet_Distance = 45;



	/*
	* Enable this to render the traces in the animgraph viewports.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = BasicSettings, meta = (DisplayName = "Display LineTracing", PinHiddenByDefault))
		bool DisplayLineTrace = true;




	bool is_single_spine = false;



	FVector SmoothApproach(FVector pastPosition, FVector pastTargetPosition, FVector targetPosition, float speed);


	void Dragon_ImpactRotation(int origin_point_index, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases, bool is_reverse);


	void Dragon_VectorCreation(bool isPelvis, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases);


	void Dragon_SingleImpactRotationv2(int origin_point_index, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases, bool is_reverse);



	FVector RotateAroundPoint(FVector input_point, FVector forward_vector, FVector origin_point, float angle);



	void Snake_ImpactRotation(int origin_point_index, FTransform &OutputTransform, FCSPose<FCompactPose>& MeshBases);


	FName GetChildBone(FName BoneName, USkeletalMeshComponent* skel_mesh);


	TArray<FName> BoneArrayMachine(int32 index, FName starting, FName ending, FName thigh_bone_ref, bool is_foot = false);

	bool Check_Loop_Exist(FVector feet_trace_offset, float feet_height, FName start_bone, FName input_bone, FName thigh_bone, TArray<FName>& total_spine_bones);

	TArray<FDragonData_SpineFeetPair> Swap_Spine_Pairs(TArray<FDragonData_SpineFeetPair>& test_list);


	FCollisionQueryParams getDefaultSpineColliParams(FName name, AActor *me, bool debug_mode);

	void line_trace_func(USkeletalMeshComponent& skelmesh, FVector startpoint, FVector endpoint, FHitResult RV_Ragdoll_Hit, FName bone_text, FName trace_tag, FHitResult& Output, FLinearColor debug_color, bool debug_mode = false,bool ducking_mode = false);


	FComponentSpacePoseContext* saved_pose;

	USkeletalMeshComponent *owning_skel;

	float Character_Speed = 0;

	float delta_seconds_saved = 1;

	AActor* Character_Actor;

	USkeleton* skeleton_ref;



	FVector Pelvis_Transform_ROP = FVector(0,0,0);
	FVector Chest_Transform_ROP = FVector(0, 0, 0);


	FTransform owner_skel_w_transform = FTransform::Identity;


	int32 tot_len_of_bones;
	void GetResetedPoseInfo(FCSPose<FCompactPose>& MeshBases);
	void GetAnimatedPoseInfo(FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);


	void Process_Legs_Solving(FComponentSpacePoseContext& MeshBases, TArray<FBoneTransform>& InputBoneTransforms, TArray<FBoneTransform>& OutBoneTransforms);



	void Make_All_Bones(FCSPose<FCompactPose>& MeshBases);


	DragonSpineOutput DragonSpineProcessor(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);


	DragonSpineOutput DragonSpineProcessor_Direct(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);



	DragonSpineOutput DragonSpineProcessor_Snake(FTransform& EffectorTransform, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);



	DragonSpineOutput Dragon_Transformation(DragonSpineOutput& input, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);

	FRotator BoneRelativeConversion(FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer & BoneContainer, FCSPose<FCompactPose>& MeshBases);

	FRotator BoneRelativeConversion_LEGACY(FCompactPoseBoneIndex ModifyBoneIndex, FRotator target_rotation, const FBoneContainer & BoneContainer, FCSPose<FCompactPose>& MeshBases);


	FVector GetCurrentLocation(FCSPose<FCompactPose>& MeshBases, const FCompactPoseBoneIndex& BoneIndex);



	void FABRIK_BodySystem(FComponentSpacePoseContext& Output,FBoneReference TipBone, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);


	void OrthoNormalize(FVector& Normal, FVector& Tangent);

	FQuat LookRotation(FVector lookAt, FVector upDirection);

	bool solve_should_fail = false;

	TArray<FColor> TraceLinearColor = TArray<FColor>();

	TArray<FVector> TraceStartList = TArray<FVector>();
	TArray<FVector> TraceEndList = TArray<FVector>();


	bool DragonContainsNaN(const TArray<FBoneTransform>& BoneTransforms);


	virtual void ConditionalDebugDraw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent* PreviewSkelMeshComp) const;


	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;


	//virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)  override;
	//virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	//virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;

	//	virtual void Evaluate(FPoseContext& Output);

	virtual void Evaluate_AnyThread(FPoseContext& Output);


protected:
	// Interface for derived skeletal controls to implement
	// use this function to update for skeletal control base
	virtual void UpdateInternal(const FAnimationUpdateContext& Context);
	// use this function to evaluate for skeletal control base
	virtual void CoreEvaluation(FComponentSpacePoseContext& Context, TArray<FBoneTransform>& OutBoneTransforms);
	
	virtual void EvaluateComponentSpaceInternal(FComponentSpacePoseContext& Context);

	

	// Evaluate the new component-space transforms for the affected bones.
	//	virtual void EvaluateBoneTransforms(USkeletalMeshComponent* SkelComp, FCSPose<FCompactPose>& MeshBases, TArray<FBoneTransform>& OutBoneTransforms);

	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;

	void EvaluateSkeletalControl_Internal(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);

	void LineTraceControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms);


	// return true if it is valid to Evaluate
	virtual bool IsValidToEvaluate(const USkeleton* Skeleton, const FBoneContainer& RequiredBones);
	// initialize any bone references you have
	virtual void InitializeBoneReferences(FBoneContainer& RequiredBones);


};

