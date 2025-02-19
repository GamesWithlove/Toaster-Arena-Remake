#pragma once

#include "CommonButtonBase.h"
#include "ToasterUIButtonBase.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable)
class UToasterUIButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Text)
	void SetButtonText(const FText& InText);

protected:
	// UserWidget interface
	virtual void NativePreConstruct() override; 

	// UCommonButtonBase interface
	virtual void UpdateInputActionWidget() override;
	virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;

	void RefreshButtonText();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonText(const FText& InText);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonStyle();

private:
	UPROPERTY(EditAnywhere, Category = "Button", meta=(InlineEditConditionToggle))
	uint8 bOverride_ButtonText : 1;

	UPROPERTY(EditAnywhere, Category = "Button", meta=(editcondition="bOverride_ButtonText"))
	FText ButtonText;
};
