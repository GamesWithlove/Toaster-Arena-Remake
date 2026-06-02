// (c) HELLCAT

#include "UGCSubsystem.h"

void UUGCSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	// Instantiate the registry and find mod packages
	UgcRegistryInstance = NewObject<UUGCRegistry>(this);
	UgcRegistryInstance->FindUGCPackages();
}

void UUGCSubsystem::Deinitialize()
{
}

UUGCRegistry* UUGCSubsystem::UgcRegistry()
{
	return UgcRegistryInstance;
}

void UUGCSubsystem::GetUgcRegistry(UUGCRegistry* & UgcRegistry)
{
	UgcRegistry = UgcRegistryInstance;
}
