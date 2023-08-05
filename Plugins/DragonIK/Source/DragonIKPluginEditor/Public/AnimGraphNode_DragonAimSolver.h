/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
//#include "AnimGraphNode_Base.h"
#include "AnimGraphNode_DragonControlBase.h"
#include "AnimNode_DragonAimSolver.h"
#include "AnimGraphNode_DragonAimSolver.generated.h"


class FPrimitiveDrawInterface;

/**
 * 
 */
UCLASS()
class DRAGONIKPLUGINEDITOR_API UAnimGraphNode_DragonAimSolver : public UAnimGraphNode_DragonControlBase
{
	GENERATED_BODY()
	

public:
		UPROPERTY(EditAnywhere, Category = Settings)
		FAnimNode_DragonAimSolver ik_node;

	UAnimGraphNode_DragonAimSolver(const FObjectInitializer& ObjectInitializer);


	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FString GetNodeCategory() const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	
	virtual void CreateOutputPins() override;

	virtual FEditorModeID GetEditorMode() const override;

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	//virtual FEditorModeID GetEditorMode() const override;


	virtual const FAnimNode_DragonControlBase* GetNode() const override
	{
		return &ik_node;
	}


};
