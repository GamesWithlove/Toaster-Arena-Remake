// Copyright 2023, Kibibyte, All rights reserved

using UnrealBuildTool;

public class KB_Multi_Thread_E : ModuleRules
{
	public KB_Multi_Thread_E(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {});	
		
		PrivateIncludePaths.AddRange(new string[] {});
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
			);
		
		DynamicallyLoadedModuleNames.AddRange(new string[] {});
	}
}
