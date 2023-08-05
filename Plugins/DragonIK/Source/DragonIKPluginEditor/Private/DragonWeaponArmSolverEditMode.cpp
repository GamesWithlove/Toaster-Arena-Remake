/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonWeaponArmSolverEditMode.h"
#include "AnimGraphNode_DragonWeaponArmSolver.h"
#include "IPersonaPreviewScene.h"
#include "Animation/DebugSkelMeshComponent.h"

#include "SceneManagement.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
//#include "Materials/MaterialExpressionConstant3Vector.h"



const FEditorModeID DragonWeaponArmSolverEditModes::DragonWeaponArmSolver("AnimGraph.DragonControl.DragonWeaponArmSolver");


void FDragonWeaponArmSolverEditMode::EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode)
{
	RuntimeNode = static_cast<FAnimNode_DragonWeaponArmSolver*>(InRuntimeNode);
	GraphNode = CastChecked<UAnimGraphNode_DragonWeaponArmSolver>(InEditorNode);

	FDragonControlBaseEditMode::EnterMode(InEditorNode, InRuntimeNode);
}

void FDragonWeaponArmSolverEditMode::ExitMode()
{
	RuntimeNode = nullptr;
	GraphNode = nullptr;

	FDragonControlBaseEditMode::ExitMode();
}

FVector FDragonWeaponArmSolverEditMode::GetWidgetLocation() const
{



	if (GraphNode)
	{

		if (Elbow_Pole_Mode && elbow_arm_index>=0)
		{
			if (RuntimeNode->Elbow_Bone_Transform_Array.Num() > elbow_arm_index)
			{
				FVector pole_offset = RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].Elbow_Pole_Offset;

				if (RuntimeNode->nsew_pole_method)
				{

					if (NSEW_Index == 1)
					{
						FVector NSEW_Result = RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].North_Pole_Offset;

						return NSEW_Result;

					}

					if (NSEW_Index == 2)
					{

						FVector NSEW_Result = RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].South_Pole_Offset;

						return NSEW_Result;

					}

					if (NSEW_Index == 3)
					{

						FVector NSEW_Result = RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].East_Pole_Offset;

						return NSEW_Result;

					}

					if (NSEW_Index == 4)
					{

						FVector NSEW_Result = RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].West_Pole_Offset;

						return NSEW_Result;

					}

					return (RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + pole_offset);
					//return (pole_offset);
				}
				else
				 return (RuntimeNode->Elbow_Bone_Transform_Array[elbow_arm_index].GetLocation() + pole_offset);


			}
		}
		else
		{

			if (Arm_Manipulation)
			{

				if (GraphNode->ik_node.Debug_Hand_Locations.Num() > Arm_Index && RuntimeNode->Debug_Hand_Locations.Num() > Arm_Index)
				{
				
				//	return (RuntimeNode->Hand_Default_Transform_Array[Arm_Index].GetLocation() + RuntimeNode->Debug_Hand_Locations[Arm_Index].GetLocation());

					return (RuntimeNode->Debug_Hand_Locations[Arm_Index].GetLocation());

				//	return (GraphNode->ik_node.Debug_Hand_Locations[Arm_Index].GetLocation());

				}

			}
			


		}
	}

	return FVector(0, 0, 0);

}

UE::Widget::EWidgetMode FDragonWeaponArmSolverEditMode::GetWidgetMode() const
{
	return UE::Widget::WM_Translate;
}




// NSEW POLE SYSTEM
struct HDragonWeaponArmHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()



	int32 pole_index;

	int32 Elbow_index;

	HDragonWeaponArmHandleHitProxy(int32 Elbow_index_in,int32 pole_type_index) : HHitProxy(HPP_World), pole_index(pole_type_index), Elbow_index(Elbow_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};


IMPLEMENT_HIT_PROXY(HDragonWeaponArmHandleHitProxy, HHitProxy)



//SINGLE POLE SYSTEM
struct HDragonWeaponElbowPoleHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()

	
	int32 elbow_index;

	HDragonWeaponElbowPoleHandleHitProxy(int32 elbow_index_in) : HHitProxy(HPP_World), elbow_index(elbow_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonWeaponElbowPoleHandleHitProxy, HHitProxy)









struct HDragonWeaponArmElbowPoleHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()


	int32 arm_index;

	HDragonWeaponArmElbowPoleHandleHitProxy(int32 arm_index_in) : HHitProxy(HPP_World), arm_index(arm_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonWeaponArmElbowPoleHandleHitProxy, HHitProxy)












void FDragonWeaponArmSolverEditMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	UDebugSkelMeshComponent* SkelComp = GetAnimPreviewScene().GetPreviewMeshComponent();


	if (RuntimeNode->DisplayLineTrace)
	{

		UMaterialInstanceDynamic* head_mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
		head_mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Yellow));
		//const FMaterialRenderProxy* TargetMaterialProxy = GEngine->ArrowMaterialYellow->GetRenderProxy();










		for (int32 i = 0; i < RuntimeNode->Aiming_Hand_Limbs.Num(); i++)
		{
			//NewObject<UMaterial>();
			//GEngine->ArrowMaterial;

			if (RuntimeNode->Use_Separate_Targets)
			{

				if (RuntimeNode->Debug_Hand_Locations.Num() > i)
				{

					PDI->SetHitProxy(new HDragonWeaponArmElbowPoleHandleHitProxy(i));

					UMaterialInstanceDynamic* White_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					White_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Yellow));

					const FMaterialRenderProxy* White_Mat_Proxy = White_Mat->GetRenderProxy();

					FTransform Hand_Default_Transform = RuntimeNode->Debug_Hand_Locations[i];

					//	Hand_Default_Transform.AddToTranslation(RuntimeNode->Debug_Hand_Locations[i].GetLocation());
					const float HandScale = View->WorldToScreen(Hand_Default_Transform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);

					DrawSphere(PDI, Hand_Default_Transform.GetLocation(), FRotator::ZeroRotator, FVector(8.0f) * HandScale, 64, 64, White_Mat_Proxy, SDPG_Foreground);

					if (RuntimeNode->Hand_Default_Transform_Array.Num() > i)
					{
						DrawDashedLine(PDI, RuntimeNode->Hand_Default_Transform_Array[i].GetLocation(), Hand_Default_Transform.GetLocation(), FLinearColor::Black, 2, 5);
					}


				}

			}



			if (RuntimeNode->reach_instead)
			{

				if (RuntimeNode->nsew_pole_method)
				{



					UMaterialInstanceDynamic* Red_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Red_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Red));

					UMaterialInstanceDynamic* Blue_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Blue_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Orange));

					UMaterialInstanceDynamic* Green_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Green_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Blue));

					UMaterialInstanceDynamic* Yellow_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Yellow_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Green));





					const FMaterialRenderProxy* Red_Mat_Proxy = Red_Mat->GetRenderProxy();
					const FMaterialRenderProxy* Blue_Mat_Proxy = Blue_Mat->GetRenderProxy();
					const FMaterialRenderProxy* Green_Mat_Proxy = Green_Mat->GetRenderProxy();
					const FMaterialRenderProxy* Yellow_Mat_Proxy = Yellow_Mat->GetRenderProxy();




					//	FTransform StartTransformKnee = FTransform::Identity;
					if (RuntimeNode->Elbow_Bone_Transform_Array.Num() > i)
					{

						PDI->SetHitProxy(new HDragonWeaponArmHandleHitProxy(i, 1));

						FTransform NorthPoleTransform = RuntimeNode->Elbow_Bone_Transform_Array[i];
						NorthPoleTransform.AddToTranslation(RuntimeNode->Aiming_Hand_Limbs[i].North_Pole_Offset);
						const float NorthScale = View->WorldToScreen(NorthPoleTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);

						DrawSphere(PDI, NorthPoleTransform.GetLocation(), FRotator::ZeroRotator, FVector(6.0f) * NorthScale, 64, 64, Red_Mat_Proxy, SDPG_Foreground);
						DrawDashedLine(PDI, RuntimeNode->Elbow_Bone_Transform_Array[i].GetLocation(), NorthPoleTransform.GetLocation(), FLinearColor::Black, 2, 5);


						PDI->SetHitProxy(new HDragonWeaponArmHandleHitProxy(i, 2));

						FTransform SouthPoleTransform = RuntimeNode->Elbow_Bone_Transform_Array[i];
						SouthPoleTransform.AddToTranslation(RuntimeNode->Aiming_Hand_Limbs[i].South_Pole_Offset);
						const float SouthScale = View->WorldToScreen(SouthPoleTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);

						DrawSphere(PDI, SouthPoleTransform.GetLocation(), FRotator::ZeroRotator, FVector(6.0f) * SouthScale, 64, 64, Blue_Mat_Proxy, SDPG_Foreground);
						DrawDashedLine(PDI, RuntimeNode->Elbow_Bone_Transform_Array[i].GetLocation(), SouthPoleTransform.GetLocation(), FLinearColor::Black, 2, 5);



						PDI->SetHitProxy(new HDragonWeaponArmHandleHitProxy(i, 3));

						FTransform EastPoleTransform = RuntimeNode->Elbow_Bone_Transform_Array[i];
						EastPoleTransform.AddToTranslation(RuntimeNode->Aiming_Hand_Limbs[i].East_Pole_Offset);
						const float EastScale = View->WorldToScreen(EastPoleTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);

						DrawSphere(PDI, EastPoleTransform.GetLocation(), FRotator::ZeroRotator, FVector(6.0f) * EastScale, 64, 64, Green_Mat_Proxy, SDPG_Foreground);
						DrawDashedLine(PDI, RuntimeNode->Elbow_Bone_Transform_Array[i].GetLocation(), EastPoleTransform.GetLocation(), FLinearColor::Black, 2, 5);




						PDI->SetHitProxy(new HDragonWeaponArmHandleHitProxy(i, 4));

						FTransform WestPoleTransform = RuntimeNode->Elbow_Bone_Transform_Array[i];
						WestPoleTransform.AddToTranslation(RuntimeNode->Aiming_Hand_Limbs[i].West_Pole_Offset);
						const float WestScale = View->WorldToScreen(WestPoleTransform.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);

						DrawSphere(PDI, WestPoleTransform.GetLocation(), FRotator::ZeroRotator, FVector(6.0f) * WestScale, 64, 64, Yellow_Mat_Proxy, SDPG_Foreground);
						DrawDashedLine(PDI, RuntimeNode->Elbow_Bone_Transform_Array[i].GetLocation(), WestPoleTransform.GetLocation(), FLinearColor::Black, 2, 5);




					}

				}
				else
				{

					UMaterialInstanceDynamic* Knee_Mat = UMaterialInstanceDynamic::Create(GEngine->ArrowMaterial, GEngine->ArrowMaterial);
					Knee_Mat->SetVectorParameterValue("GizmoColor", FLinearColor(FColor::Orange));


					const FMaterialRenderProxy* ElbowMaterialProxy = Knee_Mat->GetRenderProxy();

					PDI->SetHitProxy(new HDragonWeaponElbowPoleHandleHitProxy(i));

					FTransform StartTransformKnee = FTransform::Identity;
					if (RuntimeNode->Elbow_Bone_Transform_Array.Num() > i)
					{
						StartTransformKnee = RuntimeNode->Elbow_Bone_Transform_Array[i];

						StartTransformKnee.AddToTranslation(RuntimeNode->Aiming_Hand_Limbs[i].Elbow_Pole_Offset);

						const float Scale = View->WorldToScreen(StartTransformKnee.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);
						DrawSphere(PDI, StartTransformKnee.GetLocation(), FRotator::ZeroRotator, FVector(6.0f) * Scale, 64, 64, ElbowMaterialProxy, SDPG_Foreground);

						DrawDashedLine(PDI, RuntimeNode->Elbow_Bone_Transform_Array[i].GetLocation(), StartTransformKnee.GetLocation(), FLinearColor::Black, 2, 5);


					}

				}
			}
		}



		RuntimeNode->ConditionalDebugDraw(PDI, SkelComp);



		

	}

	PDI->SetHitProxy(nullptr);
}




bool FDragonWeaponArmSolverEditMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	bool bResult = FDragonControlBaseEditMode::HandleClick(InViewportClient, HitProxy, Click);





	if (HitProxy != nullptr && HitProxy->IsA(HDragonWeaponElbowPoleHandleHitProxy::StaticGetType()))
	{
		HDragonWeaponElbowPoleHandleHitProxy* HandleHitProxy = static_cast<HDragonWeaponElbowPoleHandleHitProxy*>(HitProxy);

		GraphNode->ik_node.is_focus_debugtarget = false;

		elbow_arm_index = HandleHitProxy->elbow_index;

		bResult = true;

		Elbow_Pole_Mode = true;

		NSEW_Method = false;

		Arm_Manipulation = false;


	}



	if (HitProxy != nullptr && HitProxy->IsA(HDragonWeaponArmHandleHitProxy::StaticGetType()))
	{
		HDragonWeaponArmHandleHitProxy* HandleHitProxy = static_cast<HDragonWeaponArmHandleHitProxy*>(HitProxy);

		GraphNode->ik_node.is_focus_debugtarget = false;

		elbow_arm_index = HandleHitProxy->Elbow_index;
		NSEW_Index = HandleHitProxy->pole_index;

		bResult = true;

		NSEW_Method = true;
		Elbow_Pole_Mode = true;

		Arm_Manipulation = false;

	}



	if (HitProxy != nullptr && HitProxy->IsA(HDragonWeaponArmElbowPoleHandleHitProxy::StaticGetType()))
	{

		HDragonWeaponArmElbowPoleHandleHitProxy* HandleHitProxy = static_cast<HDragonWeaponArmElbowPoleHandleHitProxy*>(HitProxy);

		GraphNode->ik_node.is_focus_debugtarget = false;

		Arm_Index = HandleHitProxy->arm_index;

		bResult = true;

		NSEW_Method = false;
		Elbow_Pole_Mode = false;
		Arm_Manipulation = true;

	}

	

	

	return bResult;
}



FName FDragonWeaponArmSolverEditMode::GetSelectedBone() const
{

	

		return "None";

	//return GraphNode->;
}



void FDragonWeaponArmSolverEditMode::DoRotation(FRotator& InRotation)
{

	if (Arm_Manipulation)
	{

		if (GraphNode->ik_node.Debug_Hand_Locations.Num() > Arm_Index)
		{

			if (RuntimeNode->Debug_Hand_Locations.Num() > Arm_Index)
			{

				GraphNode->ik_node.Debug_Hand_Locations[Arm_Index].SetRotation(InRotation.Quaternion() * GraphNode->ik_node.Debug_Hand_Locations[Arm_Index].GetRotation());
				RuntimeNode->Debug_Hand_Locations[Arm_Index].SetRotation(InRotation.Quaternion() * RuntimeNode->Debug_Hand_Locations[Arm_Index].GetRotation());

			}


		}

	}
	

}

// @todo: will support this since now we have LookAtLocation
void FDragonWeaponArmSolverEditMode::DoTranslation(FVector& InTranslation)
{


	if (Elbow_Pole_Mode && elbow_arm_index >= 0)
	{


		


		if (RuntimeNode->nsew_pole_method)
		{
			if (NSEW_Index == 1)
			{
				RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].North_Pole_Offset += InTranslation;
				GraphNode->ik_node.Aiming_Hand_Limbs[elbow_arm_index].North_Pole_Offset += InTranslation;
			}

			if (NSEW_Index == 2)
			{
				RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].South_Pole_Offset += InTranslation;
				GraphNode->ik_node.Aiming_Hand_Limbs[elbow_arm_index].South_Pole_Offset += InTranslation;
			}

			if (NSEW_Index == 3)
			{
				RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].East_Pole_Offset += InTranslation;
				GraphNode->ik_node.Aiming_Hand_Limbs[elbow_arm_index].East_Pole_Offset += InTranslation;
			}

			if (NSEW_Index == 4)
			{
				RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].West_Pole_Offset += InTranslation;
				GraphNode->ik_node.Aiming_Hand_Limbs[elbow_arm_index].West_Pole_Offset += InTranslation;
			}

		}
		else
		{

			RuntimeNode->Aiming_Hand_Limbs[elbow_arm_index].Elbow_Pole_Offset += InTranslation;
			GraphNode->ik_node.Aiming_Hand_Limbs[elbow_arm_index].Elbow_Pole_Offset += InTranslation;
		
		}


	}
	else
	{

		if (Arm_Manipulation)
		{

			if (GraphNode->ik_node.Debug_Hand_Locations.Num() > Arm_Index)
			{

				if (RuntimeNode->Debug_Hand_Locations.Num() > Arm_Index)
				{
					GraphNode->ik_node.Debug_Hand_Locations[Arm_Index].AddToTranslation(InTranslation);
					RuntimeNode->Debug_Hand_Locations[Arm_Index].AddToTranslation(InTranslation);
				}
			
			}

		}
		
	}

//	Target_Transform_Value = GraphNode->ik_node.Debug_LookAtLocation.GetLocation() + InTranslation;


}