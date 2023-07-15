/*
* Copyright (c) 2020-2021 NVIDIA CORPORATION.  All rights reserved.
*
* NVIDIA Corporation and its licensors retain all intellectual property and proprietary
* rights in and to this software, related documentation and any modifications thereto.
* Any use, reproduction, disclosure or distribution of this software and related
* documentation without an express license agreement from NVIDIA Corporation is strictly
* prohibited.
*
* TO THE MAXIMUM EXTENT PERMITTED BY APPLICABLE LAW, THIS SOFTWARE IS PROVIDED *AS IS*
* AND NVIDIA AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, EITHER EXPRESS OR IMPLIED,
* INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE.  IN NO EVENT SHALL NVIDIA OR ITS SUPPLIERS BE LIABLE FOR ANY
* SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT
* LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF
* BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR
* INABILITY TO USE THIS SOFTWARE, EVEN IF NVIDIA HAS BEEN ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGES.
*/

#if UE_5_0_OR_LATER
using EpicGames.Core;
#else
using Tools.DotNETCommon;
#endif

using UnrealBuildTool;
using System.IO;

public class NGX : ModuleRules
{

	protected virtual bool IsSupportedWindowsPlatform(ReadOnlyTargetRules Target)
	{
		return Target.Platform == UnrealTargetPlatform.Win64;
	}

	public NGX (ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (IsSupportedWindowsPlatform(Target))
		{
            string NGXPath = ModuleDirectory + "/";
            
            PublicSystemIncludePaths.Add(NGXPath + "Include/");
            
            PublicIncludePaths.Add(NGXPath + "Include/");

            if ((Target.Configuration == UnrealTargetConfiguration.Debug) && Target.bDebugBuildsActuallyUseDebugCRT)
            {
                if (Target.bUseStaticCRT)
                {
                    PublicAdditionalLibraries.Add(NGXPath + "Lib/x64/" + "nvsdk_ngx_s_dbg.lib");
                }
                else
                {
                    PublicAdditionalLibraries.Add(NGXPath + "Lib/x64/" + "nvsdk_ngx_d_dbg.lib");
                }
            }
			else
            { 
				if (Target.bUseStaticCRT)
				{
					PublicAdditionalLibraries.Add(NGXPath + "Lib/x64/" + "nvsdk_ngx_s.lib");
				}
				else
				{
					PublicAdditionalLibraries.Add(NGXPath + "Lib/x64/" + "nvsdk_ngx_d.lib");
				}
            }

            string[] NGXSnippetDLLs = 
            {
                "nvngx_dlss.dll",
            };

			PublicDefinitions.Add("NGX_DLSS_BINARY_NAME=TEXT(\"" + NGXSnippetDLLs[0] + "\")");

			foreach (string NGXSnippetDLL in NGXSnippetDLLs)
			{
				bool bHasProjectBinary = false;
				if (Target.ProjectFile != null)
				{
					string ProjectDLLPath = DirectoryReference.Combine(Target.ProjectFile.Directory, "Binaries/ThirdParty/NVIDIA/NGX/Win64", NGXSnippetDLL).FullName;
					if (File.Exists(ProjectDLLPath))
					{
						bHasProjectBinary = true;
						//Log.TraceInformation("NGX project specific production DLSS binary found at {0}.", ProjectDLLPath);
						RuntimeDependencies.Add(ProjectDLLPath, StagedFileType.NonUFS);
					}
				}

				// useful to have both plugin and project specific binary during testing, but if we have a project specific binary, then we want to ship with only that
				if (!bHasProjectBinary || Target.Configuration != UnrealTargetConfiguration.Shipping)
				{
					RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/Win64/" + NGXSnippetDLL, StagedFileType.NonUFS);
				}

				// useful to have debug overlay during testing, but we don't want to ship with that
				if (Target.Configuration != UnrealTargetConfiguration.Shipping)
				{
					RuntimeDependencies.Add("$(PluginDir)/Binaries/ThirdParty/Win64/Development/" + NGXSnippetDLL, StagedFileType.DebugNonUFS);
				}
			}
		}
	}
}

