// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.


#include "RealtimeMeshHeightfieldCollision.h"

#include "RealtimeMeshComponentModule.h"
#include "PhysicsEngine/BodySetup.h"
#include "PhysicsEngine/BodyInstance.h"
#include "Chaos/HeightField.h"
#include "Chaos/PhysicsObject.h"
#include "Physics/Experimental/ChaosInterfaceWrapper.h"
#include "Physics/Experimental/PhysScene_Chaos.h"
#include "PhysicsProxy/SingleParticlePhysicsProxy.h"
#include "Physics/PhysicsFiltering.h"
#include "PrimitiveViewRelevance.h"
#include "PrimitiveSceneProxy.h"
#include "SceneManagement.h"
#include "Materials/Material.h"
#include "Engine/CollisionProfile.h"
#include "StaticMeshResources.h"
#include "RenderResource.h"
#include "VertexFactory.h"
#include "LocalVertexFactory.h"
#include "MaterialDomain.h"
#include "MeshBatch.h"
#include "Engine/Engine.h"
#include "Materials/MaterialRenderProxy.h"
#include "CollisionQueryParams.h"
#include "Engine/World.h"
#include "SceneInterface.h"
#include "SceneView.h"
#include "MaterialShared.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

DEFINE_LOG_CATEGORY_STATIC(LogRealtimeMeshHeightfield, Log, All);

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

// Scene proxy for debug rendering using mesh-based approach
class FRealtimeMeshHeightfieldCollisionSceneProxy final : public FPrimitiveSceneProxy
{
public:
	virtual SIZE_T GetTypeHash() const override
	{
		static size_t UniquePointer;
		return reinterpret_cast<size_t>(&UniquePointer);
	}

	FRealtimeMeshHeightfieldCollisionSceneProxy(const URealtimeMeshHeightfieldCollision* InComponent)
		: FPrimitiveSceneProxy(InComponent)
		, CollisionData(InComponent->GetCollisionData())
		, VertexFactory(GetScene().GetFeatureLevel(), "FRealtimeMeshHeightfieldCollisionSceneProxy")
		, bCollisionEnabled(InComponent->BodyInstance.GetCollisionEnabled() != ECollisionEnabled::NoCollision)
		, CollisionResponseToPawn(InComponent->GetCollisionResponseToChannel(ECC_Pawn))
		, CollisionResponseToVisibility(InComponent->GetCollisionResponseToChannel(ECC_Visibility))
	{
		bWillEverBeLit = false;
	}

	virtual ~FRealtimeMeshHeightfieldCollisionSceneProxy() override
	{
		VertexBuffers.PositionVertexBuffer.ReleaseResource();
		VertexBuffers.StaticMeshVertexBuffer.ReleaseResource();
		VertexBuffers.ColorVertexBuffer.ReleaseResource();
		IndexBuffer.ReleaseResource();
		VertexFactory.ReleaseResource();
	}

	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
	{
		// Check if collision is enabled and we have valid mesh data
		if (!bCollisionEnabled || IndexBuffer.GetNumIndices() == 0)
		{
			return;
		}

		// Check which collision debug modes are active and relevant to this component
		const bool bShowCollision = ViewFamily.EngineShowFlags.Collision;
		const bool bShowPlayerCollision = ViewFamily.EngineShowFlags.CollisionPawn && 
			(CollisionResponseToPawn != ECR_Ignore);
		const bool bShowVisibilityCollision = ViewFamily.EngineShowFlags.CollisionVisibility && 
			(CollisionResponseToVisibility != ECR_Ignore);
		
		// Only render if at least one relevant collision debug mode is active
		if (!bShowCollision && !bShowPlayerCollision && !bShowVisibilityCollision)
		{
			return;
		}

		const bool bWireframe = ViewFamily.EngineShowFlags.Wireframe;
		
		for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
		{
			if (VisibilityMap & (1 << ViewIndex))
			{
				const FSceneView* View = Views[ViewIndex];
				
				// Create mesh element
				FMeshBatch& Mesh = Collector.AllocateMesh();
				FMeshBatchElement& BatchElement = Mesh.Elements[0];
				BatchElement.IndexBuffer = &IndexBuffer;
				BatchElement.FirstIndex = 0;
				BatchElement.NumPrimitives = IndexBuffer.GetNumIndices() / 3;
				BatchElement.MinVertexIndex = 0;
				BatchElement.MaxVertexIndex = VertexBuffers.PositionVertexBuffer.GetNumVertices() - 1;
				
				Mesh.bWireframe = true; // Always render as wireframe for collision debug
				Mesh.VertexFactory = &VertexFactory;

				auto WireframeMaterial = new FColoredMaterialRenderProxy(
					GEngine->WireframeMaterial ? GEngine->WireframeMaterial->GetRenderProxy() : NULL,
					FLinearColor(0, 0.5f, 1.f)
				);
				
				Collector.RegisterOneFrameMaterialProxy(WireframeMaterial);
				Mesh.MaterialRenderProxy = WireframeMaterial;
				
				Mesh.ReverseCulling = IsLocalToWorldDeterminantNegative();
				Mesh.Type = PT_TriangleList;
				Mesh.DepthPriorityGroup = SDPG_World;
				
				Collector.AddMesh(ViewIndex, Mesh);
			}
		}
	}

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
	{
		FPrimitiveViewRelevance Result;
		
		if (bCollisionEnabled && IsShown(View))
		{
			// Check which collision debug modes are active and relevant to this component
			const bool bShowCollision = View->Family->EngineShowFlags.Collision;
			const bool bShowPlayerCollision = View->Family->EngineShowFlags.CollisionPawn && 
				(CollisionResponseToPawn != ECR_Ignore);
			const bool bShowVisibilityCollision = View->Family->EngineShowFlags.CollisionVisibility && 
				(CollisionResponseToVisibility != ECR_Ignore);
			
			Result.bDrawRelevance = bShowCollision || bShowPlayerCollision || bShowVisibilityCollision;
		}
		else
		{
			Result.bDrawRelevance = false;
		}
		
		Result.bDynamicRelevance = true;
		Result.bShadowRelevance = false;
		Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);
		return Result;
	}

	virtual uint32 GetMemoryFootprint() const override
	{
		return sizeof(*this) + GetAllocatedSize();
	}

	virtual void CreateRenderThreadResources(FRHICommandListBase& RHICmdList) override
	{
		FPrimitiveSceneProxy::CreateRenderThreadResources(RHICmdList);
		
		// Build the debug mesh if we have valid data
		if (CollisionData.HeightData.Num() > 0 && CollisionData.Dimensions.X > 1 && CollisionData.Dimensions.Y > 1)
		{
			BuildDebugMesh(RHICmdList);
		}
	}

private:
	const FRealtimeMeshHeightFieldCollisionData& CollisionData;
	
	FStaticMeshVertexBuffers VertexBuffers;
	FRawStaticIndexBuffer IndexBuffer;
	FLocalVertexFactory VertexFactory;
	
	// Thread-safe collision response data copied from component
	const bool bCollisionEnabled;
	const ECollisionResponse CollisionResponseToPawn;
	const ECollisionResponse CollisionResponseToVisibility;

	void BuildDebugMesh(FRHICommandListBase& RHICmdList)
	{
		// Build FStaticMeshBuildVertex array for proper initialization
		TArray<FStaticMeshBuildVertex> BuildVertices;
		TArray<uint32> Indices;

		const int32 NumVertices = CollisionData.Dimensions.X * CollisionData.Dimensions.Y;
		BuildVertices.SetNum(NumVertices);

		// Generate vertices using FStaticMeshBuildVertex
		for (int32 Y = 0; Y < CollisionData.Dimensions.Y; ++Y)
		{
			for (int32 X = 0; X < CollisionData.Dimensions.X; ++X)
			{
				const int32 Index = Y * CollisionData.Dimensions.X + X;
				const float Height = (Index < CollisionData.HeightData.Num()) ? CollisionData.HeightData[Index] : 0.0f;
				
				FStaticMeshBuildVertex& Vertex = BuildVertices[Index];
				
				// Set position
				Vertex.Position = FVector3f(
					X * CollisionData.GridSpacing,
					Y * CollisionData.GridSpacing,
					Height
				);
				
				// Set tangent basis
				Vertex.TangentX = FVector3f(1, 0, 0); // Tangent X (U direction)
				Vertex.TangentY = FVector3f(0, 1, 0); // Tangent Y (V direction) 
				Vertex.TangentZ = FVector3f(0, 0, 1); // Normal (up)
				
				// Set UV coordinates (not really needed for debug but required)
				Vertex.UVs[0] = FVector2f(
					static_cast<float>(X) / FMath::Max(1, CollisionData.Dimensions.X - 1),
					static_cast<float>(Y) / FMath::Max(1, CollisionData.Dimensions.Y - 1)
				);
				
				// Color by material index if available
				FColor VertexColor = FColor::Green;
				if (CollisionData.MaterialIndices.Num() > Index)
				{
					const uint8 MaterialIndex = CollisionData.MaterialIndices[Index];
					// Simple color coding for different materials
					switch (MaterialIndex % 8)
					{
					case 0: VertexColor = FColor::Green; break;
					case 1: VertexColor = FColor::Blue; break;
					case 2: VertexColor = FColor::Red; break;
					case 3: VertexColor = FColor::Yellow; break;
					case 4: VertexColor = FColor::Cyan; break;
					case 5: VertexColor = FColor::Magenta; break;
					case 6: VertexColor = FColor::Orange; break;
					case 7: VertexColor = FColor::Purple; break;
					}
				}
				Vertex.Color = VertexColor;
			}
		}

		// Generate indices for wireframe triangles
		const int32 NumQuads = (CollisionData.Dimensions.X - 1) * (CollisionData.Dimensions.Y - 1);
		Indices.Reserve(NumQuads * 6); // 2 triangles per quad

		for (int32 Y = 0; Y < CollisionData.Dimensions.Y - 1; ++Y)
		{
			for (int32 X = 0; X < CollisionData.Dimensions.X - 1; ++X)
			{
				const uint32 TopLeft = Y * CollisionData.Dimensions.X + X;
				const uint32 TopRight = Y * CollisionData.Dimensions.X + (X + 1);
				const uint32 BottomLeft = (Y + 1) * CollisionData.Dimensions.X + X;
				const uint32 BottomRight = (Y + 1) * CollisionData.Dimensions.X + (X + 1);

				// First triangle
				Indices.Add(TopLeft);
				Indices.Add(BottomLeft);
				Indices.Add(TopRight);

				// Second triangle
				Indices.Add(TopRight);
				Indices.Add(BottomLeft);
				Indices.Add(BottomRight);
			}
		}

		// Initialize vertex buffers using FStaticMeshBuildVertex array
		VertexBuffers.PositionVertexBuffer.Init(BuildVertices);
		VertexBuffers.StaticMeshVertexBuffer.Init(BuildVertices, 1); // 1 UV channel
		VertexBuffers.ColorVertexBuffer.Init(BuildVertices);

		// Initialize index buffer with correct enum
		IndexBuffer.SetIndices(Indices, EIndexBufferStride::AutoDetect);

		// Initialize render resources with command list
		VertexBuffers.PositionVertexBuffer.InitResource(RHICmdList);
		VertexBuffers.StaticMeshVertexBuffer.InitResource(RHICmdList);
		VertexBuffers.ColorVertexBuffer.InitResource(RHICmdList);
		IndexBuffer.InitResource(RHICmdList);

		// Initialize vertex factory with command list
		FLocalVertexFactory::FDataType Data;
		VertexBuffers.PositionVertexBuffer.BindPositionVertexBuffer(&VertexFactory, Data);
		VertexBuffers.StaticMeshVertexBuffer.BindTangentVertexBuffer(&VertexFactory, Data);
		VertexBuffers.StaticMeshVertexBuffer.BindPackedTexCoordVertexBuffer(&VertexFactory, Data);
		VertexBuffers.StaticMeshVertexBuffer.BindLightMapVertexBuffer(&VertexFactory, Data, 0);
		VertexBuffers.ColorVertexBuffer.BindColorVertexBuffer(&VertexFactory, Data);
		VertexFactory.SetData(RHICmdList, Data);
		VertexFactory.InitResource(RHICmdList);
	}
};

#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

// Implementation of validation functions for FRealtimeMeshHeightFieldCollisionData
bool FRealtimeMeshHeightFieldCollisionData::IsValid() const
{
	return ValidateDimensions() && ValidateHeightData() && ValidateMaterialIndices();
}

bool FRealtimeMeshHeightFieldCollisionData::ValidateDimensions() const
{
	if (Dimensions.X <= 0 || Dimensions.Y <= 0)
	{
		return false;
	}
	
	if (Dimensions.X > 8192 || Dimensions.Y > 8192)
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("Heightfield dimensions exceed recommended maximum (8192x8192)"));
	}
	
	return true;
}

bool FRealtimeMeshHeightFieldCollisionData::ValidateHeightData() const
{
	const int32 ExpectedCount = Dimensions.X * Dimensions.Y;
	
	if (HeightData.Num() != ExpectedCount)
	{
		return false;
	}
	
	// Check for valid height values
	for (int32 i = 0; i < HeightData.Num(); ++i)
	{
		const float Height = HeightData[i];
		if (!FMath::IsFinite(Height) || Height < HeightRange.X || Height > HeightRange.Y)
		{
			return false;
		}
	}
	
	return true;
}

bool FRealtimeMeshHeightFieldCollisionData::ValidateMaterialIndices() const
{
	if (MaterialIndices.Num() > 0 && MaterialIndices.Num() != HeightData.Num())
	{
		return false;
	}
	
	// Validate material indices are within bounds
	for (uint8 MaterialIndex : MaterialIndices)
	{
		if (MaterialIndex >= PhysicalMaterials.Num() && MaterialIndex != DefaultMaterialIndex)
		{
			return false;
		}
	}
	
	return true;
}

void FRealtimeMeshHeightFieldCollisionData::SanitizeData()
{
	// Clamp dimensions to valid range
	Dimensions.X = FMath::Clamp(Dimensions.X, 1, 8192);
	Dimensions.Y = FMath::Clamp(Dimensions.Y, 1, 8192);
	
	const int32 ExpectedCount = Dimensions.X * Dimensions.Y;
	
	// Resize height data if needed
	if (HeightData.Num() != ExpectedCount)
	{
		HeightData.SetNumZeroed(ExpectedCount);
	}
	
	// Clamp height values
	for (float& Height : HeightData)
	{
		if (!FMath::IsFinite(Height))
		{
			Height = 0.0f;
		}
		Height = FMath::Clamp(Height, HeightRange.X, HeightRange.Y);
	}
	
	// Resize material indices if needed
	if (MaterialIndices.Num() > 0 && MaterialIndices.Num() != ExpectedCount)
	{
		MaterialIndices.SetNumZeroed(ExpectedCount);
	}
	
	// Validate material indices
	for (uint8& MaterialIndex : MaterialIndices)
	{
		if (MaterialIndex >= PhysicalMaterials.Num())
		{
			MaterialIndex = DefaultMaterialIndex;
		}
	}
	
	// Ensure we have at least one material
	if (PhysicalMaterials.Num() == 0)
	{
		PhysicalMaterials.Add(nullptr); // Use default engine material
	}
}

FString FRealtimeMeshHeightFieldCollisionData::GetValidationErrorString() const
{
	TArray<FString> Errors;
	
	if (!ValidateDimensions())
	{
		Errors.Add(FString::Printf(TEXT("Invalid dimensions: %dx%d"), Dimensions.X, Dimensions.Y));
	}
	
	if (!ValidateHeightData())
	{
		const int32 ExpectedCount = Dimensions.X * Dimensions.Y;
		if (HeightData.Num() != ExpectedCount)
		{
			Errors.Add(FString::Printf(TEXT("Height data validation failed. Expected %d elements, got %d"), 
				ExpectedCount, HeightData.Num()));
		}
		else
		{
			// Find the first invalid height value for better error reporting
			for (int32 i = 0; i < HeightData.Num(); ++i)
			{
				const float Height = HeightData[i];
				if (!FMath::IsFinite(Height))
				{
					Errors.Add(FString::Printf(TEXT("Height data validation failed. Invalid height value (NaN/Infinite) at index %d: %f"), i, Height));
					break;
				}
				else if (Height < HeightRange.X || Height > HeightRange.Y)
				{
					Errors.Add(FString::Printf(TEXT("Height data validation failed. Height value at index %d (%f) is outside valid range [%f, %f]"), 
						i, Height, HeightRange.X, HeightRange.Y));
					break;
				}
			}
		}
	}
	
	if (!ValidateMaterialIndices())
	{
		Errors.Add(TEXT("Material indices validation failed"));
	}
	
	return FString::Join(Errors, TEXT("; "));
}

URealtimeMeshHeightfieldCollision::URealtimeMeshHeightfieldCollision()
{
	PrimaryComponentTick.bCanEverTick = false;

	BodySetup = CreateDefaultSubobject<UBodySetup>(TEXT("HeightfieldBodySetup"));
	BodySetup->CollisionTraceFlag = CTF_UseDefault;
	BodySetup->bMeshCollideAll = true;
	BodySetup->bGenerateMirroredCollision = false;
	BodySetup->bDoubleSidedGeometry = true;
}

void URealtimeMeshHeightfieldCollision::SetCollisionData(FRealtimeMeshHeightFieldCollisionData&& InCollisionData)
{
	if (!InCollisionData.IsValid())
	{
		UE_LOG(LogRealtimeMeshHeightfield, Error, TEXT("SetCollisionData failed: %s"), *InCollisionData.GetValidationErrorString());
		return;
	}
	
	// Log performance warnings
	const int32 TotalCells = InCollisionData.Dimensions.X * InCollisionData.Dimensions.Y;
	if (TotalCells > 512 * 512) // 512x512 cells
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("Large heightfield detected (%d cells). Consider optimization."), TotalCells);
	}
	
	if (InCollisionData.PhysicalMaterials.Num() > 16)
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("Large number of materials (%d). Performance may be impacted."), InCollisionData.PhysicalMaterials.Num());
	}
	
	CollisionData = MoveTemp(InCollisionData);
	
	UE_LOG(LogRealtimeMeshHeightfield, Log, TEXT("Heightfield collision data updated: %dx%d, %d materials"), 
		CollisionData.Dimensions.X, CollisionData.Dimensions.Y, CollisionData.PhysicalMaterials.Num());
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
		UpdateComponentBounds();
		
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
		// Recreate the scene proxy to update debug rendering
		MarkRenderStateDirty();
#endif
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
}

void URealtimeMeshHeightfieldCollision::OnRegister()
{
	Super::OnRegister();
}

void URealtimeMeshHeightfieldCollision::OnCreatePhysicsState()
{
	USceneComponent::OnCreatePhysicsState(); // route OnCreatePhysicsState, skip PrimitiveComponent implementation

	if (!CollisionData.IsValid())
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("Cannot create physics state: Invalid collision data"));
		return;
	}

	if (CollisionData.Dimensions.Size() == 0)
	{
		UE_LOG(LogRealtimeMeshHeightfield, Log, TEXT("No heightfield data to create physics state"));
		return;
	}

	UE_LOG(LogRealtimeMeshHeightfield, Verbose, TEXT("Creating heightfield physics state..."));

	if (!BodyInstance.IsValidBodyInstance() && CollisionData.Dimensions.Size() > 0)
	{
		// Add defensive checks before creating Chaos heightfield
		if (CollisionData.Dimensions.X <= 0 || CollisionData.Dimensions.Y <= 0)
		{
			UE_LOG(LogRealtimeMeshHeightfield, Error, TEXT("Cannot create heightfield with invalid dimensions: %dx%d"), 
				CollisionData.Dimensions.X, CollisionData.Dimensions.Y);
			return;
		}

		const int32 ExpectedSize = CollisionData.Dimensions.X * CollisionData.Dimensions.Y;
		if (CollisionData.HeightData.Num() != ExpectedSize)
		{
			UE_LOG(LogRealtimeMeshHeightfield, Error, TEXT("HeightData size mismatch: expected %d, got %d"), 
				ExpectedSize, CollisionData.HeightData.Num());
			return;
		}

		TArray<double> TempHeights;
		Algo::Transform(CollisionData.HeightData, TempHeights, [](const float& Height) { return static_cast<double>(Height); });
		auto TempIndices = CollisionData.MaterialIndices;
		HeightfieldGeometry = Chaos::FHeightFieldPtr(new Chaos::FHeightField(MoveTemp(TempHeights), MoveTemp(TempIndices), CollisionData.Dimensions.Y, CollisionData.Dimensions.X, Chaos::FVec3(1)));
	
		for (UPhysicalMaterial* PhysicalMaterial : CollisionData.PhysicalMaterials)
		{
			if (PhysicalMaterial != nullptr)
			{
				UsedChaosMaterials.Add(PhysicalMaterial->GetPhysicsMaterial());
			}				
		}		

		// Debug display needs to update its representation, so we invalidate the collision component's render state : 
		//MarkRenderStateDirty();

		// Make transform for this landscape component PxActor
		FTransform LandscapeComponentTransform	=FTransform(FRotator::ZeroRotator, FVector::Zero(), FVector(CollisionData.GridSpacing, CollisionData.GridSpacing, 1.0f)) * GetComponentToWorld();
		FMatrix LandscapeComponentMatrix = LandscapeComponentTransform.ToMatrixWithScale();
		FVector LandscapeScale = LandscapeComponentMatrix.ExtractScaling();

		// Reorder the axes
		FVector TerrainX = LandscapeComponentMatrix.GetScaledAxis(EAxis::X);
		FVector TerrainY = LandscapeComponentMatrix.GetScaledAxis(EAxis::Y);
		FVector TerrainZ = LandscapeComponentMatrix.GetScaledAxis(EAxis::Z);
		LandscapeComponentMatrix.SetAxis(0, TerrainX);
		LandscapeComponentMatrix.SetAxis(2, TerrainY);
		LandscapeComponentMatrix.SetAxis(1, TerrainZ);
		
		//const bool bCreateSimpleCollision = SimpleCollisionSizeQuads > 0;
		//const float SimpleCollisionScale = bCreateSimpleCollision ? CollisionScale * CollisionSizeQuads / SimpleCollisionSizeQuads : 0;

		// Create the geometry
		FVector FinalScale(LandscapeScale.X, LandscapeScale.Y, LandscapeScale.Z);

		{
			FActorCreationParams Params;
			Params.InitialTM = LandscapeComponentTransform;
			Params.InitialTM.SetScale3D(FVector(0));
			Params.bQueryOnly = false;
			Params.bStatic = true;
			Params.Scene = GetWorld()->GetPhysicsScene();

#if USE_BODYINSTANCE_DEBUG_NAMES
			const FString DebugName = (GetOwner() != nullptr) ? FString::Printf(TEXT("%s:%s"), *GetOwner()->GetFullName(), *GetName()) : *GetName();
			BodyInstance.CharDebugName = MakeShareable(new TArray<ANSICHAR>(StringToArray<ANSICHAR>(*DebugName, DebugName.Len() + 1)));
			Params.DebugName = BodyInstance.CharDebugName.IsValid() ? BodyInstance.CharDebugName->GetData() : nullptr;
#endif

			FPhysicsActorHandle PhysHandle;
			FPhysicsInterface::CreateActor(Params, PhysHandle);
			Chaos::FRigidBodyHandle_External& Body_External = PhysHandle->GetGameThreadAPI();

			Chaos::FShapesArray ShapeArray;
			TArray<Chaos::FImplicitObjectPtr> Geoms;

			// First add complex geometry
			HeightfieldGeometry->SetScale(FinalScale * LandscapeComponentTransform.GetScale3D().GetSignVector());
			Chaos::FImplicitObjectPtr ImplicitHeightField(HeightfieldGeometry);
			Chaos::FImplicitObjectPtr ChaosHeightFieldFromCooked = MakeImplicitObjectPtr<Chaos::TImplicitObjectTransformed<Chaos::FReal, 3>>(ImplicitHeightField, Chaos::FRigidTransform3(FTransform::Identity));

			TUniquePtr<Chaos::FPerShapeData> NewShape = Chaos::FShapeInstanceProxy::Make(ShapeArray.Num(), ChaosHeightFieldFromCooked);

			// Setup filtering
			FCollisionFilterData QueryFilterData, SimFilterData;
			CreateShapeFilterData(static_cast<uint8>(GetCollisionObjectType()), FMaskFilter(0), GetOwner()->GetUniqueID(), GetCollisionResponseToChannels(), 
			GetUniqueID(), 0, QueryFilterData, SimFilterData, true, false, true);

			// Heightfield is used for simple and complex collision
			QueryFilterData.Word3 |= EPDF_SimpleCollision | EPDF_ComplexCollision;
			SimFilterData.Word3 |= EPDF_SimpleCollision | EPDF_ComplexCollision;

			NewShape->SetQueryData(QueryFilterData);
			NewShape->SetSimData(SimFilterData);
			NewShape->SetMaterials(UsedChaosMaterials);

			Geoms.Emplace(MoveTemp(ChaosHeightFieldFromCooked));
			ShapeArray.Emplace(MoveTemp(NewShape));

			// Push the shapes to the actor
			if(Geoms.Num() == 1)
			{
				Body_External.SetGeometry(Geoms[0]);
			}
			else
			{
				Body_External.SetGeometry(MakeImplicitObjectPtr<Chaos::FImplicitObjectUnion>(MoveTemp(Geoms)));
			}

			// Construct Shape Bounds
			for (auto& Shape : ShapeArray)
			{
				Chaos::FRigidTransform3 WorldTransform = Chaos::FRigidTransform3(Body_External.X(), Body_External.R());
				Shape->UpdateShapeBounds(WorldTransform);
			}
			Body_External.MergeShapesArray(MoveTemp(ShapeArray));

			// Push the actor to the scene
			FPhysScene* PhysScene = GetWorld()->GetPhysicsScene();

			// Set body instance data
			BodyInstance.PhysicsUserData = FPhysicsUserData(&BodyInstance);
			BodyInstance.OwnerComponent = this;
			BodyInstance.ActorHandle = PhysHandle;

			Body_External.SetUserData(&BodyInstance.PhysicsUserData);

			TArray<FPhysicsActorHandle> Actors;
			Actors.Add(PhysHandle);

			FPhysicsCommand::ExecuteWrite(PhysScene, [&]()
			{
				bool bImmediateAccelStructureInsertion = true;
				PhysScene->AddActorsToScene_AssumesLocked(Actors, bImmediateAccelStructureInsertion);
			});

			PhysScene->AddToComponentMaps(this, PhysHandle);
			if (BodyInstance.bNotifyRigidBodyCollision)
			{
				PhysScene->RegisterForCollisionEvents(this);
			}
			
			UE_LOG(LogRealtimeMeshHeightfield, VeryVerbose, TEXT("Heightfield physics state created successfully"));
		}
	}
	else
	{
		if (!BodyInstance.IsValidBodyInstance())
		{
			UE_LOG(LogRealtimeMeshHeightfield, Error, TEXT("Failed to create heightfield physics state"));
		}
	}
}

void URealtimeMeshHeightfieldCollision::OnDestroyPhysicsState()
{
	Super::OnDestroyPhysicsState();
	
	if (FPhysScene_Chaos* PhysScene = GetWorld()->GetPhysicsScene())
	{
		FPhysicsActorHandle& ActorHandle = BodyInstance.GetPhysicsActorHandle();
		if (FPhysicsInterface::IsValid(ActorHandle))
		{
			PhysScene->RemoveFromComponentMaps(ActorHandle);
		}
		if (BodyInstance.bNotifyRigidBodyCollision)
		{
			PhysScene->UnRegisterForCollisionEvents(this);
		}
	}
}

// Material system implementations
bool URealtimeMeshHeightfieldCollision::SetHeightfieldPhysicalMaterial(int32 MaterialIndex, UPhysicalMaterial* Material)
{
	if (MaterialIndex < 0 || MaterialIndex >= CollisionData.PhysicalMaterials.Num())
	{
		return false;
	}
	
	CollisionData.PhysicalMaterials[MaterialIndex] = Material;
	
	// Update Chaos materials if physics state exists
	if (BodyInstance.IsValidBodyInstance())
	{
		UpdateChaosMaterials();
	}
	
	return true;
}

UPhysicalMaterial* URealtimeMeshHeightfieldCollision::GetHeightfieldPhysicalMaterial(int32 MaterialIndex) const
{
	if (MaterialIndex >= 0 && MaterialIndex < CollisionData.PhysicalMaterials.Num())
	{
		return CollisionData.PhysicalMaterials[MaterialIndex];
	}
	return nullptr;
}

int32 URealtimeMeshHeightfieldCollision::AddHeightfieldPhysicalMaterial(UPhysicalMaterial* Material)
{
	const int32 NewIndex = CollisionData.PhysicalMaterials.Add(Material);
	
	if (BodyInstance.IsValidBodyInstance())
	{
		UpdateChaosMaterials();
	}
	
	return NewIndex;
}

void URealtimeMeshHeightfieldCollision::SetCellMaterialIndex(int32 CellX, int32 CellY, uint8 MaterialIndex)
{
	if (CellX < 0 || CellX >= CollisionData.Dimensions.X || 
		CellY < 0 || CellY >= CollisionData.Dimensions.Y)
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("SetCellMaterialIndex: Invalid cell coordinates (%d, %d). Valid range: (0, 0) to (%d, %d)"), 
			CellX, CellY, CollisionData.Dimensions.X - 1, CollisionData.Dimensions.Y - 1);
		return;
	}
	
	if (MaterialIndex >= CollisionData.PhysicalMaterials.Num())
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("SetCellMaterialIndex: Invalid material index %d. Available materials: %d"), 
			MaterialIndex, CollisionData.PhysicalMaterials.Num());
		return;
	}
	
	const int32 Index = CellY * CollisionData.Dimensions.X + CellX;
	
	// Ensure material indices array is properly sized
	if (CollisionData.MaterialIndices.Num() != CollisionData.HeightData.Num())
	{
		CollisionData.MaterialIndices.SetNumZeroed(CollisionData.HeightData.Num());
	}
	
	CollisionData.MaterialIndices[Index] = MaterialIndex;
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
		MarkRenderStateDirty();
#endif
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
}

uint8 URealtimeMeshHeightfieldCollision::GetCellMaterialIndex(int32 CellX, int32 CellY) const
{
	if (CellX < 0 || CellX >= CollisionData.Dimensions.X || 
		CellY < 0 || CellY >= CollisionData.Dimensions.Y)
	{
		UE_LOG(LogRealtimeMeshHeightfield, VeryVerbose, TEXT("GetCellMaterialIndex: Invalid cell coordinates (%d, %d). Valid range: (0, 0) to (%d, %d)"), 
			CellX, CellY, CollisionData.Dimensions.X - 1, CollisionData.Dimensions.Y - 1);
		return CollisionData.DefaultMaterialIndex;
	}
	
	if (CollisionData.MaterialIndices.Num() == 0)
	{
		return CollisionData.DefaultMaterialIndex;
	}
	
	const int32 Index = CellY * CollisionData.Dimensions.X + CellX;
	if (Index >= CollisionData.MaterialIndices.Num())
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("GetCellMaterialIndex: Material indices array inconsistency at (%d, %d)"), CellX, CellY);
		return CollisionData.DefaultMaterialIndex;
	}
	
	return CollisionData.MaterialIndices[Index];
}

void URealtimeMeshHeightfieldCollision::SetCellMaterialIndicesRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, uint8 MaterialIndex)
{
	if (MaterialIndex >= CollisionData.PhysicalMaterials.Num())
	{
		return;
	}
	
	// Ensure material indices array is properly sized
	if (CollisionData.MaterialIndices.Num() != CollisionData.HeightData.Num())
	{
		CollisionData.MaterialIndices.SetNumZeroed(CollisionData.HeightData.Num());
	}
	
	const int32 EndX = FMath::Min(StartX + SizeX, CollisionData.Dimensions.X);
	const int32 EndY = FMath::Min(StartY + SizeY, CollisionData.Dimensions.Y);
	
	for (int32 Y = FMath::Max(0, StartY); Y < EndY; ++Y)
	{
		for (int32 X = FMath::Max(0, StartX); X < EndX; ++X)
		{
			const int32 Index = Y * CollisionData.Dimensions.X + X;
			CollisionData.MaterialIndices[Index] = MaterialIndex;
		}
	}
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
}

void URealtimeMeshHeightfieldCollision::UpdateChaosMaterials()
{
	UsedChaosMaterials.Empty();
	
	for (UPhysicalMaterial* PhysicalMaterial : CollisionData.PhysicalMaterials)
	{
		if (PhysicalMaterial)
		{
			UsedChaosMaterials.Add(PhysicalMaterial->GetPhysicsMaterial());
		}
		else
		{
			// Use default engine material
			UsedChaosMaterials.Add(Chaos::FMaterialHandle());
		}
	}
}

// Height data operations
bool URealtimeMeshHeightfieldCollision::SetHeightFieldData(const FRealtimeMeshHeightFieldCollisionData& NewData, bool bValidateData)
{
	if (bValidateData && !NewData.IsValid())
	{
		UE_LOG(LogRealtimeMeshHeightfield, Error, TEXT("SetHeightFieldData failed: %s"), *NewData.GetValidationErrorString());
		return false;
	}
	
	FRealtimeMeshHeightFieldCollisionData SanitizedData = NewData;
	if (bValidateData)
	{
		SanitizedData.SanitizeData();
	}
	
	CollisionData = MoveTemp(SanitizedData);
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
		UpdateComponentBounds();
		MarkRenderStateDirty();
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
	
	return true;
}

void URealtimeMeshHeightfieldCollision::SetHeight(int32 X, int32 Y, float Height)
{
	if (X < 0 || X >= CollisionData.Dimensions.X || Y < 0 || Y >= CollisionData.Dimensions.Y)
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("SetHeight: Invalid coordinates (%d, %d). Valid range: (0, 0) to (%d, %d)"), 
			X, Y, CollisionData.Dimensions.X - 1, CollisionData.Dimensions.Y - 1);
		return;
	}
	
	if (!FMath::IsFinite(Height))
	{
		UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("SetHeight: Invalid height value (non-finite) at (%d, %d)"), X, Y);
		return;
	}
	
	const int32 Index = Y * CollisionData.Dimensions.X + X;
	if (Index >= 0 && Index < CollisionData.HeightData.Num())
	{
		const float ClampedHeight = FMath::Clamp(Height, CollisionData.HeightRange.X, CollisionData.HeightRange.Y);
		if (ClampedHeight != Height)
		{
			UE_LOG(LogRealtimeMeshHeightfield, VeryVerbose, TEXT("SetHeight: Height clamped from %.2f to %.2f at (%d, %d)"), 
				Height, ClampedHeight, X, Y);
		}
		
		CollisionData.HeightData[Index] = ClampedHeight;
		
		if (!bInBatchUpdate)
		{
			RecreatePhysicsState();
			// Update bounds if single height change might affect overall bounds
			UpdateComponentBounds();
			MarkRenderTransformDirty();
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
			MarkRenderStateDirty();
#endif
		}
		else
		{
			bPendingPhysicsRecreation = true;
		}
	}
}

float URealtimeMeshHeightfieldCollision::GetHeight(int32 X, int32 Y) const
{
	if (X < 0 || X >= CollisionData.Dimensions.X || Y < 0 || Y >= CollisionData.Dimensions.Y)
	{
		UE_LOG(LogRealtimeMeshHeightfield, VeryVerbose, TEXT("GetHeight: Invalid coordinates (%d, %d). Valid range: (0, 0) to (%d, %d)"), 
			X, Y, CollisionData.Dimensions.X - 1, CollisionData.Dimensions.Y - 1);
		return 0.0f;
	}
	
	const int32 Index = Y * CollisionData.Dimensions.X + X;
	if (Index >= 0 && Index < CollisionData.HeightData.Num())
	{
		return CollisionData.HeightData[Index];
	}
	
	UE_LOG(LogRealtimeMeshHeightfield, Warning, TEXT("GetHeight: Height data array inconsistency at (%d, %d)"), X, Y);
	return 0.0f;
}

void URealtimeMeshHeightfieldCollision::SetHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, const TArray<float>& Heights)
{
	const int32 EndX = FMath::Min(StartX + SizeX, CollisionData.Dimensions.X);
	const int32 EndY = FMath::Min(StartY + SizeY, CollisionData.Dimensions.Y);
	
	int32 HeightIndex = 0;
	for (int32 Y = FMath::Max(0, StartY); Y < EndY && HeightIndex < Heights.Num(); ++Y)
	{
		for (int32 X = FMath::Max(0, StartX); X < EndX && HeightIndex < Heights.Num(); ++X)
		{
			const int32 Index = Y * CollisionData.Dimensions.X + X;
			CollisionData.HeightData[Index] = FMath::Clamp(Heights[HeightIndex++], CollisionData.HeightRange.X, CollisionData.HeightRange.Y);
		}
	}
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
		// Update bounds if height region changes might affect overall bounds
		UpdateComponentBounds();
		MarkRenderTransformDirty();
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
}

TArray<float> URealtimeMeshHeightfieldCollision::GetHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY) const
{
	TArray<float> Result;
	
	const int32 EndX = FMath::Min(StartX + SizeX, CollisionData.Dimensions.X);
	const int32 EndY = FMath::Min(StartY + SizeY, CollisionData.Dimensions.Y);
	
	for (int32 Y = FMath::Max(0, StartY); Y < EndY; ++Y)
	{
		for (int32 X = FMath::Max(0, StartX); X < EndX; ++X)
		{
			Result.Add(GetHeight(X, Y));
		}
	}
	
	return Result;
}

void URealtimeMeshHeightfieldCollision::ModifyHeightRegion(int32 StartX, int32 StartY, int32 SizeX, int32 SizeY, float HeightDelta)
{
	const int32 EndX = FMath::Min(StartX + SizeX, CollisionData.Dimensions.X);
	const int32 EndY = FMath::Min(StartY + SizeY, CollisionData.Dimensions.Y);
	
	for (int32 Y = FMath::Max(0, StartY); Y < EndY; ++Y)
	{
		for (int32 X = FMath::Max(0, StartX); X < EndX; ++X)
		{
			const int32 Index = Y * CollisionData.Dimensions.X + X;
			const float NewHeight = CollisionData.HeightData[Index] + HeightDelta;
			CollisionData.HeightData[Index] = FMath::Clamp(NewHeight, CollisionData.HeightRange.X, CollisionData.HeightRange.Y);
		}
	}
	
	if (!bInBatchUpdate)
	{
		RecreatePhysicsState();
		// Update bounds if height modifications might affect overall bounds
		UpdateComponentBounds();
		MarkRenderTransformDirty();
	}
	else
	{
		bPendingPhysicsRecreation = true;
	}
}

// Batch operations
void URealtimeMeshHeightfieldCollision::BeginBatchUpdate()
{
	bInBatchUpdate = true;
	bPendingPhysicsRecreation = false;
}

void URealtimeMeshHeightfieldCollision::EndBatchUpdate(bool bForceRecreatePhysics)
{
	bInBatchUpdate = false;
	
	if (bPendingPhysicsRecreation || bForceRecreatePhysics)
	{
		RecreatePhysicsState();
		UpdateComponentBounds();
		MarkRenderStateDirty();
	}
	
	bPendingPhysicsRecreation = false;
}

// Utility functions
FVector2D URealtimeMeshHeightfieldCollision::GetWorldSizeFromGridSize() const
{
	return FVector2D(
		CollisionData.Dimensions.X * CollisionData.GridSpacing,
		CollisionData.Dimensions.Y * CollisionData.GridSpacing
	);
}

FIntPoint URealtimeMeshHeightfieldCollision::GetGridCoordinatesFromWorldPosition(const FVector& WorldPosition) const
{
	const FTransform ComponentTransform = GetComponentTransform();
	const FVector LocalPosition = ComponentTransform.InverseTransformPosition(WorldPosition);
	
	return FIntPoint(
		FMath::FloorToInt(LocalPosition.X / CollisionData.GridSpacing),
		FMath::FloorToInt(LocalPosition.Y / CollisionData.GridSpacing)
	);
}

FVector URealtimeMeshHeightfieldCollision::GetWorldPositionFromGridCoordinates(int32 X, int32 Y) const
{
	const FVector LocalPosition(
		X * CollisionData.GridSpacing,
		Y * CollisionData.GridSpacing,
		GetHeight(X, Y)
	);
	
	return GetComponentTransform().TransformPosition(LocalPosition);
}

float URealtimeMeshHeightfieldCollision::GetInterpolatedHeight(const FVector& WorldPosition) const
{
	const FTransform ComponentTransform = GetComponentTransform();
	const FVector LocalPosition = ComponentTransform.InverseTransformPosition(WorldPosition);
	
	const float GridX = LocalPosition.X / CollisionData.GridSpacing;
	const float GridY = LocalPosition.Y / CollisionData.GridSpacing;
	
	const int32 X0 = FMath::FloorToInt(GridX);
	const int32 Y0 = FMath::FloorToInt(GridY);
	const int32 X1 = X0 + 1;
	const int32 Y1 = Y0 + 1;
	
	const float FracX = GridX - X0;
	const float FracY = GridY - Y0;
	
	const float H00 = GetHeight(X0, Y0);
	const float H10 = GetHeight(X1, Y0);
	const float H01 = GetHeight(X0, Y1);
	const float H11 = GetHeight(X1, Y1);
	
	const float H0 = FMath::Lerp(H00, H10, FracX);
	const float H1 = FMath::Lerp(H01, H11, FracX);
	
	return FMath::Lerp(H0, H1, FracY);
}

void URealtimeMeshHeightfieldCollision::UpdateComponentBounds()
{
	FBox LocalBounds = CalculateBounds();
	FBoxSphereBounds NewBounds = FBoxSphereBounds(LocalBounds);
	
	// Check if bounds changed significantly to determine if we need to invalidate cached data
	const bool bBoundsChanged = !Bounds.GetBox().Equals(NewBounds.GetBox(), 1.0f); // 1 unit tolerance
	
	Bounds = NewBounds;
	
	if (bBoundsChanged)
	{
		UE_LOG(LogRealtimeMeshHeightfield, VeryVerbose, TEXT("Component bounds updated: %s"), *Bounds.ToString());
		
		// Notify any listeners that bounds have changed
		if (GetOwner())
		{
			GetOwner()->InvalidateLightingCacheDetailed(true);
		}
	}
}

FBox URealtimeMeshHeightfieldCollision::CalculateBounds() const
{
	if (CollisionData.HeightData.Num() == 0)
	{
		return FBox(ForceInit);
	}
	
	float MinHeight = FLT_MAX;
	float MaxHeight = -FLT_MAX;
	
	for (float Height : CollisionData.HeightData)
	{
		MinHeight = FMath::Min(MinHeight, Height);
		MaxHeight = FMath::Max(MaxHeight, Height);
	}
	
	const FVector2D WorldSize = GetWorldSizeFromGridSize();
	
	return FBox(
		FVector(0.0f, 0.0f, MinHeight),
		FVector(WorldSize.X, WorldSize.Y, MaxHeight)
	);
}

#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
// Debug rendering implementation
FPrimitiveSceneProxy* URealtimeMeshHeightfieldCollision::CreateSceneProxy()
{
	// Only create scene proxy if we have valid collision data
	if (CollisionData.IsValid() && CollisionData.HeightData.Num() > 0)
	{
		return new FRealtimeMeshHeightfieldCollisionSceneProxy(this);
	}
	return nullptr;
}
#endif // !(UE_BUILD_SHIPPING || UE_BUILD_TEST)

FBoxSphereBounds URealtimeMeshHeightfieldCollision::CalcBounds(const FTransform& LocalToWorld) const
{
	FBox LocalBounds = CalculateBounds();
	return FBoxSphereBounds(LocalBounds).TransformBy(LocalToWorld);
}
