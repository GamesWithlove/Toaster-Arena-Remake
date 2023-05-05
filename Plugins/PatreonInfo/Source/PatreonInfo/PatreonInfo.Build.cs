// Copyright Green Forest Games. All Rights Reserved.

using UnrealBuildTool;

public class PatreonInfo : ModuleRules
{
	public PatreonInfo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"UMG",
			"CoreUObject",
			"Engine",
			"HTTP",
			"Json",
			"JsonUtilities",
			"ApplicationCore" // Clipboard
		});

		if (Target.Version.MajorVersion >= 5 || Target.Version.MinorVersion >= 26)
		{
			PublicDependencyModuleNames.AddRange(new[]
			{
				"DeveloperSettings"
			});
		}
	}
}