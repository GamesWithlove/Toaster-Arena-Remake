// Copyright Epic Games, Inc. All Rights Reserved.

#include "UGCRegistry.h"
#include "AssetRegistryModule.h"
#include "ARFilter.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/PackageName.h"
#include "MakeReplaceableActorComponent.h"
#include "ReplacementActorComponent.h"
#include "SimpleUGC.h"

bool UUGCRegistry::FindUGCPackages()
{
	TArray<TSharedRef<IPlugin>> EnabledPlugins = IPluginManager::Get().GetEnabledPlugins();
	for (const TSharedRef<IPlugin>& Plugin : EnabledPlugins)
	{
		if (Plugin->GetLoadedFrom() == EPluginLoadedFrom::Project && Plugin->GetDescriptor().Category == "Game Mods")
		{
			FUGCPackage Package;
			Package.PackagePath = *Plugin->GetMountedAssetPath().LeftChop(1);
			Package.EngineVersion = *Plugin->GetDescriptor().EngineVersion;
			Package.Author = *Plugin->GetDescriptor().CreatedBy;
			Package.Description = *Plugin->GetDescriptor().Description;
			UGCPackages.Add(Package);
		}
	}

	return UGCPackages.Num() > 0;
}

bool UUGCRegistry::GetAllClassesInPackage(FUGCPackage Package, TArray<UClass*>& Classes)
{
	// Load up the AssetRegistry, Filter for Blueprints

	IAssetRegistry& AssetRegistry = GetAsstRegistry();
	FARFilter ARFilter;
	TArray<FAssetData> AssetList;
	ARFilter.bRecursivePaths = true;
	ARFilter.bIncludeOnlyOnDiskAssets = true;
	ARFilter.bRecursiveClasses = true;
	ARFilter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
	ARFilter.PackagePaths.Add(FName(*Package.PackagePath));
	AssetRegistry.GetAssets(ARFilter, AssetList);

	for (FAssetData Asset : AssetList)
	{
		FAssetDataTagMapSharedView::FFindTagResult GeneratedClassResult = Asset.TagsAndValues.FindTag("GeneratedClass");
		if (GeneratedClassResult.IsSet())
		{
			FString ClassPath = FPackageName::ExportTextPathToObjectPath(*GeneratedClassResult.GetValue());
			UClass* AssetClass = LoadObject<UClass>(NULL, *ClassPath);

			if (AssetClass)
			{
				Classes.Add(AssetClass);
			}
		}
	}

	return Classes.Num() > 0;
}

bool UUGCRegistry::GetMapsInPackage(FUGCPackage Package, TArray<FName>& Maps)
{
	// Load up the AssetRegistry, Filter for Maps
	IAssetRegistry& AssetRegistry = GetAsstRegistry();
	FARFilter ARFilter;
	TArray<FAssetData> AssetList;
	ARFilter.bRecursivePaths = true;
	ARFilter.bIncludeOnlyOnDiskAssets = true;
	ARFilter.bRecursiveClasses = true;
	ARFilter.ClassNames.Add(UWorld::StaticClass()->GetFName());
	ARFilter.PackagePaths.Add(FName(*Package.PackagePath));
	AssetRegistry.GetAssets(ARFilter, AssetList);

	for (FAssetData Asset : AssetList)
	{
		Maps.Add(Asset.AssetName);
	}

	return Maps.Num() > 0;
}

bool UUGCRegistry::GetActorClassesWithReplacementActorComponentsInPackage(
	FUGCPackage Package, TArray<TSubclassOf<AActor>>& ActorClasses)
{
	// Load up the AssetRegistry, Filter for Blueprints
	IAssetRegistry& AssetRegistry = GetAsstRegistry();
	FARFilter ARFilter;
	TArray<FAssetData> AssetList;
	ARFilter.bRecursivePaths = true;
	ARFilter.bIncludeOnlyOnDiskAssets = true;
	ARFilter.bRecursiveClasses = true;
	ARFilter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
	ARFilter.PackagePaths.Add(FName(*Package.PackagePath));
	AssetRegistry.GetAssets(ARFilter, AssetList);

	for (FAssetData Asset : AssetList)
	{
		FAssetDataTagMapSharedView::FFindTagResult GeneratedClassResult = Asset.TagsAndValues.FindTag("GeneratedClass");
		if (GeneratedClassResult.IsSet())
		{
			FString ClassPath = FPackageName::ExportTextPathToObjectPath(*GeneratedClassResult.GetValue());
			UClass* AssetClass = LoadObject<UClass>(NULL, *ClassPath);

			if (AssetClass)
			{
				if (UBlueprintGeneratedClass* BlueprintModClass = Cast<UBlueprintGeneratedClass>(AssetClass))
				{
					// Not All Blueprint Classes have a SCS, so ensure that it has one before we get at dem nodes.
					if (BlueprintModClass->SimpleConstructionScript != nullptr)
					{
						// Find UGCOverrideComponent
						for (USCS_Node* Node : BlueprintModClass->SimpleConstructionScript->GetRootNodes())
						{
							// If we found it, add to Classes
							if (UReplacementActorComponent* ReplacementActorComponent = Cast<
								UReplacementActorComponent>(Node->ComponentTemplate))
							{
								ActorClasses.Add(AssetClass);
							}
						}
					}
				}
			}
		}
	}
	return ActorClasses.Num() > 0;
}

bool UUGCRegistry::ApplyAllOverridesInPackage(FUGCPackage Package)
{
	bool bSuccess = false;
	// Load up the AssetRegistry
	IAssetRegistry& AssetRegistry = GetAsstRegistry();
	TArray<FAssetData> AssetList;
	AssetRegistry.GetAssetsByPath(FName(*Package.PackagePath), AssetList, true);

	for (FAssetData Asset : AssetList)
	{
		FAssetDataTagMapSharedView::FFindTagResult GeneratedClassResult = Asset.TagsAndValues.FindTag("GeneratedClass");
		if (GeneratedClassResult.IsSet())
		{
			FString ClassPath = FPackageName::ExportTextPathToObjectPath(*GeneratedClassResult.GetValue());
			UClass* AssetClass = LoadObject<UClass>(NULL, *ClassPath);

			// Try to apply an override
			if (AssetClass)
			{
				bSuccess = ApplyOverridesForActorClass(AssetClass) || bSuccess;
			}
		}
	}
	return bSuccess;
}

bool UUGCRegistry::ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass)
{
	bool bSuccess = false;

	// Check Blueprints
	if (UBlueprintGeneratedClass* BlueprintActorClass = Cast<UBlueprintGeneratedClass>(ActorClass))
	{
		// Null check on SCS
		if (BlueprintActorClass->SimpleConstructionScript != nullptr)
		{
			// Find UGCOverrideComponent so we know what to override
			for (USCS_Node* Node : BlueprintActorClass->SimpleConstructionScript->GetRootNodes())
			{
				// If we found it,
				if (UReplacementActorComponent* ReplacementActorComponent = Cast<UReplacementActorComponent>(
					Node->ComponentTemplate))
				{
					// Check The Classes To Override
					for (UClass* ActorClassToReplace : ReplacementActorComponent->ActorClassesToReplace)
					{
						// Check Blueprint First..
						if (UBlueprintGeneratedClass* BlueprintClassToReplace = Cast<UBlueprintGeneratedClass>(
							ActorClassToReplace))
						{
							if (BlueprintClassToReplace->SimpleConstructionScript != nullptr)
							{
								// Null check on SCS
								for (USCS_Node* ActorClassToReplaceNode : BlueprintClassToReplace->
								                                          SimpleConstructionScript->GetRootNodes())
								{
									// Find UGCOverrideableComponent so we can ensure compatibility
									if (UMakeReplaceableActorComponent* MakeReplaceableActorComponent = Cast<
										UMakeReplaceableActorComponent>(ActorClassToReplaceNode->ComponentTemplate))
									{
										// Ensure compatibility
										if (ActorClass->IsChildOf(MakeReplaceableActorComponent->CompatibleReplacement))
										{
											// Register
											RegisterOverrideForClass(ActorClassToReplace, ActorClass);
											bSuccess = true;
										}
									}
								}
							}
						}
						// If doing code mods, implement check for UUGCOverrideableComponent on non BP classes here.
						// else{}
					}
				}
			}
		}
	}
	// If doing code mods, implement check for UUGCOverrideComponent on non-BP classes here.
	// else{}

	return bSuccess;
}

void UUGCRegistry::RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass)
{
	RegisteredOverrides.Emplace(ClassToOverride, OverrideClass);
}

void UUGCRegistry::ClearOverrideForClass(TSubclassOf<AActor> ActorClass)
{
	RegisteredOverrides.Remove(ActorClass);
}

TSubclassOf<AActor> UUGCRegistry::GetOverrideForActorClass(TSubclassOf<AActor> ActorClass)
{
	if (RegisteredOverrides.Contains(ActorClass))
	{
		return *RegisteredOverrides.Find(ActorClass);
	}
	return ActorClass;
}

IAssetRegistry& UUGCRegistry::GetAsstRegistry()
{
	if (!CachedAssetRegistryModule)
	{
		CachedAssetRegistryModule = &FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	}

	check(CachedAssetRegistryModule);
	return CachedAssetRegistryModule->Get();
}
