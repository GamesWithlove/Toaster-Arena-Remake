// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGPointExtentsModifier.h"

#include "PCGContext.h"
#include "PCGPoint.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGPointExtentsModifier)

FPCGElementPtr UPCGPointExtentsModifierSettings::CreateElement() const
{
	return MakeShared<FPCGPointExtentsModifier>();
}

bool FPCGPointExtentsModifier::ExecuteInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGPointExtentsModifier::Execute);

	ContextType* Context = static_cast<ContextType*>(InContext);
	const UPCGPointExtentsModifierSettings* Settings = Context->GetInputSettings<UPCGPointExtentsModifierSettings>();
	check(Settings);

	const EPCGPointExtentsModifierMode Mode = Settings->Mode;
	const FVector& Extents = Settings->Extents;

	switch (Mode)
	{
		case EPCGPointExtentsModifierMode::Minimum:
			return ExecutePointOperation(Context, [Extents](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;
				OutPoint.SetExtents(FVector::Min(Extents, InPoint.GetExtents()));
				return true;
			});

		case EPCGPointExtentsModifierMode::Maximum:
			return ExecutePointOperation(Context, [Extents](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;
				OutPoint.SetExtents(FVector::Max(Extents, InPoint.GetExtents()));
				return true;
			});

	case EPCGPointExtentsModifierMode::Add:
			return ExecutePointOperation(Context, [Extents](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;
				OutPoint.SetExtents(Extents + InPoint.GetExtents());
				return true;
			});

		case EPCGPointExtentsModifierMode::Multiply:
			return ExecutePointOperation(Context, [Extents](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;
				OutPoint.SetExtents(Extents * InPoint.GetExtents());
				return true;
			});

		case EPCGPointExtentsModifierMode::Set:
			return ExecutePointOperation(Context, [Extents](const FPCGPoint& InPoint, FPCGPoint& OutPoint)
			{
				OutPoint = InPoint;
				OutPoint.SetExtents(Extents);
				return true;
			});
	}

	return true;
}
