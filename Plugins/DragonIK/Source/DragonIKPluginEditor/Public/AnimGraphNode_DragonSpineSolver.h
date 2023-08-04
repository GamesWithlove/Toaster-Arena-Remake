/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_DragonSpineSolver.h"
#include "AnimGraphNode_DragonControlBase.h"
#include "AnimGraphNode_DragonSpineSolver.generated.h"


class FPrimitiveDrawInterface;

/**
 * 
 */
UCLASS()
class DRAGONIKPLUGINEDITOR_API UAnimGraphNode_DragonSpineSolver : public UAnimGraphNode_DragonControlBase
{
	GENERATED_BODY()
	
		UPROPERTY(EditAnywhere, Category = Settings)
		FAnimNode_DragonSpineSolver ik_node;
public:
	UAnimGraphNode_DragonSpineSolver(const FObjectInitializer& ObjectInitializer);


	virtual void Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const override;

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FString GetNodeCategory() const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	
	virtual void CreateOutputPins() override;


	virtual const FAnimNode_DragonControlBase* GetNode() const override
	{
		return &ik_node;
	}


};
