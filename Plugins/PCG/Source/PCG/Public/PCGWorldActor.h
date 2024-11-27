// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"
#include "Grid/PCGGridDescriptor.h"

#include "GameFramework/Actor.h"
#include "Misc/Guid.h"

#include "PCGWorldActor.generated.h"

class UPCGLandscapeCache;
namespace EEndPlayReason { enum Type : int; }

UCLASS(MinimalAPI, NotBlueprintable, NotPlaceable)
class APCGWorldActor : public AActor
{
	GENERATED_BODY()

public:
	APCGWorldActor(const FObjectInitializer& ObjectInitializer);

	//~Begin AActor Interface
	virtual void PostInitProperties() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
#if WITH_EDITOR
	virtual bool ActorTypeSupportsDataLayer() const override { return false; }
	virtual bool ActorTypeSupportsExternalDataLayer() const override { return false; }
	virtual bool CanChangeIsSpatiallyLoadedFlag() const override { return false; }
	virtual bool IsUserManaged() const override { return false; }
	virtual bool ShouldExport() override { return false; }
	virtual bool ShouldImport(FStringView ActorPropString, bool IsMovingLevel) override { return false; }
	virtual void BeginCacheForCookedPlatformData(const ITargetPlatform* TargetPlatform) override;
	//~End AActor Interface
#endif

	//~ Begin UObject Interface.
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	virtual void BeginDestroy() override;
	//~ End UObject Interface.

	void MergeFrom(APCGWorldActor* OtherWorldActor);

#if WITH_EDITOR
	static APCGWorldActor* CreatePCGWorldActor(UWorld* InWorld);
#endif

	static inline constexpr uint32 DefaultPartitionGridSize = 25600; // 256m

	/** Size of the PCG partition actor grid for non-hierarchical-generation graphs. */
	UPROPERTY(config, EditAnywhere, Category = GenerationSettings)
	uint32 PartitionGridSize;

	/** Contains all the PCG data required to query the landscape complete. Serialized in cooked builds only */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = CachedData, meta = (NoResetToDefault, DisplayName="Landscape Cache"))
	TObjectPtr<UPCGLandscapeCache> LandscapeCacheObject = nullptr;

#if WITH_EDITORONLY_DATA
	/** This property was moved to the UPCGGraph but we keep it around to fixup existing data */
	UE_DEPRECATED(5.5, "bUse2DGrid is deprecated")
	UPROPERTY()
	bool bUse2DGrid = true;

	/** Allows any currently active editor viewport to act as a Runtime Generation Source. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = RuntimeGeneration)
	bool bTreatEditorViewportAsGenerationSource = false;
#endif

private:
	friend class FPCGActorAndComponentMapping;

	void RegisterToSubsystem();
	void UnregisterFromSubsystem();

#if WITH_EDITOR
	void OnPartitionGridSizeChanged();
#endif
};
