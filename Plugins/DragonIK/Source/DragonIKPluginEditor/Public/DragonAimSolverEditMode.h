/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
#include "UnrealWidget.h"
#include "AnimGraphNode_DragonAimSolver.h"

#include "DragonControlBaseEditMode.h"



struct DRAGONIKPLUGINEDITOR_API DragonAimSolverEditModes
{
	const static FEditorModeID DragonAimSolver;

};

class DRAGONIKPLUGINEDITOR_API FDragonAimSolverEditMode : public FDragonControlBaseEditMode
{
	public:
		/** IAnimNodeEditMode interface */
		virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;
		virtual void ExitMode() override;
		virtual FVector GetWidgetLocation() const override;
		virtual UE::Widget::EWidgetMode GetWidgetMode() const override;
		virtual FName GetSelectedBone() const override;
		virtual void DoTranslation(FVector& InTranslation) override;
		virtual void DoRotation(FRotator& InRotation) override;

		virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
		virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy* HitProxy, const FViewportClick& Click) override;

		FVector Target_Transform_Value;
		
		float spine_index = 0;

		float foot_index = 0;

		float elbow_arm_index = 0;
		int NSEW_Index = 1;

		bool Elbow_Pole_Mode = false;

		bool NSEW_Method = false;

		bool Arm_Manipulation = false;

		int Arm_Index = 0;


	private:
		struct FAnimNode_DragonAimSolver* RuntimeNode;
		class UAnimGraphNode_DragonAimSolver* GraphNode;
	};