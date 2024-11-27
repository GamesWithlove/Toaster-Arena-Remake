// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGNormalToDensity.h"
#include "Helpers/PCGSettingsHelpers.h"
#include "Data/PCGPointData.h"
#include "Kismet/KismetMathLibrary.h"
#include "PCGContext.h"

FPCGElementPtr UPCGNormalToDensitySettings::CreateElement() const
{
	return MakeShared<FPCGNormalToDensityElement>();
}

bool FPCGNormalToDensityElement::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGNormalToDensityElement::Execute);

	ContextType* Context = static_cast<ContextType*>(InContext);

	const UPCGNormalToDensitySettings* Settings = Context->GetInputSettings<UPCGNormalToDensitySettings>();
	check(Settings);

	const FVector Normal = Settings->Normal.GetSafeNormal();
	const double Offset = Settings->Offset;
	const double Strength = Settings->Strength;
	const PCGNormalToDensityMode DensityMode = Settings->DensityMode;

	const double InvStrength = 1.0/FMath::Max(0.0001, Strength);

	const auto CalcValue = [Normal, Offset, InvStrength](const FPCGPoint& InPoint)
	{
		const FVector Up = InPoint.Transform.GetUnitAxis(EAxis::Z);
		return FMath::Pow(FMath::Clamp(Up.Dot(Normal) + Offset, 0.0, 1.0), InvStrength);
	};

	switch (DensityMode)
	{
		case PCGNormalToDensityMode::Set:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;

				OutPoint.Density = CalcValue(InPoint);

				return true;
			});

		case PCGNormalToDensityMode::Minimum:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density = FMath::Min(InPoint.Density, CalcValue(InPoint));

				return true;
			});

		case PCGNormalToDensityMode::Maximum:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density = FMath::Max(InPoint.Density, CalcValue(InPoint));

				return true;
			});

		case PCGNormalToDensityMode::Add:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density += CalcValue(InPoint);

				return true;
			});

		case PCGNormalToDensityMode::Subtract:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density -= CalcValue(InPoint);

				return true;
			});

		case PCGNormalToDensityMode::Multiply:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density *= CalcValue(InPoint);

				return true;
			});

		case PCGNormalToDensityMode::Divide:
			return ExecutePointOperation(Context, [CalcValue](const FPCGPoint& InPoint, FPCGPoint& OutPoint)->bool{
				OutPoint = InPoint;

				OutPoint.Density = UKismetMathLibrary::SafeDivide(OutPoint.Density, CalcValue(InPoint));

				return true;
			});
	}

	return true;
}
