/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonFootSolverEditMode.h"
#include "AnimGraphNode_DragonFeetSolver.h"
#include "IPersonaPreviewScene.h"
#include "Animation/DebugSkelMeshComponent.h"

#include "SceneManagement.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"



const FEditorModeID DragonFootSolverEditModes::DragonFootSolver("AnimGraph.DragonControl.DragonFootSolver");


void FDragonFootSolverEditMode::EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode)
{
	RuntimeNode = static_cast<FAnimNode_DragonFeetSolver*>(InRuntimeNode);
	GraphNode = CastChecked<UAnimGraphNode_DragonFeetSolver>(InEditorNode);

	FDragonControlBaseEditMode::EnterMode(InEditorNode, InRuntimeNode);
}

void FDragonFootSolverEditMode::ExitMode()
{
	RuntimeNode = nullptr;
	GraphNode = nullptr;

	FDragonControlBaseEditMode::ExitMode();
}

FVector FDragonFootSolverEditMode::GetWidgetLocation() const
{


	if (knee_selection)
	{

		if (RuntimeNode->knee_Animated_transform_array.Num() > spine_index)
		{
			if (RuntimeNode->dragon_input_data.FeetBones.Num() > spine_index)
			{
				if (RuntimeNode->dragon_input_data.FeetBones[spine_index].Fixed_Pole)
					return (RuntimeNode->dragon_input_data.FeetBones[spine_index].Knee_Direction_Offset);
				else
					return (RuntimeNode->knee_Animated_transform_array[spine_index].GetLocation() + RuntimeNode->dragon_input_data.FeetBones[spine_index].Knee_Direction_Offset);
			}
		}

	}


	if (finger_selection)
	{

	
		if (RuntimeNode->feet_knee_offset_array.Num() > spine_index && (RuntimeNode->dragon_input_data.FeetBones.Num() > spine_index) && (GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
		{
			int spine_order_index = RuntimeNode->spine_Feet_pair[spine_index].order_index[foot_index];


			return (RuntimeNode->feet_fingers_transform_array[spine_index][foot_index][finger_index].GetLocation() + RuntimeNode->dragon_input_data.FeetBones[spine_order_index].Finger_Array[finger_index].Trace_Offset);

		//	return (GraphNode->ik_node.dragon_input_data.FeetBones[spine_index].Finger_Array[finger_index].Trace_Offset);
		}

	}



	return FVector(0,0,0);
}


UE::Widget::EWidgetMode FDragonFootSolverEditMode::GetWidgetMode() const
{
	return UE::Widget::WM_Translate;
}







struct HDragonFootSolverHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()

	int32 spine_index;

	int32 foot_index;

	HDragonFootSolverHandleHitProxy(int32 spine_index_in, int32 foot_index_in): HHitProxy(HPP_World), spine_index(spine_index_in), foot_index(foot_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonFootSolverHandleHitProxy, HHitProxy)








struct HDragonFingerSolverHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()

	int32 spine_index;

	int32 foot_index;

	int32 finger_index;

	HDragonFingerSolverHandleHitProxy(int32 spine_index_in, int32 foot_index_in,int32 finger_index_in) : HHitProxy(HPP_World), spine_index(spine_index_in), foot_index(foot_index_in), finger_index(finger_index_in)
	{



	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonFingerSolverHandleHitProxy, HHitProxy)





void FDragonFootSolverEditMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	UDebugSkelMeshComponent* SkelComp = GetAnimPreviewScene().GetPreviewMeshComponent();


	if (RuntimeNode->show_trace_in_game)
	{

		for (int32 i = 0; i < RuntimeNode->dragon_input_data.FeetBones.Num(); i++)
		{

			UMaterialInstanceDynamic* Knee_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
			Knee_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Cyan));

			const FMaterialRenderProxy* SphereMaterialProxy = Knee_Mat->GetRenderProxy();


			PDI->SetHitProxy(new HDragonFootSolverHandleHitProxy(i, 0));

			FTransform StartTransform = FTransform::Identity;
			if (RuntimeNode->knee_Animated_transform_array.Num() > i)
			{

				if (RuntimeNode->dragon_input_data.FeetBones[i].Fixed_Pole)
				{
					StartTransform.SetLocation(RuntimeNode->dragon_input_data.FeetBones[i].Knee_Direction_Offset);

				}
				else
				{
					StartTransform = RuntimeNode->knee_Animated_transform_array[i];
					StartTransform.AddToTranslation(RuntimeNode->dragon_input_data.FeetBones[i].Knee_Direction_Offset);
				}

				const float Scale = View->WorldToScreen(StartTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);
				DrawSphere(PDI, StartTransform.GetLocation(), FRotator::ZeroRotator, FVector(8.0f) * Scale, 64, 64, SphereMaterialProxy, SDPG_Foreground);
				DrawDashedLine(PDI, RuntimeNode->knee_Animated_transform_array[i].GetLocation(), StartTransform.GetLocation(), FLinearColor::Black, 2, 5);









			}
		}


		for (int32 i = 0; i < RuntimeNode->spine_hit_pairs.Num(); i++)
		{

			if (i < RuntimeNode->spine_Feet_pair.Num() && i < RuntimeNode->spine_Transform_pairs.Num() && i < RuntimeNode->knee_Animated_transform_array.Num())
				for (int32 j = 0; j < RuntimeNode->spine_Feet_pair[i].Associated_Feet.Num(); j++)
				{
					UMaterialInstanceDynamic* Finger_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Finger_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Green));

					const FMaterialRenderProxy* FingerMaterialProxy = Finger_Mat->GetRenderProxy();

					FTransform FingerTransform = RuntimeNode->knee_Animated_transform_array[i];


					int spine_order_index = RuntimeNode->spine_Feet_pair[i].order_index[j];

					if (RuntimeNode->Affect_Toes_Always)
					{
						if (RuntimeNode->spine_Transform_pairs[i].Associated_Fingers.Num() > 0)
							for (int32 k_finger = 0; k_finger < RuntimeNode->spine_Transform_pairs[i].Associated_Fingers[j].Num(); k_finger++)
							{

								PDI->SetHitProxy(new HDragonFingerSolverHandleHitProxy(i, j, k_finger));


								FVector trace_offset = RuntimeNode->dragon_input_data.FeetBones[spine_order_index].Finger_Array[k_finger].Trace_Offset;

								FingerTransform.SetLocation(RuntimeNode->feet_fingers_transform_array[i][j][k_finger].GetLocation() + trace_offset);

								const float Scale = View->WorldToScreen(FingerTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);
								DrawSphere(PDI, FingerTransform.GetLocation(), FRotator::ZeroRotator, FVector(8.0f) * Scale, 64, 64, FingerMaterialProxy, SDPG_Foreground);
								DrawDashedLine(PDI, RuntimeNode->feet_fingers_transform_array[i][j][k_finger].GetLocation(), FingerTransform.GetLocation(), FLinearColor::Black, 2, 5);


							}

					}

					if (RuntimeNode->Use_Four_Point_Feets)
					{

						UMaterialInstanceDynamic* Foot_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
						Foot_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Yellow));

						const FMaterialRenderProxy* FootMaterialProxy = Foot_Mat->GetRenderProxy();


						FVector Foot_Tip_Transform = RuntimeNode->FeetTipLocations[i][j];

						FVector Foot_Ankle_Location = RuntimeNode->spine_Transform_pairs[i].Associated_Feet[j].GetLocation();


						FTransform FootAnkleTransform = FingerTransform;
						FootAnkleTransform.SetLocation(Foot_Ankle_Location);
						FootAnkleTransform.SetRotation(FQuat::Identity);
						FootAnkleTransform.SetScale3D(FVector(0.5f, 0.25f, 1));

						//DrawBox(PDI, FootAnkleMatrix, FVector(5.0f)* FootAnkleTransformScale, FootMaterialProxy, 4);
						float side_sizing = RuntimeNode->FeetWidthSpacing[i][j];

						DrawCylinder(PDI, Foot_Ankle_Location, Foot_Tip_Transform, side_sizing, 6, FootMaterialProxy, 5);

					}


				}

			//PDI->SetHitProxy(new HDragonFootSolverHandleHitProxy(i, 0));

		}



		RuntimeNode->ConditionalDebugDraw(PDI, SkelComp);

	}

	PDI->SetHitProxy(nullptr);
}




bool FDragonFootSolverEditMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	bool bResult = FDragonControlBaseEditMode::HandleClick(InViewportClient, HitProxy, Click);

	if (HitProxy != nullptr && HitProxy->IsA(HDragonFootSolverHandleHitProxy::StaticGetType()))
	{
		HDragonFootSolverHandleHitProxy* HandleHitProxy = static_cast<HDragonFootSolverHandleHitProxy*>(HitProxy);
		spine_index = HandleHitProxy->spine_index;
		foot_index = HandleHitProxy->foot_index;

		bResult = true;

		knee_selection = true;
		finger_selection = false;

	}

	if (HitProxy != nullptr && HitProxy->IsA(HDragonFingerSolverHandleHitProxy::StaticGetType()))
	{
		HDragonFingerSolverHandleHitProxy* HandleHitProxy = static_cast<HDragonFingerSolverHandleHitProxy*>(HitProxy);
		spine_index = HandleHitProxy->spine_index;
		foot_index = HandleHitProxy->foot_index;
		finger_index = HandleHitProxy->finger_index;

		finger_selection = true;
		knee_selection = false;

	}
	

	return bResult;
}



FName FDragonFootSolverEditMode::GetSelectedBone() const
{

	if ((GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
		return GraphNode->ik_node.dragon_input_data.FeetBones[spine_index].Feet_Bone_Name;
	else
		return "None";

	//return GraphNode->;
}

// @todo: will support this since now we have LookAtLocation
void FDragonFootSolverEditMode::DoTranslation(FVector& InTranslation)
{

	if (knee_selection)
	{
		//if (RuntimeNode->feet_knee_offset_array.Num() > spine_index && (RuntimeNode->dragon_input_data.FeetBones.Num() > spine_index) && (GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
		
		if ((RuntimeNode->dragon_input_data.FeetBones.Num() > spine_index) && (GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
		{
			RuntimeNode->dragon_input_data.FeetBones[spine_index].Knee_Direction_Offset += InTranslation;
			GraphNode->ik_node.dragon_input_data.FeetBones[spine_index].Knee_Direction_Offset += InTranslation;
		}

	}

	if (finger_selection)
	{

		if (RuntimeNode->feet_knee_offset_array.Num() > spine_index && (RuntimeNode->dragon_input_data.FeetBones.Num() > spine_index) && (GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
		{
			int spine_order_index = RuntimeNode->spine_Feet_pair[spine_index].order_index[foot_index];

			RuntimeNode->dragon_input_data.FeetBones[spine_order_index].Finger_Array[finger_index].Trace_Offset += InTranslation;
			GraphNode->ik_node.dragon_input_data.FeetBones[spine_order_index].Finger_Array[finger_index].Trace_Offset += InTranslation;
		}

	}





}