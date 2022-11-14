using UnrealBuildTool;

public class ToasterGame : ModuleRules
{
	public ToasterGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange
		(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"NetworkFile"
			}
		);

		PrivateDependencyModuleNames.AddRange
		(
			new[]
			{
				"HTTP",
				"PakFile",
				"StreamingFile",
				"RenderCore",
				"RHI",
				"Niagara",
			}
		);
	}
}