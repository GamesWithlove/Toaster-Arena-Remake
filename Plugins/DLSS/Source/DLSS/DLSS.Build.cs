/*
* Copyright (c) 2020 - 2022 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/

using UnrealBuildTool;

public class DLSS : ModuleRules
{
	public virtual string [] SupportedDynamicallyLoadedNGXRHIModules(ReadOnlyTargetRules Target)
	{
		if(Target.Platform == UnrealTargetPlatform.Win64 )
		{
			return new string[]
			{
				"NGXD3D11RHI",
				"NGXD3D12RHI",
				"NGXVulkanRHI"
			};
		}
		return new string[] { "" };
	}

	public DLSS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				EngineDirectory + "/Source/Runtime/Renderer/Private",
				// ... add other private include paths required here ...
			}
			);
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
					"Core",
					"CoreUObject",
					"EngineSettings",
					"Engine",
					"RenderCore",
					"Renderer",
					"RHI",
					"NGX",
					"Projects",
                    "DeveloperSettings",
					"DLSSUtility",
					"NGXRHI",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		if (ReadOnlyBuildVersion.Current.MajorVersion == 5)
		{
			PrivateDependencyModuleNames.Add("RHICore");
		}
		DynamicallyLoadedModuleNames.AddRange(SupportedDynamicallyLoadedNGXRHIModules(Target));

		// We can't quite check whether we have CL 16848904 (in UE5-Main) so we do this in a round about way 
		bool bSupportsPostProcessingScreenPercentage = (Target.Version.MajorVersion == 4) ||
			((Target.Version.MajorVersion == 5) && (Target.Version.BranchName == "++UE5+Release-5.0-EarlyAccess")) 
			;
		PrivateDefinitions.Add(string.Format("SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE={0}", bSupportsPostProcessingScreenPercentage ? "1" : "0"));

		// this is a public definition so the DLSSMoviePipelineSupport modules (if compiled against that branch) see it
		bool bSupportsCustomStaticScreenpercentageSetupViewFamily = ((Target.Version.MajorVersion == 4) && (Target.Version.MinorVersion >= 27)) || ((Target.Version.MajorVersion == 5) && (Target.Version.BranchName != "++UE5+Release-5.0-EarlyAccess"));
		PublicDefinitions.Add(string.Format("DLSS_ENGINE_SUPPORTS_CSSPD={0}", bSupportsCustomStaticScreenpercentageSetupViewFamily ? "1" : "0"));

		// We can't quite check whether we have CL 16758229  so we do this in a round about way 
		bool bEngineHasAAM_TSR = (Target.Version.MajorVersion == 5) && (Target.Version.BranchName != "++UE5+Release-5.0-EarlyAccess");
		PrivateDefinitions.Add(string.Format("DLSS_ENGINE_HAS_AAM_TSR={0}", bEngineHasAAM_TSR ? "1" : "0"));

		// 4.x and early access 5.0 engines had GTemporalUpscaler interface
		bool bEngineHasGTemporalUpscaler = (Target.Version.MajorVersion == 4) || (Target.Version.BranchName == "++UE5+Release-5.0-EarlyAccess");
		PrivateDefinitions.Add(string.Format("DLSS_ENGINE_HAS_GTEMPORALUPSCALER={0}", bEngineHasGTemporalUpscaler ? "1" : "0"));

		// 4.x and early access 5.0 engines, ITemporalUpscaler::AddPasses returns values through pointers passed into the function
		bool bEngineAddPassesReturnThroughParams = (Target.Version.MajorVersion == 4) || (Target.Version.BranchName == "++UE5+Release-5.0-EarlyAccess");
		PublicDefinitions.Add(string.Format("DLSS_ENGINE_ADDPASSES_RETURN_THROUGH_PARAMS={0}", bEngineAddPassesReturnThroughParams ? "1" : "0"));
	}
}
