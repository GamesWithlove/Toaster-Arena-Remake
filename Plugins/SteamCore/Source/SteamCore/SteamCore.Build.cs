// Copyright (C) 2017-2022 eelDev AB

using UnrealBuildTool;

public class SteamCore : ModuleRules
{
	public SteamCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateIncludePaths.Add("SteamCore/Public/SteamCore");
		PrivateIncludePaths.Add("SteamCore/Private/SteamCore");
		PrivatePCHHeaderFile = "Private/SteamCore/SteamCorePluginPrivatePCH.h";

		PublicDependencyModuleNames.AddRange
		(
			new[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"OnlineSubsystem",
				"OnlineSubsystemUtils",
				"OnlineSubsystemSteam",
				"Steamworks",
				"Networking",
				"Sockets",
				"Projects",
				"SteamShared"
			}
		);

		PrivateDependencyModuleNames.AddRange
		(
			new[]
			{
				"HTTP"
			}
		);


		if (Target.Version.MinorVersion == 25)
		{
			PublicDefinitions.Add("STEAM_VERSION=147");
		}
		else if (Target.Version.MinorVersion == 27)
		{
			if (Target.Platform == UnrealTargetPlatform.Mac)
				PublicDefinitions.Add("STEAM_VERSION=147");
			else
				PublicDefinitions.Add("STEAM_VERSION=151");
			PublicDependencyModuleNames.Add("DeveloperSettings");
		}
		else
		{
			PublicDefinitions.Add("STEAM_VERSION=147");
			PublicDependencyModuleNames.Add("DeveloperSettings");
		}

		AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
	}
}