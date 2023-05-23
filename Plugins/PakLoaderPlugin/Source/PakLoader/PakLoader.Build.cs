// Copyright (C) 2019-2022 Blue Mountains GmbH. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
using System.Collections.Generic;

public class PakLoader : ModuleRules
{
    public PakLoader(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
        PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
                "Engine",
                "PakFile",
                "HTTP",
                "AssetRegistry",
                "RenderCore"
            }
		);
    }
}
