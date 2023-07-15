/*
* Copyright (c) 2020 - 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/


using UnrealBuildTool;
using System.IO;

public class DLSSEditor : ModuleRules
{
	public DLSSEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				Path.Combine(EngineDirectory,"Source/Runtime/Renderer/Private"),
				Path.Combine(EngineDirectory,"Source/Editor/LevelEditor/Private"),

				Path.Combine(ModuleDirectory, "../DLSS/Private")
			}
			);
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"DLSS",
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"RenderCore",
				"Renderer",
				"RHI",

				"Settings",
				"LevelEditor",
				"ToolMenus",
				"Slate",
				"SlateCore",
				"EditorWidgets",
				"EditorStyle",
				"InputCore",
				"UnrealEd",
				"Projects",

				"NGX",
				"DLSS",
				"NGXRHI",
			}
			);
		// We can't quite check whether we have CL 16509387 (in UE5-Release) so we do this in a round about way
		bool bUseSlotsArgumentsAPI = (Target.Version.MajorVersion == 5) && (Target.Version.BranchName != "++UE5+Release-5.0-EarlyAccess");
		PrivateDefinitions.Add(string.Format("USE_SLOT_SLOT_ARGUMENTS_API={0}", bUseSlotsArgumentsAPI ? "1" : "0"));

		// We can't quite check whether we have CL 16848904 (in UE5-Main) so we do this in a round about way 
		bool bSupportsPostProcessingScreenPercentage = (Target.Version.MajorVersion == 4) ||
			((Target.Version.MajorVersion == 5) && (Target.Version.BranchName == "++UE5+Release-5.0-EarlyAccess"))
			;
		PrivateDefinitions.Add(string.Format("SUPPORTS_POSTPROCESSING_SCREEN_PERCENTAGE={0}", bSupportsPostProcessingScreenPercentage ? "1" : "0"));

		// 4.x and early access 5.0 engines had GTemporalUpscaler interface
		bool bEngineHasGTemporalUpscaler = (Target.Version.MajorVersion == 4) || (Target.Version.BranchName == "++UE5+Release-5.0-EarlyAccess");
		PrivateDefinitions.Add(string.Format("DLSS_ENGINE_HAS_GTEMPORALUPSCALER={0}", bEngineHasGTemporalUpscaler ? "1" : "0"));
	}
}
