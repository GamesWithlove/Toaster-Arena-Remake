// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Ext/RealtimeMeshProvider.h"
#include "RealtimeMeshFactory.generated.h"

class URealtimeMeshConstructed;

namespace RealtimeMesh
{
	struct FFactoryUpdateState;
	using FUpdateStateRef = TSharedRef<FFactoryUpdateState>;
	class FRealtimeMeshConstructed;

	
	class REALTIMEMESHEXT_API FRealtimeMeshFactory : public FRealtimeMeshFactoryProviderParentInterface, public TSharedFromThis<FRealtimeMeshFactory>
	{
		TSharedRef<FRealtimeMeshFactoryProvider> RootProvider;
		TMap<FRealtimeMeshID, TWeakPtr<FRealtimeMeshConstructed>> Meshes;
		FRWLock MeshesLock;
		uint32 bInitialized;

	public:
		FRealtimeMeshFactory();
		FRealtimeMeshFactory(const TSharedRef<FRealtimeMeshFactoryProvider>& InRootProvider);

		TFuture<URealtimeMeshConstructed*> InitializeNewRealtimeMesh(const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams, FRealtimeMeshCancellationToken CancellationToken);
		virtual TFuture<bool> MarkRealtimeMeshDirty(const FRealtimeMeshID& MeshId, const FRealtimeMeshDirtyFlags& DirtyFlags, FRealtimeMeshCancellationToken CancellationToken) override;
		TFuture<bool> DestroyRealtimeMesh(const FRealtimeMeshID& MeshId);

	private:
		void InitializeIfNecessary();
		static ERealtimeMeshThreadType AllowedThread() { return ERealtimeMeshThreadType::GameThread; }

		template<typename CallableType>
		auto DoOnRootProviderThread(CallableType Callable)
		{
			return DoOnAllowedThread(RootProvider->AllowedThread(), MoveTemp(Callable));
		}
		static TFuture<FUpdateStateRef> MakeSimpleStateFuture(const FUpdateStateRef& State)
		{
			return MakeFulfilledPromise<FUpdateStateRef>(State).GetFuture();
		}

		TFuture<FUpdateStateRef> ProviderInitializeMesh(const FUpdateStateRef& State, const TSharedPtr<FRealtimeMeshFactoryInitializationParams>& InitParams);
		TFuture<FUpdateStateRef> CreateNewMesh(const FUpdateStateRef& State);
		TFuture<FUpdateStateRef> UpdateMeshInternal(TFuture<FUpdateStateRef>&& State);		
		TFuture<FUpdateStateRef> ProviderPreUpdateMesh(const FUpdateStateRef& State);
		TFuture<FUpdateStateRef> ProviderUpdateMeshStructure(const FUpdateStateRef& State);
		TFuture<FUpdateStateRef> ProviderUpdateDirtySectionGroups(const FUpdateStateRef& State);
		TFuture<bool> ProviderUpdateDirtySectionGroup(const FUpdateStateRef& State, const FRealtimeMeshSectionGroupKey& SectionGroup);
		TFuture<FUpdateStateRef> ProviderUpdateNaniteResources(const FUpdateStateRef& State);
		TFuture<FUpdateStateRef> ProviderUpdateCollisionData(const FUpdateStateRef& State);
		TFuture<FUpdateStateRef> ProviderGetBounds(const FUpdateStateRef& State);

	};

	
}


USTRUCT(BlueprintType)
struct FRealtimeMeshFactoryParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh")
	FString PramsName;
};

USTRUCT(BlueprintType)
struct FRealtimeMeshFactoryParams3d : public FRealtimeMeshFactoryParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="RealtimeMesh")
	FIntVector Dimensions = FIntVector::ZeroValue;
};

/*USTRUCT(BlueprintType)
struct FRealtimeMeshProviderParams
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<class UInventoryItemObject> Item;
};
	 
USTRUCT(BlueprintType)
struct FRealtimeMeshProviderParamsPlane : public FRealtimeMeshProviderParams
{
	GENERATED_BODY()
	//Add a extra property that will be available. 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntVector2 GridSize;
};*/


/**
 *
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew)
class REALTIMEMESHEXT_API URealtimeMeshFactory : public UObject
{
	GENERATED_BODY()
	
	//UPROPERTY(EditAnywhere, meta = (BaseStruct = "ItemInLootChest"))
	//FInstancedStruct RootProvider;


	void SetupFromBaseParams(FRealtimeMeshFactoryParams& Params);
	
};

/*class REALTIMEMESHCOMPONENTEXTENSIONS_API FRealtimeMeshFactory : public TSharedFromThis<FRealtimeMeshFactory>
{
	// All the meshes we're responsible for. We don't keep them alive, but we do keep a weak pointer to them.
	TSet<TWeakPtr<FRealtimeMeshConstructed>> Meshes;

	// Root of the provider stack responsible for generating all the meshes we're responsible for.
	TSharedPtr<IRealtimeMeshFactoryProvider> RootProvider;

	void Initialize(const TSharedRef<IRealtimeMeshFactoryProvider>& InRootProvider);

	TSharedPtr<IRealtimeMeshFactoryProvider> GetRootProvider() const { return RootProvider; }
		
public:
	static TSharedRef<FRealtimeMeshFactory> CreateRealtimeMeshFactory(TSharedRef<IRealtimeMeshFactoryProvider> RootProvider);

	URealtimeMeshConstructed* CreateRealtimeMesh(UObject* Outer) const;
	URealtimeMeshComponent* CreateRealtimeMesh(AActor* Actor) const;

	friend class FRealtimeMeshConstructed;
};*/