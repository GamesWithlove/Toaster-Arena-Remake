// Copyright (C) 2017-2023 eelDev AB

using System;
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
		bool bSupportedPlatform = Target.Platform == UnrealTargetPlatform.Linux ||
		                          Target.Platform == UnrealTargetPlatform.Win64 ||
		                          Target.Platform == UnrealTargetPlatform.Mac;

		PublicDependencyModuleNames.AddRange(new[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"Networking",
			"Sockets",
			"Projects",
		});
		PrivateDependencyModuleNames.AddRange(new[]
		{
			"HTTP",
			"ApplicationCore",
		});

		if (bSupportedPlatform && bDisableSteamCore == false)
		{
			PublicDefinitions.Add("WITH_STEAMCORE");

			PublicDependencyModuleNames.AddRange(new[] { "OnlineSubsystemSteam", "Steamworks", "SteamShared" });
			AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
		}
		
		if (Target.Version.MajorVersion == 5)
		{
			PublicDependencyModuleNames.AddRange(new[]
			{
				"CoreOnline"
			});
		}

		if (Target.Version.MinorVersion == 26)
		{
			PublicDefinitions.Add("STEAM_VERSION=147");
		}
		else if (Target.Version.MinorVersion == 27)
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
		else if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 1 && Target.Version.MinorVersion < 4)
		{
			PublicDefinitions.Add("STEAM_VERSION=153");
		}
		else if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 4)
		{
			PublicDefinitions.Add("STEAM_VERSION=157");
		}
		else
		{
			PublicDefinitions.Add("STEAM_VERSION=151");
		}
		
		if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 2)
		{
			PrivateDependencyModuleNames.AddRange(new[] { "AudioExtensions" });
		}

		PublicDependencyModuleNames.Add("DeveloperSettings");
	}
}