// (c) HELLCAT

#pragma once

#include "CoreMinimal.h"
#include "UGCRegistry.h"
#include "UGCSubsystem.generated.h"

UCLASS()
class SIMPLEUGC_API UUGCSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	UFUNCTION(BlueprintCallable, Category = "SimpleUGC")
	void GetUgcRegistry(UUGCRegistry* & UgcRegistry);
	UFUNCTION(BlueprintPure, Category = "SimpleUGC")
	UUGCRegistry* UgcRegistry();

protected:
	// The Registry that holds information about UGC and assigned class overrides
	UPROPERTY()
	UUGCRegistry* UgcRegistryInstance;
};
