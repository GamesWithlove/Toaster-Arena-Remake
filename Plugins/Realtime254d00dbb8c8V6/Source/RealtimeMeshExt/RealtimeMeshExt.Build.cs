// Copyright (c) 2015-2025 TriAxis Games, L.L.C. All Rights Reserved.

using System;
using System.IO;
using UnrealBuildTool;

public class RealtimeMeshExt : ModuleRules
{
    public RealtimeMeshExt(ReadOnlyTargetRules Target) : base(Target)
    {
        bUseUnity = false;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
#if UE_5_1_OR_LATER
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
#endif

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "RealtimeMeshComponent",
                "ChaosCore",
                "Chaos",
                "PhysicsCore",
                "RenderCore",
                "RHI",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "GeometryCore",
                "GeometryFramework",
                "MeshDescription",
                "StaticMeshDescription",
                //"MeshUtilities",
                //"MeshBuilder",
                //"MeshConversion",
            }
        );


        PrivateIncludePaths.AddRange(
            new string[]
            {
                System.IO.Path.Combine(PluginDirectory, "Source", "ThirdParty")
            }
        );
        
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public", "Interface"));
    }
}

public class Paths
{
}