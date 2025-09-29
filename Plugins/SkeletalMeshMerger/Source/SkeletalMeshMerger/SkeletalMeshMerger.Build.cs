// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved.

using UnrealBuildTool;

public class SkeletalMeshMerger : ModuleRules
{
	public SkeletalMeshMerger(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"Core",
				"Engine",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"UnrealEd",
				"DerivedDataCache",
				"EditorStyle",
				"MessageLog",
				"InputCore",
				"SlateCore",
				"Slate",
				"Core",
				"CoreUObject",
				"Engine",
				"RenderCore",
				"RHI",
				"AppFramework",
				"Projects",
				"ApplicationCore",
				"ClothingSystemRuntimeCommon",
				"ClothingSystemRuntimeInterface",
                "SkeletalMeshUtilitiesCommon", 
                "SkeletalMerging",
                "MeshDescription",
                "StaticMeshDescription",
                "SkeletalMeshDescription",
                "MeshDescriptionOperations"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
