/* Copyright (C) Eternal Monke Games - All Rights Reserved
* Unauthorized copying of this file, via any medium is strictly prohibited
* Proprietary and confidential
* Written by Mansoor Pathiyanthra <codehawk64@gmail.com , mansoor@eternalmonke.com>, 2021
*/

using UnrealBuildTool;
using System;

public class DragonIKPlugin : ModuleRules
{
    public DragonIKPlugin(ReadOnlyTargetRules Target): base(Target)
    {


        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
    //    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //    Console.WriteLine("Mod Dir : " + ModuleDirectory);

        PublicIncludePaths.AddRange(
            new string[] {
                System.IO.Path.Combine(ModuleDirectory,"Public")
//                  "DragonIKPlugin/Public"
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
                System.IO.Path.Combine(ModuleDirectory,"Private"),
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core","AnimGraphRuntime","AnimationCore",
				// ... add other public dependencies that you statically link with here ...
			}
            );



       


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
				// ... add private dependencies that you statically link with here ...	
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
