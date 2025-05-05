// Copyright (C) 2017-2022 eelDev AB

using UnrealBuildTool;

public class SteamCoreWeb : ModuleRules
{
	public SteamCoreWeb(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Private/SteamCoreWeb/SteamCoreWebPluginPrivatePCH.h";

		PrivateDependencyModuleNames.AddRange
		(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Projects",
				"OnlineSubsystem",
				"HTTP",
				"Json",
				"JsonUtilities",
			}
		);

		if (Target.Version.MinorVersion >= 26 || Target.Version.MajorVersion == 5)
			PrivateDependencyModuleNames.Add("DeveloperSettings");
	}
}