// Copyright (c) W2.Wizard 2020-2021. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class ColorWheelPlugin : ModuleRules
{
	public ColorWheelPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
		PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ApplicationCore",
				"CoreUObject",
				"InputCore",
				"Engine",
				"UMG",
				"Slate",
				"SlateCore"
			}
		);
	}
}
