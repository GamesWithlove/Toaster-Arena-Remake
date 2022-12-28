// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AssetRegistryModule.h"
#include "Engine.h"
#include "UGCRegistry.generated.h"

USTRUCT(BlueprintType)
struct FUGCPackage
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
	FString PackagePath;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
	FString EngineVersion;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
	FString Author;

	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
	FString Description;

	FUGCPackage()
	{
		PackagePath = "";
		EngineVersion = "";
		Author = "";
		Description = "";
	}
};

UCLASS(BlueprintType)
class SIMPLEUGC_API UUGCRegistry : public UObject
{
	GENERATED_BODY()
public:
	// This is our list of UGC packages. Populated by FindUGCPackages()
	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC")
	TArray<FUGCPackage> UGCPackages;

	// A pairing of Origins and Overrides. This is what the gameplay logic references when loading an effective class
	UPROPERTY(BlueprintReadOnly, Category = "SimpleUGC|Actor Replacement")
	TMap<TSubclassOf<AActor> /*Origin*/, TSubclassOf<AActor> /*Override*/> RegisteredOverrides;

	// This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints.
	UFUNCTION(Blueprintcallable)
	bool FindUGCPackages();

	// General DLC Asset Access. Create Similar Methods For Getting Materials, Textures, etc.

	// Returns All Classes in a UGC package.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleUGC")
	bool GetAllClassesInPackage(FUGCPackage Package, TArray<UClass*>& Classes);

	// Returns All Maps in a UGC package.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleUGC")
	bool GetMapsInPackage(FUGCPackage Package, TArray<FName>& Maps);

	// Actor Replacement Specific Calls

	// Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package.
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleUGC|Actor Replacement")
	bool GetActorClassesWithReplacementActorComponentsInPackage(FUGCPackage Package, TArray<TSubclassOf<AActor>>& ActorClasses);

	// Applies entire package of Actor Replacements. This is common for applying an entire class-based "Mod."
	UFUNCTION(BlueprintCallable, Category = "SimpleUGC|Actor Replacement")
	bool ApplyAllOverridesInPackage(FUGCPackage Package);

	// Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage
	UFUNCTION(BlueprintCallable, Category = "SimpleUGC|Actor Replacement")
	bool ApplyOverridesForActorClass(TSubclassOf<AActor> ActorClass);

	// A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)
	UFUNCTION(BlueprintCallable, Category = "SimpleUGC|Actor Replacement")
	void RegisterOverrideForClass(TSubclassOf<AActor> ClassToOverride, TSubclassOf<AActor> OverrideClass);

	// Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function.
	UFUNCTION(BlueprintCallable, Category = "SimpleUGC|Actor Replacement")
	void ClearOverrideForClass(TSubclassOf<AActor> ActorClass);

	// Used in gameplay to look up what class is actually supposed to be spawned
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SimpleUGC|Actor Replacement")
	TSubclassOf<AActor> GetOverrideForActorClass(TSubclassOf<AActor> ActorClass);

private:
	FAssetRegistryModule* CachedAssetRegistryModule;
	IAssetRegistry& GetAsstRegistry();
};
