#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "K2Node.h"
#include "K2Node_GenericCreateObject.h"
#include "Textures/SlateIcon.h"
#include "EdGraph/EdGraphNodeUtils.h"
#include "K2Node_SpawnPooledActor.generated.h"

UCLASS()
class UK2Node_SpawnPooledActor : public UK2Node_ConstructObjectFromClass
{
    GENERATED_BODY()

public:
    UK2Node_SpawnPooledActor(const FObjectInitializer& ObjectInitializer);

    //~ Begin UEdGraphNode Interface.
    virtual void AllocateDefaultPins() override;
    virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    virtual void GetPinHoverText(const UEdGraphPin& Pin, FString& HoverTextOut) const override;
    virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
    virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
    virtual bool IsCompatibleWithGraph(const UEdGraph* TargetGraph) const override;
    //~ End UEdGraphNode Interface.

    //~ Begin UK2Node Interface
    virtual bool IsNodeSafeToIgnore() const override { return true; }
    virtual void GetNodeAttributes(TArray<TKeyValuePair<FString, FString>>& OutNodeAttributes) const override;
    virtual class FNodeHandlingFunctor* CreateNodeHandler(class FKismetCompilerContext& CompilerContext) const override;
    //~ End UK2Node Interface

    //~ Begin UK2Node_ConstructObjectFromClass Interface
    virtual UClass* GetClassPinBaseClass() const;
    virtual bool IsSpawnVarPin(UEdGraphPin* Pin) const override;
    //~ End UK2Node_ConstructObjectFromClass Interface

private:
    /** Get the spawn transform input pin */
    UEdGraphPin* GetSpawnTransformPin() const;
    /** Get the actor owner pin */
    UEdGraphPin* GetOwnerPin() const;
    /** Get the recycle pin */
    UEdGraphPin* GetRecyclePin() const;
};