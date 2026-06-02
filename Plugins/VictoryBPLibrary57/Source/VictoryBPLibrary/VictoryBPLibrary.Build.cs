// Some copyright should be here...

using UnrealBuildTool;

public class VictoryBPLibrary : ModuleRules
{
    public VictoryBPLibrary(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                // ... add public include paths required here ...
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                // ... add other private include paths required here ...
            }
        );

        if (Target.bBuildEditor)
        {
            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "ModelingComponentsEditorOnly"
                }
            );
        }

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                // Core modules
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "UMG",
                "Slate",
                "SlateCore",

                // Geometry and mesh modules (was added in UE 5.6)
                "GeometryCore",
                "DynamicMesh",
                "MeshDescription",
                "StaticMeshDescription",
                "GeometryFramework",
                "ModelingOperators",
                "ModelingComponents",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "InputCore",
                "RHI",
                "Slate",
                "SlateCore",
                "ApplicationCore",
                "AppFramework", // For Color Picker! ♥ Rama
                "UMG",
                "Slate",
                "SlateCore",
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // ... add any modules that your module loads dynamically here ...
            }
        );
    }
}