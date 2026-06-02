// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class RealtimeMeshSpatial : ModuleRules
{
    public RealtimeMeshSpatial(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "RealtimeMeshComponent",
                "RealtimeMeshExt",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "RenderCore",
                "RHI",
            }
        );

        if (Target.bBuildEditor)
        {
            
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "UnrealEd",
                }
            );
        }
        
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "Interface"));

        //PublicDefinitions.Add("REALTIME_MESH_INTERFACE_ROOT=");
    }
}