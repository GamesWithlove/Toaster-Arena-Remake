// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Toaster_rebootEditorTarget : TargetRules
{
	public Toaster_rebootEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Toaster_reboot" } );

		bOverrideBuildEnvironment = true;
		//BuildEnvironment = TargetBuildEnvironment.Unique; I believe we'd need to build from Unreal's source to use this.
	}
}
