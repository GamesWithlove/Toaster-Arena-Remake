// Copyright (c) W2.Wizard 2020-2021. All Rights Reserved.

#include "ColorWidget.h"

/// Slate Overrides ///

TSharedRef<SWidget> UColorWidget::RebuildWidget()
{
    ColorWheel = SNew(SWColorWheel)
                .SelectedColor_UObject(this, &UColorWidget::GetColor)
                .SelectorPin(&SelectorPin)
                .HueCircle(&HueCircle)
                .OnMouseCaptureBegin_UObject(this, &UColorWidget::MouseDown)
                .OnMouseCaptureEnd_UObject(this, &UColorWidget::MouseUp)
                .OnValueChanged(FOnLinearColorValueChanged::CreateUObject(this, &UColorWidget::OnValueChanged));
	
    return ColorWheel.ToSharedRef();
}

void UColorWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);

    ColorWheel.Reset();
}

void UColorWidget::OnValueChanged(FLinearColor NewValue)
{
    Color = NewValue.HSVToLinearRGB();
    OnColorChanged.Broadcast(Color);
}

/// Main Functions ///

void UColorWidget::SetColor(const FLinearColor NewColor)
{
    // Incase of Black, the wheel gets fucked ヽ(`Д´)ﾉ︵ ┻━┻.
    if (NewColor.IsAlmostBlack())
    {
        // We pass in a false value
        Color = FLinearColor::White;
        
        // Preserve alpha.
        Color.A = NewColor.A;
        IsNull = true;
        
        return;
    }

    Color = NewColor;
    IsNull = false;
}

FLinearColor UColorWidget::GetCurrentColor()
{
    // Was input black?
    if (IsNull)
    {
        // Return black color
        auto FallbackVal = FLinearColor::Black;
        FallbackVal.A = Color.A;
        
        return FallbackVal;
    }

    return Color;
}

/// Generics ///

void UColorWidget::SetColorAndOpacity(FLinearColor InColorAndOpacity, TEnumAsByte<EWheelBrushTarget> Target)
{
    // Update the values themselves, again this doesnt look good so change it later perhaps.
    auto ColorVal = FSlateColor(InColorAndOpacity);
    switch (Target)
    {
        case EWheelBrushTarget::All:
            SelectorPin.TintColor = ColorVal;
            HueCircle.TintColor = ColorVal;
            break;

        case EWheelBrushTarget::SelectorPin:
            SelectorPin.TintColor = ColorVal;
            break;

        case EWheelBrushTarget::HueCircle:
            HueCircle.TintColor = ColorVal;
            break;
    }

    // Update the visual widget itself
    if (ColorWheel.IsValid())
    {
        ColorWheel->SetColorAndOpacity(InColorAndOpacity, Target);
    }
}



