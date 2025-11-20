// Copyright 2018-2020 David Romanski(Socke). All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class RealTimeImport : ModuleRules
{
	public RealTimeImport(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;


		var EngineDir = Path.GetFullPath(Target.RelativeEnginePath);
		PublicIncludePaths.Add(Path.Combine(EngineDir, "Source/Runtime/AudioMixer/Public"));
		PrivateIncludePaths.Add(Path.Combine(EngineDir, "Source/Runtime/AudioMixer/Private"));


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"RHI",
				"Engine",
				"Slate",
				"SlateCore",
				"RenderCore",
                "Json",
                "JsonUtilities"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"RHI",
				"Engine",
				"Slate",
				"SlateCore",
				"RenderCore",
                "Json",
                "JsonUtilities",
                "AudioMixer",
				"AudioMixerCore",
                "ProceduralMeshComponent"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		AddEngineThirdPartyPrivateStaticDependencies(Target,
			"UEOgg",
			"Vorbis",
			"VorbisFile"
		);
	}
}
