// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataVisualizations/PCGSpatialDataVisualization.h"

#include "PCGContext.h"
#include "PCGData.h"
#include "PCGDebug.h"
#include "PCGEditorCommon.h"
#include "PCGPoint.h"
#include "PCGSettings.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSpatialData.h"
#include "DataVisualizations/PCGDataVisualizationHelpers.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/Accessors/PCGAttributeAccessorHelpers.h"
#include "Metadata/Accessors/PCGCustomAccessor.h"

#include "Components/InstancedStaticMeshComponent.h"

#define LOCTEXT_NAMESPACE "PCGSpatialDataVisualization"

namespace PCGPointDataVisualizationConstants
{
	/** Names of the columns in the attribute list. */
	const FName NAME_Index = FName(TEXT("$Index"));
	const FName NAME_PositionX = FName(TEXT("$Position.X"));
	const FName NAME_PositionY = FName(TEXT("$Position.Y"));
	const FName NAME_PositionZ = FName(TEXT("$Position.Z"));
	const FName NAME_RotationRoll = FName(TEXT("$Rotation.Roll"));
	const FName NAME_RotationPitch = FName(TEXT("$Rotation.Pitch"));
	const FName NAME_RotationYaw = FName(TEXT("$Rotation.Yaw"));
	const FName NAME_ScaleX = FName(TEXT("$Scale.X"));
	const FName NAME_ScaleY = FName(TEXT("$Scale.Y"));
	const FName NAME_ScaleZ = FName(TEXT("$Scale.Z"));
	const FName NAME_BoundsMinX = FName(TEXT("$BoundsMin.X"));
	const FName NAME_BoundsMinY = FName(TEXT("$BoundsMin.Y"));
	const FName NAME_BoundsMinZ = FName(TEXT("$BoundsMin.Z"));
	const FName NAME_BoundsMaxX = FName(TEXT("$BoundsMax.X"));
	const FName NAME_BoundsMaxY = FName(TEXT("$BoundsMax.Y"));
	const FName NAME_BoundsMaxZ = FName(TEXT("$BoundsMax.Z"));
	const FName NAME_ColorR = FName(TEXT("$Color.R"));
	const FName NAME_ColorG = FName(TEXT("$Color.G"));
	const FName NAME_ColorB = FName(TEXT("$Color.B"));
	const FName NAME_ColorA = FName(TEXT("$Color.A"));
	const FName NAME_Density = FName(TEXT("$Density"));
	const FName NAME_Steepness = FName(TEXT("$Steepness"));
	const FName NAME_Seed = FName(TEXT("$Seed"));
	const FName NAME_MetadataEntry = FName(TEXT("MetadataEntry"));
	const FName NAME_MetadataEntryParent = FName(TEXT("PointMetadataEntryParent"));

	/** Labels of the columns. */
	const FText TEXT_Index = LOCTEXT("Index", "$Index");
	const FText TEXT_PositionX = LOCTEXT("PositionX", "$Position.X");
	const FText TEXT_PositionY = LOCTEXT("PositionY", "$Position.Y");
	const FText TEXT_PositionZ = LOCTEXT("PositionZ", "$Position.Z");
	const FText TEXT_RotationRoll = LOCTEXT("RotationRoll", "$Rotation.Roll");
	const FText TEXT_RotationPitch = LOCTEXT("RotationPitch", "$Rotation.Pitch");
	const FText TEXT_RotationYaw = LOCTEXT("RotationYaw", "$Rotation.Yaw");
	const FText TEXT_ScaleX = LOCTEXT("ScaleX", "$Scale.X");
	const FText TEXT_ScaleY = LOCTEXT("ScaleY", "$Scale.Y");
	const FText TEXT_ScaleZ = LOCTEXT("ScaleZ", "$Scale.Z");
	const FText TEXT_BoundsMinX = LOCTEXT("BoundsMinX", "$BoundsMin.X");
	const FText TEXT_BoundsMinY = LOCTEXT("BoundsMinY", "$BoundsMin.Y");
	const FText TEXT_BoundsMinZ = LOCTEXT("BoundsMinZ", "$BoundsMin.Z");
	const FText TEXT_BoundsMaxX = LOCTEXT("BoundsMaxX", "$BoundsMax.X");
	const FText TEXT_BoundsMaxY = LOCTEXT("BoundsMaxY", "$BoundsMax.Y");
	const FText TEXT_BoundsMaxZ = LOCTEXT("BoundsMaxZ", "$BoundsMax.Z");
	const FText TEXT_ColorR = LOCTEXT("ColorR", "$Color.R");
	const FText TEXT_ColorG = LOCTEXT("ColorG", "$Color.G");
	const FText TEXT_ColorB = LOCTEXT("ColorB", "$Color.B");
	const FText TEXT_ColorA = LOCTEXT("ColorA", "$Color.A");
	const FText TEXT_Density = LOCTEXT("Density", "$Density");
	const FText TEXT_Steepness = LOCTEXT("Steepness", "$Steepness");
	const FText TEXT_Seed = LOCTEXT("Seed", "$Seed");
	const FText TEXT_MetadataEntry = LOCTEXT("MetadataEntry", "Entry Key");
	const FText TEXT_MetadataEntryParent = LOCTEXT("MetadataEntryParent", "Parent Key");
}

void IPCGSpatialDataVisualization::ExecuteDebugDisplay(FPCGContext* Context, const UPCGSettingsInterface* SettingsInterface, const UPCGData* Data, AActor* TargetActor) const
{
	if (!TargetActor)
	{
		PCGE_LOG_C(Error, GraphAndLog, Context, LOCTEXT("NoTargetActor", "Cannot execute debug display for spatial data with no target actor."));
		return;
	}

	if (!SettingsInterface)
	{
		return;
	}

	const FPCGDebugVisualizationSettings& DebugSettings = SettingsInterface->DebugSettings;
	UStaticMesh* Mesh = DebugSettings.PointMesh.LoadSynchronous();

	if (!Mesh)
	{
		PCGE_LOG_C(Error, GraphAndLog, Context, FText::Format(LOCTEXT("UnableToLoadMesh", "Debug display was unable to load mesh '{0}'."),
			FText::FromString(DebugSettings.PointMesh.ToString())));
		return;
	}

	TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
	Materials.Add(DebugSettings.GetMaterial());

	const UPCGPointData* PointData = CollapseToDebugPointData(Context, Data);

	if (!PointData)
	{
		return;
	}

	const TArray<FPCGPoint>& Points = PointData->GetPoints();

	if (Points.Num() == 0)
	{
		return;
	}

	const int NumCustomData = 8;

	TArray<FTransform> ForwardInstances;
	TArray<FTransform> ReverseInstances;
	TArray<float> InstanceCustomData;

	ForwardInstances.Reserve(Points.Num());
	InstanceCustomData.Reserve(NumCustomData);

	// First, create target instance transforms
	const float PointScale = DebugSettings.PointScale;
	const bool bIsAbsolute = DebugSettings.ScaleMethod == EPCGDebugVisScaleMethod::Absolute;
	const bool bIsRelative = DebugSettings.ScaleMethod == EPCGDebugVisScaleMethod::Relative;
	const bool bScaleWithExtents = DebugSettings.ScaleMethod == EPCGDebugVisScaleMethod::Extents;
	const FVector MeshExtents = Mesh->GetBoundingBox().GetExtent();

	/* Note: A re-used ISMC may have any number of pre-existing instances, so this won't prevent going over the max. But,
	 * the renderer is robust to over-instancing attempts and will not crash. However, MAX_INSTANCE_ID still serves as a
	 * good, scalable heuristic for a max limit.
	 */
	const int32 NumDesiredInstances = FMath::Min(Points.Num(), static_cast<int32>(MAX_INSTANCE_ID));
	if (NumDesiredInstances != Points.Num())
	{
		PCGE_LOG_C(Error, GraphAndLog, Context, FText::Format(LOCTEXT( "DebugPointsOverLimit", "Debug point display ({0}) surpassed the max instance limit ({1}) and will be clamped."), FText::AsNumber(Points.Num()), FText::AsNumber(MAX_INSTANCE_ID)));
	}

	for (int i = 0; i < NumDesiredInstances; ++i)
	{
		const FPCGPoint& Point = Points[i];
		TArray<FTransform>& Instances = ((bIsAbsolute || Point.Transform.GetDeterminant() >= 0) ? ForwardInstances : ReverseInstances);
		FTransform& InstanceTransform = Instances.Add_GetRef(Point.Transform);
		if (bIsRelative)
		{
			InstanceTransform.SetScale3D(InstanceTransform.GetScale3D() * PointScale);
		}
		else if (bScaleWithExtents)
		{
			const FVector ScaleWithExtents = Point.GetExtents() / MeshExtents;
			const FVector TransformedBoxCenterWithOffset = InstanceTransform.TransformPosition(Point.GetLocalCenter()) - InstanceTransform.GetLocation();
			InstanceTransform.SetTranslation(InstanceTransform.GetTranslation() + TransformedBoxCenterWithOffset);
			InstanceTransform.SetScale3D(InstanceTransform.GetScale3D() * ScaleWithExtents);
		}
		else // absolute scaling only
		{
			InstanceTransform.SetScale3D(FVector(PointScale));
		}
	}

	FPCGISMComponentBuilderParams Params[2];
	Params[0].NumCustomDataFloats = NumCustomData;
	Params[0].Descriptor.StaticMesh = Mesh;
	Params[0].Descriptor.OverrideMaterials = Materials;
	Params[0].Descriptor.Mobility = EComponentMobility::Static;
	Params[0].Descriptor.BodyInstance.SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

	// Note: In the future we may consider enabling culling for performance reasons, but for now culling disabled.
	Params[0].Descriptor.InstanceStartCullDistance = Params[0].Descriptor.InstanceEndCullDistance = 0;
	// Additional performance switches
	Params[0].Descriptor.bAffectDistanceFieldLighting = false;
	Params[0].Descriptor.bAffectDynamicIndirectLighting = false;
	Params[0].Descriptor.bAffectDynamicIndirectLightingWhileHidden = false;
	Params[0].Descriptor.bCastContactShadow = false;
	Params[0].Descriptor.bCastDynamicShadow = false;
	Params[0].Descriptor.bCastShadow = false;	
	Params[0].Descriptor.bCastStaticShadow = false;
	Params[0].Descriptor.bGenerateOverlapEvents = false;
	Params[0].Descriptor.bIncludeInHLOD = false;
	Params[0].Descriptor.bReceivesDecals = false;
	Params[0].Descriptor.bVisibleInRayTracing = false;
	
	// If the root actor we're binding to is movable, then the ISMC should be movable by default
	if (USceneComponent* SceneComponent = TargetActor->GetRootComponent())
	{
		Params[0].Descriptor.Mobility = SceneComponent->Mobility;
	}

	Params[1] = Params[0];
	Params[1].Descriptor.bReverseCulling = true;

	// Since the instance count is global, track the current instances applied and previously belong to the ISMCs.
	int32 NumCurrentInstances = 0;
	for (int32 Direction = 0; Direction < 2; ++Direction)
	{
		TArray<FTransform>& Instances = (Direction == 0 ? ForwardInstances : ReverseInstances);

		if (Instances.IsEmpty())
		{
			continue;
		}

		UInstancedStaticMeshComponent* ISMC = UPCGActorHelpers::GetOrCreateISMC(TargetActor, Context->SourceComponent.Get(), SettingsInterface->GetSettings()->GetStableUID(), Params[Direction]);
		check(ISMC && ISMC->NumCustomDataFloats == NumCustomData);

		ISMC->ComponentTags.AddUnique(PCGHelpers::DefaultPCGDebugTag);
		const int32 PreExistingInstanceCount = ISMC->GetInstanceCount();
		NumCurrentInstances += PreExistingInstanceCount;

		// The renderer is robust to going over the instance count, so it's okay not to account for other scene instances here.
		if (NumCurrentInstances + Instances.Num() > MAX_INSTANCE_ID)
		{
			// Drop instances to stay at the max.
			// Account for less than 0 if, for example, the forward was over the limit and the reverse had less than the PreExisting.
			Instances.SetNum(FMath::Max(0, static_cast<int32>(MAX_INSTANCE_ID) - NumCurrentInstances));
			if (Instances.IsEmpty())
			{
				continue;
			}
		}

		NumCurrentInstances += Instances.Num();
		ISMC->AddInstances(Instances, /*bShouldReturnIndices=*/false, /*bWorldSpace=*/true);

		// Scan all points looking for points that match current direction and add their custom data.
		int32 PointCounter = 0;
		for (const FPCGPoint& Point : Points)
		{
			const int32 PointDirection = ((bIsAbsolute || Point.Transform.GetDeterminant() >= 0) ? 0 : 1);
			if (PointDirection != Direction)
			{
				continue;
			}

			InstanceCustomData.Add(Point.Density);
			const FVector Extents = Point.GetExtents();
			InstanceCustomData.Add(Extents[0]);
			InstanceCustomData.Add(Extents[1]);
			InstanceCustomData.Add(Extents[2]);
			InstanceCustomData.Add(Point.Color[0]);
			InstanceCustomData.Add(Point.Color[1]);
			InstanceCustomData.Add(Point.Color[2]);
			InstanceCustomData.Add(Point.Color[3]);

			ISMC->SetCustomData(PreExistingInstanceCount + PointCounter, InstanceCustomData);

			InstanceCustomData.Reset();

			++PointCounter;
		}

		ISMC->UpdateBounds();
	}
}

FPCGTableVisualizerInfo IPCGSpatialDataVisualization::GetTableVisualizerInfo(const UPCGData* Data) const
{
	using namespace PCGDataVisualizationHelpers;
	using namespace PCGPointDataVisualizationConstants;

	// Collapse to point representation for visualization.
	const UPCGPointData* PointData = CollapseToDebugPointData(/*Context=*/nullptr, Data);

	FPCGTableVisualizerInfo Info;
	Info.Data = PointData;

	// Columns
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_Index,         TEXT_Index));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_PositionX,     TEXT_PositionX));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_PositionY,     TEXT_PositionY));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_PositionZ,     TEXT_PositionZ));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_RotationRoll,  TEXT_RotationRoll));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_RotationPitch, TEXT_RotationPitch));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_RotationYaw,   TEXT_RotationYaw));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ScaleX,        TEXT_ScaleX));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ScaleY,        TEXT_ScaleY));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ScaleZ,        TEXT_ScaleZ));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMinX,    TEXT_BoundsMinX));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMinY,    TEXT_BoundsMinY));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMinZ,    TEXT_BoundsMinZ));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMaxX,    TEXT_BoundsMaxX));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMaxY,    TEXT_BoundsMaxY));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_BoundsMaxZ,    TEXT_BoundsMaxZ));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ColorR,        TEXT_ColorR));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ColorG,        TEXT_ColorG));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ColorB,        TEXT_ColorB));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_ColorA,        TEXT_ColorA));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_Density,       TEXT_Density));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_Steepness,     TEXT_Steepness));
	Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_Seed,          TEXT_Seed));

	if (FPCGEditorCommon::CVarShowAdvancedAttributesFields.GetValueOnAnyThread())
	{
		Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_MetadataEntry, TEXT_MetadataEntry, []()
		{
			return TSharedPtr<const IPCGAttributeAccessor>(PCGAttributeAccessorHelpers::CreatePropertyAccessor(GET_MEMBER_NAME_CHECKED(FPCGPoint, MetadataEntry), FPCGPoint::StaticStruct()).Release());
		}));

		Info.ColumnInfos.Add(CreateColumnInfo(PointData, NAME_MetadataEntryParent, TEXT_MetadataEntryParent, [PointData]()
		{
			return MakeShared<FPCGCustomPointAccessor<int64>>([PointData](const FPCGPoint& Point, void* OutValue)
			{
				if (const UPCGMetadata* Metadata = PointData->ConstMetadata())
				{
					*reinterpret_cast<int64*>(OutValue) = Metadata->GetParentKey(Point.MetadataEntry);
					return true;
				}
				return false;
			}, nullptr);
		}));
	}

	// Add Metadata Columns
	CreateMetadataColumnInfos(PointData, Info.ColumnInfos);

	// Column Sorting
	Info.SortingColumn = NAME_Index;

	// Focus on data behavior
	Info.FocusOnDataCallback = [](const UPCGData* Data, TArrayView<const int> Indices)
	{
		if (const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Data))
		{
			const UPCGPointData* PointData = SpatialData->ToPointData(nullptr);

			if (!PointData)
			{
				return;
			}

			const TArray<FPCGPoint>& Points = PointData->GetPoints();

			FBox BoundingBox(EForceInit::ForceInit);
			if (Indices.IsEmpty())
			{
				BoundingBox = PointData->GetBounds();
			}
			else
			{
				for (const int& Index : Indices)
				{
					check(Points.IsValidIndex(Index));

					const FPCGPoint& Point = Points[Index];
					const FBox PointBoundingBox = Point.GetLocalBounds().TransformBy(Point.Transform.ToMatrixWithScale());

					BoundingBox += PointBoundingBox;
				}
			}

			if (GEditor && BoundingBox.IsValid)
			{
				GEditor->MoveViewportCamerasToBox(BoundingBox, /*bActiveViewportOnly=*/true, /*DrawDebugBoxTimeInSeconds=*/2.5f);
			}
		}
	};

	// Accessor Keys
	Info.AccessorKeys = TSharedPtr<const IPCGAttributeAccessorKeys>(PCGAttributeAccessorHelpers::CreateConstKeys(PointData, FPCGAttributePropertyInputSelector()).Release());

	return Info;
}

const UPCGPointData* IPCGSpatialDataVisualization::CollapseToDebugPointData(FPCGContext* Context, const UPCGData* Data) const
{
	if (const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Data))
	{
		return SpatialData->ToPointData(Context);
	}

	return nullptr;
}

#undef LOCTEXT_NAMESPACE
