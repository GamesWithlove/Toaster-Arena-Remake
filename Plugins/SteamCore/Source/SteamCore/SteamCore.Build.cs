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

		bool bDisableSteamCore = false;
		bool bSupportedPlatform = Target.Platform == UnrealTargetPlatform.Linux || Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Mac;

		PublicDependencyModuleNames.AddRange(new[] { "Core", "CoreUObject", "Engine", "OnlineSubsystem", "OnlineSubsystemUtils", "Networking", "Sockets", "Projects", });
		PrivateDependencyModuleNames.AddRange(new[] { "HTTP" });
		
		if (bSupportedPlatform && !bDisableSteamCore)
		{
			PublicDefinitions.Add("ENABLE_STEAMCORE=1");

			PublicDependencyModuleNames.AddRange(new[] { "OnlineSubsystemSteam", "Steamworks", "SteamShared" });
			AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
		}
		else
		{
			PublicDefinitions.Add("ENABLE_STEAMCORE=0");
		}

		if (Target.Version.MinorVersion == 27)
		{
			if (Target.Platform == UnrealTargetPlatform.Mac)
			{
				PublicDefinitions.Add("STEAM_VERSION=147");
			}
			else
			{
				PublicDefinitions.Add("STEAM_VERSION=151");
			}
		}
		else if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion == 0)
		{
			if (Target.Platform == UnrealTargetPlatform.Mac)
			{
				PublicDefinitions.Add("STEAM_VERSION=147");
			}
			else
			{
				PublicDefinitions.Add("STEAM_VERSION=151");
			}
		}
		else if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 1)
		{
			PublicDefinitions.Add("STEAM_VERSION=153");
		}
		else
		{
			PublicDefinitions.Add("STEAM_VERSION=151");
		}
		
		if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 2)
		{
			PrivateDependencyModuleNames.AddRange
			(
				new[]
				{
					"AudioExtensions"
				}
			);
		}

		PublicDependencyModuleNames.Add("DeveloperSettings");
	}
}