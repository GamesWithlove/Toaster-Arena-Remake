/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonWarpSolverEditMode.h"
#include "AnimGraphNode_DragonWarpSolver.h"
#include "IPersonaPreviewScene.h"
#include "Animation/DebugSkelMeshComponent.h"

#include "SceneManagement.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
//#include "Materials/MaterialExpressionConstant3Vector.h"



const FEditorModeID DragonWarpSolverEditModes::DragonWarpSolver("AnimGraph.DragonControl.DragonWarpSolver");


void FDragonWarpSolverEditMode::EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode)
{
	RuntimeNode = static_cast<FAnimNode_DragonWarpSolver*>(InRuntimeNode);
	GraphNode = CastChecked<UAnimGraphNode_DragonWarpSolver>(InEditorNode);

	FDragonControlBaseEditMode::EnterMode(InEditorNode, InRuntimeNode);
}

void FDragonWarpSolverEditMode::ExitMode()
{
	RuntimeNode = nullptr;
	GraphNode = nullptr;

	FDragonControlBaseEditMode::ExitMode();
}

FVector FDragonWarpSolverEditMode::GetWidgetLocation() const
{
	

	if (RuntimeNode->dragon_limb_data.Num() > foot_index)
	{
	 return (RuntimeNode->original_foot_array[foot_index] + FVector(0,0,RuntimeNode->dragon_limb_data[foot_index].Warp_Lift_Reference_Location));
	}

	return FVector(0, 0, 0);

}

UE::Widget::EWidgetMode FDragonWarpSolverEditMode::GetWidgetMode() const
{
	return UE::Widget::WM_Translate;
}








struct HDragonWarpSolverHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()

	int32 foot_index;

	HDragonWarpSolverHandleHitProxy(int32 foot_index_in) : HHitProxy(HPP_World), foot_index(foot_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonWarpSolverHandleHitProxy, HHitProxy)





void FDragonWarpSolverEditMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	UDebugSkelMeshComponent* SkelComp = GetAnimPreviewScene().GetPreviewMeshComponent();



	for (int32 i = 0; i < RuntimeNode->dragon_limb_data.Num(); i++)
	{
		//NewObject<UMaterial>();
		//GEngine->ArrowMaterial;

		UMaterialInstanceDynamic *Knee_Mat = UMaterialInstanceDynamic::Create( GEngine->ArrowMaterial,GEngine->ArrowMaterial);
		Knee_Mat->SetVectorParameterValue("GizmoColor",FLinearColor(FColor::Cyan));
		

		const FMaterialRenderProxy* KneeMaterialProxy = Knee_Mat->GetRenderProxy();
		
		PDI->SetHitProxy(new HDragonWarpSolverHandleHitProxy(i));

		FTransform FootTransform_Param = FTransform::Identity;

		{
			FootTransform_Param.SetLocation(RuntimeNode->original_foot_array[i]);
			FootTransform_Param.AddToTranslation(FVector(0,0,RuntimeNode->dragon_limb_input[i].Warp_Lift_Reference_Location) );

			const float Scale = View->WorldToScreen(FootTransform_Param.GetLocation()).W * (4.0f / View->UnscaledViewRect.Width() / View->ViewMatrices.GetProjectionMatrix().M[0][0]);
		//	DrawSphere(PDI, FootTransform_Param.GetLocation(), FRotator::ZeroRotator, FVector(8.0f) * Scale, 64, 64,KneeMaterialProxy, SDPG_Foreground);

			DrawDisc(PDI, FootTransform_Param.GetLocation(),FVector(1,0,0),FVector(0,1,0),FColor::Red, (20.0f) * Scale, 8, KneeMaterialProxy, SDPG_Foreground);

			DrawDashedLine(PDI, RuntimeNode->original_foot_array[i], FootTransform_Param.GetLocation(), FLinearColor::Black, 2, 5);
		}
	}



	RuntimeNode->ConditionalDebugDraw(PDI, SkelComp);



	PDI->SetHitProxy(nullptr);
}




bool FDragonWarpSolverEditMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	bool bResult = FDragonControlBaseEditMode::HandleClick(InViewportClient, HitProxy, Click);

	if (HitProxy != nullptr && HitProxy->IsA(HDragonWarpSolverHandleHitProxy::StaticGetType()))
	{
		HDragonWarpSolverHandleHitProxy* HandleHitProxy = static_cast<HDragonWarpSolverHandleHitProxy*>(HitProxy);
		foot_index = HandleHitProxy->foot_index;

		bResult = true;
	}

	return bResult;
}



FName FDragonWarpSolverEditMode::GetSelectedBone() const
{
	/*
	if (GraphNode->ik_node.is_focus_debugtarget)
	{
		if ((GraphNode->ik_node.dragon_input_data.FeetBones.Num() > spine_index))
			return GraphNode->ik_node.dragon_input_data.FeetBones[spine_index].Feet_Bone_Name;
	}
	*/
		return "None";

	//return GraphNode->;
}

// @todo: will support this since now we have LookAtLocation
void FDragonWarpSolverEditMode::DoTranslation(FVector& InTranslation)
{


	//for (int32 i = 0; i < RuntimeNode->dragon_limb_input.Num(); i++)
	{


		//if (GraphNode->ik_node.dragon_limb_data.Num() > 0)
		
		if(foot_index < RuntimeNode->dragon_limb_input.Num() && (foot_index < GraphNode->ik_node.dragon_limb_input.Num()) )
		{

			//RuntimeNode->dragon_limb_data[foot_index].Warp_Lift_Reference_Location += FVector(0, 0, InTranslation.Z);
			//GraphNode->ik_node.dragon_limb_data[foot_index].Warp_Lift_Reference_Location += FVector(0, 0, InTranslation.Z);


			RuntimeNode->dragon_limb_input[foot_index].Warp_Lift_Reference_Location += (InTranslation.Z);
			GraphNode->ik_node.dragon_limb_input[foot_index].Warp_Lift_Reference_Location += (InTranslation.Z);

		}


	}


}