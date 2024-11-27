// Copyright Epic Games, Inc. All Rights Reserved.

#include "Components/PCGProceduralISMComponent.h"

#include "PCGComponent.h"
#include "PCGModule.h"
#include "PCGManagedResource.h"
#include "PCGSubsystem.h"
#include "Helpers/PCGHelpers.h"
#include "MeshSelectors/PCGISMDescriptor.h"

#include "InstanceDataSceneProxy.h"
#include "InstancedStaticMeshSceneProxyDesc.h"
#include "NaniteSceneProxy.h"
#include "SceneInterface.h"
#include "StaticMeshSceneProxyDesc.h"
#include "Engine/StaticMesh.h"
#include "Serialization/ArchiveCrc32.h"
#include "VT/RuntimeVirtualTexture.h"

UPCGManagedProceduralISMComponent* PCGManagedProceduralISMComponent::GetOrCreateManagedProceduralISMC(AActor* InTargetActor, UPCGComponent* InSourceComponent, uint64 InSettingsUID, const FPCGProceduralISMCBuilderParameters& InParams)
{
	check(InTargetActor && InSourceComponent);

	const UStaticMesh* StaticMesh = InParams.Descriptor.StaticMesh;
	if (!StaticMesh)
	{
		return nullptr;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC);

	FPCGProceduralISMComponentDescriptor Descriptor = InParams.Descriptor;

	{
		TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC::FindMatchingMISMC);
		UPCGManagedProceduralISMComponent* MatchingResource = nullptr;
		InSourceComponent->ForEachManagedResource([&MatchingResource, &InParams, &InTargetActor, &Descriptor, InSettingsUID](UPCGManagedResource* InResource)
		{
			// Early out if already found a match
			if (MatchingResource)
			{
				return;
			}

			if (UPCGManagedProceduralISMComponent* Resource = Cast<UPCGManagedProceduralISMComponent>(InResource))
			{
				if (Resource->GetSettingsUID() != InSettingsUID || !Resource->CanBeUsed())
				{
					return;
				}

				if (UPCGProceduralISMComponent* ISMC = Resource->GetComponent())
				{
					if (IsValid(ISMC) &&
						ISMC->GetOwner() == InTargetActor &&
						Resource->GetDescriptor() == Descriptor)
					{
						MatchingResource = Resource;
					}
				}
			}
		});

		if (MatchingResource)
		{
			TRACE_CPUPROFILER_EVENT_SCOPE(UPCGActorHelpers::GetOrCreateManagedISMC::MarkAsUsed);
			MatchingResource->MarkAsUsed();

			if (UPCGProceduralISMComponent* ISMC = MatchingResource->GetComponent())
			{
				ISMC->ComponentTags = Descriptor.ComponentTags;
				ISMC->ComponentTags.AddUnique(PCGHelpers::DefaultPCGTag);
				ISMC->ComponentTags.AddUnique(InSourceComponent->GetFName());
			}

			return MatchingResource;
		}
	}

	// No matching ISM component found, let's create a new one
	FString ComponentName = TEXT("PISM_") + StaticMesh->GetName();

	const EObjectFlags ObjectFlags = RF_Transient;
	UPCGProceduralISMComponent* ISMC = NewObject<UPCGProceduralISMComponent>(InTargetActor, UPCGProceduralISMComponent::StaticClass(), MakeUniqueObjectName(InTargetActor, UPCGProceduralISMComponent::StaticClass(), FName(ComponentName)), ObjectFlags);
	Descriptor.InitComponent(ISMC);

	ISMC->RegisterComponent();
	InTargetActor->AddInstanceComponent(ISMC);

	ISMC->AttachToComponent(InTargetActor->GetRootComponent(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, EAttachmentRule::KeepWorld, false));

	// Create managed resource on source component
	UPCGManagedProceduralISMComponent* Resource = NewObject<UPCGManagedProceduralISMComponent>(InSourceComponent);
	Resource->SetComponent(ISMC);
	Resource->SetDescriptor(Descriptor);
	if (InTargetActor->GetRootComponent())
	{
		Resource->SetRootLocation(InTargetActor->GetRootComponent()->GetComponentLocation());
	}

	Resource->SetSettingsUID(InSettingsUID);
	InSourceComponent->AddToManagedResources(Resource);

	ISMC->ComponentTags.AddUnique(PCGHelpers::DefaultPCGTag);
	ISMC->ComponentTags.AddUnique(InSourceComponent->GetFName());

	return Resource;
}

FPCGProceduralISMComponentDescriptor::FPCGProceduralISMComponentDescriptor()
{
	*this = FPCGSoftISMComponentDescriptor();
}

FPCGProceduralISMComponentDescriptor& FPCGProceduralISMComponentDescriptor::operator=(const FPCGSoftISMComponentDescriptor& Other)
{
	InstanceStartCullDistance = Other.InstanceStartCullDistance;
	InstanceEndCullDistance = Other.InstanceEndCullDistance;
	OverlayMaterial = Other.OverlayMaterial.LoadSynchronous();
	StaticMesh = Other.StaticMesh.LoadSynchronous();
	ComponentTags = Other.ComponentTags;

	Algo::Transform(Other.OverrideMaterials, OverrideMaterials, [](const TSoftObjectPtr<UMaterialInterface>& OverrideMaterial)
	{
		return OverrideMaterial.LoadSynchronous();
	});

	Algo::Transform(Other.RuntimeVirtualTextures, RuntimeVirtualTextures, [](const TSoftObjectPtr<URuntimeVirtualTexture>& RVT)
	{
		return RVT.LoadSynchronous();
	});

	return *this;
}

void FPCGProceduralISMComponentDescriptor::InitComponent(UPCGProceduralISMComponent* InProceduralISMComponent) const
{
	InProceduralISMComponent->SetStaticMesh(StaticMesh);
	InProceduralISMComponent->OverrideMaterials = OverrideMaterials;
	InProceduralISMComponent->OverlayMaterial = OverlayMaterial;
	InProceduralISMComponent->RuntimeVirtualTextures = RuntimeVirtualTextures;
	InProceduralISMComponent->SetNumInstances(NumInstances);
	InProceduralISMComponent->SetNumCustomDataFloats(NumCustomFloats);
	InProceduralISMComponent->SetLocalBounds(LocalBounds);
	InProceduralISMComponent->SetCullDistances(InstanceStartCullDistance, InstanceEndCullDistance);
	InProceduralISMComponent->ComponentTags = ComponentTags;
}

void FPCGProceduralISMComponentDescriptor::InitFrom(UPCGProceduralISMComponent* InProceduralISMComponent)
{
	StaticMesh = InProceduralISMComponent->GetStaticMesh();
	OverrideMaterials = InProceduralISMComponent->OverrideMaterials;
	OverlayMaterial = InProceduralISMComponent->OverlayMaterial;
	RuntimeVirtualTextures = InProceduralISMComponent->RuntimeVirtualTextures;
	NumInstances = InProceduralISMComponent->GetNumInstances();
	NumCustomFloats = InProceduralISMComponent->GetNumCustomDataFloats();
	InProceduralISMComponent->GetLocalBounds(LocalBounds);
	InProceduralISMComponent->GetCullDistances(InstanceStartCullDistance, InstanceEndCullDistance);
}

uint32 FPCGProceduralISMComponentDescriptor::ComputeHash() const
{
	FArchiveCrc32 CrcArchive;

	Hash = 0; // we don't want the hash to impact the calculation
	CrcArchive << *this;
	Hash = CrcArchive.GetCrc();

	return Hash;
}

bool FPCGProceduralISMComponentDescriptor::operator!=(const FPCGProceduralISMComponentDescriptor& Other) const
{
	return !(*this == Other);
}

bool FPCGProceduralISMComponentDescriptor::operator==(const FPCGProceduralISMComponentDescriptor& Other) const
{
	return StaticMesh == Other.StaticMesh
		&& OverrideMaterials == Other.OverrideMaterials
		&& OverlayMaterial == Other.OverlayMaterial
		&& RuntimeVirtualTextures == Other.RuntimeVirtualTextures
		&& NumInstances == Other.NumInstances
		&& NumCustomFloats == Other.NumCustomFloats
		&& LocalBounds == Other.LocalBounds
		&& InstanceStartCullDistance == Other.InstanceStartCullDistance
		&& InstanceEndCullDistance == Other.InstanceEndCullDistance;
}

UPCGProceduralISMComponent::UPCGProceduralISMComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Disable unsupported rendering features (currently require instance data on CPU).
	bAffectDynamicIndirectLighting = false;
	bAffectDistanceFieldLighting = false;
	bVisibleInRayTracing = false;

	BodyInstance.bSimulatePhysics = false;
	SetGenerateOverlapEvents(false);

	bEnableVertexColorMeshPainting = false;

	bNavigationRelevant = false;
	bCanEverAffectNavigation = false;
	
	bEnableAutoLODGeneration = false;

	bIsEditorOnly = true;

#if STATS
	{
		UObject const* StatObject = this->AdditionalStatObject();
		if (!StatObject)
		{
			StatObject = this;
		}
		StatId = StatObject->GetStatID(true);
	}
#endif
}

#if WITH_EDITOR
void UPCGProceduralISMComponent::OnRegister()
{
	Super::OnRegister();

	USceneComponent::MarkRenderStateDirtyEvent.RemoveAll(this);
	USceneComponent::MarkRenderStateDirtyEvent.AddUObject(this, &UPCGProceduralISMComponent::OnRenderStateDirty);
}

void UPCGProceduralISMComponent::OnUnregister()
{
	USceneComponent::MarkRenderStateDirtyEvent.RemoveAll(this);

	Super::OnUnregister();
}
#endif

FPrimitiveSceneProxy* UPCGProceduralISMComponent::CreateStaticMeshSceneProxy(Nanite::FMaterialAudit& NaniteMaterials, bool bCreateNanite)
{
	LLM_SCOPE(ELLMTag::InstancedMesh);

	if (!ensure(GetWorld()) || !ensure(GetWorld()->Scene))
	{
		return nullptr;
	}
	
	if (!UseGPUScene(GetWorld()->Scene->GetShaderPlatform(), GetWorld()->Scene->GetFeatureLevel()))
	{
		UE_LOG(LogPCG, Warning, TEXT("PCGProceduralISMComponent depends on GPUScene functionality which is not available on this platform, component will not render."));
		return nullptr;
	}

	if (CheckPSOPrecachingAndBoostPriority() && GetPSOPrecacheProxyCreationStrategy() == EPSOPrecacheProxyCreationStrategy::DelayUntilPSOPrecached)
	{
		UE_LOG(LogPCG, Verbose, TEXT("Skipping CreateSceneProxy for PCGProceduralISMComponent %s (PCGProceduralISMComponent PSOs are still compiling)"), *GetFullName());
		return nullptr;
	}

	FInstanceSceneDataBuffers InstanceSceneDataBuffers(/*InbInstanceDataIsGPUOnly=*/true);
	{
		FInstanceSceneDataBuffers::FAccessTag AccessTag(PointerHash(this));
		FInstanceSceneDataBuffers::FWriteView ProxyData = InstanceSceneDataBuffers.BeginWriteAccess(AccessTag);

		InstanceSceneDataBuffers.SetPrimitiveLocalToWorld(GetRenderMatrix(), AccessTag);

		ProxyData.NumInstancesGPUOnly = GetNumInstances();
		ProxyData.NumCustomDataFloats = GetNumCustomDataFloats();
		ProxyData.InstanceLocalBounds.SetNum(1);
		ProxyData.InstanceLocalBounds[0] = GetStaticMesh()->GetBounds();

		ProxyData.Flags.bHasPerInstanceCustomData = ProxyData.NumCustomDataFloats > 0;

		InstanceSceneDataBuffers.EndWriteAccess(AccessTag);
		InstanceSceneDataBuffers.ValidateData();
	}

	FInstancedStaticMeshSceneProxyDesc Desc;
	Desc.InitializeFromStaticMeshComponent(this);
	Desc.InstanceDataSceneProxy = MakeShared<FInstanceDataSceneProxy, ESPMode::ThreadSafe>(MoveTemp(InstanceSceneDataBuffers));
	Desc.InstanceStartCullDistance = InstanceStartCullDistance;
	Desc.InstanceEndCullDistance = InstanceEndCullDistance;
	Desc.bUseGpuLodSelection = true;

	if (bCreateNanite)
	{
		return ::new Nanite::FSceneProxy(NaniteMaterials, Desc);
	}
	else
	{
		return ::new FInstancedStaticMeshSceneProxy(Desc, GetWorld()->GetFeatureLevel());
	}
}

FPrimitiveSceneProxy* UPCGProceduralISMComponent::CreateSceneProxy()
{
	// Verify that both mesh and instance data is valid before using it.
	const bool bIsMeshAndInstanceDataValid =
		NumInstances > 0 &&
		GetStaticMesh() &&
		GetStaticMesh()->IsCompiling() == false &&
		GetStaticMesh()->HasValidRenderData();

	if (!bIsMeshAndInstanceDataValid)
	{
		return nullptr;
	}

	ValidateComponentSetup();

	return Super::CreateSceneProxy();
}

FMatrix UPCGProceduralISMComponent::GetRenderMatrix() const
{
	// Apply the translated space to the render matrix.
	return GetComponentTransform().ToMatrixWithScale();
}

FBoxSphereBounds UPCGProceduralISMComponent::CalcBounds(const FTransform& BoundTransform) const
{
	return LocalBounds.TransformBy(BoundTransform);
}

#if WITH_EDITOR
FBox UPCGProceduralISMComponent::GetStreamingBounds() const
{
	return FBox::BuildAABB(Bounds.Origin, Bounds.BoxExtent);
}
#endif

bool UPCGProceduralISMComponent::GetMaterialStreamingData(int32 MaterialIndex, FPrimitiveMaterialInfo& MaterialData) const
{
	// Same thing as StaticMesh but we take the full bounds to cover the instances.
	if (GetStaticMesh())
	{
		MaterialData.Material = GetMaterial(MaterialIndex);
		MaterialData.UVChannelData = GetStaticMesh()->GetUVChannelData(MaterialIndex);
		MaterialData.PackedRelativeBox = PackedRelativeBox_Identity;
	}
	return MaterialData.IsValid();
}

bool UPCGProceduralISMComponent::BuildTextureStreamingDataImpl(ETextureStreamingBuildType BuildType, EMaterialQualityLevel::Type QualityLevel, ERHIFeatureLevel::Type FeatureLevel, TSet<FGuid>& DependentResources, bool& bOutSupportsBuildTextureStreamingData)
{
#if WITH_EDITORONLY_DATA // Only rebuild the data in editor 
	if (GetNumInstances() > 0)
	{
		return Super::BuildTextureStreamingDataImpl(BuildType, QualityLevel, FeatureLevel, DependentResources, bOutSupportsBuildTextureStreamingData);
	}
#endif
	return true;
}

void UPCGProceduralISMComponent::GetStreamingRenderAssetInfo(FStreamingTextureLevelContext& LevelContext, TArray<FStreamingRenderAssetPrimitiveInfo>& OutStreamingRenderAssets) const
{
	// Don't only look the instance count but also if the bound is valid, as derived classes might not set PerInstanceSMData.
	if (GetNumInstances() > 0 || Bounds.SphereRadius > 0)
	{
		return Super::GetStreamingRenderAssetInfo(LevelContext, OutStreamingRenderAssets);
	}
}

void UPCGProceduralISMComponent::SetCullDistances(int32 InStartCullDistance, int32 InEndCullDistance)
{
	if (InstanceStartCullDistance != InStartCullDistance || InstanceEndCullDistance != InEndCullDistance)
	{
		InstanceStartCullDistance = InStartCullDistance;
		InstanceEndCullDistance = InEndCullDistance;

		if (GetScene() && SceneProxy)
		{
			GetScene()->UpdateInstanceCullDistance(this, InStartCullDistance, InEndCullDistance);
		}
	}
}

void UPCGProceduralISMComponent::ValidateComponentSetup()
{
	if (bAffectDynamicIndirectLighting)
	{
		UE_LOG(LogPCG, Warning, TEXT("Affecting indirect lighting is not currently supported by PCGProceduralISMComponent, disabling."));
		bAffectDynamicIndirectLighting = false;
	}

	if (bAffectDistanceFieldLighting)
	{
		UE_LOG(LogPCG, Warning, TEXT("Affecting distance field lighting is not currently supported by PCGProceduralISMComponent, disabling."));
		bAffectDistanceFieldLighting = false;
	}

	if (bVisibleInRayTracing)
	{
		UE_LOG(LogPCG, Warning, TEXT("Ray tracing is not currently supported by PCGProceduralISMComponent, disabling."));
		bVisibleInRayTracing = false;
	}
}

#if WITH_EDITOR
void UPCGProceduralISMComponent::OnRenderStateDirty(UActorComponent& InComponent)
{
	// Currently, there is no explicit persistence of instance data in the GPU scene. When this component is dirtied, the instance data is cleared.
	// TODO: This function is a stop gap that requests a refresh of the PCG Component managing this component, and should be removed later.

	if (&InComponent != this)
	{
		return;
	}

	UPCGSubsystem* Subsystem = GetOwner() ? UPCGSubsystem::GetInstance(GetOwner()->GetWorld()) : nullptr;
	if (!Subsystem)
	{
		return;
	}

	// Helper that returns true if the given PCG component is managing this PISMC.
	auto PCGComponentManagesThisPISMC = [this](UPCGComponent* InComponent) -> bool
	{
		bool bManagesThis = false;

		if (InComponent->bGenerated && InComponent->AreProceduralInstancesInUse())
		{
			InComponent->ForEachManagedResource([this, InComponent, &bManagesThis](UPCGManagedResource* InResource)
			{
				if (!bManagesThis)
				{
					const UPCGManagedProceduralISMComponent* PISMC = Cast<UPCGManagedProceduralISMComponent>(InResource);
					if (PISMC && PISMC->GetComponent() == this)
					{
						bManagesThis = true;
					}
				}
			});
		}

		return bManagesThis;
	};

	Subsystem->RefreshAllComponentsFiltered(
		[this, Subsystem, &PCGComponentManagesThisPISMC](UPCGComponent* InComponent) -> bool
		{
			// If the original component manages this PISMC, request a refresh of it and we're done. If it has local components they will also be refreshed.
			if (PCGComponentManagesThisPISMC(InComponent))
			{
				return true;
			}

			// A local component of the original component might manage this, so check those.
			bool bManagesThis = false;

			if (InComponent->bIsComponentPartitioned)
			{
				Subsystem->ForAllRegisteredLocalComponents(
					InComponent,
					[this, &bManagesThis, &PCGComponentManagesThisPISMC](UPCGComponent* InComponent)
					{
						if (!bManagesThis)
						{
							bManagesThis = PCGComponentManagesThisPISMC(InComponent);
						}
					});
			}

			return bManagesThis;
		},
		EPCGChangeType::Structural);
}
#endif // WITH_EDITOR

void UPCGProceduralISMComponent::SetNumInstances(int32 InNumInstances)
{
	if (NumInstances != InNumInstances)
	{
		NumInstances = InNumInstances;
		MarkRenderStateDirty();
	}
}

void UPCGProceduralISMComponent::SetNumCustomDataFloats(int32 InNumCustomDataFloats)
{
	if (FMath::Max(InNumCustomDataFloats, 0) != NumCustomDataFloats)
	{
		NumCustomDataFloats = FMath::Max(InNumCustomDataFloats, 0);
		MarkRenderStateDirty();
	}
}

void UPCGProceduralISMComponent::SetLocalBounds(const FBox& InLocalBounds)
{
	if (InLocalBounds != LocalBounds)
	{
		LocalBounds = InLocalBounds;
		MarkRenderStateDirty();
	}
}

#if WITH_EDITOR
void UPCGProceduralISMComponent::PostEditUndo()
{
	Super::PostEditUndo();

	MarkRenderStateDirty();
}
#endif

void UPCGManagedProceduralISMComponent::PostLoad()
{
	Super::PostLoad();

	// Cache raw ptr
	GetComponent();
}

void UPCGManagedProceduralISMComponent::ForgetComponent()
{
	Super::ForgetComponent();
	CachedRawComponentPtr = nullptr;
}

void UPCGManagedProceduralISMComponent::SetDescriptor(const FPCGProceduralISMComponentDescriptor& InDescriptor)
{
	Descriptor = InDescriptor;
}

bool UPCGManagedProceduralISMComponent::ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete)
{
	if (Super::ReleaseIfUnused(OutActorsToDelete) || !GetComponent())
	{
		return true;
	}
	else if (GetComponent()->GetNumInstances() == 0)
	{
		GeneratedComponent->DestroyComponent();
		ForgetComponent();
		return true;
	}
	else
	{
		return false;
	}
}

void UPCGManagedProceduralISMComponent::ResetComponent()
{
	if (UPCGProceduralISMComponent* ISMC = GetComponent())
	{
		ISMC->UpdateBounds();
	}
}

void UPCGManagedProceduralISMComponent::MarkAsUsed()
{
	const bool bWasMarkedUnused = bIsMarkedUnused;
	Super::MarkAsUsed();

	if (!bWasMarkedUnused)
	{
		return;
	}

	if (UPCGProceduralISMComponent* ISMC = GetComponent())
	{
		// Keep track of the current root location so if we reuse this later we are able to update this appropriately
		if (USceneComponent* RootComponent = ISMC->GetAttachmentRoot())
		{
			bHasRootLocation = true;
			RootLocation = RootComponent->GetComponentLocation();
		}
		else
		{
			bHasRootLocation = false;
			RootLocation = FVector::ZeroVector;
		}

		// Reset the rotation/scale to be identity otherwise if the root component transform has changed, the final transform will be wrong
		// Since this is technically 'moving' the ISM, we need to unregister it before moving otherwise we could get a warning that we're moving a component with static mobility
		ISMC->UnregisterComponent();
		ISMC->SetWorldTransform(FTransform(FQuat::Identity, RootLocation, FVector::OneVector));
		ISMC->RegisterComponent();
	}
}

void UPCGManagedProceduralISMComponent::MarkAsReused()
{
	Super::MarkAsReused();

	if (UPCGProceduralISMComponent* ISMC = GetComponent())
	{
		// Reset the rotation/scale to be identity otherwise if the root component transform has changed, the final transform will be wrong
		FVector TentativeRootLocation = RootLocation;

		if (!bHasRootLocation)
		{
			if (USceneComponent* RootComponent = ISMC->GetAttachmentRoot())
			{
				TentativeRootLocation = RootComponent->GetComponentLocation();
			}
		}

		// Since this is technically 'moving' the ISM, we need to unregister it before moving otherwise we could get a warning that we're moving a component with static mobility
		ISMC->UnregisterComponent();
		ISMC->SetWorldTransform(FTransform(FQuat::Identity, TentativeRootLocation, FVector::OneVector));
		ISMC->RegisterComponent();
	}
}

void UPCGManagedProceduralISMComponent::SetRootLocation(const FVector& InRootLocation)
{
	bHasRootLocation = true;
	RootLocation = InRootLocation;
}

UPCGProceduralISMComponent* UPCGManagedProceduralISMComponent::GetComponent() const
{
	if (!CachedRawComponentPtr)
	{
		UPCGProceduralISMComponent* GeneratedComponentPtr = Cast<UPCGProceduralISMComponent>(GeneratedComponent.Get());

		// Implementation note:
		// There is no surefire way to make sure that we can use the raw pointer UNLESS it is from the same owner
		if (GeneratedComponentPtr && Cast<UPCGComponent>(GetOuter()) && GeneratedComponentPtr->GetOwner() == Cast<UPCGComponent>(GetOuter())->GetOwner())
		{
			CachedRawComponentPtr = GeneratedComponentPtr;
		}

		return GeneratedComponentPtr;
	}

	return CachedRawComponentPtr;
}

void UPCGManagedProceduralISMComponent::SetComponent(UPCGProceduralISMComponent* InComponent)
{
	GeneratedComponent = InComponent;
	CachedRawComponentPtr = InComponent;
}
