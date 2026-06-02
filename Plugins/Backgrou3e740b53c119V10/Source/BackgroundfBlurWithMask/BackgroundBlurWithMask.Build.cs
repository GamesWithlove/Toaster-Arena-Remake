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

        PrivateIncludePaths.AddRange(
                new string[]{
                    // бн add other private include paths required here бн
                    Path.Combine(GetModuleDirectory("Renderer"), "Internal"),
                }
                );

        PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"Projects",
				"Slate",
				"SlateCore"
			});

        PrivateDependencyModuleNames.AddRange(new string[]
            {
				"UMG",
				"Renderer",
				"RenderCore",
				"SlateRHIRenderer",
				"RHI",
				"RHICore"
            });
	}
}
