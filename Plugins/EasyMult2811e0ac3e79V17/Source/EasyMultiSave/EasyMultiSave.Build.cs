//Easy Multi Save - Copyright (C) 2026 by Michael Hegemann.  

using System.IO;
using UnrealBuildTool;

public class EasyMultiSave : ModuleRules
{
	public EasyMultiSave(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrecompileForTargets = PrecompileTargetsType.Any;

        //Test noPCH
        //PCHUsage = PCHUsageMode.NoPCHs; 
        //UndefinedIdentifierWarningLevel = WarningLevel.Error;

        //bAllowConfidentialPlatformDefines = true;

        PublicIncludePaths.AddRange(new string[]
        {
            Path.Combine(ModuleDirectory, "../EasyMultiSave/System/Public"),
            Path.Combine(ModuleDirectory, "../EasyMultiSave/Common/Public"),
            Path.Combine(ModuleDirectory, "../EasyMultiSave/Async/Public"),
            Path.Combine(ModuleDirectory, "../EasyMultiSave/Data/Public"),
            Path.Combine(ModuleDirectory, "../EasyMultiSave/Interface/Public"),
        });

        PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
		});
				
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
			"ImageCore",
		});	
	}
}
