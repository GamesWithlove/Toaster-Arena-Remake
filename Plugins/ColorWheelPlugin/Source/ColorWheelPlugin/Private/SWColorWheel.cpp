// Copyright (c) W2.Wizard 2020-2021. All Rights Reserved.
// modified code of SColorWheel, Original by Copyright Epic Games, Inc. All Rights Reserved.

#include "SWColorWheel.h"

/*===========================================================================*\
|                                Construct                                    |
\*===========================================================================*/

void SWColorWheel::Construct(const FArguments& InArgs)
{
	// Arguments passed onto the slate widget
	Image = InArgs._HueCircle;
	SelectorImage = InArgs._SelectorPin;
	SelectedColor = InArgs._SelectedColor;
	OnMouseCaptureBegin = InArgs._OnMouseCaptureBegin;
	OnMouseCaptureEnd = InArgs._OnMouseCaptureEnd;
	OnValueChanged = InArgs._OnValueChanged;
}

void SWColorWheel::SetColorAndOpacity(FLinearColor InColorAndOpacity, TEnumAsByte<EWheelBrushTarget> TargetBrush)
{
	// TODO: Perhaps clean this up in some way?
	switch (TargetBrush)
	{
		case All:
			SetAttribute(HueCircleColorAndOpacity, TAttribute<FSlateColor>(InColorAndOpacity), EInvalidateWidgetReason::None);
			SetAttribute(PinColorAndOpacity, TAttribute<FSlateColor>(InColorAndOpacity), EInvalidateWidgetReason::Paint);
			break;

		case SelectorPin:
			SetAttribute(PinColorAndOpacity, TAttribute<FSlateColor>(InColorAndOpacity), EInvalidateWidgetReason::Paint);
			break;

		case HueCircle:
			SetAttribute(HueCircleColorAndOpacity, TAttribute<FSlateColor>(InColorAndOpacity), EInvalidateWidgetReason::Paint);
			break;
	}
}

/*===========================================================================*\
|                                Overrides                                    |
\*===========================================================================*/

FVector2D SWColorWheel::ComputeDesiredSize(float) const
{
	return Image->ImageSize + SelectorImage->ImageSize;
}

FReply SWColorWheel::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return FReply::Handled();
}

FReply SWColorWheel::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		OnMouseCaptureBegin.ExecuteIfBound();

		if (!ProcessMouseAction(MyGeometry, MouseEvent, false))
		{
			OnMouseCaptureEnd.ExecuteIfBound();
			return FReply::Unhandled();
		}

		return FReply::Handled().CaptureMouse(SharedThis(this));
	}

	return FReply::Unhandled();
}

FReply SWColorWheel::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton && HasMouseCapture())
	{
		OnMouseCaptureEnd.ExecuteIfBound();

		return FReply::Handled().ReleaseMouseCapture();
	}

	return FReply::Unhandled();
}

FReply SWColorWheel::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (!HasMouseCapture()) return FReply::Unhandled();

	ProcessMouseAction(MyGeometry, MouseEvent, true);

	return FReply::Handled();
}

int32 SWColorWheel::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	const ESlateDrawEffect DrawEffects = ShouldBeEnabled(bParentEnabled) ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;
	const FVector2D CircleSize = AllottedGeometry.GetLocalSize() - SelectorImage->ImageSize;
	
	// Draw the Color Wheel image
	FSlateDrawElement::MakeBox(
		OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(0.5 * SelectorImage->ImageSize, CircleSize),
		Image,
		DrawEffects,
		InWidgetStyle.GetColorAndOpacityTint() * HueCircleColorAndOpacity.Get().GetColor(InWidgetStyle) * Image->GetTint(InWidgetStyle)
	);

	// Draw the Pin
	FSlateDrawElement::MakeBox(
		OutDrawElements,
		LayerId + 1,
		AllottedGeometry.ToPaintGeometry(0.5f * (AllottedGeometry.GetLocalSize() + CalcRelativePositionFromCenter() * CircleSize - SelectorImage->ImageSize), SelectorImage->ImageSize),
		SelectorImage,
		DrawEffects,
		InWidgetStyle.GetColorAndOpacityTint() * PinColorAndOpacity.Get().GetColor(InWidgetStyle) * SelectorImage->GetTint(InWidgetStyle)
	);

	return LayerId + 1;
}

/*===========================================================================*\
|                            Main Implementation                              |
\*===========================================================================*/

FVector2D SWColorWheel::CalcRelativePositionFromCenter() const
{
	/**
	 * R = Hue
	 * G = Saturation / Radius
	 */
	float Angle = SelectedColor.Get().R / 180.0f * PI;
	return FVector2D(FMath::Cos(Angle), FMath::Sin(Angle)) * SelectedColor.Get().G;
}


bool SWColorWheel::ProcessMouseAction(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, bool bProcessWhenOutsideColorWheel)
{
	const FVector2D LocalMouseCoordinate = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
	const FVector2D RelativePositionFromCenter = (2.0f * LocalMouseCoordinate - MyGeometry.GetLocalSize()) / (MyGeometry.GetLocalSize() - SelectorImage->ImageSize);
	const float RelativeRadius = RelativePositionFromCenter.Size();

	if (RelativeRadius <= 1.0f || bProcessWhenOutsideColorWheel)
	{
		float Angle = FMath::Atan2(RelativePositionFromCenter.Y, RelativePositionFromCenter.X);

		if (Angle < 0.0f)
			Angle += 2.0f * PI;

		FLinearColor NewColor = SelectedColor.Get();
		{
			NewColor.R = Angle * 180.0f * INV_PI;
			NewColor.G = FMath::Min(RelativeRadius, 1.0f);
		}

		OnValueChanged.ExecuteIfBound(NewColor);
	}

	return (RelativeRadius <= 1.0f);
}
