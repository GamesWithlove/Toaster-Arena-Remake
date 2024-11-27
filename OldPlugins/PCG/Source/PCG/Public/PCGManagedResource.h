// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "PCGCommon.h"
#include "PCGCrc.h"
#include "Elements/PCGSplineMeshParams.h"

#include "Engine/SplineMeshComponentDescriptor.h"
#include "ISMPartition/ISMComponentDescriptor.h"

#include "PCGManagedResource.generated.h"

class UActorComponent;
class UInstancedStaticMeshComponent;
class USplineMeshComponent;

/** 
* This class is used to hold resources and their mechanism to delete them on demand.
* In order to allow for some reuse (e.g. components), the Release call supports a "soft"
* release by marking them unused in order to be potentially re-used down the line.
* At the end of the generate, a call to ReleaseIfUnused will serve to finally cleanup
* what is not needed anymore.
*/
UCLASS(BlueprintType)
class PCG_API UPCGManagedResource : public UObject
{
	GENERATED_BODY()
public:
	/** Called when after a PCG component is applied to (such as after a RerunConstructionScript) */
	virtual void PostApplyToComponent();

	/** Releases/Mark Unused the resource depending on the bHardRelease flag. Returns true if resource can be removed from the PCG component */
	virtual bool Release(bool bHardRelease, TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete);
	/** Releases resource if empty or unused. Returns true if the resource can be removed from the PCG component */
	virtual bool ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete);

	/** Returns whether a resource can be used - generally true except for resources marked as transient (from loading) */
	virtual bool CanBeUsed() const;

	/** Marks the resources as being kept and changed through generation */
	virtual void MarkAsUsed() { ensure(CanBeUsed()); bIsMarkedUnused = false; }
	/** Marks the resource as being reused as-is during the generation */
	virtual void MarkAsReused() { bIsMarkedUnused = false; }
	bool IsMarkedUnused() const { return bIsMarkedUnused; }

	/** Move the given resource to a new actor. Return true if it has succeeded */
	virtual bool MoveResourceToNewActor(AActor* NewActor) { return false; };
	virtual bool MoveResourceToNewActor(AActor* NewActor, const AActor* ExpectedPreviousOwner) { return MoveResourceToNewActor(NewActor); }

	static bool DebugForcePurgeAllResourcesOnGenerate();

	const FPCGCrc& GetCrc() const { return Crc; }
	void SetCrc(const FPCGCrc& InCrc) { Crc = InCrc; }

#if WITH_EDITOR
	virtual void ChangeTransientState(EPCGEditorDirtyMode NewEditingMode);
	virtual void MarkTransientOnLoad() { bMarkedTransientOnLoad = true; }

	bool IsMarkedTransientOnLoad() const { return bMarkedTransientOnLoad; }
#endif // WITH_EDITOR

protected:
	UPROPERTY(VisibleAnywhere, Category = GeneratedData)
	FPCGCrc Crc;

	UPROPERTY(Transient, VisibleAnywhere, Category = GeneratedData)
	bool bIsMarkedUnused = false;

#if WITH_EDITORONLY_DATA
	// Resources on a Load-as-preview component are marked as 'transient on load'; these resources must not be affected in any
	//  permanent way in order to make sure they are not serialized in a different state if their outer is saved.
	// These resources will generally have a different Release path, and will be managed differently from the PCG component as well.
	// Note that this flag will be reset if there is a transient state change originating from the component, which might trigger resource deletion, flags change, etc.
	UPROPERTY(VisibleAnywhere, Category = GeneratedData, meta = (NoResetToDefault))
	bool bMarkedTransientOnLoad = false;
#endif
};

UCLASS(BlueprintType)
class PCG_API UPCGManagedActors : public UPCGManagedResource
{
	GENERATED_BODY()

public:
	//~Begin UObject interface
	virtual void PostEditImport() override;
	//~End UObject interface

	//~Begin UPCGManagedResource interface
	virtual void PostApplyToComponent() override;
	virtual bool Release(bool bHardRelease, TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	virtual bool ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	virtual bool MoveResourceToNewActor(AActor* NewActor) override;
	virtual void MarkAsUsed() override;
	virtual void MarkAsReused() override;

#if WITH_EDITOR
	virtual void ChangeTransientState(EPCGEditorDirtyMode NewEditingMode) override;
#endif
	//~End UPCGManagedResource interface

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = GeneratedData)
	TSet<TSoftObjectPtr<AActor>> GeneratedActors;
};

UCLASS(Abstract)
class PCG_API UPCGManagedComponentBase : public UPCGManagedResource
{
	GENERATED_BODY()

	friend class UPCGComponent;
public:
	//~Begin UObject interface
	virtual void PostEditImport() override;
	//~End UObject interface

	//~Begin UPCGManagedResource interface
	virtual void MarkAsUsed() override;
	virtual void MarkAsReused() override;
	virtual bool MoveResourceToNewActor(AActor* NewActor, const AActor* ExpectedPreviousOwner) override;

#if WITH_EDITOR
	virtual void ChangeTransientState(EPCGEditorDirtyMode NewEditingMode) override;
#endif
	//~End UPCGManagedResource interface

public:
#if WITH_EDITOR
	/** Hides the content of the component in a transient way (such as unregistering) */
	void HideComponents();
	virtual void HideComponent(int32 ComponentIndex);
	virtual void HideComponent() {};
#endif

	void ForgetComponents();
	virtual void ForgetComponent(int32 ComponentIndex);
	virtual void ForgetComponent() {}

	void ResetComponents();
	virtual void ResetComponent(int32 ComponentIndex);
	virtual void ResetComponent() { check(0); }
	virtual bool SupportsComponentReset() const { return false; }

protected:
	virtual TArrayView<TSoftObjectPtr<UActorComponent>> GetComponentsArray() PURE_VIRTUAL(UPCGManagedComponentBase::GetComponentsArray, return TArrayView<TSoftObjectPtr<UActorComponent>>{};);
	virtual int32 GetComponentsCount() const PURE_VIRTUAL(UPCGManagedComponentBase::GetComponentsCount, return 0;);
	void SetupGeneratedComponentFromBP(TSoftObjectPtr<UActorComponent> InGeneratedComponent);
};

UCLASS(BlueprintType)
class PCG_API UPCGManagedComponent : public UPCGManagedComponentBase
{
	GENERATED_BODY()

	friend class UPCGComponent;

public:
	//~Begin UPCGManagedResource interface
	virtual bool Release(bool bHardRelease, TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	virtual bool ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	//~End UPCGManagedResource interface

	//~Begin UPCGManagedComponentBase interface
#if WITH_EDITOR
	/** Hides the content of the component in a transient way (such as unregistering) */
	virtual void HideComponent();
#endif
	
	virtual void ForgetComponent() { GeneratedComponent.Reset(); }

protected:
	virtual TArrayView<TSoftObjectPtr<UActorComponent>> GetComponentsArray() override { return TArrayView<TSoftObjectPtr<UActorComponent>>(&GeneratedComponent, 1); }
	virtual int32 GetComponentsCount() const override { return 1; }
	//~End UPCGManagedComponentBase interface

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = GeneratedData, BlueprintSetter = SetGeneratedComponentFromBP)
	TSoftObjectPtr<UActorComponent> GeneratedComponent;

private:
	// When creating components from BP they will be tagged automatically as created from construction script, which makes them transient and isn't compatible with the PCG workflow.
	UFUNCTION(BlueprintSetter, meta = (BlueprintInternalUseOnly = "true"))
	void SetGeneratedComponentFromBP(TSoftObjectPtr<UActorComponent> InGeneratedComponent);
};

/** This managed resource class is used to tie multiple components in the same resource so that they are cleaned up all at the same time. */
UCLASS(BlueprintType)
class PCG_API UPCGManagedComponentList : public UPCGManagedComponentBase
{
	GENERATED_BODY()
	friend class UPCGComponent;

public:
	//~Begin UPCGManagedResource interface
	virtual bool Release(bool bHardRelease, TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	virtual bool ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	//~End UPCGManagedResource interface

	//~Begin UPCGManagedComponentBase interface
#if WITH_EDITOR
	/** Hides the content of the component in a transient way (such as unregistering) */
	virtual void HideComponent(int32 ComponentIndex) override;
#endif

	virtual void ForgetComponent(int32 ComponentIndex) override;

protected:
	virtual TArrayView<TSoftObjectPtr<UActorComponent>> GetComponentsArray() override { return GeneratedComponents; }
	virtual int32 GetComponentsCount() const override { return GeneratedComponents.Num(); }
	//~End UPCGManagedComponentBase interface

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = GeneratedData, BlueprintSetter = SetGeneratedComponentsFromBP)
	TArray<TSoftObjectPtr<UActorComponent>> GeneratedComponents;

private:
	// When creating components from BP they will be tagged automatically as created from construction script, which makes them transient and isn't compatible with the PCG workflow.
	UFUNCTION(BlueprintSetter, meta = (BlueprintInternalUseOnly = "true"))
	void SetGeneratedComponentsFromBP(const TArray<TSoftObjectPtr<UActorComponent>>& InGeneratedComponent);
};

/** Stub default list to hold resources pushed from BP in a single place on the PCG component. */
UCLASS()
class UPCGManagedComponentDefaultList final : public UPCGManagedComponentList
{
	GENERATED_BODY()
	friend class UPCGComponent;

private:
	void AddGeneratedComponentsFromBP(const TArray<TSoftObjectPtr<UActorComponent>>& InGeneratedComponents);
};

UCLASS(BlueprintType)
class PCG_API UPCGManagedISMComponent : public UPCGManagedComponent
{
	GENERATED_BODY()

public:
	//~Begin UObject interface
	virtual void PostLoad() override;
	//~End UObject interface

	//~Begin UPCGManagedResource interface
	virtual bool ReleaseIfUnused(TSet<TSoftObjectPtr<AActor>>& OutActorsToDelete) override;
	//~End UPCGManagedResource interface

	//~Begin UPCGManagedComponents interface
	virtual void ResetComponent() override;
	virtual bool SupportsComponentReset() const override{ return true; }
	virtual void MarkAsUsed() override;
	virtual void MarkAsReused() override;
	virtual void ForgetComponent() override;
	//~End UPCGManagedComponents interface

	UInstancedStaticMeshComponent* GetComponent() const;
	void SetComponent(UInstancedStaticMeshComponent* InComponent);

	void SetDescriptor(const FISMComponentDescriptor& InDescriptor);
	const FISMComponentDescriptor& GetDescriptor() const { return Descriptor; }

	void SetRootLocation(const FVector& InRootLocation);

	uint64 GetSettingsUID() const { return SettingsUID; }
	void SetSettingsUID(uint64 InSettingsUID) { SettingsUID = InSettingsUID; }

protected:
	UPROPERTY()
	bool bHasDescriptor = false;

	UPROPERTY()
	FISMComponentDescriptor Descriptor;

	UPROPERTY()
	bool bHasRootLocation = false;

	UPROPERTY()
	FVector RootLocation = FVector::ZeroVector;

	UPROPERTY(Transient)
	uint64 SettingsUID = -1; // purposefully a value that will never happen in data

	// Cached raw pointer to ISM component
	mutable UInstancedStaticMeshComponent* CachedRawComponentPtr = nullptr;
};

UCLASS(BlueprintType)
class PCG_API UPCGManagedSplineMeshComponent : public UPCGManagedComponent
{
	GENERATED_BODY()

public:
	//~Begin UPCGManagedComponents interface
	virtual void ResetComponent() override { /* Does nothing, but implementation is required to support reuse. */ }
	virtual bool SupportsComponentReset() const override { return true; }
	virtual void ForgetComponent() override;
	//~End UPCGManagedComponents interface

	USplineMeshComponent* GetComponent() const;
	void SetComponent(USplineMeshComponent* InComponent);

	void SetDescriptor(const FSplineMeshComponentDescriptor& InDescriptor) { Descriptor = InDescriptor; }
	const FSplineMeshComponentDescriptor& GetDescriptor() const { return Descriptor; }

	void SetSplineMeshParams(const FPCGSplineMeshParams& InSplineMeshParams) { SplineMeshParams = InSplineMeshParams; }
	const FPCGSplineMeshParams& GetSplineMeshParams() const { return SplineMeshParams; }

	uint64 GetSettingsUID() const { return SettingsUID; }
	void SetSettingsUID(uint64 InSettingsUID) { SettingsUID = InSettingsUID; }

protected:
	UPROPERTY()
	FSplineMeshComponentDescriptor Descriptor;

	UPROPERTY()
	FPCGSplineMeshParams SplineMeshParams;

	UPROPERTY(Transient)
	uint64 SettingsUID = -1; // purposefully a value that will never happen in data

	// Cached raw pointer to USplineMeshComponent
	mutable USplineMeshComponent* CachedRawComponentPtr = nullptr;
};
