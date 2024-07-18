//  Copyright 2022 (C) Bruno Xavier B. Leite

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
    public class PTMTool : ModuleRules
    {
        public PTMTool(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
            PrivatePCHHeaderFile = "Public/PTMTool.h";
            bEnforceIWYU = true;
            //
            PublicDependencyModuleNames.AddRange(new string[] {"Core","Engine","CoreUObject"});
            PrivateDependencyModuleNames.AddRange
            (
                new string[]
                {
                    "ContentBrowser",
                    "BlueprintGraph",
                    "LevelEditor",
                    "EditorStyle",
                    "AssetTools",
                    "InputCore",
                    "SlateCore",
                    "UnrealEd",
                    "Projects",
                    "Slate"
                }
            );
            //
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
            PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Classes"));
            PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
        }
    }

}