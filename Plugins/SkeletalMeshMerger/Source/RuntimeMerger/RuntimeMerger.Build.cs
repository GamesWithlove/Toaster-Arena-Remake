// Copyright (C) Developed by Pask, Published by Dark Tower Interactive SRL 2023. All Rights Reserved.

using UnrealBuildTool;

public class RuntimeMerger : ModuleRules {
    public RuntimeMerger(ReadOnlyTargetRules Target)
        : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine"
        });

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "SkeletalMerging",
            });

        DynamicallyLoadedModuleNames.AddRange(
            new string[] {

            });
    }
}
