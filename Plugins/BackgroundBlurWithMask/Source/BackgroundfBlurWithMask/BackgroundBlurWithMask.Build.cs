// Copyright Qibo Pang 2022. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class BackgroundBlurWithMask : ModuleRules
{
	public BackgroundBlurWithMask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

		PrivateIncludePaths.AddRange(
				new string[] {
					"../../../../Source/Runtime/Engine/",
					"../../../../Source/Runtime/RHI/",
					// ... add other private include paths required here ...
				}
				);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ApplicationCore",
				"CoreUObject",
				"Engine",
				"UMG",
				"Slate",
				"SlateCore",
				"RenderCore",
				"RHI",
				"Renderer",
				"Projects",
			}
		);
	}
}
