// Copyright 2024 Dmitry Karpukhin. All Rights Reserved.

#include "BlockoutToolsEditorPlugin.h"
#include "IPlacementModeModule.h"
#include "ActorFactories/ActorFactoryBlueprint.h"
#include "Interfaces/IPluginManager.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateTypes.h"

#define LOCTEXT_NAMESPACE "FBlockoutToolsEditorPluginModule"

void FBlockoutToolsEditorPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Register editor category
	const int Priority = 41;
	FPlacementCategoryInfo BlockoutTools(LOCTEXT("BlockoutTools", "Blockout Tools"), FSlateIcon("BlockoutToolsStyle", "Blockout.CategoryIcon"), "BlockoutTools", TEXT("PMBlockoutTools"), Priority);
	IPlacementModeModule::Get().RegisterPlacementCategory(BlockoutTools);

	// Find and register actors to category
	UBlueprint* Blockout_Box = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Box.Blockout_Box")).TryLoad());
	if (Blockout_Box) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Box, true),
			FName("Blockout_Box.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Box.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Box", "Blockout Box")
		)));
	}

	UBlueprint* Blockout_Cone = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Cone.Blockout_Cone")).TryLoad());
	if (Blockout_Cone) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Cone, true),
			FName("Blockout_Cone.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Cone.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Cone", "Blockout Cone")
		)));
	}

	UBlueprint* Blockout_Corner_Curved = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Corner_Curved.Blockout_Corner_Curved")).TryLoad());
	if (Blockout_Corner_Curved) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Corner_Curved, true),
			FName("Blockout_Corner_Curved.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Corner_Curved.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Corner Curved", "Blockout Corner Curved")
		)));
	}

	UBlueprint* Blockout_Corner_Ramp = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Corner_Ramp.Blockout_Corner_Ramp")).TryLoad());
	if (Blockout_Corner_Ramp) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Corner_Ramp, true),
			FName("Blockout_Corner_Ramp.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Corner_Ramp.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Corner Ramp", "Blockout Corner Ramp")
		)));
	}

	UBlueprint* Blockout_Cylinder = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Cylinder.Blockout_Cylinder")).TryLoad());
	if (Blockout_Cylinder) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Cylinder, true),
			FName("Blockout_Cylinder.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Cylinder.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Cylinder", "Blockout Cylinder")
		)));
	}

	UBlueprint* Blockout_Doorway = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Doorway.Blockout_Doorway")).TryLoad());
	if (Blockout_Doorway) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Doorway, true),
			FName("Blockout_Doorway.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Doorway.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Doorway", "Blockout Doorway")
		)));
	}

	UBlueprint* Blockout_Railing = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Railing.Blockout_Railing")).TryLoad());
	if (Blockout_Railing) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Railing, true),
			FName("Blockout_Railing.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Railing.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Railing", "Blockout Railing")
		)));
	}

	UBlueprint* Blockout_Ramp = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Ramp.Blockout_Ramp")).TryLoad());
	if (Blockout_Ramp) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Ramp, true),
			FName("Blockout_Ramp.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Ramp.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Ramp", "Blockout Ramp")
		)));
	}

	UBlueprint* Blockout_Skewbox = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Skewbox.Blockout_Skewbox")).TryLoad());
	if (Blockout_Skewbox) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Skewbox, true),
			FName("Blockout_Skewbox.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Skewbox.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Skewbox", "Blockout Skewbox")
		)));
	}

	UBlueprint* Blockout_Sphere = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Sphere.Blockout_Sphere")).TryLoad());
	if (Blockout_Sphere) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Sphere, true),
			FName("Blockout_Sphere.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Sphere.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Sphere", "Blockout Sphere")
		)));
	}

	UBlueprint* Blockout_Stairs_Curved = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Stairs_Curved.Blockout_Stairs_Curved")).TryLoad());
	if (Blockout_Stairs_Curved) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Stairs_Curved, true),
			FName("Blockout_Stairs_Curved.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Stairs_Curved.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Stairs Curved", "Blockout Stairs Curved")
		)));
	}

	UBlueprint* Blockout_Stairs_Linear = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Stairs_Linear.Blockout_Stairs_Linear")).TryLoad());
	if (Blockout_Stairs_Linear) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Stairs_Linear, true),
			FName("Blockout_Stairs_Linear.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Stairs_Linear.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Stairs Linear", "Blockout Stairs Linear")
		)));
	}

	UBlueprint* Blockout_Stairs_Linear_Manual = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Stairs_Linear_Manual.Blockout_Stairs_Linear_Manual")).TryLoad());
	if (Blockout_Stairs_Linear_Manual) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Stairs_Linear_Manual, true),
			FName("Blockout_Stairs_Linear_Manual.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Stairs_Linear_Manual.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Stairs Linear Manual", "Blockout Stairs Linear Manual")
		)));
	}

	UBlueprint* Blockout_Tube = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Tube.Blockout_Tube")).TryLoad());
	if (Blockout_Tube) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Tube, true),
			FName("Blockout_Tube.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Tube.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Tube", "Blockout Tube")
		)));
	}

	UBlueprint* Blockout_Window = Cast<UBlueprint>(FSoftObjectPath(TEXT("/BlockoutToolsPlugin/Blueprints/Blockout_Window.Blockout_Window")).TryLoad());
	if (Blockout_Window) {
		IPlacementModeModule::Get().RegisterPlaceableItem(BlockoutTools.UniqueHandle, MakeShareable(new FPlaceableItem(
			*UActorFactory::StaticClass(),
			FAssetData(Blockout_Window, true),
			FName("Blockout_Window.Thumbnail"),
#if ENGINE_MAJOR_VERSION == 5
			FName("Blockout_Window.Icon"),
#endif
			TOptional<FLinearColor>(),
			TOptional<int32>(),
			NSLOCTEXT("PlacementMode", "Blockout Window", "Blockout Window")
		)));
	}

	// Set Brush Images and register the style
	StyleSet = MakeShareable(new FSlateStyleSet("BlockoutToolsStyle"));

	FString BlockoutIconPath = IPluginManager::Get().FindPlugin(TEXT("BlockoutToolsPlugin"))->GetBaseDir() + TEXT("/Resources/");

	StyleSet->Set("Blockout.CategoryIcon", new FSlateImageBrush(BlockoutIconPath + TEXT("BlockoutToolsEditorIcon16.png"), FVector2D(16.f, 16.f)));
	StyleSet->Set("Blockout_Box.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Box_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Cone.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Cone_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Corner_Curved.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Corner_Curved_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Corner_Ramp.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Corner_Ramp_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Cylinder.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Cylinder_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Doorway.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Doorway_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Railing.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Railing_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Ramp.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Ramp_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Skewbox.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Skewbox_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Sphere.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Sphere_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Stairs_Curved.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Stairs_Curved_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Stairs_Linear.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Stairs_Linear_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Stairs_Linear_Manual.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Stairs_Linear_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Tube.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Tube_64.png"), FVector2D(64.f, 64.f)));
	StyleSet->Set("Blockout_Window.Thumbnail", new FSlateImageBrush(BlockoutIconPath + TEXT("Blockout_Window_64.png"), FVector2D(64.f, 64.f)));
		
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
}

void FBlockoutToolsEditorPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Unregister editor category
	if (IPlacementModeModule::IsAvailable())
	{
		IPlacementModeModule::Get().UnregisterPlacementCategory("BlockoutTools");
	}

	// Unregister style
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
	StyleSet.Reset();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlockoutToolsEditorPluginModule, BlockoutToolsEditorPlugin)