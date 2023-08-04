/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_DragonWarpSolver.h"
#include "AnimGraphNode_DragonWarpSolver.generated.h"


class FPrimitiveDrawInterface;


/**
 * 
 */
UCLASS()
class DRAGONIKPLUGINEDITOR_API UAnimGraphNode_DragonWarpSolver : public UAnimGraphNode_Base
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, Category = Settings)
		FAnimNode_DragonWarpSolver ik_node;

	UAnimGraphNode_DragonWarpSolver(const FObjectInitializer& ObjectInitializer);

	//virtual void Draw(FPrimitiveDrawInterface* PDI, USkeletalMeshComponent * PreviewSkelMeshComp) const override;


	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FString GetNodeCategory() const override;
	virtual FLinearColor GetNodeTitleColor() const override;
	//	virtual FText GetControllerDescription() const override;

	virtual void CreateOutputPins() override;
	
	virtual FEditorModeID GetEditorMode() const override;


	
};
