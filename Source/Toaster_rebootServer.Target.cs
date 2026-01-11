// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Toaster_rebootServerTarget : TargetRules
{
	public Toaster_rebootServerTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Toaster_reboot" } );
		GlobalDefinitions.Add("UE_PROJECT_STEAMSHIPPINGID=123");
        GlobalDefinitions.Add("UE_PROJECT_STEAMPRODUCTNAME=\"MyTitle\"");
        GlobalDefinitions.Add("UE_PROJECT_STEAMGAMEDIR=\"MyTitle\"");
        GlobalDefinitions.Add("UE_PROJECT_STEAMGAMEDESC=\"MyTitle\"");
	}
}
