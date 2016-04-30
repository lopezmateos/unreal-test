// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TextureFormatAndroid : ModuleRules
{
	public TextureFormatAndroid(TargetInfo Target)
	{
		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"TargetPlatform",
				"TextureCompressor",
				"Engine"
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"ImageCore",
				"ImageWrapper"
			}
			);

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			AddThirdPartyPrivateStaticDependencies(Target, "QualcommTextureConverter");
		}
		else
		{
			AddThirdPartyPrivateStaticDependencies(Target, "QualcommTextureConverter");
		}

                // opt-out from precompile for Linux (this module cannot be built for Linux atm)
                if (Target.Platform == UnrealTargetPlatform.Linux)
                {
                    PrecompileForTargets = PrecompileTargetsType.None;
                }
	}
}
