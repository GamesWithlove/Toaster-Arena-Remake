// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class PCG : ModuleRules
	{
		public PCG(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Chaos",
					"Core",
					"CoreUObject",
					"DeveloperSettings",
					"Engine",
					"Landscape",
					"Foliage",
					"PhysicsCore",
					"Projects",
					"RenderCore",
					"RHI",
				});

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"ComputeFramework",
					"PCGCompute",
					"Renderer",
					"Voronoi",
				});

			if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.AddRange(
					new string[]
					{
						"UnrealEd",
						"Settings",
						"SourceControl",
					});
			}

			bDisableAutoRTFMInstrumentation = true;
		}
	}
}
