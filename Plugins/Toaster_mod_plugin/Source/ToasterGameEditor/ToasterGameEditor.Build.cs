using UnrealBuildTool;

public class ToasterGameEditor : ModuleRules
{
	public ToasterGameEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange
		(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
			}
		);

		PrivateDependencyModuleNames.AddRange
		(
			new[]
			{
				"ApplicationCore",
				"UnrealEd",
				"SlateCore",
				"Slate",
				"DetailCustomizations",
				"PropertyEditor",
				"AssetRegistry",
				"AssetTools",
				"ToasterGame",
				"Kismet",
				"KismetCompiler",
				"BlueprintGraph",
				"Niagara",
			}
		);
	}
}