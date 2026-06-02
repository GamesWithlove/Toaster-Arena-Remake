// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

using UnrealBuildTool;

public class RealtimeMeshNanite : ModuleRules
{
    public RealtimeMeshNanite(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "ChaosCore",
                "Chaos",
                "PhysicsCore",
                "RealtimeMeshComponent",
                "IntelISPC",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "RHI",
                "RenderCore"
            }
        );
        
        
        PrivateIncludePaths.AddRange(
            new string[]
            {
                System.IO.Path.Combine(PluginDirectory, "Source", "ThirdParty"),
#if UE_5_1_OR_LATER
                System.IO.Path.Combine(EngineDirectory, "Source", "Runtime", "Engine", "Internal"),
#endif
            }
        );
    }
}