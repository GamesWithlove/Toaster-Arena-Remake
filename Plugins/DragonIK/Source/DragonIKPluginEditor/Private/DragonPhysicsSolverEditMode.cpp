/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#include "DragonPhysicsSolverEditMode.h"
#include "AnimGraphNode_DragonPhysicsSolver.h"
#include "IPersonaPreviewScene.h"
#include "Animation/DebugSkelMeshComponent.h"

#include "SceneManagement.h"



const FEditorModeID DragonPhysicsSolverEditModes::DragonPhysicsSolver("AnimGraph.DragonControl.DragonPhysicsSolver");


void FDragonPhysicsSolverEditMode::EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode)
{
	RuntimeNode = static_cast<FAnimNode_DragonPhysicsSolver*>(InRuntimeNode);
	GraphNode = CastChecked<UAnimGraphNode_DragonPhysicsSolver>(InEditorNode);

	FDragonControlBaseEditMode::EnterMode(InEditorNode, InRuntimeNode);
}

void FDragonPhysicsSolverEditMode::ExitMode()
{
	RuntimeNode = nullptr;
	GraphNode = nullptr;

	FDragonControlBaseEditMode::ExitMode();
}

FVector FDragonPhysicsSolverEditMode::GetWidgetLocation() const
{
	


	return FVector(0,0,0);
}


UE::Widget::EWidgetMode FDragonPhysicsSolverEditMode::GetWidgetMode() const
{
	return UE::Widget::WM_Translate;
}







struct HDragonPhysicsSolverHandleHitProxy : public HHitProxy
{
	DECLARE_HIT_PROXY()

	int32 spine_index;

	int32 foot_index;

	HDragonPhysicsSolverHandleHitProxy(int32 spine_index_in, int32 foot_index_in): HHitProxy(HPP_World), spine_index(spine_index_in), foot_index(foot_index_in)
	{
	}

	// HHitProxy interface
	virtual EMouseCursor::Type GetMouseCursor() override { return EMouseCursor::CardinalCross; }
	// End of HHitProxy interface
};

IMPLEMENT_HIT_PROXY(HDragonPhysicsSolverHandleHitProxy, HHitProxy)













void FDragonPhysicsSolverEditMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
		
}




bool FDragonPhysicsSolverEditMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click)
{
	bool bResult = FDragonControlBaseEditMode::HandleClick(InViewportClient, HitProxy, Click);

	
	

	return bResult;
}



FName FDragonPhysicsSolverEditMode::GetSelectedBone() const
{


		return "None";

	//return GraphNode->;
}

// @todo: will support this since now we have LookAtLocation
void FDragonPhysicsSolverEditMode::DoTranslation(FVector& InTranslation)
{

	



}