// Copyright Epic Games, Inc. All Rights Reserved.

#include "Elements/PCGSpawnSplineMesh.h"

#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGManagedResource.h"
#include "PCGPin.h"
#include "PCGSettings.h"
#include "PCGSubsystem.h"
#include "Data/PCGLandscapeSplineData.h"
#include "Data/PCGSplineData.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGHelpers.h"

#include "DrawDebugHelpers.h"
#include "Components/SplineMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "Materials/MaterialInterface.h"
#include "VT/RuntimeVirtualTexture.h"

#define LOCTEXT_NAMESPACE "PCGCreateSplineMeshElement"

#if WITH_EDITOR
FText UPCGSpawnSplineMeshSettings::GetNodeTooltipText() const
{
	return LOCTEXT("CreateSplineMeshTooltip", "Create a USplineMeshComponent for each segment along a given spline.");
}
#endif

TArray<FPCGPinProperties> UPCGSpawnSplineMeshSettings::InputPinProperties() const
{
	TArray<FPCGPinProperties> PinProperties;
	PinProperties.Emplace(PCGPinConstants::DefaultInputLabel, EPCGDataType::PolyLine);

	return PinProperties;
}

FPCGElementPtr UPCGSpawnSplineMeshSettings::CreateElement() const
{
	return MakeShared<FPCGSpawnSplineMeshElement>();
}

bool FPCGSpawnSplineMeshElement::PrepareDataInternal(FPCGContext* InContext) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCreateSplineMeshElement::PrepareDataInternal);

	FPCGSpawnSplineMeshContext* Context = static_cast<FPCGSpawnSplineMeshContext*>(InContext);
	check(Context);

	const UPCGSpawnSplineMeshSettings* Settings = Context->GetInputSettings<UPCGSpawnSplineMeshSettings>();
	check(Settings);

	const FSoftSplineMeshComponentDescriptor& Descriptor = Settings->SplineMeshDescriptor;

	if (Descriptor.StaticMesh.IsNull())
	{
		return true;
	}

	if (!Context->WasLoadRequested())
	{
		TArray<FSoftObjectPath> ObjectsToLoad = { Descriptor.StaticMesh.ToSoftObjectPath() };

		if (!Descriptor.OverlayMaterial.IsNull())
		{
			ObjectsToLoad.Emplace(Descriptor.OverlayMaterial.ToSoftObjectPath());
		}

		for (int MaterialIndex = 0; MaterialIndex < Descriptor.OverrideMaterials.Num(); ++MaterialIndex)
		{
			if (!Descriptor.OverrideMaterials[MaterialIndex].IsNull())
			{
				ObjectsToLoad.Emplace(Descriptor.OverrideMaterials[MaterialIndex].ToSoftObjectPath());
			}
		}

		for (int RVTIndex = 0; RVTIndex < Descriptor.RuntimeVirtualTextures.Num(); ++RVTIndex)
		{
			if (!Descriptor.RuntimeVirtualTextures[RVTIndex].IsNull())
			{
				ObjectsToLoad.Emplace(Descriptor.RuntimeVirtualTextures[RVTIndex].ToSoftObjectPath());
			}
		}

		return Context->RequestResourceLoad(Context, std::move(ObjectsToLoad), !Settings->bSynchronousLoad);
	}

	return true;
}

bool FPCGSpawnSplineMeshElement::ExecuteInternal(FPCGContext* Context) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(FPCGCreateSplineMeshElement::Execute);

	const UPCGSpawnSplineMeshSettings* Settings = Context->GetInputSettings<UPCGSpawnSplineMeshSettings>();
	check(Settings);

	FSplineMeshComponentDescriptor Descriptor(Settings->SplineMeshDescriptor);

	FPCGSplineMeshComponentBuilderParameters SMCBuilderParams;
	SMCBuilderParams.SplineMeshParams = Settings->SplineMeshParams;

	TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();

	for (const FPCGTaggedData& Input : Inputs)
	{
		const UPCGPolyLineData* SplineData = Cast<UPCGPolyLineData>(Input.Data);
		const UPCGLandscapeSplineData* LandscapeSplineData = Cast<UPCGLandscapeSplineData>(SplineData);

		if (!SplineData)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data, must be of type PolyLine."));
			continue;
		}

		AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);

		if (!TargetActor)
		{
			PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor."));
			continue;
		}

		const int NumSegments = SplineData->GetNumSegments();
		const bool bIsClosed = SplineData->IsClosed();

		// Copy the descriptor, for the overrides (and reset the descriptor if it was overriden by previous inputs)
		SMCBuilderParams.Descriptor = Descriptor;

		// TODO: Support overrides on control points when we have better support for those.
		FPCGObjectOverrides DescriptorOverride(&SMCBuilderParams.Descriptor);
		DescriptorOverride.Initialize(Settings->SplineMeshOverrideDescriptions, &SMCBuilderParams.Descriptor, SplineData, Context);
		if (DescriptorOverride.IsValid() && !DescriptorOverride.Apply(0))
		{
			const int32 Index = static_cast<int32>(&Input - Inputs.GetData());
			PCGLog::LogWarningOnGraph(FText::Format(LOCTEXT("FailOverride", "Failed to override descriptor for input {0}"), Index));
		}

		UStaticMesh* StaticMesh = SMCBuilderParams.Descriptor.StaticMesh.Get();

		if (!StaticMesh)
		{
			continue;
		}

		const FVector MeshExtents = StaticMesh->GetBounds().BoxExtent;

		for (int Index = 0; Index < NumSegments; ++Index)
		{
			const int NextIndex = (bIsClosed && Index == NumSegments - 1) ? 0 : (Index + 1);

			FBox Bounds, NextBounds;
			FTransform Transform = SplineData->GetTransformAtDistance(Index, /*Distance=*/0.0, /*bWorldSpace=*/true, &Bounds);
			FTransform NextTransform = SplineData->GetTransformAtDistance(Index, SplineData->GetSegmentLength(Index), /*bWorldSpace=*/true, &NextBounds);

			if (LandscapeSplineData && !SMCBuilderParams.SplineMeshParams.bScaleMeshToLandscapeSplineFullWidth)
			{
				Bounds = FBox::BuildAABB(FVector::ZeroVector, FVector::OneVector);
				NextBounds = FBox::BuildAABB(FVector::ZeroVector, FVector::OneVector);
			}

			FVector LeaveTangent, ArriveTangent, Dummy;
			SplineData->GetTangentsAtSegmentStart(Index, Dummy, LeaveTangent);
			SplineData->GetTangentsAtSegmentStart(NextIndex, ArriveTangent, Dummy);

			// Set Position
			SMCBuilderParams.SplineMeshParams.StartPosition = Transform.GetLocation();
			SMCBuilderParams.SplineMeshParams.StartTangent = LeaveTangent;
			SMCBuilderParams.SplineMeshParams.EndPosition = NextTransform.GetLocation();
			SMCBuilderParams.SplineMeshParams.EndTangent = ArriveTangent;

			// Set Roll (Rotation)
			const FQuat StartRotation = Transform.GetRotation();
			const FQuat EndRotation = NextTransform.GetRotation();

			SMCBuilderParams.SplineMeshParams.StartRollDegrees = StartRotation.Rotator().Roll;
			SMCBuilderParams.SplineMeshParams.EndRollDegrees = EndRotation.Rotator().Roll;

			// Set Scale
			FVector StartScale = Transform.GetScale3D() * Bounds.GetExtent();
			FVector EndScale = NextTransform.GetScale3D() * NextBounds.GetExtent();

			if (SMCBuilderParams.SplineMeshParams.bScaleMeshToBounds)
			{
				FVector::FReal ScaleFactorY = 1.0f;
				FVector::FReal ScaleFactorZ = 1.0f;

				// We only scale in two dimensions since we are extruding along one of the axes. Scale on the two axes we are not extruding along.
				if (SMCBuilderParams.SplineMeshParams.ForwardAxis == EPCGSplineMeshForwardAxis::X)
				{
					ScaleFactorY = MeshExtents.Y;
					ScaleFactorZ = MeshExtents.Z;
				}
				else if (SMCBuilderParams.SplineMeshParams.ForwardAxis == EPCGSplineMeshForwardAxis::Y)
				{
					ScaleFactorY = MeshExtents.X;
					ScaleFactorZ = MeshExtents.Z;
				}
				else if (SMCBuilderParams.SplineMeshParams.ForwardAxis == EPCGSplineMeshForwardAxis::Z)
				{
					ScaleFactorY = MeshExtents.X;
					ScaleFactorZ = MeshExtents.Y;
				}

				StartScale.Y /= ScaleFactorY;
				StartScale.Z /= ScaleFactorZ;
				EndScale.Y /= ScaleFactorY;
				EndScale.Z /= ScaleFactorZ;
			}

			SMCBuilderParams.SplineMeshParams.StartScale = FVector2D(StartScale.Y, StartScale.Z);
			SMCBuilderParams.SplineMeshParams.EndScale = FVector2D(EndScale.Y, EndScale.Z);

			USplineMeshComponent* SplineMeshComponent = UPCGActorHelpers::GetOrCreateSplineMeshComponent(TargetActor, Context->SourceComponent.Get(), Settings->GetStableUID(), SMCBuilderParams);

			// TODO: Write out the geometry to a dynamic mesh type.
			//SplineMeshComponent->BodySetup->TriMeshGeometries
		}

		// Execute PostProcess Functions
		if (TargetActor)
		{
			for (UFunction* Function : PCGHelpers::FindUserFunctions(TargetActor->GetClass(), Settings->PostProcessFunctionNames, { UPCGFunctionPrototypes::GetPrototypeWithNoParams() }, Context))
			{
				TargetActor->ProcessEvent(Function, nullptr);
			}
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE
