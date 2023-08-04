/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
#include "UnrealWidget.h"
#include "AnimGraphNode_DragonWarpSolver.h"

#include "DragonControlBaseEditMode.h"



struct DRAGONIKPLUGINEDITOR_API DragonWarpSolverEditModes
{
	const static FEditorModeID DragonWarpSolver;

};

class DRAGONIKPLUGINEDITOR_API FDragonWarpSolverEditMode : public FDragonControlBaseEditMode
{
	public:
		/** IAnimNodeEditMode interface */
		virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;
		virtual void ExitMode() override;
		virtual FVector GetWidgetLocation() const override;
		virtual UE::Widget::EWidgetMode GetWidgetMode() const override;
		virtual FName GetSelectedBone() const override;
		virtual void DoTranslation(FVector& InTranslation) override;
		virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
		virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click) override;

		FVector Target_Transform_Value;
		
		float foot_index = 0;


	private:
		struct FAnimNode_DragonWarpSolver* RuntimeNode;
		class UAnimGraphNode_DragonWarpSolver* GraphNode;
	};